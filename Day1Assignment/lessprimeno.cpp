// The largest number smaller than N whose all digits are prime.
#include <bits/stdc++.h>
using namespace std;

char *PrimeDgtNum(char N[], int size)
{
    char *ans = (char *)malloc(size * sizeof(char));
    int ns = 0;
    int flag = 0;
    int i;
    int p[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};
    int prePrm[] = {0, 0, 0, 2, 3, 3, 5, 5, 7, 7};

    if (size == 1)
    {
        ans[0] = prePrm[N[0]- '0'] + '0';

        ans[1] = '\0';
        return ans;
    }
    if (N[0] == '1')
    {
        for (int i = 0; i < size - 1; i++)
            ans[i] = '7';

        ans[size - 1] = '\0';

        return ans;                                                                                                                                                                                                                                                                                                                                                                 
    }
    for (i = 0; i < size && flag == 0; i++)
    {
        if (p[N[i] - '0'] == 1)
        {
            ans[ns++] = N[i];
        }
        else
        {
            if (p[N[i] - '0'] == 0 && prePrm[N[i] - '0'] != 0)
            {
                ans[ns++] = prePrm[N[i] - '0'] + '0';
                flag = 1;
            }

            else if (p[N[i] - '0'] == 0 &&
                     prePrm[N[i] - '0'] == 0)
            {

                int j = i;
                while (j > 0 && p[N[j] - '0'] == 0 &&
                       prePrm[N[j] - '0'] == 0)
                {
                    ans[j] = N[j] = '7';
                    N[j - 1] = prePrm[N[j - 1] - '0'] + '0';
                    ans[j - 1] = N[j - 1];
                    flag = 1;
                    j--;
                }

                i = ns;
            }
        }
    }
    if (flag == 0)
    {
        if (prePrm[N[size - 1] - '0'] + '0' != '0')
            ans[size - 1] = prePrm[N[size - 1] - '0'] + '0';
        else
        {
            int j = size - 1;
            while (j > 0 && prePrm[N[j] - '0'] == 0)
            {
                ans[j] = N[j] = '7';
                N[j - 1] = prePrm[N[j - 1] - '0'] + '0';
                ans[j - 1] = N[j - 1];
                    flag = 1;
                j--;
            }
        }
    }

    for (; ns < size; ns++)
        ans[ns] = '7';

    ans[ns] = '\0';

    // If number include 0 in the beginning, ignore
    // them. Case like 2200
    int k = 0;
    while (ans[k] == '0')
        k++;

    return ans + k;
}

// Driver Program
int main()
{
    char N[10];
    cout << "Enter a num to get less prime no\t";
    cin >> N;
    int size = strlen(N);
    cout << PrimeDgtNum(N, size) << endl;
    return 0;
}
