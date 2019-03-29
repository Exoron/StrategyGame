//
// Created by exoron on 29.03.19.
//

#include <alloys/alloys_factories/SteelPlant.h>
#include <alloys/alloys_units/CrudeWarrior.h>

Unit* SteelPlant::CreateUnit() const {
  return new CrudeWarrior();
}