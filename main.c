#include <stdio.h>
//Fucking Microsoft compiler
#define SCREEN_WIDTH 120
#define SCREEM_HEIGHT 30

char screen[SCREEN_WIDTH * SCREEM_HEIGHT + 1];

int min(num1, num2) { //ToDo: analysing bitwise realization
    if (num1 < num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int max(num1, num2) { //ToDo: analysing bitwise realization
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

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

void drawLine(int x1, int y1, int x2, int y2) {
    drawDot(x1, y1);
    /*for (int x = min(first_x, second_x))*/
    //printf(max(first_x, second_x));
    drawDot(x2, y2);
}

int main()
{
    screen[SCREEN_WIDTH * SCREEM_HEIGHT] = '\0';
    while (1)
    {
        fillScreen(' ');
        //drawLine(3, 3, 10, 10);
        updateScreen();
    }
    return 0;
}