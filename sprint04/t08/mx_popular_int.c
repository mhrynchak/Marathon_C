int mx_popular_int(const int* arr, int size)
{
	int count = 0, tmpcount;
	int popular = arr[0];
	int tmp = 0;

	for (int i = 0; i < size; i++)
	{
		tmp = arr[i];
		tmpcount = 0;

		for (int j = 0; j < size; j++)
		{
			if (tmp == arr[j]) {
				tmpcount++;
			}
		}

		if (tmpcount > count) {
			popular = arr[i];
			count = tmpcount;
		}
	}

	return popular;
}

