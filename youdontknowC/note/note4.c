#include <stdio.h>

int main() 
{
    // No matter use & / * , it's a function designator
    (*printf)("%s\n", "=================");
    (*&*******&printf)("%s\n", "hello");
    (**&***&printf)("%s\n", "world");
    (******printf)("%s\n", "=================");
    // Lvalue, Locator; *& still function designator
}