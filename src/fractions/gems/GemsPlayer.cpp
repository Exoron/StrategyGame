//
// Created by exoron on 28.03.19.
//

#include <gems/GemsPlayer.h>
#include <gems/gems_factories/CobbleMine.h>
#include <gems/gems_factories/GraniteQuarry.h>

void GemsPlayer::BuildFactory(const int id) {
  switch(id) {
    case 0:
      unit_factories_[id] = std::make_shared<CobbleMine>();
      return;
    case 1:
      unit_factories_[id] = std::make_shared<GraniteQuarry>();
      return;
    default:
      throw std::out_of_range("No matching factory");
  }
}

void GemsPlayer::Info() const {
  std::cout << std::endl;
  std::cout << "------------------------------------" << std::endl;
  std::cout << "Fraction : Gems" << std::endl;
  Player::Info();
  std::cout << std::endl;
}