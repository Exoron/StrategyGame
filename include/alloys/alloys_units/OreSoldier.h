//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_ORESOLDIER_H
#define STRATEGY_GAME_ORESOLDIER_H

#include <Unit.h>

class OreSoldier : public Unit {
 public:
  OreSoldier();
  ~OreSoldier() override = default;
  void Say() const override;
};

#endif //STRATEGY_GAME_ORESOLDIER_H
