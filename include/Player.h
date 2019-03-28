//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_PLAYER_H
#define STRATEGY_GAME_PLAYER_H

#include <map>
#include <vector>

#include <Unit.h>
#include <UnitFactory.h>

class Player {
 public:
  Player() : units_(0) {}

  Player(const Player&) = delete;
  Player& operator=(const Player&) = delete;
  virtual ~Player() {
    for(auto*& unit : units_) {
      delete unit;
      unit = nullptr;
    }
    for(auto& factory : unit_factories_) {
      delete factory.second;
    }
  }

  virtual void BuildFactory(const int id) = 0;
  virtual void CreateUnit(const int id) {
    units_.push_back(unit_factories_[id]->create_unit());
  }
  void SayAll() const {
    for(const auto unit : units_) {
      unit->Say();
    }
  }

 protected:
  std::map<int, UnitFactory*> unit_factories_;
  std::vector<Unit*> units_;
};

#endif //STRATEGY_GAME_PLAYER_H
