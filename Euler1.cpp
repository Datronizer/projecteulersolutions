// Euler1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int n, i, total{};

    printf("Please state the number you're assessing: ");
    scanf_s("%d", &n);
    
    // Computes all multiples of 3 less than n and sums them up
    for (i = 0; i < n; i++)
    {
        int currentNum3 = 3 * i;

        if (currentNum3 >= n)
            break;

        else
        {
            total = total + currentNum3;
            //printf("%d ", currentNum3);
        }
    }

    // Computes all multiples of 5 less than n and sum them together with the previous one
    for (i = 0; i < n; i++)
    {
        int currentNum5 = 5 * i;

        if (currentNum5 >= n)
            break;

        else if (currentNum5 % 3 == 0)
        {
            total = total + 0;
            //printf("%d(skipped) ", currentNum5);
        }

        else
        {
            total = total + currentNum5;
            //printf("%d ", currentNum5);
        }
    }

    printf("\nThe total is: %d\n", total);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
