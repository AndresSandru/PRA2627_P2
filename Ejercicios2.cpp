#include <iostream>
#include <algorithm>
#include <vector>


int C(const std::vector<int>& V, int M){
	int n=m.size();
	int M=d;
	int inf_val=std::numeric_limits<int>::max();
	T[0][0]=0;
	for(j=1; j<=M; j++){
		if(j>=m[0]&&T[0][j-m[0]]!=0)
			T[0][j]=1+T[0][j-m[0]];
	}
}


	for(int i=1; i<n; i++){
		T[i][0]=0;
		for(int j=1; j<=M; j++){
			if(j<V[i] || T[i][j-m[i]==inf_val{
				T[i][j]=T[i-1][j];
		}
			else if(T[i-1][j]!==inf_val){
					/*if(T[i-1][j]<(1+T[i][j-m[i]])){
					T[i][j]=T[i-1][j];
					}
					else{
						T[i][j]=1+T[i][j-m[i]];*/
					T[i][j]=std::min((T[i-1][j]),(1+T[i][j-m[i]]));
			}
	}
			else
				T[i][j]=1+T[i][j-m[i]];
	}

	std::vector<int> Sol(n,0);
	i=n-1;
	j=M;

		while(i!=0 && j!=0){
			if(i==0 || T[i][j]!=T[i-1][j]){
				Sol[i]=Sol[i]+1;
				j=j-m[i];
		}
			else {i=i-1;
			}
		}
	return Sol;
