//
// Created by exoron on 27.03.19.
//

#include <iostream>

#include <gems/GemsPlayer.h>
#include <alloys/AlloysPlayer.h>

int main() {
  Player* gems_player = new GemsPlayer();

  gems_player->BuildFactory(0);
  gems_player->CreateUnit(0);

  Player* alloys_player = new AlloysPlayer();

  alloys_player->BuildFactory(0);
  alloys_player->CreateUnit(0);

  delete alloys_player;
  delete gems_player;

  std::cout << "Success" << std::endl;
}
