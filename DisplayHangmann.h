//
// Created by Arwed on 11/26/2023.
//

#include <iostream>

#ifndef HANGMANN_DISPLAYHANGMANN_H
#define HANGMANN_DISPLAYHANGMANN_H

using namespace std;

class DisplayHangmann {

    char hangmann[5][7] = {
            {' ',' ',' ',' ',' ',' ',' '},
            {'|',' ',' ',' ',' ',' ',' ',},
            {'|',' ',' ',' ',' ',' ',' ',},
            {'|',' ',' ',' ',' ',' ',' ',},
            {'|',' ',' ',' ',' ',' ',' ',}
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
};


#endif //HANGMANN_DISPLAYHANGMANN_H
