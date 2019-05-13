//
// Created by exoron on 11.05.19.
//

#include <Format.h>
#include <Squad.h>
#include <Unit.h>

Squad::Squad(const std::vector<std::pair<int, std::shared_ptr<Unit>>>& units) {
  for (auto& unit : units) {
    units_.insert(unit);
  }
}

AttackReport Squad::Attack(std::shared_ptr<Player> player, int unit_id) const {
  AttackReport total_report{};
  for (auto& unit : units_) {
    auto report = unit.second->Attack(player, unit_id);
    total_report.died = (total_report.died || report.died);
    total_report.experience += report.experience;
  }
  return total_report;
}

AttackReport Squad::TakeDamage(int damage) {
  auto report = units_.begin()->second->TakeDamage(damage);
  if (report.died) {
    units_.erase(units_.begin());
  }
  return {units_.empty(), report.experience};
}

void Squad::Info() const {
  std::cout << "Type : Squad" << std::endl;
  Format::TildaLine();
  for (auto& unit : units_) {
    std::cout << "Id : " << unit.first << std::endl;
    unit.second->Info();
    Format::TildaLine();
  }
}
void Squad::LevelUp() {
  for(auto& unit : units_) {
    unit.second->LevelUp();
  }
}
