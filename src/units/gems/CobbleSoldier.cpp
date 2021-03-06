//
// Created by exoron on 28.03.19.
//

#include <iostream>

#include <Player.h>
#include <gems/gems_units/CobbleSoldier.h>

CobbleSoldier::CobbleSoldier(): Unit(1, 1) {
  health = 10;
  damage = 1;
  Say();
}

void CobbleSoldier::Say() const {
  std::cout << "I'm a cobble soldier" << std::endl;
}

AttackReport CobbleSoldier::Attack(std::shared_ptr<Player> player, int unit_id) const {
  return Unit::Attack(player, unit_id);
}

AttackReport CobbleSoldier::TakeDamage(int damage) {
  return Unit::TakeDamage(damage);
}

void CobbleSoldier::Info() const {
  std::cout << "Type : Cobble soldier" << std::endl;
  Unit::Info();
}

void CobbleSoldier::LevelUp() {
  Unit::LevelUp();
}
