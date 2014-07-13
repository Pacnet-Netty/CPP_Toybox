/*
	C++ Toybox Programs
	also known as majorly to completely useless programs made out of boredom

	"Pacnet Netty"

	Description: for no real reason, asks you for a number of people, and for each person
	asks you to enter an age for the person. Then asks you how many years should pass by and prints out the new
	age for every person after that many ('x') years have passed.
*/

#include <iostream>

int main()
{
	int numPeople; //integer for the number of people
	int numYears; //integer for the number of years that should pass by

	std::cout << "Number of people: \n";  //see how many people the user wants to play with
	std::cin >> numPeople;

	if(numPeople <= 0) //just close the program if the user wants to fool around
	{
		std::cout << "You have to have to enter at least one person...";
		return EXIT_FAILURE;
	}
	
	int * ages = new int[numPeople]; //here is a funny thing: you can't use variable-length arrays (VLAs) in C++11 so I will use a pointer to get around this

	for(int i = 0; i < numPeople; i++) //loop for each person to ask for an age for that person
	{
		std::cout << "Person " << i + 1 << "'s age: \n";
		std::cin >> ages[i]; //store it in the array
	}

	std::cout << "How many year(s) will pass? - \n";
	std::cin >> numYears;

	if(numYears <= 0) //just close the program if the user wants to fool around
	{
		std::cout << "You have to enter in at least one year...";
		return EXIT_FAILURE;
	}

	for(int i = 0; i < numPeople; i++) //now make a loop to print out each person's new age
	{
		std::cout << "\nPerson " << i + 1 << " is now " << ages[i] + numYears; //person 'x' is now (x's age) after the 'y' (number of years) has passed
	}

	std::cout << "\n\n"; //clean up the output

	system("PAUSE"); 
	return EXIT_SUCCESS;
}