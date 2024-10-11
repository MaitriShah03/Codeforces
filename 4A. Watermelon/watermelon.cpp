#include <iostream>
using namespace std;

int main()
{
    int w; //input weight of watermelon
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {   
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
