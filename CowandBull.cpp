#include "CowandBull.h"
using int32 = int;
FBullCountGame::FBullCountGame()
{
	Reset();
}

void FBullCountGame::Reset()
{
	//repeat trying guess
	constexpr int Max_Word = 8;
	MaxTry = Max_Word;

	//Hidden word
	const FString Hidden_Word = "ant";
	myHiddenWord = Hidden_Word;
	//int32 CurrentTries = 255;
	
	return ;
}

int32 FBullCountGame::MaxGuess()const
{
	
	return MaxTry;
}

bool FBullCountGame::isGameWon()const
{
	return false;
}

bool FBullCountGame::checkGuessValid(FString) const
{
	return false;
}



FBullCowCount FBullCountGame::SubmitGuess(FString Guess)
{
	//increment the value
	CurrentTries++;

	//setup return variable
	FBullCowCount BullCowCount;

	//loop through all letter
	int32 HidWordLength = myHiddenWord.length();
	int32 GuessWordLength = Guess.length();

	for (int32 i = 0; i < HidWordLength; i++)
	{
		for (int32 j = 0; j < GuessWordLength; i++)
		{
			if (Guess[i] == myHiddenWord[j])
			{
				if (i == i) {
					BullCowCount.Bulls++;
				}
				else {
					BullCowCount.Cows++;
				}
			}
		}

	}
	return FBullCowCount();
}

int32 FBullCountGame::GetCurrentTry()const
{
	
	return CurrentTries;//TODO decreasing current try everytime player input.
}
