//
// Created by exoron on 29.03.19.
//

#include <alloys/AlloysPlayer.h>
#include <alloys/alloys_factories/OreMine.h>
#include <alloys/alloys_factories/SteelPlant.h>

void AlloysPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = new OreMine();
    case 1:
      unit_factories_[id] = new SteelPlant();
      return;
    default:

      return;
  }
}