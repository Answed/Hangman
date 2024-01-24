//
// Created by Arwed on 11/27/2023.
//

#include "GameLogic.h"
#include <fstream>
#include <string>
#include <random>
#include <cstring>

#include "DisplayHangmann.h"

using namespace std;

char *GameLogic::CreateWordArray(int wordLength) {
    char *wordArray = new char [wordLength];
    for (int i = 0; i < wordLength; i++) {
        wordArray[i] = '-';
    }
    return wordArray;
}

void GameLogic::UpdateArray(char *wordArray, int postion, char letter) {
    wordArray[postion] = letter;
}

vector<string> GameLogic::CreateWordsVector(const string& words) {
    vector<string> wordsVector;
    string tempWord;
    for(char c : words){
        if (c == ' ' && !tempWord.empty()) {
            wordsVector.push_back(tempWord);
            tempWord = "";
        }
        else if (c != ' '){
            tempWord += c;
        }
    }
    return wordsVector;
}

string GameLogic::ReadFile() {
    string content;
    ifstream ifs(R"(C:\Users\arwed\Documents\Coden\Projekte\Hangman\words.txt)", ios::in);
    cout << ifs.is_open() << endl;
    if(ifs.is_open()) {
        string lineContent;
        while(getline(ifs, lineContent)) {
            content += lineContent;
        }
    }
    ifs.close();
    return content;
}

string GameLogic::RandomWord() {
    random_device dev;
    mt19937 rng(dev());
    const string AllWords = ReadFile();
    vector<string> WordsVector = CreateWordsVector(AllWords);
    uniform_int_distribution<mt19937::result_type> dist(0, WordsVector.size() - 1);
    return WordsVector[dist(rng)];
}

void GameLogic::PrintWordArray(char *wordArray, int wordLength) {
    for(int i = 0; i < wordLength; i++) {
        cout << wordArray[i];
    }
    cout << endl;
}

bool GameLogic::ContainsCharacter(char *wordarray, char letter, int wordLength) {
    for(int i = 0; i < wordLength; i++) {
        if(wordarray[i] == letter) {
            return true;
        }
    }
    return false;
}

bool GameLogic::GameOver(char *wordArray, string randomWord, int mistakes) {
    if (mistakes == 6) {
        cout << "You lost! The word was: " << randomWord << endl;
        return true;
    }
    else if (strcmp(wordArray, randomWord.c_str()) == 0) {
        cout << "You won!" << endl;
        return true;
    }
    else {
        return false;
    }
}


int GameLogic::CheckUserInput(const string& randomWord, char *wordArray, int mistakes) {
    char userInput;
    cin >> userInput;
    if(randomWord.contains(userInput) && GameLogic::ContainsCharacter(wordArray, userInput, randomWord.length())== false) {
        for(int i = 0; i < randomWord.length(); i++) {
            if(randomWord[i] == userInput) {
                UpdateArray(wordArray, i, userInput);
            }
        }
        GameLogic::PrintWordArray(wordArray, randomWord.length());
        return 0;
    }
    else {
        DisplayHangmann::UpdateHangmann(mistakes);
        return 1;
    }
}
