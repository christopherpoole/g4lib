# GEANT4 + Python boilerplate

This project is a simple default setup for building a GEANT4 simulation as Python library.

## Compilation

The GEANT4 simulation requires compilation as a Python library.
To do this perform the following:

* cd ./g4lib/g4
* mkdir build
* cd build
* cmake ..
* make

## Usage

Edit `g4/src` and `g4/include` so as to describe your desired simulation.

    python main.py macros/vis.mac

## GEANT4 Python bindings

Have a look [here](http://christopherpoole.github.io/compiling-and-installing-the-geant4-python-bindings/) for instructions on getting going with the GEANT4 Python bindings.
