#include <iostream>
#include <fstream>
#include "display_layout.h"

using namespace std;

//reading in basic user infomation from file.
void read_user() 
{  
  ifstream up("user_people.csv");

  if(!up.is_open()) std::cout << "ERROR: File Open" << '\n';

  string firstname;
  string lastname;
  string id;
  string userID;
  string make;
  string model;
  string year;
  string plateNumber;

  while(up.good()){
    getline(up,firstname,' ');
    getline(up,lastname,',');
    getline(up,id,',');
    getline(up,userID,',');
    getline(up,make,',');
    getline(up,model,',');
    getline(up,year,',');
    getline(up,plateNumber,'\n');

    std::cout << "Name: "<<firstname<< " "<<lastname << '\n';
    std::cout << "ID: "<<id << '\n';
    std::cout << "User ID: "<<userID << '\n';
    std::cout << "Make: "<<make << '\n';
    std::cout << "Model: "<<model << '\n';
    std::cout << "Year: "<<year << '\n';
    std::cout << "Plate Number: "<<plateNumber << '\n';
    std::cout << "-------------------" << '\n';
  }

  up.close();
}

//reading in Admin information from file
void read_admin() 
{  
  ifstream ap("admin_people.csv");

  if(!ap.is_open()) std::cout << "ERROR: File Open" << '\n';

  string firstname;
  string lastname;
  string id;
  string userID;
  bool isAdmin; 

  while(ap.good()){
    getline(ap,firstname,' ');
    getline(ap,lastname,',');
    getline(ap,id,',');
    getline(ap,userID, '\n');
    
    std::cout << "Name: "<<firstname<< " "<<lastname << '\n';
    std::cout << "ID: "<<id << '\n';
    std::cout << "User ID: "<<userID << '\n';
    std::cout << "-------------------" << '\n';
  }
  ap.close();
}

//reading in managment user information from file.
void read_management() 
{  
  ifstream mp("management_people.csv");

  if(!mp.is_open()) std::cout << "ERROR: File Open" << '\n';

  string firstname;
  string lastname;
  string id;
  string userID;
  bool isManagement; 

  while(mp.good()){
    getline(mp,firstname,' ');
    getline(mp,lastname,',');
    getline(mp,id,',');
    getline(mp,userID, '\n');
    
    std::cout << "Name: "<<firstname<< " "<<lastname << '\n';
    std::cout << "ID: "<<id << '\n';
    std::cout << "User ID: "<<userID << '\n';
    std::cout << "-------------------" << '\n';
  }
  mp.close();
}

void read_input() 
{  
  ifstream ip("input.txt");

  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

int lot_num = 0;
    int pSpace = 0; //Total number of spaces
    int reg_pSpace = 0; 
    int mc_pSpace = 0; 
    int dis_pSpace = 0;

  while(ip.good()){
    ip >> lot_num; 
    ip >> pSpace;
    ip >> reg_pSpace;
    ip >> mc_pSpace;
    ip >> dis_pSpace;   
  }
  ip.close();
}