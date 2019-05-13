//
// Created by exoron on 13.05.19.
//

#include <Player.h>
#include <Unit.h>

Unit::Unit(int level_up_damage_boost, int experience_for_kill)
    : level_up_damage_boost(level_up_damage_boost),
      experience_for_kill(experience_for_kill) {}

AttackReport Unit::Attack(std::shared_ptr<Player> player, int unit_id) const {
  return player->TakeDamage(unit_id, damage);
}

AttackReport Unit::TakeDamage(int enemy_damage) {
  health -= enemy_damage;
  return health > 0 ? AttackReport{} : AttackReport{true, experience_for_kill};
}

void Unit::Info() const {
  std::cout << "Health : " << health << std::endl;
  std::cout << "Damage : " << damage << std::endl;
}

void Unit::LevelUp() { damage += level_up_damage_boost; }
