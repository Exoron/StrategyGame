//
// Created by exoron on 29.03.19.
//

#include <gems/gems_factories/GraniteQuerry.h>
#include <gems/gems_units/GraniteWarrior.h>

std::shared_ptr<Unit> GraniteQuerry::CreateUnit() const {
  return std::make_shared<GraniteWarrior>();
}