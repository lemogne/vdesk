# ![](gui/icon.png) VDesk

VDesk is a program which allows the user to get access to a remote desktop over SSH X11 forwarding. 
A bash script is provided for doing this as well as a full-fledged wxWidgets GUI application written in C++. 
A CMake project is provided along with the relevant `cpp` files to allow for direct compilation on the system of your choice.

Features of the GUI application include:
- Custom profiles with username and hostname
- Direct connection to desired host
- Configurable settings
- A configurable list of desktop environments to lauch on the host machine

Expected future features:
- Encryption of the settings files to prevent malicious programs from changing them
- Settings regarding security etc.
- Installation script
- ...
## Download
Either run
```
git clone https://github.com/lemogne/vdesk.git
```
or download a ZIP archive of this repository via the green `Code` button in the top right.

## Installation
Requirements: a suitable C++ compiler, CMake.

To compile, run in the root directory of the repository:
```
cd gui
cmake -DCMAKE_BUILD_TYPE=Release build
cmake --build build
```
which should produce a binary called `vdesk(.exe)` in the `gui/build` subdirectory. 
Place it whereever you wish, though if you want a working installation, do not forget to copy the relevant settings files (`des.tsv`, `profiles.tsv`, `settings.txt`) and `icon.png` with it.
Also, remember that the program needs read and write permissions in the directory you place it, so do not place it in places where you need root permission.
Always run with the containing directory as the working directory.
