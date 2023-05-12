#define UP 0x57    //  'w'
#define LEFT 0x41  //  'a'
#define DOWN 0x53  //  's'
#define RIGHT 0x44 //  'd'
#define BUTTONA 0x4A //  'j'
#define BUTTONB 0x4B //  'k'
#define DELAY Sleep(100)
#define DELAYI Sleep(60)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

char BN3[][9] = {
    "23415891",
    "15789208",
    "54390805",
    "01697824",
    "90690648",
    "88543997",
    "67918452",
    "56892168",
    "99826471",
    "33157825",
    "95913876",
    "03284579",
    "21247895",
    "09234782",
    "87824510",
    "57789423",
    "86508964",
    "50098263",
    "65497812",
    "19878934",
    "24586483",
    "11002540",
    "28274283",
    "72563938",
    "77955025",
    "31549798",
    "76889120",
    "35331089",
    "05088930",
    "46823480",
    "63997824",
    "41465278"
};

char BN4[][9] = {
    "77038416",
    "25435428",
    "43494372",
    "05178924",
    "19095677",
    "75420107",
    "46292983",
    "57604335",
    "84625799",
    "59891137",
    "74293099",
    "30873642",
    "97618739",
    "37198940",
    "27979609",
    "02109544",
    "16589650",
    "45798331",
    "66703422",
    "73298100",
    "32108251",
    "24247309",
    "89866302",
    "10170506",
    "88019791",
    "00274304",
    "94872322",
    "02368995",
    "14769745",
    "03696458",
    "68009092",
    "72794137"
};

char BN5DS[][9] = {
    "99428938",
    "39285712",
    "91182599",
    "93867465",
    "29387483",
    "01285874",
    "12200120",
    "19283746",
    "78234329",
    "29486933",
    "64836563",
    "12495783",
    "76820385",
    "48582829",
    "22323856",
    "66426428",
    "53891756",
    "28475692",
    "90247428",
    "85375720",
    "31006002",
    "49092698",
    "42959693",
    "55591329",
    "15733751",
    "41248901"
};

char BN5[][9] = { "35607360", "73877466", "05068930", "44213168", "10386794", "25465278", "10133670", "63231870", "79877132", "30112002", "50364410", "80246758", "87412146", "15595587", "07765623", "68799876", "91098051", "83143652", "12118790", "90914896", "52052687", "68942679", "35321321", "31084443", "90630807", "48785625", "13926561", "03419893", "45654128", "50906652", "72846472", "29789661", "46551130", "52533649", "97513648", "18746897", "09609807", "57950199", "64892292", "28256341", "36695497", "12541883", "78987728", "30356451", "48958798", "54288793", "28706568", "64664560", "73978713", "00798216", "34513460" };

char BN6[][9] = { "71757977", "70741543", "24616497", "97049899", "28271002", "19790420", "94305487", "92070765", "51378085", "44892547", "12110031", "32310827", "57656595", "60884138", "79814666", "30424514", "08789369", "84387543", "87341489", "39345472", "45566783", "38116449", "10414878", "14212857", "12404002", "37889678", "49951337", "24823665", "54654618", "08749780", "55031325", "69544569", "98766899", "68008194", "16336487", "37495453", "88674125", "75641392", "32132348", "55910601", "79459146", "74198795", "15511679", "12046210", "09256524", "77837421", "41976910", "51702791", "69548756", "00297421", "23722234", "67520179", "97403000", "99910954", "82564319", "41161139", "04789479", "59485971", "22812406", "09000465" };

typedef void (*numbers)();

int countLines(char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "r") != 0) {
        printf("Error: Unable to open file %s\n", filename);
        return -1;
    }

    int lines = 0;
    char c;
    while ((c = getc(file)) != EOF) {
        if (c == '\n') {
            lines++;
        }
    }

    fclose(file);
    return lines+1;
}

void emergencyExitCheck()
{
    if (GetAsyncKeyState(VK_ESCAPE)) { exit(0); }
}

void doInput(int input)
{
    keybd_event(input, 0, 0, 0);
    DELAY;
    keybd_event(input, 0, KEYEVENTF_KEYUP, 0);
    DELAY;
}

void doInputI(int input)
{
    keybd_event(input, 0, 0, 0);
    DELAYI;
    keybd_event(input, 0, KEYEVENTF_KEYUP, 0);
    DELAYI;
}

void number0()
{
    doInputI(RIGHT);
}
void number1()
{
    doInputI(UP);
    doInputI(RIGHT);
}
void number2()
{
    doInputI(UP);
    doInputI(UP);
    doInputI(RIGHT);
}
void number3()
{
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(RIGHT);
}
void number4()
{
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(RIGHT);
}
void number5()
{
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(UP);
    doInputI(RIGHT);
}
void number6()
{
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(RIGHT);
}
void number7()
{
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(RIGHT);
}
void number8()
{
    doInputI(DOWN);
    doInputI(DOWN);
    doInputI(RIGHT);
}
void number9()
{
    doInputI(DOWN);
    doInputI(RIGHT);
}

numbers number[10] = { number0, number1, number2, number3, number4, number5, number6, number7, number8, number9 };

void begin()
{

    for (int i = 0; i < 6; i++) { doInput(BUTTONA); }
}

void confirm()
{
    //One A
    doInput(BUTTONA);
    //Ten B
    for (int i = 0; i < 10; i++) { doInput(BUTTONB); }
}

void startingMessage()
{
    printf("Please during the 5 Next sec click on the game and wait.\n");
    Sleep(1000);
    printf("5\n");
    Sleep(1000);
    emergencyExitCheck();
    printf("4\n");
    Sleep(1000);
    emergencyExitCheck();
    printf("3\n");
    Sleep(1000);
    emergencyExitCheck();
    printf("2\n");
    Sleep(1000);
    emergencyExitCheck();
    printf("1\n");
    Sleep(1000);
    emergencyExitCheck();
    printf("Wait now\t");
    printf("Reminder: IF YOU WANT TO STOP DE PROCESS DURGING THE OPERATION, HOLD THE [Esc] key!\n");
}

void explainMessage()
{
    printf("Hello! \thttps://dosprojectsblog.wordpress.com\n");
    printf("To use this script you must your controlls as the LC default, if you don't know them let's do a quick sumarize.\n");
    printf("UP=w\tA=j B=k\n");
    printf("LEFT=a\tDOWN=s\tRIGHT=d\n");
    printf("==================================================================\n");
    printf("Note that this script will use those keyboards inputs, so you can use it on emulator or Steam version or whatever.\n");
    printf("Also the inputs are optimised to be the quickest possible and 1 Lotto number takes around 6 seconds to be used.\n");
    printf("So for one game it should take around 60 minutes(Quick maths), also you can use the option 7 to input only specific Lotto numbers, for more informations read the guide and follow the example file structure.\n");
    printf("Press [ENTER] key to continue.");
    getchar();
    printf("\n\n\n\n\n");
}

void numberInput(char* numberCode)
{
    emergencyExitCheck();

    begin();

    //Size is 8
    //int numberCode = 24584658; //test

    for (int i = 0; i < 8; i++)
    {
        int digit = numberCode[i] - '0';
        number[digit]();
        emergencyExitCheck();
    }

    confirm();

    printf("Code: %s done.\n",numberCode);

}

void customInput()
{
    char *nomfichier = "custom_codes.txt";

    FILE* fp;
    char line[256];
    size_t len = sizeof(line);
    errno_t err = fopen_s(&fp, nomfichier, "r");
    if (err != 0 || fp == NULL)
    {
        printf("Error: The file can't be opened.\n");
        exit(EXIT_FAILURE);
    }
    int counter=0;
    int NumberLines = countLines(nomfichier);
    startingMessage();
    memset(line, 0, sizeof(line));
    while (fgets(line, len, fp) != NULL) 
    {
        // Removes the \n and \0
        size_t read = strlen(line);
        if (line[read - 1] == '\n') 
        {
            line[read - 1] = '\0';
        }
        numberInput(line);
        printf("Code number %d/%d done.\n\n", ++counter, NumberLines);
    }
    fclose(fp);
}


int main()
{

    int choice = 42;
    char input[3];

    while (choice != 0)
    {
        explainMessage();
        emergencyExitCheck();
        printf("There are 5 lotto database.\n\n");

        printf("For BN3 do(32 lotto numbers):\t3\n");
        printf("For BN4 do(32 lotto numbers):\t4\n");
        printf("For BN5 do(51 lotto numbers):\t5\n");
        printf("For BN5DS do(26 lotto numbers):\t55\n");
        printf("For BN6 do(60 lotto numbers):\t6\n");
        printf("If you want to load specific codes in specific order from the \"custom_codes.txt\" file, press\t7\n");
        printf("\nTo exit press:\t0\n");
        printf("==================================================================\n");
        printf("WARNING: IF YOU WANT TO STOP DE PROCESS DURGING THE OPERATION, HOLD THE [Esc] key!\n");
        printf("==================================================================\n");
        printf("Choice: \t");
        //scanf_s("%d%*c", &choice);
        fgets(input, 3, stdin);
        choice = atoi(input);
        printf("\n");
        if (choice == 0)
        {
            printf("End of the process. Thank you!\n");
            printf("PLUG OUT!");
            return(0);
        }

        switch (choice)
        {
        case 3:
            startingMessage();
            for (int i = 0; i < 32; i++) { numberInput(BN3[i]); printf("Code %d/32 done\n",i+1);}
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        case 4:
            startingMessage();
            for (int i = 0; i < 32; i++) { numberInput(BN4[i]); printf("Code %d/32 done\n",i+1);}
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        case 5:
            startingMessage();
            for (int i = 0; i < 51; i++) { numberInput(BN5[i]); printf("Code %d/51 done\n",i+1);}
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        case 55:
            startingMessage();
            for (int i = 0; i < 26; i++) { numberInput(BN5DS[i]);  printf("Code %d/26 done\n",i+1);}
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        case 6:
            startingMessage();
            for (int i = 0; i < 60; i++) { numberInput(BN6[i]); printf("Code %d/60 done\n",i+1);}
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        case 7:
            customInput();
            printf("All codes have been entered.\n");
            printf("PLUG OUT!");
            return(0);
            break;
        default:
            printf("==================================================================\n");
            printf("\n\tEnter a valid number or 0 to exit.\n");
            printf("==================================================================\n\n");
            Sleep(3000);
            break;
        }

    }

    printf("PLUG OUT!");
    return(0);

}