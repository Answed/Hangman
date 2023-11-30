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

    vector<string> words = CreateWordsVector();
private:
    static string ReadFile();
    static vector<string> CreateWordsVector();
public:
    string RandomWord();
};


#endif //HANGMANN_GAMELOGIC_H
