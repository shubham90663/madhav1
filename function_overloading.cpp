#include <iostream>
using namespace std;
class Vehicle
{
    public:
        int speed;
        int vehicle_type;
        bool lightOnOFF;
        bool headlight;
        bool taillight;
        bool beam;
        int breaking();
        int breaking(int);
        int acceleration(int);
        int acceleration();
        bool lightening(bool,bool,bool);
        bool lightening(bool,bool,bool,bool);
        void display();
        Vehicle(int sp)
        {
            speed=sp;
            lightOnOFF=true;
            beam=false;
            headlight=true;
            taillight=true;
            vehicle_type=2;
            cout<<"Constructor called"<<endl;
        }
};
void Vehicle::display()
{
    cout<<endl;
    cout<<"Vehicle type="<<vehicle_type<<endl;
    cout<<"speed="<<speed<<endl;
    cout<<"Light ON/OFF="<<lightOnOFF<<endl;
    cout<<"headlight="<<headlight<<endl;
    cout<<"taillight="<<taillight<<endl;
    if(vehicle_type==4)
    cout<<"light beam="<<beam<<endl;
    cout<<endl;

}
int Vehicle::breaking()
{
    cout<<"two wheeler breaking called"<<endl<<endl;
    if(speed>0 &&speed<120)
    {
        vehicle_type=2;
        speed=speed-5;
    }
    return speed;
}
int Vehicle::breaking(int vtype)
{
    cout<<"four wheeler breaking called"<<endl<<endl;
    if(speed>0 &&speed<180)
    {
        vehicle_type=vtype;
        speed=speed-10;
    }
    return speed;
}
int Vehicle::acceleration()
{
    cout<<"two wheeler acceleration called"<<endl<<endl;
    if(speed>0&&speed<120)
    {
        vehicle_type=2;
        speed=speed+5;
    }
    return speed;
}
int Vehicle::acceleration(int vtype)
{
    cout<<"four wheeler acceleration called"<<endl<<endl;
    if(speed>0 &&speed<180)
    {
        vehicle_type=vtype;
        speed=speed+10;
    }
        return speed;
}
bool Vehicle::lightening(bool light,bool head,bool tail)
{
    cout<<"two wheeler lightening called"<<endl<<endl;
    vehicle_type=2;
    lightOnOFF=light;
    headlight=head;
    taillight=tail;
    return lightOnOFF;
}
bool Vehicle::lightening(bool light,bool head,bool tail,bool b)
{
    cout<<"four wheeler lightening called"<<endl<<endl;
    vehicle_type=4;
    lightOnOFF=light;
    headlight=head;
    taillight=tail;
    beam=b;
    return lightOnOFF;
}
int main()
{
    int retval;
    bool val;
    Vehicle v1(50);
    retval=v1.breaking();
    v1.display();
    retval=v1.breaking(4);
    v1.display();
    retval=v1.acceleration();
    v1.display();
    retval=v1.acceleration(4);
    v1.display();
    val=v1.lightening(true,true,false);
    v1.display();
    val=v1.lightening(true,false,true,true);
    v1.display();
    return 0;
}
