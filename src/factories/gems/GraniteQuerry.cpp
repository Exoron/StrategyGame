//
// Created by exoron on 29.03.19.
//

#include <gems/gems_factories/GraniteQuerry.h>
#include <gems/gems_units/GraniteWarrior.h>

Unit* GraniteQuerry::CreateUnit() const {
  return new GraniteWarrior();
}