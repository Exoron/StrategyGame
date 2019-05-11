//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <gems/gems_units/GraniteWarrior.h>

GraniteWarrior::GraniteWarrior() {
  health = 35;
  damage = 2;
  Say();
}

void GraniteWarrior::Say() const {
  std::cout << "I'm a granite warrior" << std::endl;
}

// TODO modify
void GraniteWarrior::Attack(std::shared_ptr<Player> player, int unit_id) const {
  player->TakeDamage(unit_id, damage);
}

void GraniteWarrior::TakeDamage(int damage) { health -= damage; }

void GraniteWarrior::Info() const {
  std::cout << "Type : Granite warrior" << std::endl;
  Unit::Info();
}