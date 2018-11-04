/*
 * Date: 2018-10-04
 *
 * Description:
 * Vectors in C++
 */

#include "iostream"
#include "vector"

using namespace std;

int main() {
  int n;
  int i;
  int a;
  vector<int> A;

  cout << "A.empty(): " << A.empty() << endl;  // 1, As vector is empty

  cout << "Enter number of elements: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Enter element[" << i << "]: ";
    cin >> a;
    A.push_back(a);  // Appends a at end of vector
  }
  cout << "Size of vector is: " << A.size() << endl;  // Number of elements in A

  cout << "Printing all elements in vector:" << endl;
  for (i = 0; i < A.size(); i++)
    cout << A[i] << " ";

  cout << endl << "A.max_size(): " << A.max_size() << endl;
  cout << "A.capacity(): " << A.capacity() << endl;

  // A.begin() gives reference to first element in vector, A.end() gives
  // reference to last element in vector
  cout << "Printing using begin() and end(): ";
  for (auto i = A.begin(); i != A.end(); i++)
    cout << *i << " ";

  // A.rbegin() gives reference to first element from last in vector and A.rend()
  // gives reference to last element from last(that is first element) in vector
  cout << endl << "Printing in reverse order using rbegin() and rend(): ";
  for (auto i = A.rbegin(); i != A.rend(); i++)
    cout << *i << " ";

  cout << endl << "A.empty(): " << A.empty() << endl;  // 0, Vector non empty

  i = 0;
  cout << "A[" << i << "]: " << A[i] << endl;  // Prints element at ith index

  A.pop_back();  // Removes last element

  A.insert(A.begin(), 100);  // Inserts 100 at first position
}


/*
 * Output:
 * -----------------------
 * A.empty(): 1
 * Enter number of elements: 3
 * Enter element[0]: 4
 * Enter element[1]: 1
 * Enter element[2]: 2
 * Size of vector is: 3
 * Printing all elements in vector:
 * 4 1 2 
 * A.max_size(): 4611686018427387903
 * A.capacity(): 4
 * Printing using begin() and end(): 4 1 2 
 * Printing in reverse order using rbegin() and rend(): 2 1 4 
 * A.empty(): 0
 * A[0]: 4
 */ 
