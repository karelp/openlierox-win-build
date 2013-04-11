openlierox-win-build
====================

Build system for OpenLieroX on Windows.

This repository contains everything which is needed to build OpenLieroX under Windows operating systems.
Building should be as easy, as cloning the repository and hitting Compile.

All dependencies are bundled as source folders in the deps/ folder and used during the compilation.
This means you do not need to download anything else than this repository.

Prerequisities
--------------
1) Visual Studio 2010 or newer
These are the only currently supported compilers under Windows. Please make sure you install all service packs
and updates before you proceed. The free Express versions are fine and should compile everything without any problems.

2) DirectX SDK from June 2010
This is required for building the SDL library. Because of licensing issues, this could not be bundled in this repository.
After installation, remember to add include and lib/x86 directories to your Visual C++ paths (View -> Property Manager ->
<any project> -> Debug -> Microsoft.Cpp.Win32.user ->  Visual C++ Directories  -> Include/Library Directories).
The usual paths are:
c:\Program Files (x86)\Microsoft DirectX SDK (June 2010)\Lib\x86 for libraries
c:\Program Files (x86)\Microsoft DirectX SDK (June 2010)\Include for includes

Building
--------
1) Open vsproj/OpenLieroX.sln, perform any upgrades if necessary
2) Hit F5
3) Take a cup of coffee. The build takes some time, up to an hour if you have a slower computer.

OpenLieroX should execute after the build completes. By default, everything is compiled in Debug mode which
can slow things down. Switching some projects or whole solution to Release will speed things up but you will
lose some debugging capabilities. For development, it's usually wise to keep everything except SDL on Debug.

The projects are synchronized with the latest development (beta) version, make sure you have it.

If the build fails even when you followed all the instructions here, please report a bug with the compile log attached.
