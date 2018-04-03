#pragma once
#include<string>

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Cows = 0;
	int32 Bulls = 0;
};
class FBullCountGame
{

	
public:
	FBullCountGame();
	 int32 MaxGuess()const;
	 bool isGameWon()const;
	 bool checkGuessValid(FString)const;

	 int32 GetCurrentTry()const;
	 FBullCowCount SubmitGuess(FString Guess);
	 void Reset();

private:
	int32 MaxTry ;
	int32 CurrentTries ;//going for constructor

	//my hidden word
	FString myHiddenWord;
};
