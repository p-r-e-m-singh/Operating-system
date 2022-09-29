#include<iostream>

using namespace std;

int main(){
    cout<<"\t\tCode for Round RObin Scheduling";
    int n;
    cout<<"Enter the number of process :";
    cin>>n;
    float b[n],at[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the burst time for the "<<i+1<<" process: ";
        cin>>b[i];
        cout<<"Enter the Arrival Time for the"<<i+1<<" process: ";
        cin>>at[i];
    }
    float ts;
    cout<<"Enter the time slice :";
    cin>>ts;
    int rem_processes=n;
    float rem_time[n];
    while(rem_processes!=0){
            int pcount = 0;
            int tim=0;
            while(tim<=ts){
                for (int i = 0; i < b[pcount]; i++)
                {
                    /* code */
                }
                

            }
    }

return 0;
}