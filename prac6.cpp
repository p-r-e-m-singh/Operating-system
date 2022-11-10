#include<iostream>
using namespace std;

int main(){
    int tim= 0;
    int n;
    cout<<"Enter the number of process :";
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the burst time for the "<<i+1<<" proces : ";
        float val;
        cin>>val;
        b[i]=val;
    }
    float wt[n]={0},tt[n]={0};
    wt[0]=0;tt[0]=b[0];
    for(int i=1;i<n;i++){
        tt[i] = tt[i-1]+b[i];
        wt[i] = tt[i-1];

    }
    float awt=0,att=0;
    for(int i=0;i<n;i++){
        awt += wt[i];
        att += tt[i];
        cout<<"For Process"<<(i+1)<<endl<<"\tTurnaround Time : "<<tt[i]<<endl<<"\tWaiting Time : "<<wt[i]<<endl;
    }
    cout<<"Average Waiting Time: "<<awt/n<<endl;
    cout<<"Average Turnaround Time: "<<att/n<<endl;

    return 0;
}
