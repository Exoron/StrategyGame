//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_UNIT_H
#define STRATEGY_GAME_UNIT_H

#include <iostream>

#include <UnitSet.h>

class Unit : public UnitSet {
 public:
  Unit() = default;
  virtual ~Unit() = default;

  virtual void Say() const = 0;

  virtual void Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual AttackReport TakeDamage(int damage) override;

  virtual void Info() const override;

  virtual void LevelUp() override;

 protected:
  int health = 0;
  int damage = 0;

  const int level_up_damage_boost = 0;
};

#endif  // STRATEGY_GAME_UNIT_H
