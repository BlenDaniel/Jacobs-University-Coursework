#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ACC_SIZE 100
#define MEM_SIZE 16

const int maxbit = sizeof(int) - 1;
char str[sizeof(int)];

char *itobin(int n, char *binstr)
{
    int i;
    for (i = 0; i <= maxbit; i++)
    {
        if (n & (1 << i))
        {
            binstr[maxbit - i] = '1';
        }
        else
        {
            binstr[maxbit - i] = '0';
        }
    }
    binstr[maxbit + i] = '\0';
    return binstr;
}

int mapHex(char c)
{
    switch (c)
    {
    case 'a':
        return 10;
        break;
    case 'b':
        return 11;
        break;
    case 'c':
        return 12;
        break;
    case 'd':
        return 13;
        break;
    case 'e':
        return 14;
        break;
    case 'f':
        return 15;
        break;
    default:
        return 0;
        break;
    }
}

void hexToBinary(char *hex, char *binary)
{
    char *hexadecimal;
    hexadecimal = malloc(sizeof(int) - 2);

    if (hex[0] == '0' && hex[1] == 'x')
    {
        strncpy(hexadecimal, hex + 2, strlen(hex) + 2);
        hexadecimal[strlen(hex) + 2] = '\0';
    }
    else
    {
        hexadecimal = hex;
    }

    for (int i = 0; i < 2; i++)
    {
        if (mapHex(hexadecimal[i]) == 0)
        {
            int num = hexadecimal[i] - '0';
            strcat(binary, itobin(num, str));
        }
        else
        {
            strcat(binary, itobin(mapHex(hexadecimal[i]), str));
        }
    }
    binary[8] = '\0';
}

void getMnemonic(char *mnemonic, char *binary)
{

    strncpy(mnemonic, binary, 4);
    mnemonic[3] = '\0';
}

char getOperand(char *binary)
{
    return binary[3];
}

void getMemoryAddress(char *memory, char *binary)
{

    memory[0] = '\0';
    strncpy(memory, binary + 4, 9);
    memory[4] = '\0';
}

char *operatorName(char *mnemonic)
{
    if (strcmp(mnemonic, "001") == 0)
    {
        return "LOAD";
    }
    else if (strcmp(mnemonic, "010") == 0)
    {
        return "STORE";
    }
    else if (strcmp(mnemonic, "011") == 0)
    {
        return "ADD";
    }
    else if (strcmp(mnemonic, "100") == 0)
    {
        return "SUB";
    }
    else if (strcmp(mnemonic, "101") == 0)
    {
        return "EQUAL";
    }
    else if (strcmp(mnemonic, "110") == 0)
    {
        return "JUMP";
    }
    else if (strcmp(mnemonic, "111") == 0)
    {
        return "HULT";
    }
    else
    {
        return "DATA";
    }
}

char getConstant(char c, char *mnemonic)
{
    if (strcmp(mnemonic, "000") == 0)
    {
        return '#';
    }
    else if (c == '0')
    {
        return ' ';
    }
    else
    {
        return '#';
    }
}

int getDecimal(char *binary)
{
    register char *p = binary;
    register int r = 0;
    while (p && *p)
    {
        r <<= 1;
        r += (int)((*p++) & 0x01);
    }
    return (int) r;
}

void getResults(char *hex)
{
    char *binary;
    binary = (char *)malloc(sizeof(char) * 8);
    if (!binary)
        perror("malloc failed"), exit(EXIT_FAILURE);
    binary[0] = '\0';

    char *mnemonic;
    mnemonic = (char *)malloc(sizeof(char) * 3);
    if (!mnemonic)
        perror("malloc failed"), exit(EXIT_FAILURE);
    mnemonic[0] = '\0';

    char *memoryAddress;
    memoryAddress = (char *)malloc(sizeof(char) * 3);
    if (!memoryAddress)
        perror("malloc failed"), exit(EXIT_FAILURE);

    hexToBinary(hex, binary);

    getMnemonic(mnemonic, binary);

    getMemoryAddress(memoryAddress, binary);

    printf("Hex:%s   Binary: %s   Assembly: %s %c%d\n", hex, binary, operatorName(mnemonic), getConstant(getOperand(binary), mnemonic), strcmp(memoryAddress, "0000") == 0 ? 0 : getDecimal(memoryAddress));
}

char* getValueOfData(char *hex){
    char *binary;
    binary = (char *)malloc(sizeof(char) * 8);
    if (!binary)
        perror("malloc failed"), exit(EXIT_FAILURE);
    binary[0] = '\0';

    char *memoryAddress;
    memoryAddress = (char *)malloc(sizeof(char) * 3);
    if (!memoryAddress)
        perror("malloc failed"), exit(EXIT_FAILURE);
    hexToBinary(hex, binary);

    getMemoryAddress(memoryAddress, binary);

    int x = getDecimal(memoryAddress);
    int length = snprintf( NULL, 0, "%d", x);
    char* str = malloc( length + 1 );
    snprintf( str, length + 1, "%d", x );
    return str;
}

int stringConverter(char* str){

}

int main()
{
    char HEX_ELEMENTS[][16] = {
        "2e",
        "b0",
        "d4",
        "e0",
        "2f",
        "6f",
        "4f",
        "2e",
        "91",
        "4e",
        "cb",
        "00",
        "00",
        "00",
        "06",
        "01",
    };

    char **accumulator;
    int accPosition = 0;

    accumulator = (char **)malloc(ACC_SIZE * sizeof(char));

    int pc = 0;

    char **mem;
    int memPosition = 0;
    mem = (char **)malloc(MEM_SIZE * sizeof(char));

    printf("ACC: ");
  

    for (int i = 0; i < 16; i++)
    {
        // getResults(HEX_ELEMENTS[i], accumulator, accPosition);
        char *binary;
        binary = (char *)malloc(sizeof(char) * 8);
        if (!binary)
            perror("malloc failed"), exit(EXIT_FAILURE);
        binary[0] = '\0';

        char *mnemonic;
        mnemonic = (char *)malloc(sizeof(char) * 3);
        if (!mnemonic)
            perror("malloc failed"), exit(EXIT_FAILURE);
        mnemonic[0] = '\0';

        char *memoryAddress;
        memoryAddress = (char *)malloc(sizeof(char) * 3);
        if (!memoryAddress)
            perror("malloc failed"), exit(EXIT_FAILURE);

        hexToBinary(HEX_ELEMENTS[i], binary);

        getMnemonic(mnemonic, binary);

        getMemoryAddress(memoryAddress, binary);

        printf("Hex:%s   Binary: %s   Assembly: %s %c%d\n", HEX_ELEMENTS[i], binary, operatorName(mnemonic), getConstant(getOperand(binary), mnemonic), strcmp(memoryAddress, "0000") == 0 ? 0 : getDecimal(memoryAddress));

    

        if (strcmp(mnemonic, "001") == 0)
        {
            //LOAD
            if (getOperand(binary) == '1')
            {
                accumulator[accPosition] = memoryAddress;
                accPosition++;
            }
            else
            {
                accumulator[accPosition] = getValueOfData(HEX_ELEMENTS[getDecimal(memoryAddress)]);
            }
        }
        else if (strcmp(mnemonic, "010") == 0)
        {
            //"STORE";
            mem[memPosition] = accumulator[accPosition-1];
            memPosition++;

        }
        else if (strcmp(mnemonic, "011") == 0)
        {
            // "ADD";
            if (getOperand(binary) == '1')
            {
                accumulator[accPosition] = ((int)strtol(accumulator[accPosition - 1], (char **)NULL, 10)) + getDecimal(memoryAddress);
                accPosition++;
            }
            else
            {
                accumulator[accPosition] = ((int)strtol(accumulator[accPosition - 1], (char **)NULL, 10)) +  getValueOfData(HEX_ELEMENTS[getDecimal(memoryAddress)]);
            }
        }
        else if (strcmp(mnemonic, "100") == 0)
        {
            // "SUB";
            if (getOperand(binary) == '1')
            {
                accumulator[accPosition] = ((int)strtol(accumulator[accPosition - 1], (char **)NULL, 10)) - ((int)strtol(getDecimal(memoryAddress), (char **)NULL, 10));
                accPosition++;
            }
            else
            {
                accumulator[accPosition] = ((int)strtol(accumulator[accPosition - 1], (char **)NULL, 10)) - ((int)strtol(getValueOfData(HEX_ELEMENTS[getDecimal(memoryAddress)]), (char **)NULL, 10));
            }
        }
        else if (strcmp(mnemonic, "101") == 0)
        {
            return "EQUAL";
        }
        else if (strcmp(mnemonic, "110") == 0)
        {
            return "JUMP";
        }
        else if (strcmp(mnemonic, "111") == 0)
        {
            return "HULT";
        }
        else
        {
            return "DATA";
        }
    }

    /*
    printf("Value is now %s\n", binary); 
   
    printf("mnemonic is now %s\n", mnemonic);    
    
    printf("memoryAddress is now %s\n", memoryAddress);
    
    */
    /*if (strcmp(mnemonic, "001") == 0)
    {

        if (getOperand(binary) == '1')
        {

            accumulator[accPosition] = memoryAddress;
            accPosition++;
        }
    }

    for (int i = 0; i < accPosition; i++)
    {
        printf("ACC:  %s", accumulator[i]);
    }
*/

    return 0;
}