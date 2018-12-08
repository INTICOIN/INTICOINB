
Debian
====================
This directory contains files used to package INTICOINd/INTICOIN-qt
for Debian-based Linux systems. If you compile INTICOINd/INTICOIN-qt yourself, there are some useful files here.

## INTICOIN: URI support ##


INTICOIN-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install INTICOIN-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your INTICOIN-qt binary to `/usr/bin`
and the `../../share/pixmaps/INTICOIN128.png` to `/usr/share/pixmaps`

INTICOIN-qt.protocol (KDE)

