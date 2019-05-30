//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_ALLOYSPLAYER_H
#define STRATEGY_GAME_ALLOYSPLAYER_H

#include <Player.h>

class AlloysPlayer : public Player {
 public:
  enum AlloyFactory {
    ore_mine = 0,
    steel_plant = 1
  };

  ~AlloysPlayer() override = default;
  void BuildFactory(int id) override;
  void Info() const override;
};

#endif  // STRATEGY_GAME_ALLOYSPLAYER_H
