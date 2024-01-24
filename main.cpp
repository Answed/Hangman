#include <iostream>
#include "DisplayHangmann.h"
#include "GameLogic.h"
#include <string>

int main() {
    int mistakes = 0;
    string word = GameLogic::RandomWord();
    char *wordArray = GameLogic::CreateWordArray(word.length());

    while(mistakes < 6) {
        mistakes += GameLogic::CheckUserInput(word, wordArray, mistakes);
        if(GameLogic::GameOver(wordArray, word, mistakes)) {
            break;
        }
    }
    return 0;
};
