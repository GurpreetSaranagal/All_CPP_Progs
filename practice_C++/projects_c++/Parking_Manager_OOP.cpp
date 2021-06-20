#include<iostream>
using namespace std;
class parking
{
    int limit, rickshaw, car, bus, total_veh;
    public:
    parking(int l=50)
    {
        limit = l;
        rickshaw = car = bus = total_veh = 0;
    }
    void entery(int no );
    void veh_exit(int no );
    void showfull()
    {
        cout<<"Total money to be collected : " << rickshaw * 100 + car * 200 + bus * 300
            <<"Total vehicals in parking : " << rickshaw + car +bus 
            <<"Spaces left " << limit - (rickshaw + car +bus) ;
    }
    void empty_parking()
    {
        limit = rickshaw = car = bus = 0;
    }
    int check_full()
    {
        if(rickshaw + car + bus >= limit)
            return 0;
        else
            return 1;
    }
};
void parking :: entery(int no = 1)
{
    
    cout<<"Select which type of vehicle entered :\n"
        <<"1. Rickshaw\n"
        <<"2. Car\n"
        <<"3. Bus\n";
    int veh;
    cin >> veh;
    if(veh == 1)
    {
        rickshaw += no;
        total_veh += no;
    }
    else if(veh == 2)
    {
        car += no;
        total_veh += no;
    }
    else if(veh == 3)
    {
        bus += no;
        total_veh += no;
    }
    else if(veh < 1 || veh > 3)
    {
        cout<<"\nWrong Choice of Vehicle \nNOT COUNTING ANY VEHICLE\n";
    }
}
void parking :: veh_exit(int no = 1)
{
    cout<<"Select which type of vehicle exited :\n"
        <<"1. Rickshaw\n"
        <<"2. Car\n"
        <<"3. Bus\n";
    int veh;
    cin >> veh;
    if(veh == 1)
    {
        rickshaw -= no;
        total_veh -= no;
    }
    else if(veh == 2)
    {
        car -= no;
        total_veh -= no;
    }
    else if(veh == 3)
    {
        bus -= no;
        total_veh -= no;
    }
    else if(veh < 1 || veh > 3)
    {
        cout<<"\nWrong Choice of Vehicle \nNOT COUNTING ANY VEHICLE\n";
    }   
}
int main()
{
    int size;
    cout<<"size of parking : ";
    cin >> size;
    parking p(size);
    int choice,veh;
    while(p.check_full())
    {
        cout<<"\n1. Vehicle ENTERED\n" 
            <<"2. Vehicle EXIT";
        cin >> choice;
        cout<<"How many vehicle : " ;
        cin >> veh;
        if(choice == 1)
            p.entery(veh);
        else if(choice == 2)
            p.veh_exit(veh);
        
        
    }
    cout<<"\nDo you want to show records (1/0) ";
    cin>>choice;
    if(choice == 1)
        p.showfull();
        cout<<"\nDo you want to delete the record and restart a new day(1/0): ";
        cin >> choice;
        if(choice == 1)
        {
            p.empty_parking();
        }
    else
    {
        cout<<"\nDo you want to delete the record and restart a new day(1/0): ";
        cin >> choice;
        if(choice == 1)
        {
            p.empty_parking();
        }
    }
    return 0;
}