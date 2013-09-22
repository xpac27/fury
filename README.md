# FURY

This guide is designed for Mac OS X users. However it should help anyone on any plateform.

## Requirements

### C++ compiler

You need a c++ compiler such as gcc or g++.

On a mac you have ()at least) one of these two options:

- installing XCode from the Mac App Store
- installing the Command Line Tools from the [Developer Center](http://developer.apple.com/downloads/index.action) (you'll need to login but the download is free) grabbing the one adapted to your OS X version.

### OpenGL library

You need the OpenGL c++ library headers.

On a mac it's chipped with XCode or the Command Line Tools, so the solutions above provide you with OpenGL headers as well.

### SFML 2.1

You need to install SMFL 2.1. Hopefully there are great tutorials on how to install it on the [official website](http://www.sfml-dev.org/tutorials/2.1/).

On Mac OS X 10.5+ follow those steps:

```
curl http://www.sfml-dev.org/download/sfml/2.1/SFML-2.1-osx-gcc-universal.tar.gz -o sfml.tar.gz
mkdir -p sfml && tar xzf sfml.tar.gz -C sfml && cd sfml
sudo cp Frameworks/* /Library/Frameworks 
sudo cp extlibs/* /Library/Frameworks
```

On Mac OS X 10.8+ follow those steps:

```
curl http://www.sfml-dev.org/download/sfml/2.1/SFML-2.1-osx-clang-universal.tar.gz -o sfml.tar.gz
mkdir -p sfml && tar xzf sfml.tar.gz -C sfml && cd sfml
sudo cp Frameworks/* /Library/Frameworks 
sudo cp extlibs/* /Library/Frameworks
```

### CMake

You can find information on how to get CMake on the [official website](http://www.cmake.org/).

On a mac, if you don't have it already installed, we recommand you to install [homebrew](http://mxcl.github.io/homebrew/) so you can install CMake by simply typing :

```
brew install cmake
```

## Running the game

### Install

Clone the repository then generate the Makefile with CMake.

```
git clone git@github.com:xpac27/fury.git && cd fury
cd build && cmake . && cd .. 
```

### Compile

From within the repository, type `make -C build`.

### Run

From within the repository, type `./build/fury`.