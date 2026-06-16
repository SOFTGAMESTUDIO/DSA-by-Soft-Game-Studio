#include <iostream>
using namespace std;

// Print patterns

void Simple_Pyramid()
{
    cout << "Simple Pyramid \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void Flipped_Simple_Pyramid()
{
    cout << "Flipped Simple Pyramid\n";

    for(int i = 1; i <= 5; i++)
    {
        // Print spaces
        for(int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }

        // Print stars
        for(int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void Inverted_Payramid(){
    cout << "Flipped Inverted Payramid\n";
    for(int i = 1; i <= 5; i++)
    {
        // Print stars
        for(int k = 6-i; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Flipped_Inverted_Payramid(){
    cout << "Flipped Inverted Payramid\n";
    for(int i = 1; i <= 5; i++)
    {
         // Print spaces
        for(int j = 0 ; j < i-1; j++)
        {
            cout << "  ";
        }
        // Print stars
        for(int k = 6-i; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


int main()
{
    Simple_Pyramid();
    Flipped_Simple_Pyramid();
    Inverted_Payramid();
    Flipped_Inverted_Payramid();
}