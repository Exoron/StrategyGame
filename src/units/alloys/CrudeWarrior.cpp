//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <Player.h>
#include <alloys/alloys_units/CrudeWarrior.h>

CrudeWarrior::CrudeWarrior(): Unit(3, 2) {
  health = 25;
  damage = 3;
  Say();
}

void CrudeWarrior::Say() const {
  std::cout << "I'm a crude warrior" << std::endl;
}

// TODO modify
void CrudeWarrior::Attack(std::shared_ptr<Player> player, int unit_id) const {
  Unit::Attack(player, unit_id);
}

AttackReport CrudeWarrior::TakeDamage(int damage) {
  return Unit::TakeDamage(damage);
}

void CrudeWarrior::Info() const {
  std::cout << "Type : Crude warrior" << std::endl;
  Unit::Info();
}

void CrudeWarrior::LevelUp() {
  Unit::LevelUp();
}
