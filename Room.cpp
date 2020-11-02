#include <iostream>
#include "Room.h"
#include <cstring>

using namespace std;

Room::Room(char* newdescription){
  description = newdescription;
  id = 0;
  strcpy(null, "null");
  for (int i = 0; i < 5; i++){
    items[i] = new char[20];
    items[i][0] = '\0';
  }
  northExit = new char[80];
  eastExit = new char[80];
  southExit = new char[80];
  westExit = new char[80];
}

char* Room::getDescription(){
  return description;
}

int Room::getID() {
  return id;
}

void Room::addItems(char* item){
  for(int i = 0; i < 5; i++){
    if(items[i][0] == '\0'){
      strcpy(items[i], item);
      i = 5;
    }
  }
}

void Room::getItems(){
  for(int i = 0; i < 5; i++){
    if(!(items[i][0] == '\0')){
      cout << items[i] << endl;
    }
  }
}

void Room::removeItems(char* item){
  for(int i = 0; i < 5; i++){
    if(strcmp(items[i], item) ==0){
      for(int j = 0; j <= 20; j++){
	items[i][j] = '\0';
      }
    }
  }
}

void Room::setExits(char* north, char* east, char* south, char* west){
  //northExit = new char[80];
  //eastExit = new char[80];
  //southExit = new char[80];
  //westExit = new char[80];
  strcpy(northExit, north);
  strcpy(eastExit, east);
  strcpy(southExit, south);
  strcpy(westExit, west);
}

char* Room::getExit(char* direction){
  if(strcmp(direction, "north") == 0){
    return northExit;
  }

  else if(strcmp(direction, "east") == 0){
    return eastExit;
  }

  else if(strcmp(direction, "south") == 0){
    return southExit;
  }

  else if(strcmp(direction, "west") == 0){
    return westExit;
  }

  else{
    return null;
  }
}
