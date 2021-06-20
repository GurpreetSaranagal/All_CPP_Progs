#include<iostream>
using namespace std;

int main()
{
    int rickshaw = 0, car= 0, bus=0 , total_veh=0;
    char leave = 'n';
    int choice;
    while (1)
    {
        // choices for vehical entered
        cout <<"Press 0 to view menu \n";
        cout <<"1. A rickshaw entered \n" ;
        cout <<"2. A car entered \n" ;
        cout <<"3. A bus entered \n" ;
        
        cin >> choice;
        
        if(choice > 0 && choice <= 4 && total_veh >= 50)
        {
            cout<<"\nSorry Parking is full \n";
            choice = -1;
        }

        if(choice == 1)
        {
            rickshaw ++;
            total_veh ++;
        }
        else if(choice == 2)
        {
            car ++;
            total_veh ++;
        }
        else if(choice == 3)
        {
            bus ++;
            total_veh ++;
        }
        else if(choice == 0)
        {
            while(leave == 'n' || leave == 'N'){
                cout<<"**************************"<<endl;
                cout <<"1. To view number of vehicles currently in parking \n" ;
                cout <<"2. To calculate whole amount \n" ;
                cout <<"3. To view complete record \n" ;
                cout <<"4. To delete record \n" ;
                cout <<"5. To End Program \n";
                cout<<"**************************"<<endl;
                cin >> choice;
                if(choice == 1)
                {
                    cout<<"**************************"<<endl;
                    cout<<"Number of Rickshaws = " << rickshaw<<endl;
                    cout<<"Number of cars = " << car<<endl;
                    cout<<"Number of buses = " << bus<<endl;
                    cout<<"Total number of vehicles = " <<total_veh <<endl;
                    cout<<"**************************"<<endl;

                }
                else if(choice == 2)
                {
                    cout<<"**************************"<<endl;
                    cout<<"Cost for parking of\n one rickshaw = 100 \n one car = 200 \n one bus = 300 \n";
                    cout<<"Current amount of rickshaw = " << rickshaw * 100<<endl;
                    cout<<"Current amount of cars = " << car * 200<<endl;
                    cout<<"Current amount of buses = " << bus * 300<<endl;
                    cout<<"Grand Total = " << rickshaw * 100 + car * 200 + bus * 300 <<endl;
                    cout<<"**************************"<<endl;
                }
                else if(choice == 3)
                {
                    cout<<"**************************"<<endl;
                    cout<<"Total vehicles = "<<total_veh <<endl;
                    cout<<"Space left = "<< 50 - total_veh<<endl;
                    cout<<"Total amount = "<<  rickshaw * 100 + car * 200 + bus * 300 <<endl;
                    cout<<"**************************"<<endl;
                }
                else if(choice == 4)
                {
                    rickshaw = car = bus = total_veh = 0;
                    cout<<"**************************"<<endl;
                    cout<<"All record deleted";
                    cout<<"**************************"<<endl;
                }
                else if(choice == 5)
                {
                    cout << " ENDING THE PROGRAM \n THANKS FOR USING IT ";
                    exit(0);
                }
                else
                {
                    cout<<"**************************"<<endl;
                    cout<<"\nWRONG CHOICE\n";
                    cout<<"**************************"<<endl;
                }

                cout<<"\nDo you want to leave (Y/N)\n";
                cin>>leave;
            }
        }
        else if(choice == -1) {}
        else 
        {
            cout <<"\nWRONG CHOICE\n";
        }
        
        
    }
    return 0;
}