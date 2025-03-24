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

void InsertionSort()
{
    int temp;
    int j, i;

    for (i = 1; i <= n - 1;  i++)
    {
        
        temp = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + i] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    
}