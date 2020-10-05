#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include "Privileges.h"

using namespace std; 

//basically this is where we will give privlages to each group. Just not sure how to set it up. Maybe linked list?

void Privilege::addManager()
{
    ofstream manager("management_people.csv", ios::app);//opens manager file and appends info
    string name;
    int id;
    string userID;

    cout << "Enter Name: ";
    //cin.ignore();
    getline(cin, name);
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter UserID: ";
    cin >> userID;

    cout << endl;
    manager << name << " , ";//user inputs a first and last name
    manager << id << ", ";// random 3 digit number
    manager << userID;//incriment abci
    cout << endl;

    manager.close ();
}

void Privilege::changePassword()
{

string name;
string blank2;
string password;
string PassN; 


ifstream admin("admin_people.csv");
  getline(admin,name,',');
  getline(admin,blank2,',');
  getline(admin,password,',');
  cout << "Enter new password" << endl; 
  getline(cin,PassN); 
  PassN = password;
  cout << "Your new password " << password <<" has been changed" << endl;
  
}

void Privilege::removeAdmin(const char *file_name, int n)
{
  ifstream fs;
	ofstream ft;
	string str;
  string name;

	char sourcefile[50], destinationfile[50];


	fs.open("admin_people.csv");

	if (!fs)
	{
		cout << "Error in Opening Source File...!!!";
		exit(1);
	}


	ft.open("tempfile.txt");

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!";
		fs.close();
		exit(2);
	}
  cout << "Enter Name to delete: ";
  
cin.ignore();
getline(cin, name);

	if (fs && ft)
	{
		while (getline(fs, str))
		{
      if(str != name)
      {
			ft << str << "\n";
      }
		}

		
	}
	else
	{
		cout << "File Cannot Open!";
	}

	

	fs.close();
	ft.close();

  remove("admin_people.csv");
  int result{rename("tempfile.txt", "admin_people.csv")};
}

void Privilege::removeManager()
{
  ifstream fs;
	ofstream ft;
	string str;
  string name;

	char sourcefile[50], destinationfile[50];

	fs.open("management_people.csv");

	if (!fs)
	{
		cout << "Error in Opening Source File...!!!";
		exit(1);
	}

	ft.open("tempfile.txt");

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!";
		fs.close();
		exit(2);
	}
  cout << "Enter Name to delete: ";
  
cin.ignore();
getline(cin, name);

	if (fs && ft)
	{
		while (getline(fs, str))
		{
      if(str != name)
      {
			ft << str << "\n";
      }
		}



	}
	else
	{
		cout << "File Cannot Open!";
	}

	//cout << "\n\n Open Destination File and Check!!!\n";

	fs.close();
	ft.close();

  remove("management_people.csv");
  int result{rename("tempfile.txt", "management_people.csv")};

  
}

  
void Privilege::addAdmin()
{
    ofstream manager("admin_people.csv", ios::app);//opens manager file and appends info
    string name;
    int id;
    
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter ID: ";
    cin >> id;

    cout << endl;
    manager << name << ", ";//user inputs a first and last name
    manager << id;// random 3 digit number
    cout << endl;
    
    manager.close ();

}


void Privilege:: searchAdmin()
{
   vector<string> name(15);
    vector<string> pass(15);
    vector<string> id(15);

    int count = 0;
    string word;

    ifstream file("admin_people.csv");

    if (!file.is_open())
        cerr << "File not found" << endl;

    while (file.good()){

        for (int i = 0; i < 15; i++){

            getline(file, name[i], ',');
            getline(file, id [i], ',');
            getline(file, pass[i], '\n');
        }
    }

    

    cout << "Enter Admin ID to search for: ";
    cin >> word;
    cout<< "Name \t";
    cout << setw(13) << "ID \n";
    for (int j = 0; j < 15; j++){
        if (id[j].find(word) != std::string::npos){
            cout << name[j] << '\t' << id[j] << endl;
            count++;
        } //else {cout<< "404 NO USER FOUND";}
    }

    cout << endl;
}


void Privilege:: searchManagement()
{
  vector<string> namem(15);
    vector<string> passm(15);
    vector<string> idm(15);

    int count = 0;
    string word;

    ifstream file("management_people.csv");

    if (!file.is_open())
        cerr << "File not found" << endl;

    while (file.good()){

        for (int i = 0; i < 15; i++){

            getline(file, namem[i], ',');
            getline(file, idm [i], ',');
            getline(file, passm[i], '\n');
        }
    }

    cout << "Enter Management ID to Search For: ";
    cin >> word;
    cout<< "Name \t" << "ID \n";
    for (int j = 0; j < 15; j++){
        if (idm[j].find(word) != std::string::npos){
            cout << namem[j] << '\t' << idm[j] << endl;
            cout<< "-----------------------------------";
            count++;
        } //else {cout<< "404 NO USER FOUND";}
    }

    cout << endl;
}