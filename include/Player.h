//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_PLAYER_H
#define STRATEGY_GAME_PLAYER_H

#include <unordered_map>
#include <vector>

#include <Unit.h>
#include <UnitFactory.h>

class Player {
 public:
  Player() : units_(0) {}

  Player(const Player&) = delete;
  Player& operator=(const Player&) = delete;
  virtual ~Player() = default;

  virtual void BuildFactory(int id) = 0;
  virtual void CreateUnit(const int id) {
    units_.push_back(unit_factories_.at(id)->CreateUnit());
  }

 protected:
  std::unordered_map<int, std::shared_ptr<UnitFactory>> unit_factories_;
  std::vector<std::shared_ptr<Unit>> units_;
};

#endif //STRATEGY_GAME_PLAYER_H
