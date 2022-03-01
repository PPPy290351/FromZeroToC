
struct { int a,b,c,d; } arr[10];
int calendar[12][31];

int main() 
{
    int *ptr1, value;
    int * ptr;
    int* ptr2, hello; // @ [Not recommend]
    // because it will misunderstanding what is the hello
    hello = 10;
    printf("hello : %d\n", hello);
    // "hello" is int type, not int pointer

    ptr = ptr1 = ptr2 = &hello;
    printf("ptr : %d %d %d\n", *ptr, *ptr1, *ptr2);
}