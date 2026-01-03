#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<deque>
#include<queue>
#include<math.h>
#include<map>
#include<stack>
#include <regex>
#include<iomanip>
#include <iterator>
#include<unordered_map>
#include <sstream>
#include <string>
#include <unordered_set>
#define ll long long
using namespace std;
const string PI = "314159265358979323846264338327";
bool sieve(int num)
{
    ll n = 1000000000000;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    if (is_prime[num])
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Pascal(int n)
{
    long long** arr = new long long* [n];
    for (long long i = 0; i < n; ++i)
        arr[i] = new long long[n];
    for (long long line = 0; line < n; line++)
    {
        for (long long i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
            {
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            }
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }

}
bool prime(long long n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
        }
        return true;
    }
}
long long fact(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
ll GCD(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return GCD(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}
void Fibonacci(int n)
{
    long long num = 0;
    long long first = 0, second = 1;
    long long next = first + second;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
            continue;
        }
        if (i == 2)
        {
            cout << second << " ";
            continue;
        }
        next = first + second;
        num = next;
        cout << next << " ";
        first = second;
        second = next;
    }
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than the pivot
        if (arr[j] < pivot) {

            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {

        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void selection_sort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[min], arr[i]);
        }
    }
}
void insertion_sort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void Bubble_sort(int arr[], int size)
{
    //size of array
    //int n= sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    int c = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            c++;
        }
        if (flag)
        {
            break;
        }
    }
    cout << "Number Of Rounds :" << c << "\n";
}
void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int* L = new int[n1], * R = new int[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
    i = j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - 1) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        Merge(arr, l, m, r);
    }
}
//Recursion
long long Fact(long long n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * Fact(n - 1);
    }
}
int Fab(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return  Fab(n - 1) + Fab(n - 2);
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int sum_two(int n, int m)
{
    if (n == m)
    {
        return n;
    }
    else
    {
        return m + sum_two(n, m - 1);
    }
}
void print(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << "I love Recursion\n";
    print(n - 1);
}
void print_digits(ll n)
{
    if (n == 0)
        return;
    print_digits(n / 10);
    cout << n % 10 << " ";
}
void Binary(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        Binary(n / 2);
        cout << n % 2;
    }
}
bool found(vector<int>arr, int val)
{
    bool flag = true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
        {
            flag = false;
        }
    }
    return flag;
}
bool Binary_Search(int num, int arr[], int size)
{
    int* temp = new int[size];
    temp = arr;
    sort(temp, temp + size);
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (temp[mid] == num)
        {
            return true;
        }
        else if (temp[mid] < num)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}
stack <int> Move_Top(stack<int> arr, int n)
{
    stack<int>temp;
    while (!arr.empty())
    {
        if (arr.top() == n)
        {
            arr.pop();
        }
        else
        {
            temp.push(arr.top());
            arr.pop();
        }
    }
    temp.push(n);
    return temp;
}int sumOfDigits(int num) {
    int sum = 0;
    while (num >= 10) {
        sum += num % 10;
        num /= 10;
    }
    sum += num;
    return sum;
}
class Student
{
    int marks;
public:Student() {

}
      Student(int m)
      {
          marks = m;
      }
};

unordered_set<int> sieve_of_eratosthenes(int limit) {
    // Create a boolean vector and initialize all entries as true
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

    // Mark non-prime numbers
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Store primes in a set
    unordered_set<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.insert(i);
        }
    }
    return primes;
}
int main()
{
    int n; cin >> n;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1) {
                count++;
            }
        }
        if (count >= 2) {
			max_count++;
        }
    }
	cout << max_count;
}
