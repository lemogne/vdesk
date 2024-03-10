#!/usr/bin/sh

shopt -s nocasematch

# Check if superuser
if [ "$(id -u)" -ne 0 ]
  then echo "Please run as root/sudo"
  exit
fi

# Check for first argument (Username@Host)
if [ "$1" != "" ]; then
	login=$1
else 
	echo "This is a commandline tool for connecting to a remote desktop."
	read -p "Host: " host
	read -p "Username: " username
	login=$host@$username
fi

# Check for second argument (Desktop Environment)
if [ "$2" != "" ]; then
	de=$2
else 
	# Comment out this line if you want it not to ask and just pick the first available DE
	read -p "Desktop environment: " de
fi

# Find correct command to launch the desired DE (defaults to just running whatever the user input if no match, so be careful!)
# Also, empty string will try all possibilities
case "$de" in
	"xfce")
		de_cmd=startxfce4
	;;
	"lxde")
		de_cmd=lxsession
	;;
	"gnome")
		de_cmd=gnome-session
	;;
	"kde")
		de_cmd=startkde
	;;
	"lxqt")
		de_cmd=startlxqt
	;;
	""|"any"|"-")
		# Change this if you want it to try in a different order
		de_cmd="gnome-session||startkde||startxfce4||lxsession||startlxqt"
	;;
	*)
		de_cmd="$de"
	;;
esac
	

check_pkg () {
	# Check if given package is installed
	if ! which $1 > /dev/null; then
		echo -e "Package '$1' is not installed. Install? (y/n) \c"
		read
		if "$REPLY" = "y"; then
			apt-get install $1
		fi
	fi
}

#check_pkg xdotool
check_pkg xterm
login_config="-fg white -bg black -fa 'Unifont' -fs 12"
xinit $(xwininfo -root|grep '\-geometry') $login_config -e "DISPLAY=:1 ssh -X $login '$de_cmd'" -- :1
echo "Quit out of virtual desktop"

