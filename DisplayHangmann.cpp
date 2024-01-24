//
// Created by Arwed on 11/26/2023.
//

#include "DisplayHangmann.h"

char hangmann[5][8] = {
        {'_',' ','_',' ','_',' ','_',' '},
        {'|','/',' ',' ',' ',' ','|',' '},
        {'|',' ',' ',' ',' ',' ',' ',' '},
        {'|',' ',' ',' ',' ',' ',' ',' '},
        {'|',' ',' ',' ',' ',' ',' ',' '}
};

void DisplayHangmann::drawHangmann() {
    for(auto & row : hangmann){
        for(char col : row){
            cout << col;
        }
        cout << endl;
    }
};

void DisplayHangmann::UpdateHangmann(int mistakes) {
    switch (mistakes) {
        case 0:
            hangmann[2][6] = 'O';
            break;
        case 1:
            hangmann[3][6] = '|';
            break;
        case 2:
            hangmann[3][5] = '/';
            break;
        case 3:
            hangmann[3][7] = '\\';
            break;
        case 4:
            hangmann[4][5] = '/';
            break;
        case 5:
            hangmann[4][7] = '\\';
            break;
    }
    DisplayHangmann::drawHangmann();
}
