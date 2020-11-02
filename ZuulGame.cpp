#include <iostream>
#include "Room.h"
#include <vector>
#include <cstring>

using namespace std;


int main(){

  vector<Room*> list;
  
  char* firstRoom = new char[80];
  char* firstItem = new char[20];
  strcpy(firstRoom, "Cafeteria");
  strcpy(firstItem, "lunch tray");
  list.push_back(new Room(firstRoom));
  char* cafeteriaNorth = new char[80];
  char* cafeteriaEast = new char[80];
  char* cafeteriaSouth = new char[80];
  char* cafeteriaWest = new char[80];
  strcpy(cafeteriaNorth, "Lower Commons");
  strcpy(cafeteriaEast, "na");
  strcpy(cafeteriaSouth, "na");
  strcpy(cafeteriaWest, "na");

  char* secondRoom = new char[80];
  strcpy(secondRoom, "Lower Commons");
  list.push_back(new Room(secondRoom));
  char* commonsNorth = new char[80];
  char* commonsEast = new char[80];
  char* commonsSouth = new char[80];
  char* commonsWest = new char[80];
  strcpy(commonsNorth, "na");
  strcpy(commonsEast, "One Hall");
  strcpy(commonsSouth, "Cafeteria");
  strcpy(commonsWest, "Two Hall");

  char* thirdRoom = new char[80];
  strcpy(thirdRoom, "One hall");
  list.push_back(new Room(thirdRoom));
  char* oneNorth = new char[80];
  char* oneEast = new char[80];
  char* oneSouth = new char[80];
  char* oneWest = new char[80];
  strcpy(oneNorth, "College and Career Center");
  strcpy(oneEast, "Main Hall");
  strcpy(oneSouth, "1-20");
  strcpy(oneWest, "Lower Commons");

  char* fourthRoom = new char[80];
  strcpy(fourthRoom, "Main Hall");
  list.push_back(new Room(fourthRoom));
  char* mainNorth = new char[80];
  char* mainEast = new char[80];
  char* mainSouth = new char[80];
  char* mainWest = new char[80];
  strcpy(mainNorth, "D Hall");
  strcpy(mainEast, "Main Office");
  strcpy(mainSouth, "E Hall");
  strcpy(mainWest, "One Hall");

  
  char* fifthRoom = new char[80];
  strcpy(fifthRoom, "Gym");
  list.push_back(new Room(fifthRoom));
  char* gymnorth = new char[80];
  char* gymeast = new char[80];
  char* gymsouth = new char[80];
  char* gymwest = new char[80];
  strcpy(gymnorth, "na");
  strcpy(gymeast, "Two Hall");
  strcpy(gymsouth, "Upper Gym");
  strcpy(gymwest, "na");

  char* sixthRoom = new char[80];
  char* fourthItem = new char[20];
  strcpy(fourthItem, "key");
  strcpy(sixthRoom, "Main Office");
  list.push_back(new Room(sixthRoom));
  char* officenorth = new char[80];
  char* officeeast = new char[80];
  char* officesouth = new char[80];
  char* officewest = new char[80];
  strcpy(officenorth, "na");
  strcpy(officeeast, "na");
  strcpy(officesouth, "na");
  strcpy(officewest, "Main Hall");

  char* seventhRoom = new char[80];
  strcpy(seventhRoom, "D hall");
  list.push_back(new Room(seventhRoom));
  char* dnorth = new char[80];
  char* deast = new char[80];
  char* dsouth = new char[80];
  char* dwest = new char[80];
  strcpy(dnorth, "na");
  strcpy(deast, "na");
  strcpy(dsouth, "Main Hall");
  strcpy(dwest, "Bathroom");

  
  char* eighthRoom = new char[80];
  strcpy(eighthRoom, "E Hall");
  list.push_back(new Room(eighthRoom));
  char* enorth = new char[80];
  char* eeast = new char[80];
  char* esouth = new char[80];
  char* ewest = new char[80];
  strcpy(enorth, "Main Hall");
  strcpy(eeast, "na");
  strcpy(esouth, "na");
  strcpy(ewest, "na");

  
  char* ninthRoom = new char[80];
  char* secondItem = new char[20];
  strcpy(secondItem, "mop");
  strcpy(ninthRoom, "Custodial Office");
  list.push_back(new Room(ninthRoom));
  char* custodialnorth = new char[80];
  char* custodialeast = new char[80];
  char* custodialsouth = new char[80];
  char* custodialwest = new char[80];
  strcpy(custodialnorth, "1-20");
  strcpy(custodialeast, "na");
  strcpy(custodialsouth, "na");
  strcpy(custodialwest, "na");

  
  char* tenthRoom = new char[80];
  strcpy(tenthRoom, "Media Center");
  list.push_back(new Room(tenthRoom));
  char* medianorth = new char[80];
  char* mediaeast = new char[80];
  char* mediasouth = new char[80];
  char* mediawest = new char[80];
  strcpy(medianorth, "na");
  strcpy(mediaeast, "na");
  strcpy(mediasouth, "One Hall");
  strcpy(mediawest, "na");

  
  char* eleventhRoom = new char[80];
  strcpy(eleventhRoom, "Two Hall");
  list.push_back(new Room(eleventhRoom));
  char* twonorth = new char[80];
  char* twoeast = new char[80];
  char* twosouth = new char[80];
  char* twowest = new char[80];
  strcpy(twonorth, "na");
  strcpy(twoeast, "Lower Commons");
  strcpy(twosouth, "na");
  strcpy(twowest, "Gym");
  
  char* twelfthRoom = new char[80];
  char* fifthItem = new char[20];
  strcpy(fifthItem, "robot");
  strcpy(twelfthRoom, "Room 1-20");
  list.push_back(new Room(twelfthRoom));
  char* twentynorth = new char[80];
  char* twentyeast = new char[80];
  char* twentysouth = new char[80];
  char* twentywest = new char[80];
  strcpy(twentynorth, "One Hall");
  strcpy(twentyeast, "na");
  strcpy(twentysouth, "Custodial Office");
  strcpy(twentywest, "na");
  
  char* thirteenthRoom = new char[80];
  strcpy(thirteenthRoom, "Bathroom");
  list.push_back(new Room(thirteenthRoom));
  char* bathroomnorth = new char[80];
  char* bathroomeast = new char[80];
  char* bathroomsouth = new char[80];
  char* bathroomwest = new char[80];
  strcpy(bathroomnorth, "na");
  strcpy(bathroomeast, "D Hall");
  strcpy(bathroomsouth, "na");
  strcpy(bathroomwest, "na");
  
  char* fourteenthRoom = new char[80];
  strcpy(fourteenthRoom, "College and Career Center");
  list.push_back(new Room(fourteenthRoom));
  char* cccnorth = new char[80];
  char* ccceast = new char[80];
  char* cccsouth = new char[80];
  char* cccwest = new char[80];
  strcpy(cccnorth, "Media Center");
  strcpy(ccceast, "na");
  strcpy(cccsouth, "One Hall");
  strcpy(cccwest, "na");
  
  char* fifteenthRoom = new char[80];
  char* thirdItem = new char[20];
  strcpy(thirdItem, "basketball");
  strcpy(fifteenthRoom, "Upper Gym");
  list.push_back(new Room(fifteenthRoom));
  char* uppernorth = new char[80];
  char* uppereast = new char[80];
  char* uppersouth = new char[80];
  char* upperwest = new char[80];
  strcpy(uppernorth, "Gym");
  strcpy(uppereast, "na");
  strcpy(uppersouth, "na");
  strcpy(upperwest, "na");
  

  char* north = new char[10];
  strcpy(north, "north");
  char* east = new char[10];
  strcpy(east, "east");
  char* south = new char[10];
  strcpy(south, "south");
  char* west = new char[10];
  strcpy(west, "west");



  
  for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
    if(strcmp((*it)->getDescription(), "Cafeteria") == 0){
      (*it)->addItems(firstItem);
      //(*it)->setExits(cafeteriaNorth, cafeteriaEast, cafeteriaSouth, cafeteriaWest);

      //cout << (*it)->getExit(north) << endl;
    }

    if(strcmp((*it)->getDescription(), "1-20") == 0){
      (*it)->addItems(fifthItem);
    }

    if(strcmp((*it)->getDescription(), "Upper Gym") == 0){
      (*it)->addItems(thirdItem);
    }

    if(strcmp((*it)->getDescription(), "Main Office") == 0){
      (*it)->addItems(fourthItem);
    }

    if(strcmp((*it)->getDescription(), "Custodial Office") == 0){
      (*it)->addItems(secondItem);
    }

    if(strcmp((*it)->getDescription(), "College and Career Center") == 0){

    }
    
    if(strcmp((*it)->getDescription(), "Gym") == 0){

    }

    if(strcmp((*it)->getDescription(), "Two Hall") == 0){

    }

    if(strcmp((*it)->getDescription(), "One Hall") == 0){

    }

    if(strcmp((*it)->getDescription(), "Bathroom") == 0){

    }

    if(strcmp((*it)->getDescription(), "E Hall") == 0){

    }

    if(strcmp((*it)->getDescription(), "D Hall") == 0){

    }

    if(strcmp((*it)->getDescription(), "Media Center") == 0){

    }

    if(strcmp((*it)->getDescription(), "Main Hall") == 0){

    }

    if(strcmp((*it)->getDescription(), "Lower Commons") == 0){

    }
    
  }

  int count = 0;
  bool playing = 1;
  char currentRoom[80];
  strcpy(currentRoom, "Cafeteria");
  char* inventory[5];
  char firstWord[40];
  char secondWord[40];
  bool  firstPart = 1;
    
  for(int i = 0; i < 5; i++){
    inventory[i] = new char[20];
    inventory[i][0] = '\0';
  }

  char input[40];
  strcpy(currentRoom, "Cafeteria");

  
  while(playing == 1){
    cin.get(input, 40);
    cin.get();

    if(!(input[0] == '\0')){
       for (int i = 0; i <= 40; i++){
	 if(firstPart == 1){
	   if(!(input[i] == ' ')){
	     firstWord[i] = input[i];
	   }
	   else if(input[i] == ' '){
	     firstWord[i] = '\0';
	     firstPart = 0;
	   }
	 }
	 else if(firstPart == 0){
	   if(!(input[i] == ' ' || input[i] == '\0')){
	       secondWord[count] = input[i];
	       count++;
	   }
	   else if(input[i] == '\0'){
	     secondWord[count] = '\0';
	     i = 40;
	     count = 0;
	     firstPart = 1;
	   }
	 }
       } 
    }
    
    if(strcmp(firstWord, "use") == 0){

    }

    if(strcmp(firstWord, "pickup") == 0){

    }

    if(strcmp(firstWord, "drop") == 0){

    }

    if(strcmp(firstWord, "go") == 0){
      if(strcmp(secondWord, "north") == 0){

      }

      if(strcmp(secondWord, "east") == 0){

      }

      if(strcmp(secondWord, "south") == 0){

      }

      if(strcmp(secondWord, "west") == 0){

      }
    }

    if(strcmp(input, "QUIT") == 0){
      playing = 0;
    }

    

    for(int i = 0; i <= 40; i++){
      input[i] = '\0';
      secondWord[i] = '\0';
      firstWord[i] = '\0';
    }
  }
  
  return 0;
}
