//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_UNITFACTORY_H
#define STRATEGY_GAME_UNITFACTORY_H

#include <Unit.h>

class UnitFactory {
 public:
  UnitFactory() = default;
  virtual ~UnitFactory() = default;

  virtual Unit* CreateUnit() const = 0;
};

#endif //STRATEGY_GAME_UNITFACTORY_H