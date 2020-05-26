// ex9.cpp  Rafal Moura
// Description:

#include <iostream>
using namespace std;

int  main()
{
  // variables
  char first_name[30], last_name[30],
  int  age;
  char file_name[20];
  //Collect the  Data
  cout << "Enter the First Name: "; cin >> first_name;
  cout << "Enter the Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;


  cout << endl << "Enter the name of the file: "; cin >> file_name;
  //Create an odstream called people, open the stream for output.
  ofstream People(file_name, ios::out);

  //Write the output to the stream.
  People << first_name << endl << last_name << endl age << endl;
  // Close the stream.
  People.close();

  // Create an ifstream to read the file.
  ifstream People_in(file_name);
  People_in >> first_name >> last_name >> age;

  cout << endl << "First Name: " << first_name;
  cout << endl << "Last Name:  " << last_name;
  cout << endl << "Enter Age:  " << age;
  cout << endl;

  // Close the stream.
  People_in.close();

  return 0;
}
