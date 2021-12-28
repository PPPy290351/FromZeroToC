#include <stdlib.h>
#include <stdio.h>

// @ both of typo are acceptable
#define COMMAND(NAME) { #NAME, NAME##_command }
// #define COMMAND(NAME) { #NAME, NAME ## _command }

void HELLO_command() {
    printf("HELLO WORLD\n");
}
void WORLD_command() {
    printf("DEMO\n");
}

int main()
{
    struct command {
        char * name;
        void (*function)(void);
    };

    struct command cmd_array[] = {
        COMMAND( HELLO ),
        COMMAND( WORLD ),
    };

    printf("%s\n", cmd_array[1].name);
    cmd_array[1].function(); // print "DEMO"

    struct command *cmd_ptr = &cmd_array[0]; // ! need reference of
    printf("%s\n", cmd_ptr->name);
    cmd_ptr->function();

    return 0;
}