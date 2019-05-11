//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <alloys/alloys_units/CrudeWarrior.h>

CrudeWarrior::CrudeWarrior() {
  health = 25;
  damage = 3;
  Say();
}

void CrudeWarrior::Say() const {
  std::cout << "I'm a crude warrior" << std::endl;
}

//TODO modify
void CrudeWarrior::Attack(std::shared_ptr<Player> player, int unit_id) const {
  player->TakeDamage(unit_id, damage);
}

void CrudeWarrior::TakeDamage(int damage) {
  health -= damage;
}

void CrudeWarrior::Info() const {
  std::cout << "Type : Crude warrior" << std::endl;
  Unit::Info();
}