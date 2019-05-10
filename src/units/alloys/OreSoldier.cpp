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

void OreSoldier::Attack(std::shared_ptr<UnitSet> unit_set) const {
  unit_set->TakeDamage(damage);
}

void OreSoldier::TakeDamage(int damage) {
  health -= damage;
}

void OreSoldier::Info() const {
  std::cout << "Type : Ore soldier" << std::endl;
  Unit::Info();
}