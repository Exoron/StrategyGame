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
  virtual void Attack(std::shared_ptr<UnitSet> unit_set) const override;
  virtual void TakeDamage(int damage) override;
  virtual void Info() const override;
};

#endif //STRATEGY_GAME_GRANITEWARRIOR_H
