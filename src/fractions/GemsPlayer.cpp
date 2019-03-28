//
// Created by exoron on 28.03.19.
//

#include <iostream>

#include <GemsPlayer.h>
#include <gems_factories/CobbleMine.h>

void GemsPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = new CobbleMine();
      return;
    default:

      return;
  }
}