//
// Created by Arwed on 11/27/2023.
//

#include "GameLogic.h"

vector<string> GameLogic::CreateWordsVector() {
    vector<string> temp;
    return temp;
}

string GameLogic::ReadFile() {
    string temp;
    ifstream iWordFile;
    iWordFile.open("words.txt");
    iWordFile >> temp;
    iWordFile.close();
    return temp;
}

string GameLogic::RandomWord() {
    return std::string();
}
