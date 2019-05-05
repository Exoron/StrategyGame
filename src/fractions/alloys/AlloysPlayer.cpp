//
// Created by exoron on 29.03.19.
//

#include <alloys/AlloysPlayer.h>
#include <alloys/alloys_factories/OreMine.h>
#include <alloys/alloys_factories/SteelPlant.h>

void AlloysPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = std::make_shared<OreMine>();
      return;
    case 1:
      unit_factories_[id] = std::make_shared<SteelPlant>();
      return;
    default:
      throw std::out_of_range("No matching factory");
  }
}