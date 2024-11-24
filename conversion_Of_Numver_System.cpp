#include<iostream>
#include<cmath>
#include<string>
#include<stdio.h>

using namespace std;

// Main Conversion List
void Show_Conversion_List()
{
    cout << endl;
    cout << "\n--------------------------------------\n";
    cout << "Please select from the below list which conversion you want to do:\n";
    cout << "--------------------------------------\n";
    cout << "1) Binary Conversion\n";
    cout << "2) Octal Conversion\n";
    cout << "3) Decimal Conversion\n";
    cout << "4) Hexadecimal Conversion\n";
    cout << "5) Exit\n";
    cout << "--------------------------------------\n";
}

// Sub Main Conversion List for Binary
void Show_Conversion_List1()
{
    cout << "\n-------------------------\n";
    cout << "1) Binary to Decimal\n";
    cout << "2) Binary to Octal\n";
    cout << "3) Binary to Hexadecimal\n";
    cout << "4) Exit\n";
    cout << "-------------------------\n";
    cout << "NOTE: When entering a binary number, the base is 2, so only enter 0 or 1.\n";
}

// Sub Main Conversion List for Octal
void Show_Conversion_List2()
{
    cout << "\n-------------------------\n";
    cout << "1) Octal to Binary\n";
    cout << "2) Octal to Decimal\n";
    cout << "3) Octal to Hexadecimal\n";
    cout << "4) Exit\n";
    cout << "-------------------------\n";
    cout << "NOTE: When entering an octal number, the base is 8, so enter digits 0-7.\n";
}

// Sub Main Conversion List for Decimal
void Show_Conversion_List3()
{
    cout << "\n-------------------------\n";
    cout << "1) Decimal to Binary\n";
    cout << "2) Decimal to Octal\n";
    cout << "3) Decimal to Hexadecimal\n";
    cout << "4) Exit\n";
    cout << "-------------------------\n";
    cout << "NOTE: When entering a decimal number, the base is 10, so enter digits 0-9.\n";
}

// Sub Main Conversion List for Hexadecimal
void Show_Conversion_List4()
{
    cout << "\n-------------------------\n";
    cout << "1) Hexadecimal to Binary\n";
    cout << "2) Hexadecimal to Decimal\n";
    cout << "3) Hexadecimal to Octal\n";
    cout << "4) Exit\n";
    cout << "-------------------------\n";
    cout << "NOTE: When entering a hexadecimal number, the base is 16, so enter digits 0-9 and A-F.\n";
}

// Binary to Decimal Conversion
void First_Conversion()
{
    int bin, num, rem, i = 0, des = 0;
    cout << "Enter a Binary value: ";
    cin >> bin;
    num = bin;
    while (num > 0)
    {
        rem = num % 10;
        des = des + rem * pow(2, i);
        i++;
        num = num / 10;
    }
    cout << "Decimal value of " << bin << " is: " << des << endl;
}

// Binary to Octal Conversion
void Second_Conversion()
{
    int bin, num, rem, des = 0, i = 0, oct[20], temp, j;
    cout << "Enter a Binary value: ";
    cin >> bin;
    num = bin;
    while (num > 0)
    {
        rem = num % 10;
        des = des + rem * pow(2, i);
        i++;
        num = num / 10;
    }
    i = 1;
    temp = des;
    while (temp > 0)
    {
        oct[i++] = temp % 8;
        temp = temp / 8;
    }
    cout << "Octal value is: ";
    for (j = i - 1; j > 0; j--)
    {
        cout << oct[j];
    }
    cout << endl;
}

// Binary to Hexadecimal Conversion
void Third_Conversion()
{
    int bin, num, rem, des = 0, i = 0, j = 0;
    char hexa[100];
    cout << "Enter a Binary value: ";
    cin >> bin;
    num = bin;
    while (num > 0)
    {
        rem = num % 10;
        des = des + rem * pow(2, i);
        i++;
        num = num / 10;
    }
    i = 0;
    rem = 0;
    while (des > 0)
    {
        rem = des % 16;
        if (rem < 10)
        {
            hexa[i] = rem + 48;
        }
        else
        {
            hexa[i] = rem + 55;
        }
        i++;
        des = des / 16;
    }
    cout << "Hexadecimal value is: ";
    for (j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
    cout << endl;
}

// Octal to Binary Conversion
void Fourth_Conversion()
{
    int oct = 0, num, rem, deci = 0, bin = 0, i = 0;
    cout << "Enter an Octal value: ";
    cin >> oct;
    num = oct;
    while (num > 0)
    {
        rem = num % 10;
        deci = deci + rem * pow(8, i);
        i++;
        num = num / 10;
    }
    i = 1;
    while (deci != 0)
    {
        bin += (deci % 2) * i;
        deci /= 2;
        i *= 10;
    }
    cout << "Binary value is: " << bin << endl;
}

// Octal to Decimal Conversion
void Fifth_Conversion()
{
    int oct = 0, num, rem, deci = 0, i = 0;
    cout << "Enter an Octal value: ";
    cin >> oct;
    num = oct;
    while (num > 0)
    {
        rem = num % 10;
        deci = deci + rem * pow(8, i);
        i++;
        num = num / 10;
    }
    cout << "Decimal value is: " << deci << endl;
}

// Octal to Hexadecimal Conversion
void Sixth_Conversion()
{
    int a;
    printf("Enter any Octal number: ");
    scanf("%o", &a);
    printf("Hexadecimal value is: %x\n", a);
}

// Decimal to Binary Conversion
void Seventh_Conversion()
{
    int dec = 0, num, bin = 0, i = 1;
    cout << "Enter a Decimal value: ";
    cin >> dec;
    num = dec;
    while (num > 0)
    {
        bin += (num % 2) * i;
        num /= 2;
        i *= 10;
    }
    cout << "Binary value is: " << bin << endl;
}

// Decimal to Octal Conversion
void Eighth_Conversion()
{
    int dec, num, oct[20], i = 1, j;
    cout << "Enter a Decimal value: ";
    cin >> dec;
    num = dec;
    while (num > 0)
    {
        oct[i++] = num % 8;
        num = num / 8;
    }
    cout << "Octal value is: ";
    for (j = i - 1; j > 0; j--)
    {
        cout << oct[j];
    }
    cout << endl;
}

// Decimal to Hexadecimal Conversion
void Nineth_Conversion()
{
    int dec, num, rem, i = 1, j;
    char hexa[100];
    cout << "Enter a Decimal value: ";
    cin >> dec;
    num = dec;
    while (num > 0)
    {
        rem = num % 16;
        if (rem < 10)
        {
            hexa[i] = rem + 48;
        }
        else
        {
            hexa[i] = rem + 55;
        }
        num = num / 16;
    }
    cout << "Hexadecimal value is: ";
    for (j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
    cout << endl;
}

// Hexadecimal to Binary Conversion
void Tenth_Conversion()
{
    string hexInput;
    cout << "Enter a Hexadecimal number: ";
    cin >> hexInput;

    cout << "Binary value is: ";
    for (char hexDigit : hexInput)
    {
        switch (hexDigit)
        {
        case '0': cout << "0000"; break;
        case '1': cout << "0001"; break;
        case '2': cout << "0010"; break;
        case '3': cout << "0011"; break;
        case '4': cout << "0100"; break;
        case '5': cout << "0101"; break;
        case '6': cout << "0110"; break;
        case '7': cout << "0111"; break;
        case '8': cout << "1000"; break;
        case '9': cout << "1001"; break;
        case 'A': case 'a': cout << "1010"; break;
        case 'B': case 'b': cout << "1011"; break;
        case 'C': case 'c': cout << "1100"; break;
        case 'D': case 'd': cout << "1101"; break;
        case 'E': case 'e': cout << "1110"; break;
        case 'F': case 'f': cout << "1111"; break;
        default: cout << "\nInvalid Hexadecimal digit"; return;
        }
    }
    cout << endl;
}

// Hexadecimal to Decimal Conversion
void Eleventh_Conversion()
{
    int a;
    printf("Enter any Hexadecimal number: ");
    scanf("%x", &a);
    printf("Decimal value is: %d\n", a);
}

// Hexadecimal to Octal Conversion
void Twelfth_Conversion()
{
    int a;
    printf("Enter any Hexadecimal number: ");
    scanf("%x", &a);
    printf("Octal value is: %o\n", a);
}

// Main Function
int main()
{
    int choice, subChoice;
    
    while (true)
    {
        Show_Conversion_List();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            Show_Conversion_List1();
            cout << "Enter your choice: ";
            cin >> subChoice;
            switch (subChoice)
            {
            case 1: First_Conversion(); break;
            case 2: Second_Conversion(); break;
            case 3: Third_Conversion(); break;
            case 4: break;
            }
            break;
        case 2:
            Show_Conversion_List2();
            cout << "Enter your choice: ";
            cin >> subChoice;
            switch (subChoice)
            {
            case 1: Fourth_Conversion(); break;
            case 2: Fifth_Conversion(); break;
            case 3: Sixth_Conversion(); break;
            case 4: break;
            }
            break;
        case 3:
            Show_Conversion_List3();
            cout << "Enter your choice: ";
            cin >> subChoice;
            switch (subChoice)
            {
            case 1: Seventh_Conversion(); break;
            case 2: Eighth_Conversion(); break;
            case 3: Nineth_Conversion(); break;
            case 4: break;
            }
            break;
        case 4:
            Show_Conversion_List4();
            cout << "Enter your choice: ";
            cin >> subChoice;
            switch (subChoice)
            {
            case 1: Tenth_Conversion(); break;
            case 2: Eleventh_Conversion(); break;
            case 3: Twelfth_Conversion(); break;
            case 4: break;
            }
            break;
        case 5: 
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
