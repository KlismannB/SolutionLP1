#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void){
    int guess, correct;

    while(1){
    srand(time(NULL));

        correct = rand() % 100 + 1;
        cout << "Guess a number between 1 - 100" << endl;

        while(guess != correct){

            cin >> guess;

            if(guess > correct){
                cout << "It was too HIGH, please try again" << endl;
            }else if(guess <  correct){
                cout << "It was too LOW, please try again" << endl;
            }else{
                cout << "Congratulations!" << endl;
            }


        }

    }

    return 0;
}
