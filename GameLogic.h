//
// Created by Arwed on 11/27/2023.
//
#include<iostream>
#include<fstream>
#include <vector>



#ifndef HANGMANN_GAMELOGIC_H
#define HANGMANN_GAMELOGIC_H

using namespace std;

class GameLogic {

private:
    static bool ContainsCharacter(char *wordarray, char letter, int wordLength);
    static void PrintWordArray(char *wordArray, int wordLength);
    static string ReadFile();
    static vector<string> CreateWordsVector(const string& words);
    static void UpdateArray(char *wordArray, int postion, char letter);
public:
    static string RandomWord();
    static char *CreateWordArray(int wordLength);
    static int CheckUserInput(const string& randomWord, char *wordArray, int mistakes);
    static bool GameOver(char *wordArray, string randomWord, int mistakes);
};


#endif //HANGMANN_GAMELOGIC_H
