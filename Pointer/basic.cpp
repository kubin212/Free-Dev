#include <iostream>

using namespace std;

void Print(void *Ptr, char type);
int getMin(int arr[], int size);
void MinAndMax(int arr[], int size, int *min, int *max);
void DynamicArray();
void DynamicArray2D();
int getNumber();

int main()
{
    /* int n=5;
    char letter = 'a';
    Print(&n, 'i'); */

    /* int arr[5] = {2,3,5,7,9};
    //cout << getMin(arr, 5) << endl;

    int min=arr[0], max=arr[0];
    MinAndMax(arr, 5, &min, &max);
    cout << min << "\n" << max << endl; */

    //DynamicArray();

    int(*funcPtr)() = getNumber;
    cout << funcPtr() << endl;
    return 0;
}

void Print(void *Ptr, char type)
{
    switch (type)
    {
    case 'i': cout << *((int*)Ptr) << endl; break;
    case 'c': cout << *((char*)Ptr) << endl; break;
    default:
        break;
    }
}

int getMin(int arr[], int size)
{
    int Min = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

void MinAndMax(int arr[], int size, int *min, int *max)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]<*min)
        {
            *min = arr[i];
        }
        if(arr[i]>*max)
        {
            *max = arr[i];
        }
    }
}

void DynamicArray()
{
    int size; cin >> size;
    int *arr = new int[size];
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout << *(arr+i) << " ";
    }
    delete[]arr;
    arr = nullptr;
    cout << endl;
}

void DynamicArray2D()
{
    int rows, cols; cin >> rows >> cols;
    int **table = new int*[rows];
    for(int i=0;i<rows;i++)
    {
        table[i] = new int[cols];
    }

    for(int i=0;i<rows;i++)
    {
        delete [] table[i];
    }
    delete [] table;
    table = nullptr;

}

int getNumber()
{
    return 5;
}