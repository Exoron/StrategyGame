//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <alloys/alloys_units/OreSoldier.h>

OreSoldier::OreSoldier() {
  health = 10;
  damage = 1;
  Say();
}

void OreSoldier::Say() const {
  std::cout << "I'm an ore soldier" << std::endl;
}

void OreSoldier::Attack(std::shared_ptr<Player> player, int unit_id) const {
  player->TakeDamage(unit_id, damage);
}

AttackReport OreSoldier::TakeDamage(int damage) {
  health -= damage;
  return {health <= 0};
}

void OreSoldier::Info() const {
  std::cout << "Type : Ore soldier" << std::endl;
  Unit::Info();
}