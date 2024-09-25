/****************************************************************************
Program:     MathTutorV1
Programmer:  Alejandro Rivera
Date:        8/28/2024
replit URL:  https://replit.com/@arivera24/SimpleMathTutor#main.cpp
Description: An easy math tuto for young children. In version 1, it displays the
program intro, gets the users name, asks simple question, and then displays an
end of prgram message.
***************************************************************************/

#include <iostream> //  for cin/cout
#include <string>   //  needed for string data types
#include <cstdlib>
#include <ctime>
#include <studio.h>

using namespace std; // so you dont have to type std:: in front of cin/cout/endl

int main() {
  int leftNum = 2;
  int rightNum = 1;
  int userAns = 0;
  string userName = "unknown"; // this will store the user's name entered
  char math_symbol = "+";
  int correct_answer = 3;
  int temp = 2;
  int math_type = 1;
  

srand(leftNum);
srand(rightNum);

  

  // display the program header
  cout << "***********************************************************" << endl;
  cout << " __  __       _   _   _____      _             " << endl;
  cout << "|  \\/  | __ _| |_| |_|_   _|   _| |_ ___  _ __ " << endl;
  cout << "| |\\/| |/ _` | __| '_ \\| || | | | __/ _ \\| ‘__|" << endl;
  cout << "| |  | | (_| | |_| | | | || |_| | || (_) | |  " << endl;
  cout << "|_|  |_|\\____|\\__|_| |_|_| \\____|\\__\\___/|_|  " << endl;
  cout << endl;
  cout << "***********************************************************" << endl;
  cout << "   *       Welcome to the silly simple math tutor!     *" << endl;
  cout << "***********************************************************" << endl;
  cout << endl;

  // displays the math jokes and facts
  cout << "Funny math jokes and facts: " << endl;
  cout << endl;
  cout << "  * The product of any even number times two is always even!"
       << endl;
  cout << endl;
  cout << "  * Every even number times two is always divisible by four!"
       << endl;
  cout << endl;
  cout << "  * If you're cold, go to the corner of the room. It's 90 degrees "
          "there! "
       << endl;
  cout << endl;
  cout << "  * Why is 69 so scared of 70? Because once they fought, and 71."
       << endl;
  cout << endl;
  cout << "***********************************************************" << endl;
  cout << endl;

  // Gets the user's name and welcomes the user
  cout << "What is your name? ";
  cin >> userName;
  // After the user types their name, the program will display a welcome message
  cout << "Welcome " << userName << " to the silly simple math tutor!" << endl;

  leftNum = rand()%(10) + 1;
  rightNum = rand()%(10) + 1;
  math_type = rand()%(4) + 1;

switch(math_type)
  cout << "What is " << leftNum << " + " << rightNum << " = ";
  // This will put the users answer into the userAns variable
  cin >> userAns;
  cout << endl;

  cout << "Sorry, this is all the program does at the moment." << endl;

  cout << "Version 2 is coming soon." << endl;

  cout << "End of program." << endl;

  return 0; // end the program successfully with the return 0
}
// I did use AI to help figure out how to get the program to display the users
// name and Answer for the math problem not be 0.