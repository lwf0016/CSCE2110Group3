#include "display_layout.h"
#include <iostream>
#include <string>
#include <iomanip> 
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

 void display::display_info()
{ 
  cout << "Enter file name: ";//prompt user for filename
  cin >> fileName;//user input
  ifstream ip(fileName);
  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n'; //if file name does not open
  
  if (ip.is_open()){// reading in values for when user inputs text file
      ip >> lot_num;
      
      
      int myVals[2][3] = {reg_pSpace, mc_pSpace, dis_pSpace};

      for(int i=1; i<=3; i++)
      {
          for(int j=1; j<=3; j++)
          {
              ip >> myVals[i][j];
          }
      } 
  
string lot_one ("---------------------------------\n| M | M | M | D | D | D | D | D |\n---------------------------------\n| R | R | R | R | R | R | R | R |\n---------------------------------\n| R | R | R | R | R |\n---------------------");

string lot_two ("---------------------------------\n| M | M | M | M | D | D | D | D | D |\n---------------------------------\n| R | R | R | R | R | R | R | R | R |\n---------------------------------\n| R | R | R | R | R | R | R |\n-----------------------------");

string lot[3] = {lot_one,lot_two,"null"};// we shouldnt hard code this part rather fill it with the values


  //output for all parking space info
for(int i=1; i<=lot_num; i++){
  cout << "Parking lot number: " << i << endl;
  
  int pSpace = myVals[i][1] + myVals[i][2] + myVals[i][3];// total amount of spots 
  cout << "Number of parking spaces: " << pSpace << endl;
   
  for(int j = 1; j <=3; j++){
  cout << "Number of regular parking spaces: " << myVals[i][j] << endl;
  j++;
  cout << "Number of motorcycle parking spaces: " << myVals[i][j] << endl;
  j++;
  cout << "Number of disability parking spaces: " << myVals[i][j] << endl;

  
  cout << "Parking space layout is shown below." << endl;
 
  }

  cout << lot[i-1] << "\n";
  }


  

/*
   for(int j=1; j<lot_num;j++){
        cout << lot[j] << "\n";
   }
*/
  cout << endl;
}

}


void display::admininfo(){
cout << "     All Administrative Employee Information" << endl;
cout << "-------------------------------------------------" << '\n';
cout << "Name" << "\t\t\t\t" << "ID" << endl;
cout << "-------------------------------------------------" << '\n';

ifstream ap("admin_people.csv");

  if(!ap.is_open()) std::cout << "ERROR: File Open" << '\n';

  string name_admin;
  string id;
  string userID;
  int admin_count = 2;
  while(ap.good()){
    getline(ap,name_admin,',');
    getline(ap,id,',');
    getline(ap,userID, '\n');  
    cout << name_admin;
    cout <<"\t\t"<<id << '\n';
}
}

void display::managerinfo(){
cout << "     All Management Employee Information" << endl;
cout << "-------------------------------------------------" << '\n';
cout << "Name" <<"\t\t\t\t"<< "ID" << endl;
cout << "-------------------------------------------------" << '\n';

ifstream mp("management_people.csv");

  if(!mp.is_open()) std::cout << "ERROR: File Open" << '\n';

  string name_management;
  string idm;
  string userIDm;

  while(mp.good()){
    getline(mp,name_management,',');
    getline(mp,idm,',');
    getline(mp,userIDm, '\n');

    cout << name_management;
    cout <<"\t\t"<< idm << '\n';
  }
}

void display::userinfo(){
/*
cout << "                                       All User Information                                            "<< endl;
cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << '\n';
cout << "Name" <<"\t\t\t\t"<< "  ID" << "\t\t\t\t"<< "UserID" << "\t\t\t\t"  << "Make" <<"\t\t\t\t"<< "  Model" << "\t\t\t\t" << "Year" <<"\t\t\t\t"<< "  Plate Number" <<endl;
cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << '\n';

ifstream up("user_people.csv");

  if(!up.is_open()) std::cout << "ERROR: File Open" << '\n';

  string name_user;
  string idu;
  string userID;
  string make;
  string model;
  string year;
  string platenumber;

  while(up.good()){
    getline(up,name_user,',');
    getline(up,idu,',');
    getline(up,userID, ',');
    getline(up,make,',');
    getline(up,model,',');
    getline(up,year,',');
    getline(up,platenumber,'\n');


    cout << name_user;
    cout <<"\t\t\t"<<idu;
    cout <<"\t\t\t"<<userID;
    cout <<"\t\t\t\t"<<make;
    cout <<"\t\t\t\t"<<model;
    cout <<"\t\t\t\t"<<year;
    cout <<"\t\t\t\t\t"<<platenumber << '\n';

*/
  }







