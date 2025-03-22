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
    Item(string n, string d) { name = n, desc = d;} //constructor
    string getName() {return name;} //getter
    string getDesc() {return desc;} //getter

};


class Enemy {
  /*TODO: write your code*/

  private:

    string name;
    int health;
    int attackPower;

  public:

    Enemy(string n, int h, int a) {name = n, health = h, attackPower = a;} //constructor
    string getName() {return name;} //getter
    int getHealth() {return health;} //getter
    int getAttackPower() {return attackPower;} //getter
    void setHealth(int h) {health = h;} //setter

};


class Place {
  /*TODO: write your code*/

  private:

    string desc;

  public:

    //vectors
    // itemList
    vector<Item> itemList;
    // enemyList
    vector<Enemy> enemyList;
    // placeList
    vector<Place*> placeList;


    //functions
    Place(string d) {desc = d;} //constructor
    string getDesc() {return desc;} //getter

    void addItem(Item i) {itemList.push_back(i);}
    void addEnemy(Enemy e) {enemyList.push_back(e);}
    void addPlace(Place* p) {placeList.push_back(p);}

    void printItems(void) {
        if (itemList.size() == 0) {cout << "-No items." << endl;}
        else
        {
            cout << "-Items:" << endl;
            for (int i = 0; i < itemList.size(); i++)
            {
                cout << "- " << itemList[i].getName() << ": " << itemList[i].getDesc();
            }
        }
    }
// refit to give enemy info instead of item info
    void printEnemies(void) {
        if (enemyList.size() == 0) {cout << "-No enemies." << endl;}
        else
        {
            cout << "-Enemies:" << endl;
            for (int i = 0; i < enemyList.size(); i++)
            {
                cout << "- " << enemyList[i].getName() << ": (Health: " << enemyList[i].getHealth() 
                      << ", Attack Power: " << enemyList[i].getAttackPower() << ")";
            }
        }
    }
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
    vector<Item> inventory;

    // varaible
    Place* currentPlace;

    // Functions
    Player(string n, int h, int a) {name = n, health = h, attackPower = a;} //constructor
    void pickUpItem(Item i) {inventory.push_back(i);}
    void attackEnemy(Enemy& e) {e.setHealth(e.getHealth() - attackPower);}
    void displayInventory() {for (const auto& item : inventory) {} ;}
    void moveToPlace(Place* p) { currentPlace = p;}

};
