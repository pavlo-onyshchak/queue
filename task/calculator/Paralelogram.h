#pragma once
#include"Basic.h"

class Paralelogram :public Basic
{
private:
    int first_side;
    int second_side;
    int height;
public:
    Paralelogram(int, int, int);
    int area()const;
    int perimetr()const;
};