#include <iostream>
using namespace std;

//clear && g++ trippleX.cpp -o trippleX && ./trippleX

void printIntroduction(int levelDifficulty){
  cout << "\nYou're a secret agent breaking into a level "<<levelDifficulty << " secured server room..\n";
  cout << "Enter the correct code to continue..\n";
}

bool playGame(int levelDifficulty)
{
  printIntroduction(levelDifficulty);

  const int a = rand() % (levelDifficulty + 1);
  const int b = rand() % (levelDifficulty + rand() % 6);
  const int c = rand() % (levelDifficulty + rand() % 7);

  const int sum = a + b + c;
  const int prod = a * b * c;

  cout << " + There are three numbers" << endl;
  cout << " + their sum is " << sum << endl;
  cout << " + their product is " << prod << endl;

  int playerGuessA, playerGuessB, playerGuessC;

  cout << " + Enter your choice : ";
  cin >> playerGuessA;
  cin >> playerGuessB;
  cin >> playerGuessC;
  cout << "\n You entered " << playerGuessA << " " << playerGuessB << " " << playerGuessC;

  int guessSum = playerGuessA + playerGuessB + playerGuessC;
  int guessProd = playerGuessA * playerGuessB * playerGuessC;

  cout << " + their sum is " << guessSum << endl;
  cout << " + their product is " << guessProd << endl;

  cout << endl;

  if (guessSum == sum)
  {
    cout << " + Good Job agent. Keep it going";
    cout << endl;
    return true;
  }
  else
  {
    cout << "  - oops you failed. Try again";
    cout << endl;
     return false;
    
  }

 
}

int main()
{
  int iDifficultyLevel = 1;

  const int iMaxLevel = 5;
  cout << endl;
  bool runGame = true;
  while (iDifficultyLevel <=iMaxLevel)
  {
    /* code */
    runGame = playGame(iDifficultyLevel);
    if(runGame){
      iDifficultyLevel++;
    }
    cin.clear();
    cin.ignore();
}

cout << " *** Great work agent. You got all the files. Now its time to get out of there ***";
return 0;
}