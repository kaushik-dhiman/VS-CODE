#include <bits/stdc++.h>
using namespace std;
vector<int> randomroute(int n){
	vector<int> cities;
	for(int i=0;i<n;i++){
		cities.push_back(i);
	}
	vector<int> sol;
	for(int i=0;i<n;i++){
		int ran=rand()%(cities.size());
		sol.push_back(cities[ran]);
		cities.erase(cities.begin()+ran);
	}
	return sol;
}
int routelength(vector<vector<int>> tsp,vector<int> sol){
	int length=0;
	for(int i=1;i<sol.size();i++){
		length+=tsp[sol[i-1]][sol[i]];
	}
	length+=tsp[sol[sol.size()-1]][sol[0]]; 
	return length;
}
pair<vector<int>,int> getbestNeighbour(vector<vector<int>> tsp,vector<vector<int>> neighbour){
	int brl=routelength(tsp,neighbour[0]);
	vector<int> bn=neighbour[0];
	for(int i=1;i<neighbour.size();i++){
		int currbest=routelength(tsp,neighbour[i]);
		if(brl>currbest){
			brl=currbest;
			bn=neighbour[i];
		}
	}
	pair<vector<int>,int> br={bn,brl};
	return br;
}
vector<vector<int>> getneighbours(vector<int> sol){
	vector<vector<int>> neighbour;
	for(int i=0;i<sol.size();i++){
		for(int j=i+1;j<sol.size();j++){
			vector<int> v=sol;
			v[i]=sol[j];
			v[j]=sol[i];
			neighbour.push_back(v);
		}
	}
	return neighbour;
}
pair<vector<int>,int> hillclimbing(vector<vector<int>> tsp,int n){
	vector<int> sol=randomroute(n);
	int len=routelength(tsp,sol);
	vector<vector<int>> neighbour=getneighbours(sol);
	pair<vector<int>,int> br=getbestNeighbour(tsp,neighbour);
	while(br.second<len){
		len=br.second;
		sol=br.first;
		neighbour=getneighbours(sol);
		br=getbestNeighbour(tsp,neighbour);
	}
	return br;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> tsp(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>tsp[i][j];
		}
	}
	pair<vector<int>,int> br=hillclimbing(tsp,n);
	for(int i=0;i<br.first.size();i++){
		cout<<br.first[i]<<" ";
	}
	cout<<"\n"<<br.second;
}