//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_GRANITEWARRIOR_H
#define STRATEGY_GAME_GRANITEWARRIOR_H

#include <Unit.h>

class GraniteWarrior : public Unit {
 public:
  GraniteWarrior();
  ~GraniteWarrior() override = default;
  void Say() const override;
  virtual AttackReport Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual AttackReport TakeDamage(int damage) override;
  virtual void Info() const override;

  virtual void LevelUp() override;
};

#endif  // STRATEGY_GAME_GRANITEWARRIOR_H
