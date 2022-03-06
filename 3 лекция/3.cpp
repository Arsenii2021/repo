#include <iostream>

int main()
{
    //присваивание
    int i = 10;
    std::cout << i << std::endl;

    int x;
    x = 10;
    std::cout << x << std::endl;

    //арифметика

    // int - только целые числа
    int i0 = 10;
    int i1 = 3;
    int i2 = i0 / i1; // целочисленное деление
    int i6 = i1 % i0; // остаток от целочисленного деления
    std::cout << i2 << std::endl;
    std::cout << i6 << std::endl;
    int b2 = 10;
    b2++;
    std::cout << b2++ << std::endl;
    std::cout << b2++ << std::endl;
    // float - число с .
    int i3 = 10;
    float i4 = 3;
    float i5 = i4 / i3;
    std::cout << i5 << std::endl;

    // сравнение ==
    double d0 = 0.1;
    double d1;
    for (int incr = 0; incr < 10; incr++)
    {
        d1 += 0.01;
    }
    std::cout << d0 << " " << d1 << std::endl; // вывод сложения операции (через отладчик - цифры разные)
    std::cout << (d0 == d1) << std::endl;

    int fieldsize = 3;
    int humancoordinat = 5;

    //Сравнение (&& - and, || - or, ! - not)
    std::cout << (humancoordinat < fieldsize && humancoordinat >= 0) << std::endl;

    // побитовые операции (~ ^ & | >> <<)
    // << - сдвиг (n*2)
    // 15 << 2 (15*2*2=60)
    int b3 = 12;
    b3 += 5; // b3 = b3 + 5;
    std::cout << b3 << std::endl;

    //тернарный оператор(оператор выбора)(?:)
    int b4 = (b2 < b3) ? 10 : 5;
    std::cout << b4 << std::endl;
    // sizeof(сколько в памяти занимает тип данных)
    std::cout << (sizeof(int)) << std::endl;
    std::cout << (sizeof(double)) << std::endl;
    // typecast
    char c0 = 15;
    int i20 = c0;
    std::cout << i20 << std::endl;
    char c1 = (char)i20; // C-style cast (сжимаем 4 байта до 1 байта);
    char *p = &c0;
    printf("%p\n", p);                //указатель(сохранили адрес c0);
    printf("%d\n", *p);               // плучаем доступ к переменной;
    printf("%p\n", &c1);              //адрес;
    char c2 = static_cast<char>(i20); // C++ - style cast;

    //арифметика указателей
    int *p0 = &i20;
    printf("%p\n", p0);
    printf("%d\n", *p0);
    p0++; // смещаемся на 4 байта (int);
    printf("%p\n", p0);
    printf("%d\n", *p0);

    // указатели на массивы, структуры, на указатели
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << arr[0] << std::endl;
    std::cout << *(arr + 0) << std::endl;

    typedef struct
    {
        union Data
        {
            int o;
            char l;
            float n;
        } data;
        int isInt : 1;
        int isChar : 1;
        int isFloat : 1;
    } Flagged;

    Flagged *var;
    var->data.o = 'A';
    var->isInt = 1;
    var->isChar = 1;
    var->isFloat = 0;
    std::cout << var->data.l << std::endl;
    return 0;
}