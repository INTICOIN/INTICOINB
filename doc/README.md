INTICOIN Core 4.3.0
=====================

Setup
---------------------
[INTICOIN Core](http://INTICOIN.org/en/download) is the original INTICOIN client and it builds the backbone of the network. However, it downloads and stores the entire history of INTICOIN transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

Running
---------------------
The following are some helpful notes on how to run INTICOIN on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/INTICOIN-qt` (GUI) or
- `bin/INTICOINd` (headless)

### Windows

Unpack the files into a directory, and then run INTICOIN-qt.exe.

### OS X

Drag INTICOIN-Core to your applications folder, and then run INTICOIN-Core.

### Need Help?

* See the documentation at the [INTICOIN Wiki](https://en.INTICOIN.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#INTICOIN](http://webchat.freenode.net?channels=INTICOIN) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=INTICOIN).
* Ask for help on the [INTICOINTalk](https://INTICOINtalk.org/) forums, in the [Technical Support board](https://INTICOINtalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build INTICOIN on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The INTICOIN repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/INTICOIN/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [INTICOINTalk](https://INTICOINtalk.org/) forums, in the [Development & Technical Discussion board](https://INTICOINtalk.org/index.php?board=6.0).
* Discuss project-specific development on #INTICOIN-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=INTICOIN-core-dev).
* Discuss general INTICOIN development on #INTICOIN-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=INTICOIN-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
