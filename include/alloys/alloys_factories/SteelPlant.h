//
// Created by exoron on 29.03.19.
//

#ifndef STRATEGY_GAME_STEELPLANT_H
#define STRATEGY_GAME_STEELPLANT_H

#include <UnitFactory.h>

class SteelPlant : public UnitFactory {
 public:
  std::shared_ptr<Unit> CreateUnit() const override;
  virtual void Info() const;
};

#endif  // STRATEGY_GAME_STEELPLANT_H
