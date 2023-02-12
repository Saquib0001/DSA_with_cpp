#include <bits/stdc++.h>
using namespace std;

int numPairsDivisibleBy60(vector<int> time) {
	//group[60] renamed as a[60] --> 60 possible remainder 1 to 59 
	int count=0;
	int a[60]={0};
	for(int i=0;i<time.size();i++){
	a[time[i]%60]++;
	}
	int i=1,j=59;
	while(i<j){ 
	count+=a[i]*a[j];
	i++;
	j--;
	}

	//for group[30] and group[0]
	count+=(a[0]*(a[0]-1)/2)+(a[30]*(a[30]-1)/2);
	
	return count;
}


int main(){
	int n,item;
	cout<<"Number of times to be entered:\n"; 
	cin>>n;  // 5
	cout<<"Enter times...\n"; 
	vector<int> time;
	while(n--){
		cin>>item; // {30,20,150,100,40}
		time.push_back(item);
	}
	cout<<"number of such pairs possible is: " ;
	cout<<numPairsDivisibleBy60(time)<<endl; // outpit will be 3..
	return 0;
}