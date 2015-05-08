#include<iostream>
#include<vector>

using namespace std;

void swap( int&a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
void transpose(vector<vector<int>> &matrix)
{
	int n = matrix.capacity();
	for(int i = 0; i < n; i++)
		for(int j = i; j<n; j++)
			swap(matrix[i][j],matrix[j][i]);




	for(int i = 0; i < (int)n/2; i++)
		for(int j = 0; j <n; j++)
			swap(matrix[i][j],matrix[n-i-1][j]);
}
/*
int main()
{
	vector<vector<int>> matrix(4);
	int cnt=1;
	for(int i = 0; i<4; i++)
	{
		matrix[i].resize(4);
		for(int j = 0; j < 4; j++)
		{
			matrix[i][j] = cnt++;
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	transpose(matrix);
	for(int i = 0; i<4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
	
}
*/