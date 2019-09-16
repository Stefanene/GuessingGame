//Program made by Stefan Ene; this is a Guessing Game; finished 9/10/2019
//Sources for some functions: cplusplus.com/reference/cstdlib/rand/


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  int input = 0;
  int random;
  int guesses = 1;
  bool play = true;
  char in;
  while (play) {
    guesses = 1;
    srand (time(NULL));
    cout << "Random number between 0 and 100 generated." << endl;
    //get random number
    random = rand() % 101;
    cout << "Guess the number:" << endl;
    cin >> input;
    while(input!=random) {
      //if guess is smaller
      if(input<random) {
        cout << "Your guess is too small." << endl;
        cout << "Enter again:" << endl;
        cin >> input;
	//increase number of guesses
        guesses++;
      }
      //if guess is bigger
      else if (input>random) {
         cout << "Your guess is too big." << endl;
         cout << "Enter again:" << endl;
         cin >> input;
	 //increment number of guesses
         guesses++;
       }
    }
    cout << "Your guess of " << input << " was right!!" << endl;
    cout << "It took you " << guesses++ << " guesses to get it right." << endl;
    //play again
    cout << "Would you like to play again? y/n: " << endl;
    bool yn = true;
    do {
      cin >> in;
      if(in == 'y') {
        //keep program running
        play = true;
        yn = true;
      } else if (in == 'n') {
        //end program at the end of loop
        play = false;
        yn = true;
      } else {
        //if input is not y or n
        cout << "Invalid input. Type y or n: " << endl;
        yn = false;
      }
    } while (!yn);
  }
}
