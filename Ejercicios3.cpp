#include <iostream>
#include <vector>
#include <algorithm>

int mochila(const std::vector<int>& p, const std::vector<int>& b, int m, std::vector<int>& s){

	int n=p.size();
	std::vector<std::vector<int>> V(n+1, std::vector<int>(m+1, 0));


	for (int i = 1; i<=n; i++) {
        for (int w=0; w<=m; w++) {
            if (p[i-1]>w) {
              
                V[i][w]=V[i-1][w];
            } else{
                V[i][w]=std::max(V[i-1][w], b[i-1]+V[i-1][w-p[i-1]]);
            }
        }
    }
    std::vector<int> s(n,0);
    int w=m;
    for (int i=n; i>0; i--) {
        if (V[i][w]!=V[i-1][w]) {
            s[i-1]=1;
            w=w-p[i - 1]; 
        } else{
            s[i-1]=0;
        }
    }    return V[n][m];
}


