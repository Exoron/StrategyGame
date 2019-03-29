//
// Created by exoron on 28.03.19.
//

#include <Unit.h>
#include <gems/gems_factories/CobbleMine.h>
#include <gems/gems_units/CobbleSoldier.h>

Unit* CobbleMine::create_unit() const {
  return new CobbleSoldier();
}