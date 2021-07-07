#include<iostream>
using namespace std;

int main(){
	int N, A[1000], i, j , count = 0;
	cin>>N;
	for (i = 0; i < N; i++){
	 cin>> A[i];
	}
	if (N < 2){
		cout <<"Invalid Input"<<endl;
	}
	for (i = 0; i < N; i++){
		for (j = i + 1; j < N; j++){
			if (A[i] > A[j]){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for (i = 0; i < N; i++){
		if (A[i] == A[0]){
			count++;
		}
	}
	if (count == N){
		cout<<"Equal"<<endl;
	}
	else{
		cout <<A[0] << " "<<A[1];
	}

}
