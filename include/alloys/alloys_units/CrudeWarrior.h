//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_CRUDEWARRIOR_H
#define STRATEGY_GAME_CRUDEWARRIOR_H

#include <Unit.h>

class CrudeWarrior : public Unit {
 public:
  CrudeWarrior();
  ~CrudeWarrior() override = default;
  void Say() const override;
  virtual void Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual AttackReport TakeDamage(int damage) override;
  virtual void Info() const override;
};

#endif  // STRATEGY_GAME_CRUDEWARRIOR_H
