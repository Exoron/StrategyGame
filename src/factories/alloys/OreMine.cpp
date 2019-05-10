//
// Created by exoron on 29.03.19.
//

#include <alloys/alloys_factories/OreMine.h>
#include <alloys/alloys_units/OreSoldier.h>

std::shared_ptr<Unit> OreMine::CreateUnit() const {
  return std::make_shared<OreSoldier>();
}

void OreMine::Info() const {
  std::cout << "Type : Ore mine" << std::endl;
}