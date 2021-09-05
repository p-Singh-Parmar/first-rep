#include <bits/stdc++.h>
using namespace std;
void merging(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s; // yh counter variable hai jo ki temp aray mein use hoga
    int temp[100000];

    // Check for chota bada and place in new array accordingly
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    //Ab Maanlo ki ek koi phle khtm hogyi to upr wli condition false then hamko poori poori array
    // as it is copy krni pdegi haina ? to uske lie do loop lgege

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    //Ab ham sorted order mein sab kaam kr chuke daalne ka
    // Now copy all the elemnts in the main array  for using in next things correctly
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i]; // copied for respective recursive call
    }
}

void mergesort(int *arr, int s, int e)
{

    if (s >= e) // Mtlb ki sirf ek hi element hai to aap wwapis return maaro
    {
        return;
    }

    // Now Divide the Array into two parts
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    //Ab maine dono ko tod lia hai recursively ab mujhe inko join krna h sorted order mein concatenate
    merging(arr, s, e);
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Merge Sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int start = 0;
    int end = n - 1;
    mergesort(arr, start, end);
    cout << "After Merge Sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}