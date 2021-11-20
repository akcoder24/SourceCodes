class Main
{
static int R = 3, C = 3;
static void unique(int matrix[][],
				int n, int m)
{
	int max = 0, flag = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(max < mat[i][j])
					max = mat[i][j];
	int b[] = new int [max + 1];
	for(int i = 0 ; i < n; i++)
		for(int j = 0; j < m; j++)
			b[matrix[i][j]]++;
	for(int i = 1; i <= max; i++)
		if(b[i] == 1)
			System.out.print(i + " ");
			flag = 1;
			
	if(flag == 0)
	{
		System.out.println("No unique element " +
								"in the matrix");
	}
}
public static void main(String args[])
{
	int matrix[][] = { {10,1,0},
					{2,8,1},
					{1,2,10}};
	unique(matrix, R, C);
}
}
