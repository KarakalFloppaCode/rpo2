#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	
	
	const int size = 10;
	int arr[size];
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 6;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0) 
		{
			arr[count] = arr[i];
			count++;
		}
	}

	std::cout << "\n\n";

	for (int i = count; i < size; i++)
	{
		arr[i] = -1;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}


	return 0;
}

/*
	const int row = 4;
	const int col = 4;
	int summ = 0;
	
	int summ_summ = 0;
	int arr[row][col]{};

	arr[0][1] = 5;


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			std::cout << arr[i][j] << " \t";
			summ += arr[i][j];
		}
		std::cout << "|"<< summ << "\n";
		summ = 0;
	}
	std::cout << "-----------------------------------";
	std::cout << "\n";

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			summ += arr[j][i];
			summ_summ += arr[j][i];
		}

		std::cout << summ <<  "\t";
		summ = 0;
	}
	std::cout << "|" << summ_summ;
*/


/*
const int size = 6;
double arr[size]{};
double summ = 0;
double arif = 0;

for (int i = 0; i < size; i++)
{
	arr[i] = rand() % 21 - 10;
}
for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << " ";
}

std::cout << "\n\n";

for (int i = 0; i < size; i++)
{
	if (arr[i] > 0)
	{
		std::cout << arr[i] << " ";
		summ += arr[i];
	}
}

std::cout << "\nсумма положительных: " << summ << "\n\n";

summ =0;

for (int i = 0; i < size; i++)
{
	if (arr[i] < 0)
	{
		std::cout << arr[i] << " ";
		summ += arr[i];
	}
}

std::cout << "\nсумма отрицательных: " << summ << "\n\n";

summ = 0;

for (int i = 0; i < size; i++)
{
	summ += arr[i];
}

std::cout << "сумма всех чисел: " << summ << "\n\n";

arif = summ / size;

std::cout << "Среднее арифметическое: " << arif << "\n\n";
*/


/*

// тип_данных имя_массива[кол_ячеек]{значение для 0 ячейки, для первой, для второй и тд}

const int size = 5;
//one = 10

int arr[size]{1,2,3,4,5};

// arr[0] = 10
// arr[1] = 20

//std::cin >>  arr[1];



std::cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << "\n" << arr[3] << "\n";

*/


/*
int choose = 0, hp = 0, number = 0, random_number = 0;
	int maxhp = 25, maxhpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \" Угадай число\" \n\n\n";
		std::cout << "1 - Начать игру\n\n";
		std::cout << "2 - Настройки\n\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				int choose = 0;
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности \n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n\n";
				std::cout << "2 - Сложный (1 - 5000)\n\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1)
				{
					hp = maxhp;
					random_number = rand() % 500 + 1;
					while (true)
					{
						system("cls");
						std::cout << "\nСейчас у тебя = " << hp << "хп\n\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;
						if (number == random_number)
						{
							std::cout << "Поздравляю, вы угадали!\n";
							std::cout << "Осталось " << hp << " хп\n";
							system("pause");
							break;
						}
						else if (number > 500 || number < 1)
						{
							std::cout << "Число не в диапазоне\n";
							Sleep(1500);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << random_number << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n\n";
							std::cout << "Сейчас у тебя = " << hp << "хп\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << random_number << "\n";
									system("pause");
									break;
								}
								if (number > random_number)
								{
									std::cout << "Ваше число больше числа компьтера\n";
								}
								else
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 2)
				{
					hp = maxhpHard;
					random_number = rand() % 5000 + 1;
					while (true)
					{
						system("cls");
						std::cout << "\nСейчас у тебя = " << hp << "хп\n\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;
						if (number == random_number)
						{
							std::cout << "Поздравляю, вы угадали!\n";
							std::cout << "Осталось " << hp << " хп\n";
							system("pause");
							break;
						}
						else if (number > 5000 || number < 1)
						{
							std::cout << "Число не в диапазоне\n";
							Sleep(1500);
						}
						else
						{
							hp--;

							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << random_number << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n\n";
							std::cout << "Сейчас у тебя = " << hp << "хп\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << random_number << "\n";
										system("pause");
										break;
									}
								}
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << random_number << "\n";
									system("pause");
									break;
								}


								if (number > random_number)
								{
									std::cout << "Ваше число больше числа компьтера\n";
								}
								else
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								Sleep(2500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНеверный ввод\n\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{


				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности \n\n\n";
				std::cout << "1 - Изменить кол-во жизней для лёгкой игры\n\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n\n";
				std::cout << "3 - Изменить процент выпадение бесплатной подсказки\n\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для лёгкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxhp = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxhpHard = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите шанс для бесплатной жизни: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							chance = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНеверный ввод\n\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру!!!!!\n\n\n";
			break;

		}
		else
		{
			std::cout << "\nНеверный ввод\n\n";
			Sleep(1500);
		}
	}
*/


/*
	for (int i = 0; i < 10; i++)
		{
			a = rand() % 21 - 10;

			std::cout << a << "\n";
		}







	 double D, a, b, c, x1, x2;
	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";

	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << "= 0\n\n";
	D = (pow(b, 2) - 4 * a * c);

	std::cout << "Дискриминант: " << D << "\n\n";

	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		std::cout << "Первый корень: " << x1 << " Второй корень: " << x2 << "\n\n";
	}
	else if (D == 0)
	{
		x1 = (-b) / (2 * a);
		std::cout << "Один корень: " << x1<< "\n\n";
	}
	else
	{
		std::cout << "Нет корней\n\n";
	}


	*/


/*

	Типы данных:

	bool			true/false				0 - false
	char			'+'						43
	unsigned char	'+'						43		0-255

	short			123						-32768 -- 32767
	unsigned short	123						0 -- 65535
	int				1234567890				-2147483648 -- 2147483647
	unsigned int	1234567890				0 -- 4294967295
	long long int	1234567890				большой

	float			123456.987654			3.4E-38 -- 3.4E+38
	double			987646523149.156546		1.7E-308 -- 1.7E+308
	long double		6514651465316316531463	3.4E-4932 - 1.1E + 4932

	auto

	Операторы:

	Математические: + - * / = // ** % ++ -- += -= /= *= ()
	Сравнительные: < > <= >= == !=		<=>
	Логические:  && (и)		|| (или)	! (не)


	ТАБУ:  goto		and or not		int ИмяПеременной






	std::cout << "\n\n\n\n\t Денис";

*/


/*

std::cout << "Ярослав\n" << "\tЧтобы её кушать\n" << "\t\t Чтобы шумел\n" <<"\t" << 150 << " Рублей\n" << "Что-то";


------------------------------------------------------------------

	double a = 0;
	double b = 0;
	double c = 0;
	double v = 0;


	std::cout << "Здраствуйте!!!\nВведите кол-во рублей для покупки валюты: ";
	std::cin >> a;
	std::cout << "Выберите валюту.\n" << "1.Доллар(100r) 2.Евро(99r) 3.Фарит(111r) 4.Юань(16r)\n";
	std::cin >> b;

	v = a * 0.95;

	if (b == 1)
	{
		c = v /100 ;
		std::cout << "Ты можешь купить всего: " << c << " долларов\n";
	}
	else if (b == 2)
	{
		c = v / 99;
		std::cout << "Ты можешь купить всего: " << c << " евро\n";
	}
	else if (b == 3)
	{
		c = v / 111;
		std::cout << "Ты можешь купить всего: " << c << " фаритов\n";
	}
	else if (b == 4)
	{
		c = v / 100;
		std::cout << "Ты можешь купить всего: " << c << " юаней\n";
	}
	else
	{
		std::cout << "ты чото не то выбрал";
		return 0;
	}

	char podver;

	std::cout << "Подтверждаете оплату? (y/n)\n";

	std::cin >> podver;
		if ( podver == 'y' || podver == 'Y')
		{
			std::cout << "Красававасяля";
		}
		else if (podver == 'n' || podver == 'N')
		{
			std::cout << "ну и иди и иди";
		}
		else
		{
			std::cout << "Писать научись";
		}

------------------------------------------------------------------------------------


	double D, a, b, c, x1, x2;


	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";

	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << "= 0\n\n";
	D = (pow(b, 2) - 4 * a * c);

	std::cout << "Дискриминант: " << D << "\n\n";

	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		std::cout << "Первый корень: " << x1 << " Второй корень: " << x2 << "\n\n";
	}
	else if (D == 0)
	{
		x1 = (-b) / (2 * a);
		std::cout << "Один корень: " << x1<< "\n\n";
	}
	else
	{
		std::cout << "Нет корней\n\n";
	}



*/







