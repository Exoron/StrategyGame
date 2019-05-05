//
// Created by exoron on 29.03.19.
//

#include <alloys/alloys_factories/OreMine.h>
#include <alloys/alloys_units/OreSoldier.h>

Unit* OreMine::CreateUnit() const {
  return new OreSoldier();
}