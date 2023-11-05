// #include <bits/stdc++.h>
// using namespace std;

// class Box
// {
// public:
//     int l, b, h;

//     Box(int l, int b, int h)
//     {
//         this->l = l;
//         this->b = b;
//         this->h = h;
//     }

//     int getLength()
//     {
//         return l;
//     }
//     int getBreadth()
//     {
//         return b;
//     }
//     int getheight()
//     {
//         return h;
//     }
//     long long int CalculateVolume()
//     {
//         return l * b * h;
//     }
//     // bool x()
// };
// bool x(int a, int b)
// {
//     return a < b;
// };

// int main()
// {
//     Box b1(b2. , );
//     Box b2(10, 20, 30);
//     // cout << b1.l << b1.b << b1.h;
//     cout << b2.getLength() << endl;
//     cout << b2.getBreadth() << endl;
//     cout << b2.getheight() << endl;
//     cout << b2.CalculateVolume() << endl;

//     // cout << x(b1, b2) << endl;

//     cout << b2.l << " " << b2.b << " " << b2.h;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int length;
    int breadth;
    int height;

public:
    Box() : length(0), breadth(0), height(0) {}

    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    Box(const Box &other) : length(other.length), breadth(other.breadth), height(other.height) {}

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int getHeight()
    {
        return height;
    }

    long long CalculateVolume()
    {
        return static_cast<long long>(length) * breadth * height;
    }

    // Overload the < operator
    bool operator<(const Box &other)
    {
        if (length < other.length)
        {
            return true;
        }
        else if (length == other.length && breadth < other.breadth)
        {
            return true;
        }
        else if (length == other.length && breadth == other.breadth && height < other.height)
        {
            return true;
        }
        return false;
    }

    // Overload the << operator for printing
    friend std::ostream &operator<<(std::ostream &out, const Box &box)
    {
        out << box.length << " " << box.breadth << " " << box.height;
        return out;
    }
};

int main()
{
    Box b1;                                                       // Should set b1.l = b1.b = b1.h = 0;
    Box b2(2, 3, 4);                                              // Should set b2.length = 2, b2.breadth = 3, b2.height = 4;
    cout << "Length: " << b2.getLength() << endl;       // Should return 2
    cout << "Breadth: " << b2.getBreadth() << endl;     // Should return 3
    cout << "Height: " << b2.getHeight() << endl;       // Should return 4
    cout << "Volume: " << b2.CalculateVolume() << endl; // Should return 24
    bool x = (b1 < b2);                                           // Should return true based on the conditions given
    cout << b2 << endl;                                 // Should print "2 3 4" in order
    return 0;
}
