// remove twin
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    cout << "Unique elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// largest number

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int second = -2147483648;

  
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;

    if (second == -2147483648)
    {
        cout << "Second largest does not exist";
    }
    else
    {
        cout << "Second largest: " << second;
    }

    return 0;
}

// array
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Ascending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

  /////
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nDescending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//positivee
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int positive = 0, negative = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
    }

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative;

    return 0;
}


//odd even

#include <iostream>
using namespace std;

int main()
{
    int arr[100], even[100], odd[100];
    int n, e = 0, o = 0, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }

  
    for (int i = 0; i < e - 1; i++)
    {
        for (int j = 0; j < e - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

  
    for (int i = 0; i < o - 1; i++)
    {
        for (int j = 0; j < o - 1; j++)
        {
            if (odd[j] < odd[j + 1])
            {
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < e; i++)
    {
        cout << even[i] << " ";
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}
