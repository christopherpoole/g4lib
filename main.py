# License & Copyright
# ===================
#
# Copyright 2012 Christopher M Poole <mail@christopherpoole.net>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import sys

import Geant4
import g4 


if __name__ == "__main__":
    detector_construction = g4.DetectorConstruction()
    Geant4.gRunManager.SetUserInitialization(detector_construction)

    physics_list = g4.PhysicsList()
    Geant4.gRunManager.SetUserInitialization(physics_list)

    primary_generator = g4.PrimaryGeneratorAction()
    Geant4.gRunManager.SetUserAction(primary_generator)

    stepping_action = g4.SteppingAction()
    Geant4.gRunManager.SetUserAction(stepping_action)

    Geant4.gRunManager.Initialize()
    Geant4.gVisManager.Initialize()
    Geant4.gApplyUICommand("/control/execute %s" % sys.argv[1])
    Geant4.StartUISession()

    #Geant4.gRunManager.BeamOn(1000)
    
