//////////////////////////////////////////////////////////////////////////
// License & Copyright
// ===================
// 
// Copyright 2012 Christopher M Poole <mail@christopherpoole.net>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////////


#include "DetectorConstruction.hh"
#include "PhysicsList.hh"
#include "SteppingAction.hh"
#include "EventAction.hh"
#include "PrimaryGeneratorAction.hh"

// GEANT4 //
#include "G4LogicalVolume.hh"

// BOOST/PYTHON //
#include "boost/python.hpp"
//#include "pyublas/numpy.hpp"


using namespace boost::python;

BOOST_PYTHON_MODULE(libg4) {

    class_<DetectorConstruction, DetectorConstruction*,
        bases<G4VUserDetectorConstruction> >
        ("DetectorConstruction", "detector")
        ;   // End DetectorConstruction

    class_<PhysicsList, PhysicsList*,
        bases<G4VUserPhysicsList> >
        ("PhysicsList", "physics list")
        ;   // End PhysicsList

    class_<SteppingAction, SteppingAction*,
        bases<G4UserSteppingAction>, boost::noncopyable>
        ("SteppingAction", "SteppingAction")
        ;   // End SteppingAction

    class_<EventAction, EventAction*,
        bases<G4UserEventAction> >
        ("EventAction", "EventAction")
        ;   // End EventAction

    class_<PrimaryGeneratorAction, PrimaryGeneratorAction*,
        bases<G4VUserPrimaryGeneratorAction>, boost::noncopyable>
        ("PrimaryGeneratorAction", "PrimaryGeneratorAction")
        ;   // End PrimaryGeneratorAction
}

