#include <stdio.h>
//Fuck Microsoft compiler
#define SCREEN_WIDTH 120
#define SCREEM_HEIGHT 30

char screen[SCREEN_WIDTH * SCREEM_HEIGHT + 1];

void fillScreen(char filling_symbol) {
    for (size_t y = 0; y < SCREEM_HEIGHT; y++) {
        for (size_t x = 0; x < SCREEN_WIDTH; x++) {
            screen[x + y * SCREEN_WIDTH] = filling_symbol;
        }
    }
}

void updateScreen() {
    printf("%s", screen);
    //char matrix[3][3] = { {'1', '1', '\n'}, {'2', '2', '\n'}, {'3', '3', '\0'}}; //Thing about it
    //printf("%s", matrix);
}

void drawDot(int x, int y) {
    screen[x + y * SCREEN_WIDTH] = '@';
}

int main()
{
    screen[SCREEN_WIDTH * SCREEM_HEIGHT] = '\0';
    while (1)
    {
        fillScreen(' ');
        updateScreen();
    }
    return 0;
}