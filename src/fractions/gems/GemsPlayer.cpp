//
// Created by exoron on 28.03.19.
//

#include <gems/GemsPlayer.h>
#include <gems/gems_factories/CobbleMine.h>

void GemsPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = new CobbleMine();
      return;
    default:

      return;
  }
}