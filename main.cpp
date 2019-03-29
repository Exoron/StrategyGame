//
// Created by exoron on 27.03.19.
//

#include <iostream>

#include <gems/GemsPlayer.h>
#include <alloys/alloys_units/OreSoldier.h>

int main() {
  Player* player = new GemsPlayer();

  player->BuildFactory(0);
  player->CreateUnit(0);

  OreSoldier ore_soldier;

  delete player;

  std::cout << "Success" << std::endl;
}
