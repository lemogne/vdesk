#!/usr/bin/sh

# Build executable if not present
if [ ! -e build/vdesk ]; then
	mkdir -p build
	cmake -DCMAKE_BUILD_TYPE=Release -B build
	cmake --build build
fi

# Create shortcut
homepath=`realpath ~`
printf "[Desktop Entry]\n
Version=1.0\n
Type=Application\n
Name=VDesk\n
Comment=Remote Desktop using SSH X11 forwarding\n
Exec=$homepath/.vdesk/build/vdesk\n
Icon=$homepath/.vdesk/icon.png\n
Path=$homepath/.vdesk\n
Terminal=false\n
StartupNotify=false\n" > ~/Desktop/VDesk.desktop

# Move files to appropriate locations
mkdir -p ~/.vdesk/build
cp -t ~/.vdesk *.tsv settings.txt icon.png ../vdesk.sh ../LICENSE ../README.md
cp build/vdesk ~/.vdesk/build
