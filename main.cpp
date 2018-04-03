#include<iostream>
#include<string>
#include"CowandBull.h"
#include "main.h"

using  FString = std::string;
using int32 = int;
FBullCountGame BCGame;

//Introduction of Guess
void PrintIntroduction()
{
	
	int32 WORD_LENGTH = 3;
	std::cout << "Welcome to Bull and Cows" << std::endl;
	std::cout << "Can you guess the hidden word? ";
}
FString StartGame()
{
	//TODO Reseting game
	BCGame.Reset();

	int32 MaxTries = BCGame.MaxGuess();
	for (int32 Count = 1; Count <= MaxTries; Count++)
	{
		
		//Input your guess
		std::cout << "Please input your guess word" << std::endl;
		FString Guess = "";

		//submit valid guess
		std::getline(std::cin, Guess);

		//repeat guess
		int32 CurrentTry = BCGame.GetCurrentTry();//TODO check valid guess recieve or retry
		std::cout << "Try Again = " << CurrentTry << std::endl;
		std::cout << "Your Guesss word is " + Guess << std::endl;
		
		//Bull and Cow counts
		FBullCowCount bullcowcount = BCGame.SubmitGuess(Guess);

		std::cout << "Bulls = " << bullcowcount.Bulls;
		std::cout << ". Cows = " << bullcowcount.Cows << std::endl;
	}


	return FString();
}
bool WantToPlayAgain()
{

	std::cout << "Do You Want To Play Again?" << std::endl;
	FString PlayAgain = "";
	std::getline(std::cin, PlayAgain);
	return (PlayAgain[0] == 'y') || (PlayAgain[0] == 'Y') ;

}
int main()
{
	
	bool playAgain = false;
	do {
		PrintIntroduction();
		StartGame();
		
		playAgain = WantToPlayAgain();
		
	} while (playAgain);

	return 0;
}
