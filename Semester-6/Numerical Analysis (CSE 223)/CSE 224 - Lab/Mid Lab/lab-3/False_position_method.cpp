#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 5

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2
double func(float x)
{
    float z= 3*x - cos(x) - 1;
    return z;
}

// Prints root of func(x) in interval [a, b]
void regulaFalsi(float a, float b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    float c = a; // Initialize result

    for (int i=0; i < MAX_ITER; i++)
    {
        // Find the point that touches x axis
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
        //c = (a + b)/2;

        // Check if the above found point is root
        if (func(c)==0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
    // Initial values assumed
    float a= 0, b = 1;
    regulaFalsi(a, b);
    return 0;
}

