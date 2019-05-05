//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_OREMINE_H
#define STRATEGY_GAME_OREMINE_H

#include <UnitFactory.h>

class OreMine : public UnitFactory {
 public:
  Unit* CreateUnit() const override;
};

#endif //STRATEGY_GAME_OREMINE_H
