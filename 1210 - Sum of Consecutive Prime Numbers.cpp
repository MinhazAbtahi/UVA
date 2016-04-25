#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

#define SIZE 10001

using namespace std;

/// Checking if the passed value is Prime, for faster solution use Sieve of Eratosthenes
bool isPrime(int n)
{
    if (n == 0)
        return 0;

    bool isPrime = true;
    int len = sqrt(n);      /// or pow(n, 0.5)

    for (int i = 2; i <= len; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    vector<int> prime;
    int n;

    for (int i = 2; i < SIZE; i++)
    {
        if (isPrime(i))
            prime.push_back(i);
    }

    while (cin >> n && n > 0)
    {
        int count = 0;
        for (int i = 0;; i++)
        {
            if (prime[i] > n)
                break;

            int sum = 0;

            for (int j = i ; j < prime.size(); j++)
            {
                if (sum > n)
                    break;
                else if (sum == n)
                    count++;

                sum += prime[j];
            }
        }
        cout << count << endl;
    }
    return 0;
}




