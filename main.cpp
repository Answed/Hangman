#include <iostream>
#include "DisplayHangmann.h"


int main() {
    DisplayHangmann pDisplayHangmann = *new DisplayHangmann();

    for (int i = 0; i <= 7; ++i) {
        pDisplayHangmann.UpdateHangmann(i);
        if(i > 0){
            pDisplayHangmann.drawHangmann();
        }

    }


    return 0;
}
