#include <bits/stdc++.h>
using namespace std;

/* Since min num divisible by 1 to 9 is LCF
 lowest common factor of all these numbers */
long int lcm(int n)
{
    long int a = 1;
    for (long int i = 1; i <= n; i++)
    {
        a = (a * i) / (__gcd(a, i));
    }
    return a;
}

int main()
{
    int n;

    long int lcm(int);
    cout << "Enter nth no to get min divisible no, that is LCM\n";
    cin >> n;

    cout << "min divisible no= " << lcm(n);
    return (0);
}