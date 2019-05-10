//
// Created by exoron on 28.03.19.
//

#include <Unit.h>
#include <gems/gems_factories/CobbleMine.h>
#include <gems/gems_units/CobbleSoldier.h>

std::shared_ptr<Unit> CobbleMine::CreateUnit() const {
  return std::make_shared<CobbleSoldier>();
}

void CobbleMine::Info() const {
  std::cout << "Type : Cobble mine" << std::endl;
}