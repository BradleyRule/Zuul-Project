#include <iostream>
#include <cstring>


using namespace std;

class Room{
 public:
  Room(char*);
  char* getDescription();
  int getID();
  void addItems(char*);
  void printItems();
  char* getItem(int);
  void printInfo();
  void setInfo(char*);
  void removeItems(char*);
  void setExits(char*, char*, char*, char*);
  char* getExit(char*);
 private:
  char* description;
  int id;
  char* items[5];
  char* northExit;
  char* eastExit;
  char* southExit;
  char* westExit;
  char* null;
  char* info;
};
