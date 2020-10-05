#include <iostream>
#include <fstream>
#include "display_layout.h"
#include "Privileges.h"

using namespace std;

int main()
{
//Privilege priv; 
//priv.changepassword();
//priv.adminchangepassword();

display info;
Privilege user;
//info.display_info(); // display all parking info
//info.admininfo();
//user.addManager(); //finished
//user.addAdmin(); //finished
//info.managerinfo();
//info.userinfo();
//user.searchAdmin(); //finished
//user.searchManagement(); //finished
//user.removeManager();
//user.count();
user.removeAdmin("admin_people.csv", int n);
user.changePassword();



char ans;
cout << "Would you like to logout (y-yes n-no)?" << endl;
cin >> ans;


switch(ans)
{
  case 'y':
    cout << "You have been logged out." << endl;
    return 0;
    break;
  case 'n':
   cout << "" << endl;
   break;
}
/*
if(ans == "yes" || "Yes")
{
  cout << "You have been logged out" << endl;
  return 0;
}
else if(ans == "no" || "No")
{
  cout << "Cool beans" << endl;
}
else
{
    cout << "ERROR" << endl;
}
*/
return 0; 
}
