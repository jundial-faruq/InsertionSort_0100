#include <iostream>
using namespace std;

int arr[20];
int n;

void inpu()
{
    while (true)
    {
    count << "Masukan Jumlah Data pada Array : ";
    cin >> n;

    if (n <= 20)
    {
    break;
    }
    else
    {
        count << "\nArray yang anda masukan maksimal 20 Elemen.\n";
    }
    }
    count << endl;
    count << "=================" << endl;
    count << "Masukan Elemen Array" << endl;
    count << "=================" << endl;
    
    for (int i = 0; i < n; i++)
    {
    count << "Data ke-" << (i + 1) << ": ";
    cin >> arr[i];
    }
     
}