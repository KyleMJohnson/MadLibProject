

#include <iostream>
#include <string>

int main()
{
	//little intro message
	std::cout << "Welcome to my MadLibs game!\n" << "Follow the instructions below to create your own MadLib!\n";

	//print the message requesting input to the console, then receive input from user for each word

	//adjective
	std::cout << "Enter a adjective: ";

	std::string adjective1;
	std::cin >> adjective1;

	//adjective
	std::cout << "Enter another adjective: ";

	std::string adjective2;
	std::cin >> adjective2;

	//type of bird
	std::cout << "Enter a type of bird: ";

	std::string typeOfBird;
	std::cin >> typeOfBird;

	//room in a house
	std::cout << "Enter a room in a house: ";

	std::string room;
	std::cin >> room;

	//verb (past tense)
	std::cout << "Enter a verb (past tense): ";

	std::string verbPast;
	std::cin >> verbPast;

	//verb
	std::cout << "Enter a verb: ";

	std::string verb;
	std::cin >> verb;

	//relative's name
	std::cout << "Enter a relative's name: ";

	std::string nameRelative;
	std::cin >> nameRelative;

	//noun
	std::cout << "Enter a noun: ";

	std::string noun1;
	std::cin >> noun1;

	//liquid
	std::cout << "Enter a liquid: ";

	std::string liquid;
	std::cin >> liquid;

	//verb ending in -ing
	std::cout << "Enter a verb ending in -ing: ";

	std::string verbIng1;
	std::cin >> verbIng1;

	//part of the body
	std::cout << "Enter a part of the body (plural): ";

	std::string bodyPart;
	std::cin >> bodyPart;

	//plural noun
	std::cout << "Enter a plural noun: ";

	std::string nounPlural;
	std::cin >> nounPlural;

	//verb ending in -ing
	std::cout << "Enter a verb ending in -ing: ";

	std::string verbIng2;
	std::cin >> verbIng2;

	//noun
	std::cout << "Enter a noun: ";

	std::string noun2;
	std::cin >> noun2;


	//print out the mad lib here.
	std::cout << "It was a " << adjective1 << ", cold November day.\n";
	std::cout << "I woke up to the " << adjective2 << " smell of " << typeOfBird << " roasting in the "
		<< room << " downstairs.\n";
	std::cout << "I " << verbPast << " down the stairs to see if I could help " << verb << " the dinner.\n";
	std::cout << "My mom said, \"See if " << nameRelative << " needs a fresh " << noun1 << ".\"\n";
	std::cout << "So I carried a tray of glasses full of " << liquid << " into the " << verbIng1 << " room.\n";\
		std::cout << "When I got there, I couldn't believe my " << bodyPart << "!\n";
	std::cout << "There were " << nounPlural << " " << verbIng2 << " on the " << noun2 << "!\n";

}