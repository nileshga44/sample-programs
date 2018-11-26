/*
 * Date: 2018-10-06
 *
 * Description:
 * Basics operations with strings in C++.
 *
 * Compile:
 * g++ -std=c++0x main.cc
 *
 * -std=c++0x is added to use standard C++11 features.
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
  cout << str1 + str2 << endl;  // Happy Birthday!
  cout << str1[1] << endl;  // 'a'

  // Compare strings
  cout << str1.compare(str2) << endl;  // 1
  cout << str2.compare(str1) << endl;  // -1
  cout << str1.compare(str1) << endl;  // 0

  // String assignment
  string newString;
  cout << newString.empty() << endl;  // 1
  newString.assign(str1);
  cout << "newString is: " << newString << endl;  // newString is: Happy

  // To take input
  string myString;
  cout << "Enter a string: ";
  getline(cin, myString);  // 100
  cout << "You entered string: " << myString << endl;  // 100

  // string to int, same as atoi(), stod() can be used to convert string to
  // double
  int num;
  cout << "Enter a number: ";
  getline(cin, myString);  // 500
  num = stoi(myString);
  cout << "You entered number: " << num << endl;  // 500

  // To check string is empty or not
  cout << myString.empty() << endl;  // 0

  // To find size of string
  cout << myString.size() << endl;  // 3, as 500 has 3 chars

  // Other strings functions are:
  // string.assign(string, startIndex, EndIndex)
  // string.find(string, startIndex)
  // string.insert(index, string)
  // string.erase(startIndex, endIndex)
  // string.replace(startIndex, endIndex, string)
}
