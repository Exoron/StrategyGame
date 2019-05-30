//
// Created by exoron on 12.05.19.
//

#include <Army.h>
#include <Format.h>
#include <Squad.h>

Army::Army(const std::vector<std::pair<int, std::shared_ptr<Squad>>>& squads) {
  for (auto& squad : squads) {
    squads_.insert(squad);
  }
}

AttackReport Army::Attack(std::shared_ptr<Player> player, int unit_id) const {
  AttackReport total_report{};
  for (auto& squad : squads_) {
    auto report = squad.second->Attack(player, unit_id);
    total_report.died = (total_report.died || report.died);
    total_report.experience += report.experience;
  }
  return total_report;
}

AttackReport Army::TakeDamage(int damage) {
  auto report = squads_.begin()->second->TakeDamage(damage);
  if (report.died) {
    squads_.erase(squads_.begin());
  }
  return {squads_.empty(), report.experience};
}

void Army::Info() const {
  std::cout << "Type : Army" << std::endl;
  Format::StarLine();
  for (auto& squad : squads_) {
    std::cout << "Id : " << squad.first << std::endl;
    squad.second->Info();
    Format::StarLine();
  }
}

void Army::LevelUp() {
  for(auto& squad: squads_) {
    squad.second->LevelUp();
  }
}
