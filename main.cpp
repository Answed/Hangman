#include <iostream>
#include "DisplayHangmann.h"


int main() {
    DisplayHangmann pDisplayHangmann = *new DisplayHangmann();

    pDisplayHangmann.DrawHangmann();
    return 0;
}
