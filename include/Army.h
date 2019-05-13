//
// Created by exoron on 12.05.19.
//

#ifndef STRATEGY_GAME_ARMY_H
#define STRATEGY_GAME_ARMY_H

#include <map>
#include <vector>

#include <UnitSet.h>

class Squad;

class Army : public UnitSet {
 public:
  explicit Army(const std::vector<std::pair<int, std::shared_ptr<Squad>>>& squads);
  virtual ~Army() = default;

  virtual AttackReport Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual AttackReport TakeDamage(int damage) override;
  virtual void Info() const override;

  virtual void LevelUp() override;

 private:
  std::map<int, std::shared_ptr<Squad>> squads_;
};

#endif  // STRATEGY_GAME_ARMY_H
