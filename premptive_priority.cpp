#include<iostream>
using namespace std;

int main(){
    int nop,sum_wait=0,sum_tt=0;
    cout<<"Enter the number of processes : ";cin>>nop;
    int at[nop],bt[nop],rt[nop],remt=nop,pt[nop+1],p[nop];
    for (int i = 0; i < nop; i++)
    {
        cout<<"Enter Process No : ";cin>>p[i];
        cout<<"Enter the Arrival Time for "<<p[i]<<" process : ";cin>>at[i];
        cout<<"Enter the Burst Time for "<<p[i]<<" process : ";cin>>bt[i];rt[i]=bt[i];
        cout<<"Enter the Priority for "<<p[i]<<" process : ";cin>>pt[i];


    }


    for(int i=0;i<nop;i++){
        int pos = i;
        for(int j = i+1;j<nop;j++){
            if(at[j]<at[pos]){
                swap(at[j],at[pos]);
                swap(pt[j],pt[pos]);
                swap(p[pos],p[j]);
                swap(bt[j],bt[pos]);
            }
        }
    }
    pt[nop]=nop+1; 
    
    for(int time=0;remt!=0;time++){
        int smallest = nop ;
        for(int i=0;i<nop;i++){
            if(at[i]<=time && pt[i]<pt[smallest] && rt[i]>0){
                smallest=i;
            }
            rt[smallest]--;
            if(rt[smallest]==0){
                remt--;
                cout<<"P :"<<smallest+1<<"\t|\t"<<time+1-at[smallest]<<"\t\t|\t"<<time+1-at[smallest]-bt[smallest]<<endl;
                sum_wait += time+1-at[smallest];
                sum_tt += time+1-at[smallest]-bt[smallest];


            }

        }


    }
    cout<<"\nAverage Waiting Time:"<<sum_wait*1.0/nop;
    cout<<"\nAverage TurnArund Time : "<<sum_tt*1.0/nop<<endl;

    



    
return 0;
}