#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
    char number = 72;

    char letter;
    letter = 'A';

    printf("%d\n", letter);
    printf("%c\n", number);

    const double pi = 3.14;

    std::cout << pi << std::endl;

    enum Rainbow
    {
        red = 5,
        white,
        black,
        yellow
    };
    using Car = enum Rainbow;
    Car CarColor = yellow;
    enum Rainbow Red = red;
    std::cout << CarColor << std::endl;
    std::cout << Red << std::endl;

    int top[10];
    top[0] = 2;
    top[1] = 4;
    std::cout << top[0] << std::endl;
    std::cout << top[1] << std::endl;

    char word[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';

    std::cout << word[0] << std::endl;
    std::cout << word[2] << std::endl;

    int ar[4][10];
    std::cout << ar << std::endl;
    char ar2[] = {'A', 'B', 'C', 'D', 'h', 'e', 'l', 'l', 'o'};
    std::cout << ar2 << std::endl;

    int a[5] = {0};
    std::cout << a << std::endl;

    struct cat
    {
        int hair;
        int age;
        char name[15];
        Rainbow color;
    };
    using Cat = struct cat;
    Cat barsik;
    barsik.age = 5;
    barsik.hair = 1000000;
    barsik.color = yellow;
    strcpy(barsik.name, "Barsik");
    std::cout << barsik.age << std::endl;
    std::cout << barsik.name << std::endl;

    struct Batman
    {
        int age;
        int colorhair;
        char name[20];
        Rainbow color;
    };
    using Superhero = struct Batman;
    Superhero batman;
    batman.age = 30;
    batman.colorhair = black;
    strcpy(batman.name, "Batman");
    std::cout << batman.age << std::endl;
    std::cout << batman.name << std::endl;

    union someValue
    {
        int in;
        char ch;
        double fl;
    };
    union someValue realValue;
    realValue.in = 70;
    std::cout << realValue.in << std::endl;
    std::cout << realValue.ch << std::endl;

    int f = 10;
    std::cout << f << std::endl;
    const double pi1 = 3.14;
    std::cout << pi1 << std::endl;

    enum Super
    {
        purple
    };

    using Top = enum Super;

    struct Superman
    {
        int age;
        char name[10];
        int hair;
        Top color;
    };

    using Man = struct Superman;
    Man paul;
    paul.age = 25;
    strcpy(paul.name, "Paul");
    paul.hair = 100000;
    paul.color = purple;
    std::cout << paul.hair << std::endl;
    std::cout << paul.name << std::endl;

    enum zero
    {
        zero = 1,
        Cross
    };

    enum zero Move, move;

    char[3][3]{
        {space, space, space}, {space, space, space}, {space, space, space}};
    return 0;
}