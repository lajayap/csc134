#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Lajaya Pryor
11/1/24
*/


void main_menu();
void choice_front_door();
void choice_back_door();
void choice_stay_inside();
void choice_explore_basement();
void choice_look_out_window();
void choice_go_home(); 

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0; 
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "You're stuck inside of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Escape through the front door" << endl;
  cout << "2. Escape through around back" << endl;
  cout << "3. Look out of the window" << endl;
  cout << "4. Explore the basement" << endl;
  cout << "5. [Quit]" << endl;
  cout << "Choose: ";
  
  int choice;
  cin >> choice;

  if (choice == 1) {
    choice_front_door();
  } else if (choice == 2) {
    choice_back_door();
  } else if (choice == 3) {
    choice_look_out_window(); 
  } else if (choice == 4) {
    choice_explore_basement(); 
  } else if (choice == 5) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

void choice_front_door() {
  cout << "You try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and stay in the spooky house" << endl;
  
  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    choice_back_door();
  } else if (choice == 2) {
    choice_stay_inside();
  } else {
    cout << "That's not a valid choice." << endl;
    choice_front_door(); 
  }
}

void choice_back_door() {
  cout << "You walk around to the back door." << endl;
  cout << "It creaks open slightly as you approach." << endl;
  cout << "Do you:" << endl;
  cout << "1. Enter through the back door" << endl;
  cout << "2. Leave and go home" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    cout << "You step outside the house and feel relieved" << endl;
    
  } else if (choice == 2) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice." << endl;
    choice_back_door(); 
  }
}

void choice_stay_inside() {
  cout << "You decide to stay inside. The darkness scare you." << endl;
  
  main_menu(); 
}

void choice_explore_basement() {
  cout << "You decide to explore the basement." << endl;
  cout << "It's dark and you hear strange noises." << endl;
  cout << "Do you:" << endl;
  cout << "1. Turn on your flashlight and explore" << endl;
  cout << "2. Leave the basement immediately" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    cout << "You turn on your flashlight and find a secret door!" << endl;
    
  } else if (choice == 2) {
    cout << "You quickly leave the basement and return upstairs." << endl;
    main_menu(); 
  } else {
    cout << "That's not a valid choice. Returning to the basement options." << endl;
    choice_explore_basement(); 
  }
}

void choice_look_out_window() {
  cout << "You look out the window and see a dark shadow approaching." << endl;
  cout << "Do you:" << endl;
  cout << "1. Jump out the window anyway" << endl;
  cout << "2. Stay inside and hide" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    cout << "You jump out of the window and land safely on the ground!" << endl;
    
  } else if (choice == 2) {
    cout << "You hide under the bed as the shadow reflects in the room." << endl;
   
  } else {
    cout << "That's not a valid choice. Returning to the window options." << endl;
    choice_look_out_window(); 
  }
}

void choice_go_home() {
  cout << "You decide it's better to be safe than sorry, and you head home." << endl;
  cout << "You feel relieved as you leave the spooky house behind." << endl;

}
