#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Item {
  /*TODO: write your code*/

  private: 
    string name;
    string desc;

  public:
    item(string n, string d) { name = n, desc = d;} //constructor
    string getName(); //getter
    string getDesc(); //getter

};


class Enemy {
  /*TODO: write your code*/

  private:

    string name;
    int health;
    int attackPower;

  public:

    Enemy(string n, int h, int a) {name = n, health = h, attackPower = a;} //constructor
    string getName(); //getter
    int getHealth(); //getter
    int getAttackPower(); //getter
    void setHealth(int h); //setter

};


class Place {
  /*TODO: write your code*/

  private:

    string desc;

  public:

    //vectors
    // itemList
    vector<Item>itemList;
    // enemyList
    vector<Enemy>enemyList;
    // placeList
    vector<Place*>placeList;


    //functions
    Place(string d) {desc = d;} //constructor
    string getDesc(); //getter

    // void addItem(Item i);
    // void addEnemy(Enemy e);
    // void addPlace(Place* p);

    // 

};


class Player {
  /*TODO: write your code*/

  private:

    string name;
    int health;
    int attackPower;

  public:

    // vector
    // Inventory
    vector<Item>inventory;

    // varaible
    Place* currentPlace;

    // Functions
    Player(string n, int h, int a) {name = n, health = h, attackPower = a;} //constructor
    void pickUpItem(item i);
    void attackEnemy(Enemy& e);
    void displayInventory(void);
    void moveToPlace(Place* p);

};
