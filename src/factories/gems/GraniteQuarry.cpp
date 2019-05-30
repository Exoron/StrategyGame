//
// Created by exoron on 29.03.19.
//

#include <gems/gems_factories/GraniteQuarry.h>
#include <gems/gems_units/GraniteWarrior.h>

std::shared_ptr<Unit> GraniteQuarry::CreateUnit() const {
  return std::make_shared<GraniteWarrior>();
}

void GraniteQuarry::Info() const {
  std::cout << "Type : Granite quarry" << std::endl;
}