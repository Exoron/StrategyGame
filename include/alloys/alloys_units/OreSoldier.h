//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_ORESOLDIER_H
#define STRATEGY_GAME_ORESOLDIER_H

#include <Unit.h>

class OreSoldier : public Unit {
 public:
  OreSoldier();
  ~OreSoldier() override = default;
  void Say() const override;
  virtual void Attack(std::shared_ptr<Player> player,
                      int unit_id) const override;
  virtual void TakeDamage(int damage) override;
  virtual void Info() const override;
};

#endif  // STRATEGY_GAME_ORESOLDIER_H
