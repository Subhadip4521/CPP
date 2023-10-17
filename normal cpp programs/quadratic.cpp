//Write a Cpp program to find roots of a quadratic equation.


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin>>a;
    cin>>b;
    cin>>c;

    discriminant = (b * b) - (4 * a * c);

    switch(discriminant > 0)
    {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout<<"Two distinct and real roots exists: "<<root1<<", "<<root2;
            break;

        case 0:
            switch(discriminant < 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    cout<<"Two distinct complex roots exists: "<< root1<<", "<<imaginary<<", "<<root2<<", "<<imaginary;
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);
                    cout<<"Two equal and real roots exists: "<< root1<<", "<<root2;
                    break;
            }
    }

    return 0;
}
