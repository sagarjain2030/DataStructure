#include<iostream>
#include<vector>
#include<experimental/random>

void InsertionSort(std::vector<int> &v)
{
	for(auto i = 0; i < v.size();i++)
	{
		auto key = v[i];
		int j = i - 1;
		while(j >= 0 && v[j] > key)
		{
			v[j+1] = v[j];
			j = j-1;
		}
		v[j+1] = key;
	}
}

int main()
{
	int vectSize = std::experimental::randint(1000,5000);
	std::vector<int> v;
	for(auto i = 0;i < vectSize;i++)
		v.push_back(std::experimental::randint(1,1000));

	std::cout<<"Size of vector is :"<<vectSize<<std::endl;
	std::cout<<"Number in array are "<<std::endl;
	for (auto i = v.begin(); i != v.end(); ++i)
		std::cout<<*i<<"  ";

	std::cout<<std::endl;
	InsertionSort(v);

	std::cout<<"Number in array are "<<std::endl;
	for (auto i = v.begin();i != v.end(); ++i)
		std::cout << *i << "  ";
}