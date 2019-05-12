//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_PLAYER_H
#define STRATEGY_GAME_PLAYER_H

#include <map>
#include <memory>
#include <unordered_set>
#include <vector>

class UnitFactory;
class UnitSet;

class Player {
 public:
  Player() = default;

  Player(const Player&) = delete;
  Player& operator=(const Player&) = delete;
  virtual ~Player() = default;

  virtual void BuildFactory(int id) = 0;
  virtual void CreateUnit(int id);
  virtual void Attack(int unit_id, std::shared_ptr<Player> enemy,
                      int enemy_unit_id) const;
  virtual void TakeDamage(int unit_id, int damage);
  void UnitSetsInfo() const;
  void FactoriesInfo() const;
  virtual void Info() const;
  virtual void MakeSquad(const std::vector<int>& units);
  virtual void MakeArmy(const std::vector<int>& squads);
  virtual void LevelUp();

 protected:
  std::map<int, std::shared_ptr<UnitFactory>> unit_factories_;
  std::map<int, std::shared_ptr<UnitSet>> unit_sets_;
  int unit_sets_created = 0;

  int level = 1;
  int experience = 0;
  int exp_to_level_up = 10;
};

#endif  // STRATEGY_GAME_PLAYER_H
