//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_UNITFACTORY_H
#define STRATEGY_GAME_UNITFACTORY_H

#include <iostream>
#include <memory>

class Unit;

class UnitFactory {
 public:
  UnitFactory() = default;
  virtual ~UnitFactory() = default;

  virtual std::shared_ptr<Unit> CreateUnit() const = 0;
  virtual void Info() const = 0;
};

#endif //STRATEGY_GAME_UNITFACTORY_H
