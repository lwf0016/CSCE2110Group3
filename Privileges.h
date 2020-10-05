#include <iostream>
#include <fstream>

using namespace std;

class Privilege{
  public:
    void adminchangepassword();
    void addAdmin();
    void addManager();
    void removeAdmin(const char *file_name, int n);
    void removeManager();
    void searchAdmin();
    void changePassword();
    //int count();



    void searchManagement();
};