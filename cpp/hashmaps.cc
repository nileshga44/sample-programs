/*
 * Date: 2018-11-08
 *
 * Description:
 * Maps in C++
 */

#include "iostream"
#include "map"

using namespace std;

int main() {
  map<int, int> mp, mp1;
  
  cout << mp.size() << endl;  // 0
  cout << mp.empty() << endl;  // 1, Yes it is empty

  mp.insert({1, 10});

  cout << mp.size() << endl;  // 1

  cout << mp[1] << endl;  // 10
  cout << mp[100] << endl;  // 0, Creates an entry in map with key 100 and value 0 so prints 0
  cout << mp[-10] << endl;  // 0 

  cout << mp.size() << endl;  // 3, with keys - 1, 100 and 10

  cout << mp.empty() << endl;  // 0, Non empty

  mp[15] = 150;
  cout << mp[15] << endl;  // 150

  // Iterating map
  // Map is kept in sorted order with respect to keys
  map <int, int> :: iterator itr;
  cout << "\nKey\tValue" << endl;
  for (itr = mp.begin(); itr != mp.end(); itr++) {
    cout << itr->first << "\t" << itr->second << endl;
  }
  /*
   * Key	Value
   * -10	0
   * 1	10
   * 15	150
   * 100	0
   */

  // Iterating over mp1
  mp1.insert(mp.begin(), mp.end());
  cout << "\nKey\tValue" << endl;
  for (itr = mp1.begin(); itr != mp1.end(); itr++) {
    cout << itr->first << "\t" << itr->second << endl;
  }
  /*
   * Key	Value
   * -10	0
   * 1	10
   * 15	150
   * 100	0
   */

   // Check if key is present or not
   cout << endl << mp.count(15) << endl;  // 1, key 15 is present in map
   cout << mp.count(5) << endl;  // 0, key 5 is not present in map

   mp[15] = 1500;  // Updated value of key 15 to 1500
}
