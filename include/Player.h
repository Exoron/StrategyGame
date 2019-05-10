//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_PLAYER_H
#define STRATEGY_GAME_PLAYER_H

#include <map>

#include <Unit.h>
#include <UnitFactory.h>

class Player {
 public:
  Player() = default;

  Player(const Player&) = delete;
  Player& operator=(const Player&) = delete;
  virtual ~Player() = default;

  virtual void BuildFactory(int id) = 0;
  virtual void CreateUnit(int id);
  virtual void Attack(int unit_id, const std::shared_ptr<Player>& enemy,
                      int enemy_unit_id) const;
  virtual void TakeDamage(int unit_id, int damage);
  void UnitsInfo() const;
  void FactoriesInfo() const;
  virtual void Info() const;

 protected:
  std::map<int, std::shared_ptr<UnitFactory>> unit_factories_;
  std::map<int, std::shared_ptr<Unit>> units_;
  int units_created = 0;
};

#endif  // STRATEGY_GAME_PLAYER_H
