#include<iostream>
using namespace std;
//No Arrival time + Priority required
int main(){
    int tim= 0;
    int n;
    std::cout<<"Enter the number of process :";
    cin>>n;
    int b[n],index[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter the burst time for the "<<i+1<<" proces : ";
        int val;
        cin>>val;
        b[i]=val;
        index[i]=i;

    }
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(b[j]<b[i]){
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            int temp=b[i];
            b[i]= b[min_index];
            b[min_index]= temp;
            temp = index[i];
            index[i]=index[min_index];
            index[min_index]=temp;

        }



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
        std::cout<<"For Process"<<index[i]+1<<endl<<"\tTurnaround Time : "<<tt[i]<<endl<<"\tWaiting Time : "<<wt[i]<<endl;
    }
    cout<<"Average Waiting Time: "<<awt/n<<endl;
    cout<<"Average Turnaround Time: "<<att/n<<endl;

    return 0;
}
