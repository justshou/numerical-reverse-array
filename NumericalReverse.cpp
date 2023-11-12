#include <iostream>
using namespace std;

int main() {
  
  int size;  // initializes the int size for array
  
  cin >> size; // user input for size
  
  int nums[size]; // creates array
  
  for (int i = 0; i < size; i++) { // for the size of the array, allow the user to input numbers until the array is full
      cin >> nums[i];
  }
  
  for (int i = size - 1; i >= 0; i--) { // flip
      cout << nums[i] << " ";
  }
                   
  return 0;
}


