int B = 2;

void func(int **p)
{
    *p = &B;
}

int main() 
{
    printf("Main function\n");
    // ===============================
    // typedef void (*function)();
    // (* (function) (void *) 0)();

    // (*(void(*)())0)();
    // ===============================

    
    // @ const : address cannot be modified, so use const
    *(int * const)(0x0000000000601020) = 0xaa6;
    // ===============================

    // @ pointer to void
    void * Y;
    char a = *(char *)Y; // need to convert to (char *), because void doesn't know the memory space
    // ===============================

    int A = 1, C = 3;

    int * ptr = &A;
    func(&ptr); // give pointer to pointer
    // @ expand the lifetime for pointer ptr
    // ! if "ptr" only, then it will store it to register and restore it from register and push to local function stack.


    printf("ptr = %d\n", *ptr);
    // ===============================


    int x[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d, %d, %d, %d\n", x[4], *((x)+(4)), *((4)+(x)), 4[x]);
    // @ 1 -> 2 : C standard
    // @ 2 -> 3 : Commutative property (交換律)
    // @ 3 -> 4 == 2 -> 1 
    // Math definition is not same with C standard
    // ===============================

    
}