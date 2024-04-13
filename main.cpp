Entrunt* sortSurname(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{
	Entrunt* temp_arr = new Entrunt[number_of_Entrunts]; 
  
	for (int i = 0; i < number_of_Entrunts - 1; i++) 
	{
		for (int j = 0; j < number_of_Entrunts - i - 1; j++) 
		{
			if (temp_arr[j].surname > temp_arr[j + 1].surname) 
			{
				swap(temp_arr[j], temp_arr[j + 1]); 
			}
		}
	}
	showEntrunts(temp_arr, number_of_Entrunts);

	int temp;
	canISaveNow();

	protection(1, 2, temp);
	switch (temp)
	{
	case 1: 
		delete[]arr_of_Entrunts;
		arr_of_Entrunts = temp_arr;
		break;
	case 2: 
		delete[] temp_arr; 
		break;
	}
	return arr_of_Entrunts;
}

Entrunt* sortFucartment(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{

	Entrunt* arr_new = new Entrunt[number_of_Entrunts];


	for (int i = 0; i < number_of_Entrunts - 1; i++) 
	{
		for (int j = 0; j < number_of_Entrunts - i - 1; j++)
		{
			if (arr_new[j].Fucartment > arr_new[j + 1].Fucartment)
			{
				swap(arr_new[j], arr_new[j + 1]);
			}
		}
	}
	showEntrunts(arr_new, number_of_Entrunts);

	int temp;
	canISaveNow();

	protection(1, 2, temp);
	switch (temp)
	{
	case 1:
		delete[]arr_of_Entrunts;  
		arr_of_Entrunts = arr_new;  
		break;
	case 2:
		delete[] arr_new; 
		break;
	}
	return arr_of_Entrunts;
}

Entrunt* sortBall(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{

	Entrunt* arr_new = new Entrunt[number_of_Entrunts];

	for (int i = 0; i < number_of_Entrunts - 1; i++) 
	{
		for (int j = 0; j < number_of_Entrunts - i - 1; j++)
		{
			if (arr_new[j].Ball > arr_new[j + 1].Ball)
			{
				swap(arr_new[j], arr_new[j + 1]);
			}
		}
	}
	showEntrunts(arr_new, number_of_Entrunts);

	int temp;
	canISaveNow(); 

	protection(1, 2, temp);
	switch (temp)
	{
	case 1: 
		saved(); 
		delete[]arr_of_Entrunts;
		arr_of_Entrunts = arr_new;
		break;
	case 2: 
		delete[] arr_new;
		saved();
		break;
	}
	return arr_of_Entrunts;
}



void findSurname(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{
	string FindSurname; 
	bool flag = true;
	cin >> FindSurname;
	for (int i = 0; i < number_of_Entrunts; i++)
	{
		if (FindSurname == arr_of_Entrunts[i].surname) 
		{
			showFoundEntrunts(arr_of_Entrunts, number_of_Entrunts, i);
			flag = false; 
		}
	}
	if (flag)
	{
		noAccount();
	}

}


void findSpeciolize(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{
	string SearchPositio; 

	cin >> SearchPositio;
	bool flag = true;
	for (int i = 0; i < number_of_Entrunts; i++)
	{
		if (arr_of_Entrunts[i].Speciolize == SearchPositio)
		{
			showFoundEntrunts(arr_of_Entrunts, number_of_Entrunts, i);
			flag = false; 
		}
	}
	if (flag)
	{
		noAccount();
	}
}


void findMaxBall(Entrunt* arr_of_Entrunts, int number_of_Entrunts)
{

	int MaxKol = 0;
	for (int i = 0; i < number_of_Entrunts; i++)
	{
		if (MaxKol < arr_of_Entrunts[i].Ball) 
		{
			MaxKol = arr_of_Entrunts[i].Ball;
		}
	}
	for (int i = 0; i < number_of_Entrunts; i++) 
	{
		if (arr_of_Entrunts[i].Ball == MaxKol) 
		{
			showFoundEntrunts(arr_of_Entrunts, number_of_Entrunts, i);
		}
	}

}
