#include<bits/stdc++.h>
using namespace std;
int main(){
    int scoresereja=0,scoredima=0;
    int n; 
    cin>>n;
    list<int> lst;
    int x;
    for(int i=0;i<n;i++){
      cin>>x;
      lst.push_back(x);
    }
    int turn=0;
    while(!lst.empty()){
      if(lst.front()>lst.back()){
        if(turn==0){
          scoresereja+=lst.front();
          lst.pop_front();
        }else{
          scoredima+=lst.front();
          lst.pop_front();
        }
      }else{
        if(turn==0){
          scoresereja+=lst.back();
          lst.pop_back();
        }else{
          scoredima+=lst.back();
          lst.pop_back();
        }
      }
      turn=1-turn;
    }
    cout<<scoresereja<<" "<<scoredima<<"\n";
    return 0;
}
