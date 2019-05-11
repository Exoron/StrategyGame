//
// Created by exoron on 06.05.19.
//

#include <Player.h>
#include <UnitFactory.h>
#include <Unit.h>
#include <Squad.h>
#include <Format.h>
#include <vector>

void Player::CreateUnit(const int id) {
  unit_sets_[unit_sets_created++] =
      std::static_pointer_cast<UnitSet>(unit_factories_.at(id)->CreateUnit());
}

void Player::Attack(int unit_id, std::shared_ptr<Player> enemy,
                    int enemy_unit_id) const {
  unit_sets_.at(unit_id)->Attack(enemy, enemy_unit_id);
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
  std::cout << "Factories : " << std::endl;
  FactoriesInfo();
  Format::Line();
  std::cout << "Unit sets : " << std::endl;
  UnitSetsInfo();
  Format::Line();
}

void Player::TakeDamage(int unit_id, int damage) {
  AttackReport report = unit_sets_.at(unit_id)->TakeDamage(damage);
  if (report.died) {
    unit_sets_.erase(unit_id);
  }
}

void Player::MakeSquad(const std::vector<int>& units) {
  std::vector<std::pair<int, std::shared_ptr<Unit>>> squad;
  for(auto index: units) {
    std::shared_ptr<Unit> casted;

    try {
      casted = std::dynamic_pointer_cast<Unit>(unit_sets_[index]);
    } catch(std::bad_cast& exc) {
      std::cout << "Number " << index << " is not a Unit" << std::endl;
      continue;
    }

    squad.emplace_back(index, casted);
    unit_sets_.erase(index);
  }
  if(squad.empty()) {
    return;
  }
  unit_sets_[unit_sets_created++] = std::make_shared<Squad>(squad);
}
