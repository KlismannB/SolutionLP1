#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <time.h>

using namespace std;

int main(void){
    int turn;
    float f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, dice, i;

    while(1){
        printf("Type how many times it will roll the dice: ");
        cin >> turn;

        if(turn == 0){
            break;
        }

        srand (time(NULL));

        while(i != turn){
            dice = rand() % 6 + 1;

            if(dice == 1){
                f1++;
            }else if(dice == 2){
                f2++;
            }else if(dice == 3){
                f3++;
            }else if(dice == 4){
                f4++;
            }else if(dice == 5){
                f5++;
            }else{
                f6++;
            }

            i++;
        }

        if(turn != 0){

            cout << "The face 1: it felt " << f1 << " times, the probability of falling was: " << (f1*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;
            cout << "The face 2: it felt " << f2 << " times, the probability of falling was: " << (f2*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;
            cout << "The face 3: it felt " << f3 << " times, the probability of falling was: " << (f3*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;
            cout << "The face 4: it felt " << f4 << " times, the probability of falling was: " << (f4*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;
            cout << "The face 5: it felt " << f5 << " times, the probability of falling was: " << (f5*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;
            cout << "The face 6: it felt " << f6 << " times, the probability of falling was: " << (f6*100)/(f1 + f2 + f3 + f4 + f5 + f6) << "%" << endl;

        }
    }



    return 0;
}
