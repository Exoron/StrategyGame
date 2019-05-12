//
// Created by exoron on 11.05.19.
//

#ifndef STRATEGY_GAME_SQUAD_H
#define STRATEGY_GAME_SQUAD_H

#include <map>
#include <vector>

#include <UnitSet.h>

class Unit;

class Squad : public UnitSet {
 public:
  explicit Squad(const std::vector<std::pair<int, std::shared_ptr<Unit>>>& units);
  virtual ~Squad() = default;

  virtual void Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual AttackReport TakeDamage(int damage) override;
  virtual void Info() const override;

  virtual void LevelUp() override;

 private:
  std::map<int, std::shared_ptr<Unit>> units_;
};

#endif  // STRATEGY_GAME_SQUAD_H
