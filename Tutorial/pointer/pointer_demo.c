#include <stdio.h>

int hex2int(char * hex)
{
    int value = 0;
    while(*hex){
        unsigned char byte = *hex++;
        if(byte >= '0' && byte <= '9') byte -= '0';
        else if (byte >= 'a' && byte <= 'f') byte = byte - 'a' + 10;
        else if(byte >= 'A' && byte <= 'F') byte = byte -'A' + 10;
        value = (value << 4) | (byte & 0xF);   
    }
    return value;
}

int main(int argc, char const *argv[])
{
    int key_arr[32] = {0};
    int output[32] = {0};
    int secret_arr[8] = {0};
    int index = 0;

    char * key = "69EFA97810A2EC92A3E23E22A861C92A9CE65074942169A1640D35A6A6A47912";
    // @ will generate 32 pairs hex value
    char * secret = "7377757064617465";

    /* ============ Initialization ============ */
    
    for(int i=0; i<strlen(key); i+=2){
        char temp[2] = {0};
        for(int j=0; j<2; j++){
            temp[j] = *(key + i + j);
        }
        key_arr[index++] = hex2int(temp);
        // printf("[Calculate] : 0x%x\n", key_arr[index-1]);
    }

    index = 0;
    for(int i=0; i<strlen(secret); i+=2){
        char temp[2] = {0};
        for(int j=0; j<2; j++){
            temp[j] = *(secret + i + j);
        }
        secret_arr[index++] = hex2int(temp);
        // printf("[Calculate] : 0x%x\n", key_arr[index-1]);
    }

    /* ============ Calculation phase ============ */

    for(int i=0; i<32; i++){
        output[i] = key_arr[i] ^ secret_arr[i % 8];
    }




    for (int i = 0; i < 32; i++)
    {
        printf("%d : 0x%x -> 0x%x\n", i, key_arr[i], output[i]);
    }
    
    // char * string = "Hello";
    // unsigned char byte = *string++;
    // printf("%c", byte);
    return 0;
}
