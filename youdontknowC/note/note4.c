#include <stdio.h>

void (* funcPtr)(void);

void getVersion(void)
{

}

int main() 
{
    // No matter use & / * , it's a function designator
    (*printf)("%s\n", "=================");
    (*&*******&printf)("%s\n", "hello");
    (**&***&printf)("%s\n", "world");
    (******printf)("%s\n", "=================");
    // Lvalue, Locator; *& still function designator

    funcPtr = getVersion;
    printf("getVersion: 0x%x, funcPtr: 0x%x\n", getVersion, funcPtr);
    return 0;
}