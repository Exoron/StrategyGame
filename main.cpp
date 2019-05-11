//
// Created by exoron on 27.03.19.
//

#include <iostream>
#include <memory>

#include <gems/GemsPlayer.h>
#include <alloys/AlloysPlayer.h>

//#include <gtest/gtest.h>

int main() {
  std::shared_ptr<Player> gems_player = std::make_shared<GemsPlayer>();

  gems_player->BuildFactory(0);
  gems_player->CreateUnit(0);
  gems_player->BuildFactory(1);
  gems_player->CreateUnit(1);

  std::shared_ptr<Player> alloys_player = std::make_shared<AlloysPlayer>();

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

  gems_player->Info();
  alloys_player->Info();

  gems_player->Attack(0, alloys_player, 0);
  gems_player->Attack(1, alloys_player, 0);
  gems_player->Attack(1, alloys_player, 0);
  gems_player->Attack(1, alloys_player, 0);

  try {
    gems_player->Attack(0, alloys_player, 2);
  } catch(std::out_of_range& exception) {
    std::cout << "No matching unit!" << std::endl;
  }


  gems_player->Info();
  alloys_player->Info();

  gems_player->Attack(1, alloys_player, 0);
  gems_player->Attack(1, alloys_player, 0);

  alloys_player->Info();

  alloys_player->CreateUnit(1);
  alloys_player->CreateUnit(1);
  alloys_player->CreateUnit(1);

  alloys_player->MakeSquad({2, 3, 4});

  alloys_player->Info();

  for(int i = 0; i < 39; ++i) {
    gems_player->Attack(1, alloys_player, 5);
  }

  alloys_player->Info();

  std::cout << "Success" << std::endl;
}
