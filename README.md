# Cinnabar Engine Module Template
Build enviroment for creating modules for Cinnabar Engine.

## Prerequisites

Use the build tool [CMake](https://cmake.org/install/) to build cinnabar.

### Windows
[Visual Studio](https://visualstudio.microsoft.com/)
[VSCode](https://code.visualstudio.com/docs/cpp/config-msvc)
### Debian
```bash
sudo apt install build-essential cmake
```
### Arch
```bash
sudo pacman -S base-devel cmake 
```
### Redhat/Fedora
```bash
sudo dnf install kernel-devel cmake
```
## Build Instructions
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Exporting
/build/lib/MODULE.so

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
