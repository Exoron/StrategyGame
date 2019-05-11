//
// Created by exoron on 11.05.19.
//

#include <Format.h>
#include <Squad.h>
#include <Unit.h>

Squad::Squad(const std::vector<std::pair<int, std::shared_ptr<Unit>>>& units) {
  for(auto& unit : units) {
    units_.insert(unit);
  }
}

void Squad::Attack(std::shared_ptr<Player> player, int unit_id) const {
  for(auto& unit : units_) {
    unit.second->Attack(player, unit_id);
  }
}

AttackReport Squad::TakeDamage(int damage) {
  auto report = units_.begin()->second->TakeDamage(damage);
  if(report.died) {
    units_.erase(units_.begin());
  }
  return {units_.empty()};
}

void Squad::Info() const {
  std::cout << "Type : Squad" << std::endl;
  Format::TildaLine();
  Format::TildaLine();
  for(auto& unit : units_) {
    std::cout << "Id : " << unit.first << std::endl;
    unit.second->Info();
    Format::TildaLine();
  }
  Format::TildaLine();
}
