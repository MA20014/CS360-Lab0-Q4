#include <iostream>
using namespace std;
int main() {
  int r;
  cout << "Enter the number of rows" << endl;
  cin >> r;  //Integer value to read in the number of rows for the diamond shaped pattern
  int as = 0, ws = 0; // to check if its displaying the correct number of
                      // asterisk and white spaces
  int m = 1;
  // First part of the pattern
  for (int i = 0; i <= r; i++) {
    for (int j = r; j > i; j--) {
      cout << ' ';  //This line prints the white spaces
    }
    cout << '*';  //This line prints the asterisk
    as++;
    //The below if loop is to check if the value of i is greater than 0
    if (i > 0) {
      for (int k = 1; k <= m; k++) {
        cout << " ";
        ws++;
      }
      m += 2;  //This line increments the number of white spaces and asterisk
      cout << "*";
      as++;
    }
    cout << "      ASTERISK = " << as << " and WHITESPACE = " << ws;
    cout << endl;
    as = 0;
    ws = 0;
  }
  m = m - 4;  //This line decrements the number of white spaces and asterisk
  // Second part of the pattern
  for (int i = 0; i <= r - 1; i++) {
    for (int j = 0; j <= i; j++) {
      cout << " ";
    }
    cout << "*";
    // as++;
    //The below for loop is used to print the white spaces
    for (int k = 1; k <= m; k++) {
      cout << " ";
      //    ws++;
    }
    m -= 2;  //this line decrements and tells us that the sum of asterisk and whitespace characters should be 2 below the one for the previous line
    if (i != r - 1) //if this condition is true then it will execute the code in the if block
    {
      cout << "*";
      //    as++;
    }
    // cout<<"      ASTERISK = "<<as<<" and WHITESPACE = "<<ws;
    cout << endl;
    // as = 0;
    // ws = 0;
  }
}