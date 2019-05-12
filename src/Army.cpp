//
// Created by exoron on 12.05.19.
//

#include <Army.h>
#include <Squad.h>
#include <Format.h>

Army::Army(const std::vector<std::pair<int, std::shared_ptr<Squad>>>& squads) {
  for(auto& squad : squads) {
    squads_.insert(squad);
  }
}

void Army::Attack(std::shared_ptr<Player> player, int unit_id) const {
  for(auto& squad : squads_) {
    squad.second->Attack(player, unit_id);
  }
}

AttackReport Army::TakeDamage(int damage) {
  auto report = squads_.begin()->second->TakeDamage(damage);
  if(report.died) {
    squads_.erase(squads_.begin());
  }
  return {squads_.empty()};
}

void Army::Info() const {
  std::cout << "Type : Army" << std::endl;
  Format::StarLine();
  for(auto& squad : squads_) {
    std::cout << "Id : " << squad.first << std::endl;
    squad.second->Info();
    Format::StarLine();
  }
}
