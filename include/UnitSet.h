//
// Created by exoron on 06.05.19.
//

#ifndef STRATEGY_GAME_UNITSET_H
#define STRATEGY_GAME_UNITSET_H

#include <memory>

#include <Player.h>
#include <AttackReport.h>

class Player;

class UnitSet {
 public:
  virtual void Attack(std::shared_ptr<Player> player, int unit_id) const = 0;
  virtual AttackReport TakeDamage(int damage) = 0;
  virtual void Info() const = 0;
};

#endif //STRATEGY_GAME_UNITSET_H
