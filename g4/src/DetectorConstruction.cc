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


// USER //
#include "DetectorConstruction.hh"

// GEANT4 //
#include "globals.hh"
#include "G4Material.hh"
#include "G4NistManager.hh"

#include "G4UserLimits.hh"

DetectorConstruction::DetectorConstruction()
{
}

DetectorConstruction::~DetectorConstruction()
{
}

G4VPhysicalVolume* DetectorConstruction::Construct()
{
    G4NistManager* nist_manager = G4NistManager::Instance();
    G4Material* air = nist_manager->FindOrBuildMaterial("G4_AIR");

    world_solid = new G4Box("world_solid", 2*m, 2*m, 2*m);
    world_logical = new G4LogicalVolume(world_solid, air, "world_logical", 0, 0, 0);
    world_physical = new G4PVPlacement(0, G4ThreeVector(), world_logical, 
                                       "world_physical", 0, false, 0);
    
    return world_physical;
}

