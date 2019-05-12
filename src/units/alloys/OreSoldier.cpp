//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <Player.h>
#include <alloys/alloys_units/OreSoldier.h>

OreSoldier::OreSoldier() {
  health = 10;
  damage = 1;
  Say();
}

void OreSoldier::Say() const { std::cout << "I'm an ore soldier" << std::endl; }

void OreSoldier::Attack(std::shared_ptr<Player> player, int unit_id) const {
  Unit::Attack(player, unit_id);
}

AttackReport OreSoldier::TakeDamage(int damage) {
  return Unit::TakeDamage(damage);
}

void OreSoldier::Info() const {
  std::cout << "Type : Ore soldier" << std::endl;
  Unit::Info();
}

void OreSoldier::LevelUp() {
  Unit::LevelUp();
}
