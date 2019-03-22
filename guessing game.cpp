#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
	srand(time(NULL)); 
	
	while(true) {
		int number = rand() % 99 + 2;
		int guess; 
		int tries = 0; 
		char answer; 

		while(true) { 
			std::cout << "Enter a number between 1 and 100 (" << 20 - tries << " tries left): ";
			std::cin >> guess;
			std::cin.ignore();

			if(tries >= 20) {
				break;
			}
			
			if(guess > number) {
				std::cout << "Too high! Try again.\n";
			} else if(guess < number) {
				std::cout << "Too low! Try again.\n";
			} else {
				break;
			}

			tries++;
		}

		if(tries >= 20) {
			std::cout << "You ran out of tries!\n\n";
		} else {
			std::cout<<"Congratulations!! " << std::endl;
			std::cout<<"You got the right number in " << tries << " tries!\n";
		}
		
		while(true) { 
			std::cout << "Would you like to play again (Y/N)? ";
			std::cin >> answer;
			std::cin.ignore();

			if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
				break;
			} else {
				std::cout << "Please enter \'Y\' or \'N\'...\n";
			}
		}

		if(answer == 'n' || answer == 'N') {
			std::cout << "Thank you for playing!";
			break;
		} else {
			std::cout << "\n\n\n";
		}
	}

	std::cout << "\n\nEnter anything to exit. . . ";
	std::cin.ignore();
	return 0;
}
