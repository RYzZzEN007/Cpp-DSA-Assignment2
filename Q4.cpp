#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, h;
    cout << "Enter the  radius of cylinder  :";
    cin >> r;

    cout << "enter the  height of cyliner ";
    cin >> h;
    float x= 3.14*r*r*h;
    cout << "The volume of Cylinder is " << x;
    // plz tell me the library to include for writing pi or i
    // should define it in the above as  function like
    // #define pi=3.14 itn works in c butr am not sure
    // so if u are reading this plz let me know
    return 0;
}
// int main()
// {
//     char x, y;
//     cout << "Enter the first character ->";
//     cin >> x;
//     cout << "Enter the second character ->";
//     cin >> y;

//     int k = (int)x, l = (int)y;
//     cout << "The difference of the ascii values of two character is ->" << " " << k - l;
//     return 0;
// }