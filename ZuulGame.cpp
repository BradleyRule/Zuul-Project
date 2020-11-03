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
  strcpy(firstItem, "tray");
  list.push_back(new Room(firstRoom));
  char* cafeteriaNorth = new char[80];
  char* cafeteriaEast = new char[80];
  char* cafeteriaSouth = new char[80];
  char* cafeteriaWest = new char[80];
  strcpy(cafeteriaNorth, "Lower Commons");
  strcpy(cafeteriaEast, "na");
  strcpy(cafeteriaSouth, "na");
  strcpy(cafeteriaWest, "na");
  char* cafeteriaInfo = new char[80];
  strcpy(cafeteriaInfo, "Exits are: north");

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
  char* commonsInfo = new char[80];
  strcpy(commonsInfo, "Exits are: east, south, west");

  char* thirdRoom = new char[80];
  strcpy(thirdRoom, "One Hall");
  list.push_back(new Room(thirdRoom));
  char* oneNorth = new char[80];
  char* oneEast = new char[80];
  char* oneSouth = new char[80];
  char* oneWest = new char[80];
  strcpy(oneNorth, "College and Career Center");
  strcpy(oneEast, "Main Hall");
  strcpy(oneSouth, "1-20");
  strcpy(oneWest, "Lower Commons");
  char* oneInfo = new char[80];
  strcpy(oneInfo, "Exits are: north, east, south, west");

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
  char* mainInfo = new char[80];
  strcpy(mainInfo, "Exits are: north, east, south, west");

  
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
  char* gymInfo = new char[80];
  strcpy(gymInfo, "Exits are: east, south");

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
  char* officeInfo = new char[80];
  strcpy(officeInfo, "Exits are: west");

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
  char* dInfo = new char[80];
  strcpy(dInfo, "Exits are: west, south");

  
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
  char* eInfo = new char[80];
  strcpy(eInfo, "Exits are: north");

  
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
  char* custodialInfo = new char[80];
  strcpy(custodialInfo, "Exits are: north");

  
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
  char* mediaInfo = new char[80];
  strcpy(mediaInfo, "Exits are: south");

  
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
  char* twoInfo = new char[80];
  strcpy(twoInfo, "Exits are: east, west");
  
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
  char* twentyInfo = new char[80];
  strcpy(twentyInfo, "Exits are: north, south");
  
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
  char* bathroomInfo = new char[80];
  strcpy(bathroomInfo, "Exits are: east");
  
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
  char* cccInfo = new char[80];
  strcpy(cccInfo, "Exits are: north, south");
  
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
  char* upperInfo = new char[80];
  strcpy(upperInfo, "Exits are: north");
  

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
      (*it)->setExits(cafeteriaNorth, cafeteriaEast, cafeteriaSouth, cafeteriaWest);
      (*it)->setInfo(cafeteriaInfo);
    }

    if(strcmp((*it)->getDescription(), "1-20") == 0){
      (*it)->addItems(fifthItem);
      (*it)->setExits(twentynorth, twentyeast, twentysouth, twentywest);
      (*it)->setInfo(twentyInfo);
    }

    if(strcmp((*it)->getDescription(), "Upper Gym") == 0){
      (*it)->addItems(thirdItem);
      (*it)->setExits(uppernorth, uppereast, uppersouth, upperwest);
      (*it)->setInfo(upperInfo);
    }

    if(strcmp((*it)->getDescription(), "Main Office") == 0){
      (*it)->addItems(fourthItem);
      (*it)->setExits(officenorth, officeeast, officesouth, officewest);
      (*it)->setInfo(officeInfo);
    }

    if(strcmp((*it)->getDescription(), "Custodial Office") == 0){
      (*it)->addItems(secondItem);
      (*it)->setExits(custodialnorth, custodialeast, custodialsouth, custodialwest);
      (*it)->setInfo(custodialInfo);
    }

    if(strcmp((*it)->getDescription(), "College and Career Center") == 0){
      (*it)->setExits(cccnorth, ccceast, cccsouth, cccwest);
      (*it)->setInfo(cccInfo);
    }
    
    if(strcmp((*it)->getDescription(), "Gym") == 0){
      (*it)->setExits(gymnorth, gymeast, gymsouth, gymwest);
      (*it)->setInfo(gymInfo);
    }

    if(strcmp((*it)->getDescription(), "Two Hall") == 0){
      (*it)->setExits(twonorth, twoeast, twosouth, twowest);
      (*it)->setInfo(twoInfo);
    }

    if(strcmp((*it)->getDescription(), "One Hall") == 0){
      (*it)->setExits(oneNorth, oneEast, oneSouth, oneWest);
      (*it)->setInfo(oneInfo);
    }

    if(strcmp((*it)->getDescription(), "Bathroom") == 0){
      (*it)->setExits(bathroomnorth, bathroomeast, bathroomsouth, bathroomwest);
      (*it)->setInfo(bathroomInfo);
    }

    if(strcmp((*it)->getDescription(), "E Hall") == 0){
      (*it)->setExits(enorth, eeast, esouth, ewest);
      (*it)->setInfo(eInfo);
    }

    if(strcmp((*it)->getDescription(), "D Hall") == 0){
      (*it)->setExits(dnorth, deast, dsouth, dwest);
      (*it)->setInfo(dInfo);
    }

    if(strcmp((*it)->getDescription(), "Media Center") == 0){
      (*it)->setExits(medianorth, mediaeast, mediasouth, mediawest);
      (*it)->setInfo(mediaInfo);
    }

    if(strcmp((*it)->getDescription(), "Main Hall") == 0){
      (*it)->setExits(mainNorth, mainEast, mainSouth, mainWest);
      (*it)->setInfo(mainInfo);
    }

    if(strcmp((*it)->getDescription(), "Lower Commons") == 0){
      (*it)->setExits(commonsNorth, commonsEast, commonsSouth, commonsWest);
      (*it)->setInfo(commonsInfo);
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
  bool matching = 0;
    
  for(int i = 0; i < 5; i++){
    inventory[i] = new char[20];
    inventory[i][0] = '\0';
  }

  char input[40];
  strcpy(currentRoom, "Cafeteria");

  
  while(playing == 1){

    cout << "You are currently in " << currentRoom << ". Items in the room are:" << endl;
    for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	if(strcmp((*it)->getDescription(), currentRoom) == 0){
	  (*it)->printItems();
	  (*it)->printInfo();
	}
    }
    
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
      
      for(int i = 0; i < 5; i++){
	if(strcmp(inventory[i], secondWord) == 0){
	  matching = 1;
	}
      }
      
      if(matching == 1){
	if(!(strcmp(secondWord, "key") == 0)){
	    cout << "This items doesn't seem to have a use." << endl;
	}  
	else if(strcmp(secondWord, "key") == 0){
	  if(strcmp(currentRoom, "Main Hall") == 0){
	    cout << "You unlock the front door and escape!" << endl;
	    playing = 0;
	  }
	  else if(!(strcmp(currentRoom, "Main Hall") == 0)){
	    cout << "There is nothing to unlock here" << endl;
	  }
	}
      }
      else if(matching == 0){
	cout << "You do not have an item that matches the description " << secondWord << endl;
      }
      matching = 0;
    }

    if(strcmp(firstWord, "pickup") == 0){
      for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	if(strcmp((*it)->getDescription(), currentRoom) == 0){
	  for(int i = 0; i < 5; i++){
	    if(strcmp((*it)->getItem(i), secondWord) == 0){
	      (*it)->removeItems(secondWord);
	      for(int j = 0; j < 5; j++){
		if(inventory[j][0] == '\0'){
		  strcpy(inventory[j], secondWord);
		  i = 5;
		  j = 5;
		}
	      }
	    }
	  }
	}
      }
    }

    if(strcmp(firstWord, "drop") == 0){
      for(int i = 0; i < 5; i++){
	if(strcmp(inventory[i], secondWord) == 0){
	  matching = 1;
	  for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	    if(strcmp((*it)->getDescription(), currentRoom) == 0){
	      (*it)->addItems(inventory[i]);
	    }
	  }
	  for(int j = 0; j < 20; j++){
	    inventory[i][j] = '\0';
	  }
	  i = 5;
	}
      }
      if (matching == 0){
	cout << "You do not have an item that matches the description " << secondWord << endl;
      }
      matching = 0;
    }

    if(strcmp(firstWord, "go") == 0){
      if(strcmp(secondWord, "north") == 0){
	for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	  if (strcmp((*it)->getDescription(), currentRoom) == 0){
	    if(!(strcmp((*it)->getExit(north), "na") == 0)){
	    strcpy(currentRoom, (*it)->getExit(north));
	    }
	    else if(strcmp((*it)->getExit(north), "na") == 0){
	      cout << "There is no exit there." << endl;
	    }
	    break;
	  }
	}
      }

      if(strcmp(secondWord, "east") == 0){
	for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	  if (strcmp((*it)->getDescription(), currentRoom) == 0){
	    if(!(strcmp((*it)->getExit(east), "na") == 0)){
	    strcpy(currentRoom, (*it)->getExit(east));
	    }
	    else if(strcmp((*it)->getExit(east), "na") == 0){
	      cout << "There is no exit there." << endl;
	    }
	    break;
	  }
	}
      }

      if(strcmp(secondWord, "south") == 0){
	for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	  if (strcmp((*it)->getDescription(), currentRoom) == 0){
	    if(!(strcmp((*it)->getExit(south), "na") == 0)){
	    strcpy(currentRoom, (*it)->getExit(south));
	    }
	    else if(strcmp((*it)->getExit(south), "na") == 0){
	      cout << "There is no exit there." << endl;
	    }
	    break;
	  }
	}
      }

      if(strcmp(secondWord, "west") == 0){
	for (std::vector<Room*>::iterator it = list.begin(); it != list.end(); ++it){
	  if (strcmp((*it)->getDescription(), currentRoom) == 0){
	    if(!(strcmp((*it)->getExit(west), "na") == 0)){
	    strcpy(currentRoom, (*it)->getExit(west));
	    }
	    else if(strcmp((*it)->getExit(west), "na") == 0){
	      cout << "There is no exit there." << endl;
	    }
	    break;
	  }
	}
      }
    }

    if(strcmp(firstWord, "inventory") == 0){
      for (int i = 0; i < 5; i++){
	cout << inventory[i] << "  ";
      }
      cout << endl;
    }
    
    if(strcmp(firstWord, "QUIT") == 0){
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
