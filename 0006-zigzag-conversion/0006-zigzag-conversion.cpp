class Solution {
public:
    string convert(string s, int numRows) {
	char arr[1000][1000] = {};

	int l = s.length();
	int row = 0, col = 0;
	for (int i = 0; i < l;)
	{
		for (int j = row; j < numRows&&i<l; j++,i++,row++)
		{
			arr[row][col] = s[i];
		}
		row--;
		bool check = 0;
		while(row!=0&&i<l)
		{
			col++;
			row--;
			arr[row][col] = s[i];
			i++;
			check = 1;
		}
		if (check)
			row++;
		else
			col++;
	}
	string s2;
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < col + 2; j++)
		{
			if ((arr[i][j] >= 'A' && arr[i][j] <= 'Z') || (arr[i][j] >= 'a' && arr[i][j] <= 'z')||arr[i][j]==','||arr[i][j]=='.')
			{
				s2 += arr[i][j];
			}
		}
	}
	return s2;

    }
};