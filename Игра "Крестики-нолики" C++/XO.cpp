#include <iostream>

int main()
{

    enum SYMBOLS
    {
        EMPTY = '_',
        PLAYER = 'X',
        AI = 'O'
    };

    SYMBOLS arr[3][3]{EMPTY};
    arr[0][0] = SYMBOLS::AI;
    arr[1][0] = SYMBOLS::PLAYER;
    arr[2][0] = SYMBOLS::EMPTY;
    std::cout << arr[1][1] << std::endl;
    std::cout << "ai" << (char)arr[0][0] << std::endl;
    std::cout << "em" << (char)arr[2][0] << std::endl;
    std::cout << "pl" << (char)arr[1][0] << std::endl;

    typedef struct
    {
        int szY;
        int szX;
        SYMBOLS map[3][3];
    } Arr;

    typedef struct
    {
        union Data
        {
            int x;
            char c;
            float f;
        } data;
        int ischar : 1;
        int isint : 1;
        int isfloat : 1;
    } Flagger;

    Flagger var;

    var.data.c = 'A';
    var.ischar = 1;
    var.isint = 1;
    var.isfloat = 0;

    return 0;
}