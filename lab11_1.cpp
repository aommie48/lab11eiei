#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";

    for (int i = 0; i < 3; i++) {
        cin.ignore();
    }

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int randomIndex = rand() % 9;

    cout << "You will get " << grades[randomIndex] << " in this 261102.";

    return 0;
}