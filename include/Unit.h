//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_UNIT_H
#define STRATEGY_GAME_UNIT_H

class Unit {
 public:
  Unit() = default;
  virtual ~Unit() = default;

  virtual void Say() const {};
};

#endif //STRATEGY_GAME_UNIT_H
