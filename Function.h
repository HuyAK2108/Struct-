#include "stdio.h"
#include "stdlib.h"
#include "time.h"

__int32 rxbuff[200];


enum state{
    OK,
    FAIL,
    NG_SYSTEM,
};

struct Time{
    int hour;
    int minute;
    int second;
    int date;
    struct Program{
        int Program;
        int Cycle;
        int Valve1;
        int Valve2;
        int WaterNo;
        int mintime_h;
        int mintime_m;
        int before;
        int water;
        int after;
    };
    struct Parameter{
        double ph;
        int Amount;
    };
    struct test{
        int array[5];
    }test;
}Testing;



