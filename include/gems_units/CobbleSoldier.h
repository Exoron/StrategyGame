//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_COBBLESOLDIER_H
#define STRATEGY_GAME_COBBLESOLDIER_H

#include <iostream>

#include <Unit.h>

class CobbleSoldier : public Unit {
 public:
  CobbleSoldier();
  ~CobbleSoldier() override = default;
  void Say() const override;
};

#endif //STRATEGY_GAME_COBBLESOLDIER_H
