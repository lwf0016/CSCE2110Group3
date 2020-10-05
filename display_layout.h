#include <iostream>
#include <fstream>
//#include "read_user.h"
using namespace std;

class display{
  private:
    string fileName;
    int lot_num; //total lots
    int pSpace; //Total number of spaces
    int reg_pSpace; //Regular parking spaces
    int mc_pSpace; //Motorcycle parking spaces
    int dis_pSpace; // Disabled parking spaces  

  public:
    void display_info(); // displays info of lot 
    void admininfo();
    void managerinfo();
    void userinfo();
    //int display_layout(); //displays a visual rep of the parking lot
};