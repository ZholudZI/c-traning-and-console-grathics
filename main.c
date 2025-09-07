#include <stdio.h>
//Я ебал ваш компилятор майкрософты
#define SCREEN_WIDTH 120
#define SCREEM_HEIGHT 30

void fillScreen(char * screen, char filling_symbol) {
    for (size_t y = 0; y < SCREEM_HEIGHT; y++) {
        for (size_t x = 0; x < SCREEN_WIDTH; x++) {
            screen[x + y * SCREEN_WIDTH] = filling_symbol;
        }
    }
}

void updateScreen(char * screen) {
    printf("%s", screen);
    //char matrix[3][3] = { {'1', '1', '\n'}, {'2', '2', '\n'}, {'3', '3', '\0'}}; //Стоит задуматься над этими строками
    //printf("%s", matrix);
}

void drawDot(char * screen, int x, int y) {
    screen[x + y * SCREEN_WIDTH] = '@';
}

int main()
{
    char screen[SCREEN_WIDTH * SCREEM_HEIGHT + 1]; // Осмыслить эту абстракцию
    screen[SCREEN_WIDTH * SCREEM_HEIGHT] = '\0';
    while (1)
    {
        fillScreen(screen, ' ');
        drawDot(screen, 0, 0);
        drawDot(screen, 119, 0);
        drawDot(screen, 0, 29);
        drawDot(screen, 119, 29);
        updateScreen(screen);
    }
    return 0;
}