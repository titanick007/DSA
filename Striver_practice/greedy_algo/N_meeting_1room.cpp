#include <bits/stdc++.h>
using namespace std;
typedef struct{
    int meetnum;
    int start;
    int end;
}meeting;

void meet_swap(meeting *a, meeting *b) {
    meeting temp = *a;
    *a = *b;
    *b = temp;
}


int partition(vector<meeting>&meeting_list,int lb,int ub){
    int i=lb-1;
    int pivot=meeting_list[ub].end;
    for(int j=lb;j<=ub;++j){
        if(meeting_list[j].end<pivot){
            ++i;
            meet_swap(&meeting_list[i],&meeting_list[j]);
        }
    }
    meet_swap(&meeting_list[i+1],&meeting_list[ub]);
    return i+1;
    
}
void sort_meeting(vector<meeting>&meeting_list,int lb,int ub){
    if(lb<ub){
        int mid=partition(meeting_list,lb,ub);
        sort_meeting(meeting_list,lb,mid-1);
        sort_meeting(meeting_list,mid+1,ub);
    }
}

void n_meeting_max(vector<meeting>&meeting_list){
    int n=meeting_list.size();
    sort_meeting(meeting_list,0,n-1);
    int prev_meet_endtime=0;
    for(int i=0;i<n;++i){
        if(meeting_list[i].start>=prev_meet_endtime){
            cout<<meeting_list[i].meetnum<<" ";
            prev_meet_endtime=meeting_list[i].end;
        }

    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter number of meetings\n";
    cin>>n;
    vector<meeting> meeting_list(n);
    for(int i=0;i<n;++i){
        meeting_list[i].meetnum=i+1;
        cin>>meeting_list[i].start;
        cin>>meeting_list[i].end;
    }
    n_meeting_max(meeting_list);
    return 0;
}