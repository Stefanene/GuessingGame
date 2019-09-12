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
    random = rand() % 101;
    cout << "Guess the number:" << endl;
    cin >> input;
    while(input!=random) {
      if(input<random) {
        cout << "Your guess is too small." << endl;
        cout << "Enter again:" << endl;
        cin >> input;
        guesses++;
      }
       else if (input>random) {
         cout << "Your guess is too big." << endl;
         cout << "Enter again:" << endl;
         cin >> input;
         guesses++;
       }
    }
    cout << "Your guess of " << input << " was right!!" << endl;
    cout << "It took you " << guesses++ << " guesses to get it right." << endl;
    //play again
    cout << "Would you like to play again? y/n: " << endl;
    cin >> in;
    if(in == 'y') {
      play = true;
    } else if (in == 'n') {
      play = false;
    }
  }
}
