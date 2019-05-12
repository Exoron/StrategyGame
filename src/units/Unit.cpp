//
// Created by exoron on 13.05.19.
//

#include <Unit.h>
#include <Player.h>

void Unit::Attack(std::shared_ptr<Player> player, int unit_id) const {
  player->TakeDamage(unit_id, damage);
}

AttackReport Unit::TakeDamage(int enemy_damage) {
  health -= enemy_damage;
  return {health <= 0};
}

void Unit::Info() const {
  std::cout << "Health : " << health << std::endl;
  std::cout << "Damage : " << damage << std::endl;
}

void Unit::LevelUp() {
  damage += level_up_damage_boost;
}
