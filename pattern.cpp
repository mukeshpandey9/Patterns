#include <iostream>
using namespace std;

// *  *  *  *                                                          \a
// *  *  *  *                                                          p
// *  *  *  *
// *  *  *  *

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

// 1111
// 2222
// 3333
// 4444

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1 << "  ";
        }

        cout << endl;
    }
}

// 1  2  3  4
// 1  2  3  4
// 1  2  3  4
// 1  2  3  4

// and

// 4  3  2  1
// 4  3  2  1
// 4  3  2  1
// 4  3  2  1

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            cout << j << "  ";
        }

        cout << endl;
    }
}

// 1  2  3
// 4  5  6
// 7  8  9

// and

// 9  8  7
// 6  5  4
// 3  2  1

void pattern4(int n)
{
    int count = n * n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << count++ << "  ";
    //     }

    //     cout << endl;
    // }

    // Revrse>>

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count-- << "  ";
        }

        cout << endl;
    }
}

// *
// *  *
// *  *  *
// *  *  *  *

void pattern5(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }

        cout << endl;
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4

void pattern6(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j < n; j++) // or j = 0; j<= i
        {
            cout << i + 1 << "  ";
        }

        cout << endl;
    }
}

// 1
// 2  3
// 4  5  6
// 7  8  9  10

void pattern7(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ++count << "  ";
        }

        cout << endl;
    }
}

// 1
// 2 3
// 3 4 5
// 4 5 6 7

void pattern8(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count = i;
        for (int j = 0; j <= i; j++)
        {
            cout << ++count << "  ";
        }

        cout << endl;
    }
}

// 1
// 2  1
// 3  2  1
// 4  3  2  1

void pattern9(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1 << "  ";
        }

        cout << endl;
    }
}

// A  A  A
// B  B  B
// C  C  C
void pattern10(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << (char)ch << "  ";
        }

        ch++;

        cout << endl;
    }
}

// A  B  C
// D  E  F
// G  H  I

void pattern11(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << (char)ch++ << "  ";
        }

        cout << endl;
    }
}

// A  B  C
// A  B  C
// A  B  C

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << (char)ch << "  ";
            ch++;
        }

        cout << endl;
    }
}

// A  B  C
// B  C  D
// C  D  E

void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i;
        for (int j = 0; j < n; j++)
        {
            cout << (char)ch++ << "  ";
        }

        cout << endl;
    }
}

// A
// B  B
// C  C  C

void pattern14(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch << "  ";
        }
        ch = ch + 1;
        cout << endl;
    }
}

// A
// B  C
// D  E  F
void pattern15(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << "  ";
        }
        cout << endl;
    }
}

// A
// B  C
// C  D  E
// D  E  F  G

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i;

        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << "  ";
        }
        cout << endl;
    }
}

// D
// C  D
// B  C  D
// A  B  C  D

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        ch = ch + n - i;

        for (int j = 0; j < i; j++)
        {
            cout << ch++ << "  ";
        }
        cout << endl;
    }
}

//          *
//       *  *
//    *  *  *
// *  *  *  *

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < i; j++)
        {

            cout << "*  ";
        }
        cout << endl;
    }
}

// *  *  *  *
// *  *  *
// *  *
// *

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

// *  *  *  *
//    *  *  *
//       *  *
//          *

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "   ";
        }

        for (int j = n; j > i; j--)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}

//    1  1  1  1
//       2  2  2
//          3  3
//             4

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "   ";
        }

        for (int j = n; j > i; j--)
        {
            cout << i + 1 << "  ";
        }
        cout << endl;
    }
}

//             1
//          2  2
//       3  3  3
//    4  4  4  4

void pattern22(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "   ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << "  ";
        }

        cout << endl;
    }
}

//             1
//          2  3
//       4  5  6
//    7  8  9  10

void pattern23(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "   ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << ++count << "  ";
        }

        cout << endl;
    }
}

//             1
//          1  2  1
//       1  2  3  2  1
//    1  2  3  4  3  2  1

void pattern24(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "   ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << "  ";
        }

        cout << endl;
    }
}

// 1  2  3  4  4  3  2  1
// 1  2  3  *  *  3  2  1
// 1  2  *  *  *  *  2  1
// 1  *  *  *  *  *  *  1

void pattern25(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << "  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*  ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*  ";
        }

        for (int j = n - i; j > 0; j--)
        {
            cout << j << "  ";
        }

        cout << endl;
    }
}

void pattern26(int n)
{
    
    int j, a = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (j = a + 1; j < a + i; j++)
            {
                cout << j << "*";
            }
            cout << j++;
            a = j;
        }
        else
        {
            a = a + i - 1;

            for (j = a; j > a - i + 1; j--)
            {
                cout << j << "*";
            }
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the no. of row:  ";
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);
    // pattern23(n);
    // pattern24(n);
    // pattern25(n);
    // pattern26(n);
}
