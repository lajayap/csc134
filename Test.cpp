// M2T2
// Apple store part 2
// Lajaya Pryor
// 9/5/24

#include <iostream>
using namespace std;

int main() 
{ 
   // Appple store
  // declare variables
  string name;
  int numApples;
  double pricePerApple;

cout << "What is your name ?" << endl;
  cin >> name;
  cout << "How many apples are for sale?" << endl;
  cin >> numApples;
  cout << "How much per apple?" << endl;
  cin >> pricePerApple;
  
  
  // resemble prior m2t1 program
  cout << "Welcome to " << name << "'s apple store" << endl;
  cout << "We have " << numApples << " apples in stock." << endl;
  cout << "Price per apple is $" << pricePerApple << endl;
  // calculate 
   double totalCost = numApples * pricePerApple;
   cout << "Total cost of apples is $" << totalCost << endl;
   
  return 0;
}