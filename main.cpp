//Generating a random number
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRandomNumber() {
    static bool seed_initialized = false;
    if (!seed_initialized) {
        std::srand(std::time(0));
        seed_initialized = true;
    }
    int min=1 ;
    int max =100;
    int rand_number = (rand() % (max - min + 1)) + min;
    return rand_number;
}
int main() {
    cout << "Random Number: " << getRandomNumber() << endl;
    
    return 0;
}