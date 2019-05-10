//
// Created by exoron on 06.05.19.
//

#ifndef STRATEGY_GAME_UNITSET_H
#define STRATEGY_GAME_UNITSET_H

#include <memory>

class UnitSet {
 public:
  virtual void Attack(std::shared_ptr<UnitSet> unit_set) const = 0;
  virtual void TakeDamage(int damage) = 0;
  virtual void Info() const = 0;
};

#endif //STRATEGY_GAME_UNITSET_H
