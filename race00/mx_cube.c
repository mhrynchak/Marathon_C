void mx_printchar(char c);

void mx_cube(int n) {
	int l = 2 * n + 3 + n / 2;
	int h = n + 3 + n / 2;
	char cube[l][h];
	for (int i = 0; i < h; i++){
		for (int j = 0; j < l; j++){
     		cube[i][j] = '*';
     		mx_printchar(cube[i][j]);
		}
		mx_printchar ('\n');
	}
}

