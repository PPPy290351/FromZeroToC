/*
Type           Size         Format
-----------------------------------
int        2/4(usually)    %d,%i
char            1            %c
float           4            %f
double          8           %lf
short int   2(usually)      %hd
unsigned int   2/4(usua)    %u
long int       4/8(usua)    %ld,%li 
long long int   8           %lld,%lli
unsigned long int   4       %lu
unsigned long long int  8   %llu
signed char     1           %c
unsigned char   1           %c
long double  10/(usua)12,16  %Lf 
*/

// ! Constans : const -> define a variable whose value cannot be changed
int main(int argc, char const *argv[])
{
    const double PI = 3.14; // @ read-only variable when "const"
    PI = 1.314; // Compile error 

    unsigned int x; // can hold values from 0 to 2^32-1
    int y; // can hold values from -2^31 to 2^31-1 (because take one bit to identify this is positive or negative number)
    long int abc = 2323;
    long long int a = 1000;
    unsigned long int b = 2000;
    long double c = 12.121212;
    printf("long long int : %d\n",sizeof(a));
    printf("unsigned long int : %d\n",sizeof(b));
    printf("long double : %d\n",sizeof(c));
    printf("long int : %d\n",sizeof(abc));
    //---------------------------------------
    int aaa = 10;
    int bbb = 033; // octal starts with a 0
    int ccc = 0x13; //  hexadecimal starts with a 0x
    double flfl = -0.22E-5;
    printf("%d %d %d %lf\n", aaa,bbb,ccc,flfl);
    //----------------------------------------
    //========== represented in exponential===========================
    float normalizationFactor = 22.442e2;
    // ! example : -0.22E-5  -->  E-5 = 10^-5
    // @ void type
    /*
    void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.
    For example, if a function is not returning anything, its return type should be void.
    Note that, you cannot create variables of void type.
    */
    // void cannotuse = 0; // ! incomplete type is not allowed
    return 0;
}
