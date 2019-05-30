//
// Created by exoron on 06.05.19.
//

#include <Army.h>
#include <Format.h>
#include <Player.h>
#include <Squad.h>
#include <Unit.h>
#include <UnitFactory.h>
#include <vector>

void Player::CreateUnit(const int id) {
  unit_sets_[unit_sets_created++] =
      std::static_pointer_cast<UnitSet>(unit_factories_.at(id)->CreateUnit());
}

void Player::Attack(int unit_id, std::shared_ptr<Player> enemy,
                    int enemy_unit_id) {
  AttackReport report{};
  try {
    report = unit_sets_.at(unit_id)->Attack(enemy, enemy_unit_id);
  } catch (std::out_of_range& exc) {
    std::cout << "No matching unit set" << std::endl;
  }
  GetExperience(report.experience);
}

void Player::UnitSetsInfo() const {
  Format::DoubleLine();
  for (auto& [id, unit] : unit_sets_) {
    std::cout << "Id : " << id << std::endl;
    unit->Info();
    Format::DoubleLine();
  }
}

void Player::FactoriesInfo() const {
  Format::DoubleLine();
  for (auto& [index, factory] : unit_factories_) {
    std::cout << "Id : " << index << std::endl;
    factory->Info();
    Format::DoubleLine();
  }
}

void Player::Info() const {
  Format::Line();
  std::cout << "Level : " << level << std::endl;
  std::cout << "Experience : " << experience << " / " << exp_to_level_up
            << std::endl;
  Format::Line();
  std::cout << "Factories : " << std::endl;
  FactoriesInfo();
  Format::Line();
  std::cout << "Unit sets : " << std::endl;
  UnitSetsInfo();
  Format::Line();
}

AttackReport Player::TakeDamage(int unit_id, int damage) {
  AttackReport report{};
  try {
    report = unit_sets_.at(unit_id)->TakeDamage(damage);
  } catch(std::out_of_range& exc) {
    std::cout << "No matching unit set" << std::endl;
  }
  if (report.died) {
    unit_sets_.erase(unit_id);
  }
  return report;
}

void Player::MakeSquad(const std::vector<int>& units) {
  std::vector<std::pair<int, std::shared_ptr<Unit>>> squad;
  for (auto index : units) {
    std::shared_ptr<Unit> casted;

    try {
      casted = std::dynamic_pointer_cast<Unit>(unit_sets_.at(index));
    } catch(std::out_of_range& exc) {
      std::cout << "No matching unit for number " << index << std::endl;
      return;
    }
    if (!casted) {
      std::cout << "Number " << index << " is not a Unit" << std::endl;
      continue;
    }

    squad.emplace_back(index, casted);
    unit_sets_.erase(index);
  }
  if (squad.empty()) {
    return;
  }
  unit_sets_[unit_sets_created++] = std::make_shared<Squad>(squad);
}

void Player::MakeArmy(const std::vector<int>& squads) {
  std::vector<std::pair<int, std::shared_ptr<Squad>>> army;
  for (auto index : squads) {
    std::shared_ptr<Squad> casted;

    try {
      casted = std::dynamic_pointer_cast<Squad>(unit_sets_.at(index));
    } catch(std::out_of_range& exc) {
      std::cout << "No matching squad for number " << index << std::endl;
    }
    if (!casted) {
      std::cout << "Number " << index << " is not a Squad" << std::endl;
      continue;
    }

    army.emplace_back(index, casted);
    unit_sets_.erase(index);
  }
  if (army.empty()) {
    return;
  }
  unit_sets_[unit_sets_created++] = std::make_shared<Army>(army);
}

void Player::LevelUp() {
  experience -= exp_to_level_up;
  ++level;
  for (auto& unit_set : unit_sets_) {
    unit_set.second->LevelUp();
  }
}

void Player::GetExperience(int experience) {
  this->experience += experience;
  while (this->experience >= exp_to_level_up) {
    LevelUp();
  }
}
