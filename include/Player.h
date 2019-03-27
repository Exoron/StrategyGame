//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_PLAYER_H
#define STRATEGY_GAME_PLAYER_H

#include <vector>

#include <Unit.h>
#include <UnitFactory.h>

class Player {
 public:
  Player() = default;
  ~Player() = default;

  virtual void build_factory(const int id) = 0;

 private:
  std::vector<UnitFactory> unit_factories_;
  std::vector<Unit> units_;
};

#endif //STRATEGY_GAME_PLAYER_H
