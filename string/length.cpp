#include<bits/stdc++.h>
using namespace std;

int getLength(char arr[]){
	int i=0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char arr[5];
	cin >> arr;

	cout << getLength(arr);
}