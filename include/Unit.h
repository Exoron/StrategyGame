//
// Created by exoron on 28.03.19.
//

#ifndef STRATEGY_GAME_UNIT_H
#define STRATEGY_GAME_UNIT_H

#include <iostream>

#include <UnitSet.h>

class Unit : public UnitSet{
 public:
  Unit() = default;
  virtual ~Unit() = default;

  virtual void Say() const = 0;

  virtual void Info() const override {
    std::cout << "Health : " << health << std::endl;
    std::cout << "Damage : " << damage << std::endl;
  }

 protected:
  int health = 0;
  int damage = 0;
};

#endif //STRATEGY_GAME_UNIT_H
