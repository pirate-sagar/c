#include <stdio.h>

int main()
{
    printf("%s", getStr());
    return 0;
}

const char* getStr()
{
    return "Hello World\n";
}