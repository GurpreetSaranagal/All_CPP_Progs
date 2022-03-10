 #include<iostream>
 using namespace std;
 class ShopItem
 {
     int item_number;
     float item_price;
     public:
        void setData(int a,float b){
            item_number =  a;
            item_price = b;
        }
        void getData(){
            cout<<"The ID of the item is: "<<item_number<<"\n";
            cout<<"The price of this item is: "<<item_price<<"\n";
        }
 };
 int main()
 {
     int size = 3;
     ShopItem *ptr = new ShopItem [size];
     int a, i;
     float b;
     for ( i = 0; i < size; i++)
     {
         cout<<"Enter ID and price of item "<<i+1<<"\n";
         cin >> a >> b;
         (ptr+i)->setData(a,b);
     }
     for ( i = 0; i < size; i++)
     {
         (ptr+i)->getData();
     }
     
     
     return 0;
 }