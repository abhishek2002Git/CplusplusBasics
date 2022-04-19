// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by programmer
#include "sum.h"

using namespace std;

int main()
{
    sum(7,11);  // "sum()" comes from "sum.h"
    return 0;
}


