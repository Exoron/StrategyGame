//
// Created by exoron on 29.03.19.
//

#include <alloys/alloys_factories/SteelPlant.h>
#include <alloys/alloys_units/CrudeWarrior.h>

std::shared_ptr<Unit> SteelPlant::CreateUnit() const {
  return std::make_shared<CrudeWarrior>();
}

void SteelPlant::Info() const {
  std::cout << "Type : Steel plant" << std::endl;
}