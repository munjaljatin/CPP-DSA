#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[10];
    cout << "Enter the 10 values in the array:-" << endl;
    for (int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    cout << "The values you'd entered are:-" << endl;
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of Array arr is " << sizeof(arr);
    return 0;
}
