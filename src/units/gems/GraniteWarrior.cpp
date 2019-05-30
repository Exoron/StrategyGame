//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <Player.h>
#include <gems/gems_units/GraniteWarrior.h>

GraniteWarrior::GraniteWarrior(): Unit(1, 2) {
  health = 35;
  damage = 2;
  Say();
}

void GraniteWarrior::Say() const {
  std::cout << "I'm a granite warrior" << std::endl;
}

// TODO modify
AttackReport GraniteWarrior::Attack(std::shared_ptr<Player> player, int unit_id) const {
  return Unit::Attack(player, unit_id);
}

AttackReport GraniteWarrior::TakeDamage(int damage) {
  return Unit::TakeDamage(damage);
}

void GraniteWarrior::Info() const {
  std::cout << "Type : Granite warrior" << std::endl;
  Unit::Info();
}

void GraniteWarrior::LevelUp() {
  Unit::LevelUp();
}
