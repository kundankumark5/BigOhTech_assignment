#include<iostream>
using namespace std;
class IotInverter
{
    private:
    int cur,volt;
    string variant[50]={"PCU", "GIT", "ZELIO", "REGALIA", "ICRUSE"};
    public:
    int powerate()
    {   
        cout<<"enter current\n";
        cin>>cur;
        cout<<"enter opVoltage\n";
        cin>>volt;
        int powerRating =cur*volt;
        cout<<"power rating= "<<powerRating;
        return powerRating;
    }

};
class SolarInv : public IotInverter
{
    // Solar inverters get charge by solar pannels and solar energy
    private:
    string invWithSolar[4]={"PCU","GTI","REGALIA","Solar pannels"};
    public:
    void chargeBySolarPannelsAndEnergy();
};
class SolarInvWithBattery:public SolarInv
{
    //solar inverters having a battery, store charge in the battery
    private:
    string solarInvBaT="PCU"; //GIT doesn't have any battery
    public:
    void storeChargeInBattery();

};
class SolarInvWithGrid:public SolarInv
{   //solar inverters without battery have grid on system with them to sell extra charge 
    private:
    string solarInvGrid="GTI"; //PCU doesn't have any grid on
    public:
    void sellsToGridSystem();

};
class HomeInverter : public IotInverter
{
    //these are simply domestic Battery inverter neither have solar pannels nor any grid on system
    public:
    void withoutSolar();
};
int main()
{
    IotInverter iot;
    iot.powerate();
    return 0;
}

