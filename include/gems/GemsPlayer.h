//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_GEMSPLAYER_H
#define STRATEGY_GAME_GEMSPLAYER_H

#include <Player.h>

class GemsPlayer : public Player {
 public:
  enum GemsFactory{
    cobble_mine = 0,
    granite_quarry = 1
  };

  ~GemsPlayer() override = default;
  void BuildFactory(int id) override;
  void Info() const override;
};

#endif //STRATEGY_GAME_GEMSPLAYER_H
