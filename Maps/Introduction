#include <bits/stdc++.h>

using namespace std;

int main() {
	//creating a map
	map <int, int> mmap;
	
	//inserting a pair
	mmap.insert({0,1});
	mmap.insert({1,2});
	mmap.insert({2,3});
	mmap.insert({3,4});
	
	//size of map
	cout<<mmap.size()<<endl;
		
	//iterator for a map
	map<int, int> :: iterator itr;
	
	//iterating over the map
	for(itr = mmap.begin(); itr != mmap.end(); itr++)
	{
		cout<<itr->first<<" ";
		cout<<itr->second<<endl;
	}
	cout<<endl;
	
	//second map
	map<int, int> mmap1(mmap.begin(), mmap.end());
	
	//erase pair with specific key value
	mmap.erase(3);
	
	//printing over the map 
	for(itr = mmap.begin(); itr != mmap.end(); itr++)
	{
		cout<<itr->first<<" ";
		cout<<itr->second<<endl;
	}
	cout<<endl;
	
	//erasing all pairs upto a specific key value
	mmap1.erase(mmap1.begin(), mmap1.find(2));
	
	//printing over the map 
	for(itr = mmap1.begin(); itr != mmap1.end(); itr++)
	{
		cout<<itr->first<<" ";
		cout<<itr->second<<endl;
	}
	cout<<endl;
	
	return 0;
}
