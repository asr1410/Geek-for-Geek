// C program to print all permutations with duplicates allowed

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/* Function to swap values at two pointers */
void swap(char *, char *);

void permute(char *, int, int);

/* Driver program to test above functions */

int main()
{
    char str[] = "ABC";
    int length = strlen(str);
    permute(str, 0, length);
    return 0;
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int l, int r)
{
    if (l == r)
    {
        cout << a << endl;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i));
        }
    }
}
