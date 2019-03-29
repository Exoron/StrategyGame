//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_GRANITEWARRIOR_H
#define STRATEGY_GAME_GRANITEWARRIOR_H

#include <Unit.h>

class GraniteWarrior : public Unit {
 public:
  CobbleSoldier();
  ~CobbleSoldier() override = default;
  void Say() const override;
};

#endif //STRATEGY_GAME_GRANITEWARRIOR_H
