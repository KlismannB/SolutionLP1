#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int ar[23] = {0}, vote, nVotes = 0, i;

    cout << "Who is the best player?\n" << endl;

    while(1){

        printf("Number of the player: ");
        cin >> vote;

        ar[vote]++;

        if(vote == 0) break;

        if(vote < 1 || vote > 23) {
            cout << "That was an invalid number, please type a value between 1 and 23! Or, 0 to stop" << endl;
            continue;
        }



        nVotes++;
    }

        cout << "Voting results: \n" << endl;

        cout << "It were computed: " << nVotes << " votes" << endl;
        cout << "Player Votes \t\t" << "%" << endl;

        for(i = 1; i <= 23; i++){
            if(ar[i] != 0){
                printf("%d \t\t %d \t\t %.1f\n", i, ar[i], float(ar[i]*100)/nVotes);
            }
        }


    return 0;
}
