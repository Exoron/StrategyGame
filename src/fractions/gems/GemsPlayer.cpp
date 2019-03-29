//
// Created by exoron on 28.03.19.
//

#include <gems/GemsPlayer.h>
#include <gems/gems_factories/CobbleMine.h>
#include <gems/gems_factories/GraniteQuerry.h>

void GemsPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = new CobbleMine();
      return;
    case 1:
      unit_factories_[id] = new GraniteQuerry();
      return;
    default:
      throw std::out_of_range("No matching factory");
  }
}