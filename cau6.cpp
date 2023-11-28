#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coin {
private:
    string sideUp;
public:
    Coin() {
        srand(time(NULL)); // seed random number generator
        int randomNum = rand() % 2; // generate random number between 0 and 1
        if (randomNum == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }
    void toss() {
        int randomNum = rand() % 2; // generate random number between 0 and 1
        if (randomNum == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }
    string getSideUp() {
        return sideUp;
    }
};

int main() {
    Coin myCoin;
    cout << "The coin is initially facing " << myCoin.getSideUp() << "." << endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++) {
        myCoin.toss();
        cout << "Toss " << i+1 << ": " << myCoin.getSideUp() << endl;
        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}

