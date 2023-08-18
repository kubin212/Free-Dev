#include <iostream>
#include <string>

using namespace std;

void Add2Num(int *x, int *y, int *sum);
int AddNum(int &x, int &y);
int findMax2Num(int *x, int *y);
void InitArray(int N);
int LengthString(char str[]);
void CountVowelsAndConsonants(char str[], int &vow, int &cons);

int main()
{
    // int a,b,sum=0;
    // cin >> a >> b;

    // int *ptr1, *ptr2;
    // ptr1 = &a;
    // ptr2 = &b;
    // Add2Num(ptr1, ptr2, &sum);

    // cout << AddNum(a, b) << endl;
    // cout << findMax2Num(ptr1, ptr2) << endl;

    // int n; cin >> n;
    // InitArray(n);

    cout << "Input string: ";
    char str[100]; 
    cin >> str;
    // for(int i=0;*(str+i)!=0;i++)
    // {
    //     cout << *(str+i) << endl;
    // }
    //cout << LengthString(str) << endl;
    int vowels, consonants;
    // int *ptr1, *ptr2;
    // ptr1 = &vowels; ptr2 = &consonants;
    CountVowelsAndConsonants(str, vowels, consonants);   
    cout << vowels << " " << consonants << endl;  
    return 0;
}

void Add2Num(int *x, int *y, int *sum)
{
    *sum = *x + *y;
}

int AddNum(int &x, int &y)
{
    return x + y;
}

int findMax2Num(int *x, int *y)
{
    int max;
    max = (*x < *y) ? *y:*x;
    return max;
}

void InitArray(int N)
{
    int arr[100];
    for(int i=0;i<N;i++)
    {
        cin >> *(arr+i); 
    }

    for(int i=0;i<N;i++)
    {
        cout << *(arr+i) << endl;
    }
}

int LengthString(char str[])
{
    int i=0,length = 0;
    do
    {
        cout << *(str+i) << endl;
        length++;
        i++;
    }while(*(str+i)!=0);
    return length;
}

void CountVowelsAndConsonants(char str[], int &vow, int &cons)
{
    char vowels[5] = {'a','e','i','o','u'};
    for(int i=0;*(str+i)!=0;i++)
    {
        bool check = false;
        for(int j=0;j<5;j++)
        {
            if(*(str+i)==*(vowels+j))
            {
                check = true;
                break;
            }
        }
        if(check)
        {
            ++vow;
        }
        else
        {
            ++cons;
        } 
    }
}