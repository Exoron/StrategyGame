//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_COBBLESOLDIER_H
#define STRATEGY_GAME_COBBLESOLDIER_H

#include <Unit.h>

class CobbleSoldier : public Unit {
 public:
  CobbleSoldier();
  ~CobbleSoldier() override = default;
  void Say() const override;
  virtual void Attack(std::shared_ptr<UnitSet> unit_set) const override;
  virtual void TakeDamage(int damage) override;
  virtual void Info() const override;
};

#endif //STRATEGY_GAME_COBBLESOLDIER_H
