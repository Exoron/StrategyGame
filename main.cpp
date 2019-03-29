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
  gems_player->BuildFactory(1);
  gems_player->CreateUnit(1);

  Player* alloys_player = new AlloysPlayer();

  alloys_player->BuildFactory(0);
  alloys_player->CreateUnit(0);
  alloys_player->BuildFactory(1);
  alloys_player->CreateUnit(1);


  try {
    gems_player->BuildFactory(2);
  } catch (std::out_of_range& exc) {
    std::cout << "No matching factory" << std::endl;
  }
  try {
    alloys_player->CreateUnit(2);
  } catch(std::out_of_range& exc) {
    std::cout << "No matching factory" << std::endl;
  }

  delete alloys_player;
  delete gems_player;

  std::cout << "Success" << std::endl;
}
