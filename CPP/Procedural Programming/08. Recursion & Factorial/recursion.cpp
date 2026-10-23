/*
    Factorial of a number using recursion

    ----- Factorial using for loop -----

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is: " << fact;


    ----- Factorial using recursion -----

    Factorial formula:

        n! = n × (n - 1)!

    Base case:

        0! = 1
        1! = 1
*/

// ================================================================
//                        RECURSION
// ================================================================

#include <iostream>
using namespace std;

// ---------------------------------------------------------------
// Factorial Function
// ---------------------------------------------------------------

int factorial(int n)
{
    cout << "n = " << n << endl;

    // Base Case
    if (n == 0 || n == 1)
    {
        cout << "Base case reached: n = " << n << endl;

        return 1;
    }

    // Recursive Case
    else
    {
        cout << "Calling "
             << n << " * factorial(" << n - 1 << ")"
             << endl;

        return n * factorial(n - 1);
    }
}

// ---------------------------------------------------------------
// Main Function
// ---------------------------------------------------------------

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Check for negative number
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers."
             << endl;
    }

    else
    {
        // Call the recursive function
        int result = factorial(n);

        // Display the result
        cout << "Factorial of "
             << n << " is: "
             << result << endl;
    }

    return 0;
}


/*
================================================================
                    HOW RECURSION WORKS
================================================================

If n = 5:

    factorial(5)
         |
         | 5 * factorial(4)
         ↓
    factorial(4)
         |
         | 4 * factorial(3)
         ↓
    factorial(3)
         |
         | 3 * factorial(2)
         ↓
    factorial(2)
         |
         | 2 * factorial(1)
         ↓
    factorial(1)
         |
         | Base case
         ↓
         1


After reaching the base case, the stack starts UNWINDING:

    factorial(1) = 1

    factorial(2)
        = 2 * factorial(1)
        = 2 * 1
        = 2

    factorial(3)
        = 3 * factorial(2)
        = 3 * 2
        = 6

    factorial(4)
        = 4 * factorial(3)
        = 4 * 6
        = 24

    factorial(5)
        = 5 * factorial(4)
        = 5 * 24
        = 120


Therefore:

    5! = 120


================================================================
                    STACK MEMORY
================================================================

Recursion uses STACK memory to store function calls.

When factorial() is called, a new stack frame is created.

For n = 5:

    |-------------------|
    | factorial(1)      |  ← Base case
    |-------------------|
    | factorial(2)      |
    |-------------------|
    | factorial(3)      |
    |-------------------|
    | factorial(4)      |
    |-------------------|
    | factorial(5)      |
    |-------------------|

After factorial(1) returns, the stack starts unwinding.

    factorial(1) → 1
    factorial(2) → 2
    factorial(3) → 6
    factorial(4) → 24
    factorial(5) → 120

================================================================
*/