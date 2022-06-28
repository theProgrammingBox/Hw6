/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #5 : Recursion
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/28/2022
 *************************************************************************/

#include "Header.h"

void Reverse(string &str, int start, int end);

void IReverse(string &str, int start, int end);

/**********************************************************
 *
 * Recursion
 *_________________________________________________________
 * This program will reverse some string or character array
 * using recursion given two indices (starting and ending).
 *_________________________________________________________
 * INPUT:
 *    str:      The string or character array
 *    start:    The starting index
 *    end:      The ending index
 *
 * OUTPUT:
 *   str:       The new string or character array
 ***********************************************************/

int main()
{
    string str = "abcdefghijklmnopqrstuvwxyz";
    cout << "String1: " << str << endl;
    int start, end;
    cout << "Enter the starting index: ";
    cin >> start;
    cout << "Enter the ending index: ";
    cin >> end;
    Reverse(str, start, end);
    cout << "Reversed string: " << str << "\n\n";
    str = "abcdefghijksrqponmltuvwxyz";
    IReverse(str, start, end);
    cout << "IReverse String1: " << str << endl;

    str = "abcdefghijksrqponmltuvwxyz";
    cout << "String2: " << str << endl;
    cout << "Enter the starting index: ";
    cin >> start;
    cout << "Enter the ending index: ";
    cin >> end;
    Reverse(str, start, end);
    cout << "Reversed string: " << str << "\n\n";
    str = "abcdefghijksrqponmltuvwxyz";
    IReverse(str, start, end);
    cout << "IReverse String2: " << str << endl;

    str = "abcdefghijksrqponmltuvwxyz";
    cout << "String3: " << str << endl;
    Reverse(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << "\n\n";
    str = "abcdefghijksrqponmltuvwxyz";
    IReverse(str, 0, str.length() - 1);
    cout << "IReverse String3: " << str << endl;
    return 0;
}

/*************************************************************************
 * Method Reverse: Class none
 * ----------------------------------------------------------------------
 * This function will reverse some string or character array using
 * recursion given two indices (starting and ending).
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		str:      The string or character array
 *      start:    The starting index
 *      end:      The ending index
 *
 * POST-CONDITIONS
 *      str:      The new string or character array is returned through
 *                the reference parameter str
 *************************************************************************/

void Reverse(string &str, int start, int end)
{
    if (start <= end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        Reverse(str, start + 1, end - 1);
    }
}

void IReverse(string &str, int start, int end)
{
    for (int i = start; i < end / 2; i++)
    {
        char temp = str[i];
        str[i] = str[end - i];
        str[end - i] = temp;
    }
}