//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_COBBLEMINE_H
#define STRATEGY_GAME_COBBLEMINE_H

#include <UnitFactory.h>

class CobbleMine : public UnitFactory {
 public:
  Unit* create_unit() const override;
};

#endif //STRATEGY_GAME_COBBLEMINE_H
