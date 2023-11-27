//
// Created by Arwed on 11/26/2023.
//

#include <iostream>

#ifndef HANGMANN_DISPLAYHANGMANN_H
#define HANGMANN_DISPLAYHANGMANN_H

using namespace std;

class DisplayHangmann {

    char hangmann[5][8] = {
            {'_',' ','_',' ','_',' ','_',' '},
            {'|','/',' ',' ',' ',' ','|',' '},
            {'|',' ',' ',' ',' ',' ',' ',' '},
            {'|',' ',' ',' ',' ',' ',' ',' '},
            {'|',' ',' ',' ',' ',' ',' ',' '}
    };;
public:
    void DrawHangmann(){
        for(auto & row : hangmann){
            for(char col : row){
                cout << col;
            }
            cout << endl;
        }
    }
    void UpdateHangmann(int mistakes){
        switch (mistakes) {
            case 2:
                hangmann[2][6] = 'O';
                break;
            case 3:
                hangmann[3][6] = '|';
            case 4:
                hangmann[3][5] = '/';
                break;
            case 5:
                hangmann[3][7] = '\\';
                break;
            case 6:
                hangmann[4][5] = '/';
                break;
            case 7:
                hangmann[4][7] = '\\';
                break;
        }
    }
};


#endif //HANGMANN_DISPLAYHANGMANN_H
