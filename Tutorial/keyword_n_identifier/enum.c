// Enumerated Type Declaration
enum boolean {false, true};
enum boolean check; //@ declaring an enum variable, variable "check" of the type enum boolean
// enum boolean {false, true} check; //! another way to declare enum variables, here false=0, true=1
//By default, const in enum start with 0 and increase by one
enum hello { AAA, BBB, CCC, DDD }; // 0->3
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
// can change default values of enum elements during declaration 
// ! first element index of enum is 0
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
};

// @ Use enum for "flags", check below
enum designFlags{
    security = 1,
    locked = 2,
    executable = 4
} kernel;

int main(int argc, char const *argv[])
{
    enum week today; // create "today" variable of enum week type
    today = Wednesday;
    printf("Day %d", today + 2);
    printf("\n");
    check = false;
    printf("check code : %d", check);
    printf("\n");
    enum suit instance;
    instance = hearts;
    printf("You buy the instance cost : %d", instance);
    printf("\n");

    // ! Why enums are used? *because an enum variable can take only one value.
    printf("Size of variable 'instance' of Enum suit : %d bytes", sizeof(instance));
    printf("\n");

    // @ Use enum for "flags"
    kernel = security | locked;
    /*
    security : 00000001
    locked   : 00000010
    --------------------
    or    ->   00000011 
    */
    printf("kernel extension : %d", kernel); // 3 , we could know that security and locked is used
    if(kernel & executable){
        printf("Oh, you are executable");
    }
    /* 
        00000001
        00000100
        ---------
        00000000
    */ // ! only print the executable when kernel enable the executable flag
    return 0;
}
