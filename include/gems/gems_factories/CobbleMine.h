//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_COBBLEMINE_H
#define STRATEGY_GAME_COBBLEMINE_H

#include <UnitFactory.h>

class CobbleMine : public UnitFactory {
 public:
  std::shared_ptr<Unit> CreateUnit() const override;
};

#endif //STRATEGY_GAME_COBBLEMINE_H
