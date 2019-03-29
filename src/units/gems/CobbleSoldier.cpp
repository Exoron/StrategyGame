//
// Created by exoron on 28.03.19.
//

#include <iostream>

#include <gems/gems_units/CobbleSoldier.h>

CobbleSoldier::CobbleSoldier() {
  Say();
}

void CobbleSoldier::Say() const {
  std::cout << "I'm a cobble soldier" << std::endl;
}