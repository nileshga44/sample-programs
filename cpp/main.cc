/*
 * Date: 2018-10-06
 *
 * Description:
 * Sample C++ program for input/output and string operations.
 *
 * Compile:
 * g++ main.cc
 *
 */

#include "iostream"

using namespace std;

int main() {

  // Print something
  cout << "Hello World!" << endl;

  // String can be combined using +
  string str1 = "Happy";
  string str2 = " Birthday!";
  cout << str1 + str2 << endl;

  // Compare strings
  cout << str1.compare(str2) << endl;
  cout << str2.compare(str1) << endl;
  cout << str1.compare(str1) << endl;

  // String assignment
  string newString;
  newString = str1.assign(str1);
  cout << "newString is: " << newString << endl;

  // To take input
  string myString;
  cout << "Enter a string: ";
  getline(cin, myString);
  cout << "You entered string: " << myString << endl;

  // string to int, same as atoi(), stod() can be used to convert string to
  // double
  int num;
  cout << "Enter a number: ";
  getline(cin, myString);
  num = stoi(myString);
  cout << "You entered number: " << num << endl;

  // To check string is empty or not
  cout << myString.empty() << endl;

  // To find size of string
  cout << myString.size() << endl;

  // Other strings functions are:
  // string.assign(string, startIndex, EndIndex)
  // string.find(string, startIndex)
  // string.insert(index, string)
  // string.erase(startIndex, endIndex)
  // string.replace(startIndex, endIndex, string)
}
