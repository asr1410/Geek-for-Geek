// C++ program to generate odd sized magic squares
#include <bits/stdc++.h>
using namespace std;

// A function to generate odd sized magic squares
void generateSquare(int n)
{
    int magicSquare[n][n];

    // set all slots as 0
    memset(magicSquare, 0, sizeof(magicSquare));

    // Initialize position for 1
    int i = n / 2;
    int j = n - 1;

    // One by one put all values in magic square
    for (int num = 1; num <= n * n;)
    {
        cout << " i = " << i << endl;
        if (i == -1 && j == n) // 3rd condition
        {
            j = n - 2;
            i = 0;
        }
        else
        {
            // 1st condition helper if next number
            // goes to out of square's right side
            if (j == n)
                j = 0;

            // 1st condition helper if next number
            // is goes to out of square's upper side
            if (i < 0)
                i = n - 1;
        }
        if (magicSquare[i][j]) // 2nd condition
        {
            i++;
            j -= 2;
            continue;
        }
        else
            magicSquare[i][j] = num++; // set number

        j++;
        i--; // 1st condition
    }

    // Print magic square
    cout << "The Magic Square for n=" << n
         << ":\nSum of each row or column "
         << n * (n * n + 1) / 2 << ":\n\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)

            // setw(7) is used so that the matrix gets
            // printed in a proper square fashion.
            cout << setw(4) << magicSquare[i][j] << " ";
        cout << endl;
    }
}

// Driver code
int main()
{

    // Works only when n is odd
    int n = 3;
    generateSquare(n);
    return 0;
}

/*
Did you find any pattern in which the numbers are stored? 

In any magic square, the first number i.e. 1 is stored at position (n/2, n-1). Let this position be (i,j). The next number is stored at position (i-1, j+1) where we can consider each row & column as circular array i.e. they wrap around.

Three conditions hold:
1. The position of next number is calculated by decrementing row number of the previous number by 1, and incrementing the column number of the previous number by 1. At any time, if the calculated row position becomes -1, it will wrap around to n-1. Similarly, if the calculated column position becomes n, it will wrap around to 0.
2. If the magic square already contains a number at the calculated position, calculated column position will be decremented by 2, and calculated row position will be incremented by 1.
3. If the calculated row position is -1 & calculated column position is n, the new position would be: (0, n-2). 



Example:
Magic Square of size 3
----------------------
 2  7  6
 9  5  1
 4  3  8 

Steps:
1. position of number 1 = (3/2, 3-1) = (1, 2)
2. position of number 2 = (1-1, 2+1) = (0, 0)
3. position of number 3 = (0-1, 0+1) = (3-1, 1) = (2, 1)
4. position of number 4 = (2-1, 1+1) = (1, 2)
   Since, at this position, 1 is there. So, apply condition 2.
   new position=(1+1,2-2)=(2,0)
5. position of number 5=(2-1,0+1)=(1,1)
6. position of number 6=(1-1,1+1)=(0,2)
7. position of number 7 = (0-1, 2+1) = (-1,3) // this is tricky, see condition 3 
   new position = (0, 3-2) = (0,1)
8. position of number 8=(0-1,1+1)=(-1,2)=(2,2) //wrap around
9. position of number 9=(2-1,2+1)=(1,3)=(1,0) //wrap around
*/