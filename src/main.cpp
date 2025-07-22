#include <iostream>
#include <cstdlib>
#include <ctime>

class Util {
    public:
        /*void exitNicely() {
            std::cout << "press any key to exit the program..." << std::endl;
            std::cin.get();
            exit(0);
        }*/

        void bad_number(int o){
            std::cout << "awhh, well this is bad :( you havent guessed the correct number, but im sure you can do it next time! :D" << std::endl;
            std::cout << "the number i was thinking of was " << o << std::endl;
        }

        int random_number_gen(int min, int max) {
            return min + (rand() % (max - min + 1));;
        }

        void print_cursor() {
            std::cout << ">> ";
        }
};

int main() {
    srand(time(0));
    Util utility;
    int choice{};
    const int easyAttempts = 10;
    const int mediumAttempts = 5;
    const int hardAttempts = 3;
    const int randomNumber = utility.random_number_gen(1, 100);
    std::cout << "Welcome to the Number Guessing Game!" <<std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    std::cout << "Please select the difficulty level:" << std::endl;
    std::cout << "1. Easy (" << easyAttempts << " chances)" << std::endl;
    std::cout << "2. Medium (" << mediumAttempts << " chances)" << std::endl;
    std::cout << "3. Hard (" << hardAttempts << " chances)" << std::endl;
    utility.print_cursor();
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "alright, easy it is. :)" << std::endl;

        for (int i = 1; i<=easyAttempts;i++) {
            int a{};
            std::cout << "attempt number "<< i << " out of " << easyAttempts << std::endl;
            utility.print_cursor();
            std::cin >> a;

            if (a == randomNumber) {
                std::cout << "wow! you have guessed the correct number! good job!" << std::endl;
                //utility.exitNicely();
                exit(0);
            }
            std::cout << "incorrect guess, dont stress, you still have " << easyAttempts-i << " attempts left" << std::endl;
            if (a > randomNumber) {
                std::cout << "the number you entered is bigger than that of what im thinking about." << std::endl;
            } else if (a < randomNumber) {
                std::cout << "the number you entered is smaller than that of what im thinking about." << std::endl;
            }
            
        }

        utility.bad_number(randomNumber);
        //utility.exitNicely();
        exit(0);
    case 2:
        std::cout << "average difficulty, thats okay :)" << std::endl;

        for (int i = 1; i<=mediumAttempts;i++) {
            int a{};
            std::cout << "attempt number "<< i << " out of " << mediumAttempts << std::endl;
            utility.print_cursor();
            std::cin >> a;

            if (a == randomNumber) {
                std::cout << "wow! you have guessed the correct number! good job!" << std::endl;
                //utility.exitNicely();
                exit(0);
            }
            std::cout << "incorrect guess, dont stress, you still have " << mediumAttempts-i << " attempts left" << std::endl;
            if (a > randomNumber) {
                std::cout << "the number you entered is bigger than that of what im thinking about." << std::endl;
            } else if (a < randomNumber) {
                std::cout << "the number you entered is smaller than that of what im thinking about." << std::endl;
            }
        }

        utility.bad_number(randomNumber);
        //utility.exitNicely();
        exit(0);
    case 3:
        std::cout << "a challenger, are you? :D" << std::endl;

        for (int i = 1; i<=hardAttempts;i++) {
            int a{};
            std::cout << "attempt number "<< i << " out of " << hardAttempts << std::endl;
            utility.print_cursor();
            std::cin >> a;

            if (a == randomNumber) {
                std::cout << "wow! you have guessed the correct number! good job!" << std::endl;
                //utility.exitNicely();
                exit(0);
            }
            std::cout << "incorrect guess, dont stress, you still have " << hardAttempts-i << " attempts left" << std::endl;
            if (a > randomNumber) {
                std::cout << "the number you entered is bigger than that of what im thinking about." << std::endl;
            } else if (a < randomNumber) {
                std::cout << "the number you entered is smaller than that of what im thinking about." << std::endl;
            }
        }

        utility.bad_number(randomNumber);
        //utility.exitNicely();
        exit(0);
    default:
        std::cout << "incorrect choice." << std::endl;
        exit(0);
    }
    return 0;
}
