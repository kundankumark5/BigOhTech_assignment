/*OOPs
Create a whats app as following
Users having contacts and can chat with any contact.
Messaging in text audio and video Users can see status of all the contacts
User can post status,Status can be text and image*/
#include<iostream>
using namespace std;
class Whatsapp
{
    private:
           int contacts;
    public:
            Whatsapp(int i=673656)
            {
                contacts=i;
            }
           bool canChatTxtAudVid(int a)
           {
               if(a==contacts)
               return true;
               else
               return false;
           }
           bool canSeeStatus(int b)
           {
               if(b==contacts)
               return true;
               else
               return false;
           }
};
class Users:public Whatsapp
{
  private:
        int contact;  
    public:
        void getcontact(int c)
        {
            contact=c;
        }
        void postTxtVideoStatus();

};
int main()
{
    int ph;
    Whatsapp what;
    Users us;
    cout<<"Enter contact no to check if it is a whatsapp user\n";
    cin>>ph;
    us.getcontact(ph);
    bool r=us.canChatTxtAudVid(ph);
    if(r==1)
    cout<<"they can chat in text aud video\n";
    else
    cout<<"not on whatsapp now\n";
    
    bool s= us.canSeeStatus(ph);
    if(s==1)
    cout<<"they can see the status\n";
    else
    cout<<"Not using Whatsapp\n";
    return(0);
}
