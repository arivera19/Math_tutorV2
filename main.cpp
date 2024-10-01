/****************************************************************************
Program:     MathTutorV2
Programmers:  Alejandro Rivera, Confidence Affang
Date:        8/30/2024
Description: An easy math tutor for young children. In version 2, it displays the
program intro, gets the users name, asks to select a variable (+,-,*,/), then ask a math problem
to the user,if the user entered the correct answer it will display "correct" and the
end of program message,else the answer is wrong it will display the correct answer and display the
end of program message.
***************************************************************************/

#include <iostream> //  for cin/cout
#include <string>   //  needed for string data types
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std; // so you dont have to type std:: in front of cin/cout/endl


int main() {
  int leftNum = 2;//
  int rightNum = 1;
  int userAns = 0;
  string userName = "unknown"; // this will store the user's name entered
  char math_symbol = '+';
  int correct_answer = 3;
  int temp = 2;
  int math_type = 1;
     //used the srand fuction to seed time since the development of C++ so that the random numbers generated are not the same
srand(time(0));

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

  leftNum = rand()%(10) + 1; //Assign random numbers to the variable left num between 1 and 10
  rightNum = rand()%(10) + 1; //Assign random numbers to the variable right num between 1 and 10

 // Getting user math type
 cout << "Enter the math type between (1-4) to select a math type (1-Addition 2-Subtraction 3-Multiplication 4-Division)" << endl;
 cin >> math_type;
switch(math_type){
     case 1: //If math type = 1
     math_symbol = '+'; // Math symbol will be assigned to +
     correct_answer = leftNum + rightNum;
     cout << "What is " << leftNum << " " <<  math_symbol << " " << rightNum << " = ";
     // This will put the users answer into the userAns variable
     cin >> userAns;
     cout << endl;
     if (userAns == correct_answer){ // If the user enters the correct answer it will display a congrats
          cout << "Congratulations on getting the answer correct" << endl;
     }
     else{ // If the user enters the wrong answer it will display the correct answer and positive reinforcement
          cout << "The correct answer is " << correct_answer << endl;
          cout << "Try again next time" << endl;
     }



     cout << "End of program." << endl;
     break; // This ends the switch statement a

     case 2: //If math type = 2
     math_symbol = '-'; // Math symbol will be assigned to -
     if (leftNum < rightNum){
          temp = leftNum;
          leftNum = rightNum;
          rightNum = temp;
     };
     correct_answer = leftNum - rightNum;
     cout << "What is " << leftNum << " " <<  math_symbol << " " << rightNum << " = ";
     // This will put the users answer into the userAns variable
     cin >> userAns;
     cout << endl;
     if (userAns == correct_answer){
          cout << "Congratulations on getting the answer correct" << endl;
     }
     else{
          cout << "The correct answer is " << correct_answer << endl;
          cout << "Try again next time" << endl;
     }



     cout << "End of program." << endl;
     break;
     case 3: //If math type = 3
     math_symbol = '*'; // Math symbol will be assigned to *
     correct_answer = leftNum * rightNum;
     cout << "What is " << leftNum << " " <<  math_symbol << " " << rightNum << " = ";
     // This will put the users answer into the userAns variable
     cin >> userAns;
     cout << endl;
     if (userAns == correct_answer){
          cout << "Congratulations on getting the answer correct" << endl;
     }
     else{
          cout << "The correct answer is " << correct_answer << endl;
          cout << "Try again next time" << endl;
     }



     cout << "End of program." << endl;
     break;
     case 4: //If math type = 4
     math_symbol = '/'; // Math symbol will be assigned to /
     correct_answer = leftNum;
     leftNum *= rightNum;
     correct_answer= leftNum / rightNum;
     cout << "What is " << leftNum << " " <<  math_symbol << " " << rightNum << " = ";
     // This will put the users answer into the userAns variable
     cin >> userAns;
     cout << endl;
     if (userAns == correct_answer){
          cout << "Congratulations on getting the answer correct" << endl;
     }
     else{
          cout << "The correct answer is " << correct_answer << endl;
          cout << "Try again next time" << endl;
     }

     cout << "End of program." << endl;
     default:
          //This displays when the variable number entered is not within the range
     cout << "Display error not in range of math_type" << endl;

     break;
}

  return 0; // end the program successfully with the return 0
}

