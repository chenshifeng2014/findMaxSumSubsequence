#include<iostream>
#include<vector>
using namespace std;
void find_max_subseq(const vector<int> &seq){
	int max_value=0,subseq_value=0,start_pos=0,end_pos=0,tmp_pos=1;
	for(int i=0;i!=seq.size();++i){
		subseq_value +=seq[i];
		if(subseq_value>=max_value){
			max_value=subseq_value;
			start_pos = tmp_pos;
			end_pos = i+1;
		} else {
			if(subseq_value<=0){
				subseq_value = 0;
				if(i!=(seq.size()-1)){
				    tmp_pos =i+2;
				}
			}
		}

	}
	cout<<"max_value:"<<max_value<<endl;
	cout<<"start_pos:"<<start_pos<<endl;
	cout<<"end_pos:"<<end_pos<<endl;
}
int main(){
	vector<int> seq;
	cout<<"put in the sequence,end q"<<endl;
	int num;
	while(cin>>num){
		seq.push_back(num);
	}
	find_max_subseq(seq);
	return 0;
}
