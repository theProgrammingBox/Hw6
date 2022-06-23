/*
HW06 - Recursion
1.  Obtain the following string: abcdefghijklmnopqrstuvwxyz
(as input or using initialization)
2.  Using recursion, write a reverse function that reverses the
characters in a string or character array given two indices
(starting and ending).  The string or the character array
should reflect the reversal.
3.  Read indices as input
 11,18 (i.e. letters 12,19)
4.  Call the reverse function to reverse letters: 12-19
5.  Read indices as input
 4,22 (i.e. letters 5,23)
6.  Call the reverse function to reverse letters: 5,23
7.  Using the reverse function, reverse the alphabet
8.  Print the reversed string or character array.

Your output should contain:

abcdefghijksrqponmltuvwxyz
abcdwvutsrqponmlkjihgfexyz
zyxwvutsrqponmlkjihgfedcba

You should only have one execution.

Write an implementation for the reverse function using a loop.
What are the differences between the recursive and iterative
approaches? Test your iterative reverse function and
demonstrate that its output is identical to the recursive
implementations output.
*/

/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #5 : Recursion
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/28/2022
 *************************************************************************/

#include "Header.h"

void Reverse(string &str, int start, int end);

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
    int start, end;
    cout << "Enter the starting index: ";
    cin >> start;
    cout << "Enter the ending index: ";
    cin >> end;
    Reverse(str, start, end);
    cout << str << endl;
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