#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

int count(int);

int check(int);

int main()
{
    int number;
    cout << "Enter the number :- ";
    cin >> number;
    cout << count(number) << endl;
    return 0;
}

int count(int n)
{
    int num = n;
    for (int i = 1; i < n + 1; i++)
    {
        if (check(i))
        {
            num--;
        }
        else
        {
            continue;
        }
    }
    return num;
}
int check(int n)
{
    int temp, count = 0;
    while (n != 0)
    {
        temp = n % 10;
        n = n / 10;
        if (temp == 3)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}