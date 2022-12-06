#include<iostream>
using namespace std;
//No Arrival TIme required
int main(){
    int nop;
    cout<<"ENter the nuber of Process: ";
    cin>>nop;

    int bt[nop],pt[nop],p[nop];
    float wt[nop]={0},tt[nop]={0};
    for(int i=0;i<nop;i++){
        cout<<"ENter Process No: ";
        cin>>p[i];
        cout<<"ENter Burst Time for"<<p[i]<<" Process :";cin>>bt[i];
        cout<<"Enter Priority for"<<p[i]<<" Process : ";cin>>pt[i];

    }
    for(int i = 0;i<nop;i++){
        int pos =i;
        for(int j=i+1;j<nop;j++){
            if(pt[j]<pt[pos]){
                swap(p[pos],p[j]);
            	swap(pt[pos],pt[j]);
                swap(bt[pos],bt[j]);

            }
        }
    }
    tt[0]=bt[0];
    for(int i =1;i<nop;i++){
        wt[i] += tt[i-1];
        tt[i] += tt[i-1]+bt[i];
    }
    for(int i =0;i<nop;i++){
        cout<<"Process Name : "<<p[i]<<endl;
        cout<<"Waiting Time : "<<wt[i]<<endl;
        cout<<"TurnAround Time: "<<tt[i]<<endl<<endl;
    }


return 0;
}
