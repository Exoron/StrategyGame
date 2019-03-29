//
// Created by exoron on 29.03.19.
//

#include <alloys/AlloysPlayer.h>
#include <alloys/alloys_factories/OreMine.h>

void AlloysPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = new OreMine();
      return;
    default:

      return;
  }
}