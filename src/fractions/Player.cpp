//
// Created by exoron on 06.05.19.
//

#include <Player.h>

void Player::CreateUnit(const int id) {
  units_[units_created++] = unit_factories_.at(id)->CreateUnit();
}

void Player::Attack(int unit_id, const std::shared_ptr<Player>& enemy,
                    int enemy_unit_id) const {
  units_.at(unit_id)->Attack(enemy->units_.at(enemy_unit_id));
}

void Player::UnitsInfo() const {
  std::cout << "====================================" << std::endl;
  for (auto& [id, unit] : units_) {
    std::cout << "Id : " << id << std::endl;
    unit->Info();
    std::cout << "====================================" << std::endl;
  }
}

void Player::FactoriesInfo() const {
  std::cout << "====================================" << std::endl;
  for (auto& [index, factory] : unit_factories_) {
    std::cout << "Id : " << index << std::endl;
    factory->Info();
    std::cout << "====================================" << std::endl;
  }
}

void Player::Info() const {
  std::cout << "------------------------------------" << std::endl;
  std::cout << "Factories : " << std::endl;
  FactoriesInfo();
  std::cout << "------------------------------------" << std::endl;
  std::cout << "Units : " << std::endl;
  UnitsInfo();
  std::cout << "------------------------------------" << std::endl;
}

void Player::TakeDamage(int unit_id, int damage) {
  units_.at(unit_id)->TakeDamage(damage);
}