#include <iostream>
using namespace std;

class MP
{
public:
    string mpDriver;
    string mpName;
    string constituency;
    int spendLmt;
    long int s;
    void howMParrest()
    {
    cout<<"mp can be arrested without any permission\n";
    }
//public:
    string getName()
    {
        cout << "enter name";
        cin >> mpName;
        return mpName;
    }
    string getDriver(string mp)
    {
        mpName = mp;
        string mpDriver;
        cout << "Enter driver name\n";
        cin >> mpDriver;
        return mpDriver;
    }
    string getConstituency(string mp)
    {
        mpName = mp;
        cout << "enter constituency\n";
        cin >> constituency;
        return constituency;
    }

    long int spendLimit(string post)
    {   
        
        string a = post;
        if (a == "mp")
        {
             s = 100000;
            cout << "MP spend limit is only 1 lakh that is " << s;
            return s;
        }
        else if (a == "minister")
        {
             s = 1000000;
            cout << "limit for ministers is 10 lakh that is " << s;
            return s;
        }
        else if (a == "pm")
        {
             s = 10000000;
            cout << "limit for pm is 1 crore that is\t " << s;
            return s;
        }
        
    }
};

class Minister : public MP
{
    
public:
    string minName;
    string mConst;
    string mDriver;
    long int ministerSpend;
    void minNam()
    {
        minName = MP::getName();
        cout << "minister name is " << minName;
    }
    void minConst(string minName)
    {
        mConst = MP::getConstituency(mpName);
        cout << "minister's constituency is " << mConst;
    }
    void minDriver()
    {
        mDriver = MP::getDriver(mpName);
        cout << "minister's driver is " << mDriver;
    }
    void minSpend()
    {
        string post = "minister";
        ministerSpend = MP::spendLimit(post);
    }
    void howMinisterArrest()
    {
        cout<<"can be arrested only after pm permission";
    }
};
class PM : public MP
{
private:
    string pmName;
    string pmConstituency;
    string pmDriver;
    long int pmSpend;
    void pmNam()
    {
        pmName = MP::getName();
        cout << "Prime minister name is " << pmName;
    }
    void pmConst()
    {
        pmConstituency = MP::getConstituency(mpName);
        cout << "prime minister's constituency is " << pmConstituency;
    }
    void pmDriv()
    {
        pmDriver = MP::getDriver(mpName);
        cout << "minister's driver is " << pmDriver;
    }
    void minSpend()
    {
        string post = "pm";
        pmSpend = MP::spendLimit(post);
    }
    void priviledge()
    {
        cout<<"Can't be arrested,have some priviledges like Aircraft & order arrestment for anyone.";
    }
};
class Comissioner : public MP
{
private:
    string post;
    long int spendlim;

public:
    void canArrest()
    {
        cout << "enter designation\n";
        cin >> post;
        MP m;
    spendlim =  m.spendLimit(post);
        if (post == "pm" && spendlim > 10000000)
        {
            cout << "PM would be arrested by Commissioner";
        }
        else if (post == "minister" && spendlim > 1000000)
        {
            cout << "Minister would be arrested by Commissioner";
        }
        else if (post == "mp" && spendlim > 100000)
        {
            cout << "MP would be arrested by commissioner";
        }
    }
};
int main()
{
    MP m;
    int i;
    string name, driver, constituency,p;
    long int spendlim;
    cout << "enter your choice\n 1.name\t 2.drivername\t 3.constituency\t 4.spendlim\n";
    cin >> i;

    switch(i)
    {
    case 1:
        name = m.getName();
        cout << name;
        break;
    
    case 2:
    
        driver = m.getDriver(m.mpName);
        cout << driver;
        break;
    
    case 3:
    
        constituency = m.getConstituency(m.mpName);
        cout << constituency;
        break;
    
    case 4:
        
        cout << "enter post";
        cin>>p;
        spendlim = m.spendLimit(p);
        //cout << spendlim;
        break;
    
    default:
    
        cout << "clicked wrong";
    
    }
 

return 0;
}
