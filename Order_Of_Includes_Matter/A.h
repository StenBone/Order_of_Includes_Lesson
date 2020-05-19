#ifndef UNTITLED_A_H
#define UNTITLED_A_H

#define HEADER_ORDER_CORRECT true

#if HEADER_ORDER_CORRECT
#include "Constants.h"
#include "B.h"

#else
#include "B.h"
#include "Constants.h"

#endif

class A {
public:
    int a = A_VALUE;
};
#endif //UNTITLED_A_H
