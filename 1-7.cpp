#include<iostream>
#include<vector>

using namespace std;

void setZero(vector<vector<int>> & matrix)
{
	int n = matrix.capacity();
	vector<int> row(n); 
	vector<int> col(n);
	row.assign(n,0);
	col.assign(n,0);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(matrix[i][j] == 0)
			{	row[i] = 1;
				col[j] = 1;
			}
		}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(row[i] == 1 || col[j] == 1)
				matrix[i][j] = 0;

}
/*
int main()
{
	vector<vector<int>> matrix(4);
	int cnt=0;
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
	matrix[1][2] = 0;
	setZero(matrix);
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