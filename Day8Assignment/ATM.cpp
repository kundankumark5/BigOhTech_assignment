#include <iostream>
using namespace std;

class Account
{
protected:
    int accNo, password;
    int balance = 0;

public:
    int setAccount(int bal, int ac, int pass)
    {
        accNo = ac;
        balance = balance + bal;
        password = pass;
        return balance;
    }
    int setBalanceAfterDebit(int code, int requestedMoney)
    {
        if (code == password)
            balance = balance - requestedMoney;
        return balance;
    }
    void withdrawl();
    int getbalance()
    {

        return balance;
    }
};
class Deposit : public Account
{
protected:
    int money = 0;
    int z, x, y, ac, pin;
    int amt=0;

public:
    void credit()
    {
        cout << "enter ac no and pin";
        cin >> ac >> pin;
        cout << "How many denomination you are going to deposit\n";
        cin >> z;
        if (z > 0)
        {
            cout << "Enter no of notes and denomination to deposit\n";

            while (z > 0)
            {

                cin >> x >> y;
                money = money + x * y;
                z--;
            }
                amt = amt + money;
            

            int now = setAccount(100000+amt, ac, pin);
            cout << amt << " is credited\t now your balance is " << now;
        }
    }
};
class Debit : public Account
{
protected:
    Account a;

    int requestedMoney, rM;
    int pass = password;
    int acc;

    int denom[4] = {2000, 500, 200, 100};
    int counter[4] = {0};

public:
    void withdrawl()
    {
       // a.setAccount(100000, 534453, 2145);
        //int left = a.getbalance();
        cout<<"Enter A/C no and pin \n";
        cin>>acc>>pass;
        int left=a.setAccount(100000,acc,pass);
        cout << "enter money to debit\n ";
        cin >> requestedMoney;
        rM = requestedMoney;

        if ((requestedMoney % 100) != 0)
        {
            cout << "plz enter in avl denomination only\n";
        }
        else if (left < requestedMoney)
        {
            cout << "insufficient bal\n";
        }

        else
        {
            for (int i = 0; i < 4; i++)
            {
                if (requestedMoney >= denom[i])
                {
                    counter[i] = requestedMoney / denom[i];
                    requestedMoney = requestedMoney - counter[i] * denom[i];
                }
            }
            cout << "currency count\n";
            for (int i = 0; i < 4; i++)
            {
                if (counter[i] != 0)
                {
                    cout << denom[i] << ":" << counter[i] << "\n";
                }
            }
            left = left - rM;
            cout << rM << " Rupees are deducted\n";
            cout << "balance after deduction = " << left;
        }
    }
};
int main()
{
    int c;
    Account a;
    Debit d;
    Deposit g;
    double bal = 100000, b;
    int acN = 534453, pin = 2145;
    a.setAccount(bal, acN, pin);
    cout << "\n1.Debit \t 2.Credit \t 3.Get Balance \t 4.Exit \n";
    cout << "Enter your choice\n";
    cin >> c;
    switch (c)
    {
    case 1:
        d.withdrawl();
        break;
    case 2:
        g.credit();
        break;
    case 3:
        b = a.getbalance();
        cout << "Balance is " << b;
        break;
    default:
        cout << "Thanks to Visit\n";
        exit(0);
    }
    return 0;
}
