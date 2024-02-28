#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
int main()
{
    int hours, minutes, seconds;
    cout << "hours : ";
    cin >> hours;
    cout << "minutes : ";
    cin >> minutes;
    cout << "seconds : ";
    cin >> seconds;
    while (1)
    {
        seconds ++;
        minutes += seconds / 60;
        hours += minutes / 60; 
        minutes  %= 60;
        seconds %= 60;
        system("cls");
        cout << hours << " : " << minutes << " : " << seconds ;
        usleep(1000000); 
    
    }
    
}