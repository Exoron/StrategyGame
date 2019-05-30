//
// Created by exoron on 29.03.19.
//

#include <Format.h>
#include <alloys/AlloysPlayer.h>
#include <alloys/alloys_factories/OreMine.h>
#include <alloys/alloys_factories/SteelPlant.h>

void AlloysPlayer::BuildFactory(const int id) {
  switch (id) {
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

void AlloysPlayer::Info() const {
  std::cout << std::endl;
  Format::Line();
  std::cout << "Fraction : Alloys" << std::endl;
  Player::Info();
  std::cout << std::endl;
}