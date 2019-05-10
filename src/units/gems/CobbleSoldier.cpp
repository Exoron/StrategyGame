//
// Created by exoron on 28.03.19.
//

#include <iostream>

#include <gems/gems_units/CobbleSoldier.h>

CobbleSoldier::CobbleSoldier() {
  health = 10;
  damage = 1;
  Say();
}

void CobbleSoldier::Say() const {
  std::cout << "I'm a cobble soldier" << std::endl;
}

void CobbleSoldier::Attack(std::shared_ptr<UnitSet> unit_set) const {
  unit_set->TakeDamage(damage);
}

void CobbleSoldier::TakeDamage(int damage) {
  health -= damage;
}

void CobbleSoldier::Info() const {
  std::cout << "Type : Cobble soldier" << std::endl;
  Unit::Info();
}