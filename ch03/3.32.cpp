#include<vector>
#include<iostream>
using std::vector;
using std::cout;
using std::endl;
using std::iterator;
int main(){
	vector <int>iv(10);
	for (auto ite = iv.begin(); ite != iv.end();++ite)
	{
		*ite = ite - iv.begin();
	}
	vector<int>iv2(iv);
	for(auto i:iv2	)
	{
		cout << i << " ";
	}

	return 0;
}
