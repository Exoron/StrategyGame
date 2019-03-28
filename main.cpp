//
// Created by exoron on 27.03.19.
//

#include <iostream>

#include <GemsPlayer.h>

int main() {
  Player* player = new GemsPlayer();

  player->BuildFactory(0);
  player->CreateUnit(0);
  player->SayAll();

  delete player;

  std::cout << "Success" << std::endl;
}
