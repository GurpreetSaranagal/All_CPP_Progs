// this program is modified to use dynamic memory allocation 
// if it is to be used as it is just remove '*' from target and sum ,and ignore the allocation and deallocation statements
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int *target, *sum, temp;
    target = new int;
    sum = new int;
    *sum = 0;
    cout << " Input the number : ";
    cin >> *target;
    // cout << " target = " << *target << endl
        //  << endl;
    while (1) // used this to end loop only when needed
    {
        while (*target != 0)
        {
            temp = *target % 10;    //calculates the last digit of number 'target'
            *target = *target / 10; // reduces target by daleting last digit of number
            // cout << " sum inside = " << *sum << endl;
            *sum = *sum + temp; // adds the digits one by one and this repeats until the number is 0
        }
        if (*(sum) % 10 == *sum) // checks that sum is single digit number or not
        {
            break; // if sum is single digit number then ends the loop here
        }
        // cout << " target = " << *target << endl;
        *target = *sum; // if sum is not single digit number target changes and loop runs again to again calculate sum from 0
        // cout << "  sum = " << *sum << endl;
        *sum = 0;
    }
    cout << *sum;
    delete sum ,target; 
    
    return 0;
}