﻿#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
	printf("введите номер задания: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	Локатор может быть ориентирован на одну из сторон света («C» – север, «Ю» – юг, «З» –  запад, «В» – восток) 
		//и может принимать команды: «1» – поворот направо (90º), «–1» –  поворот налево (–90º), «2» – поворот в обратную сторону (180º). 
		//Исходная ориентация локатора «C». Определить ориентацию локатора после выполнения последовательности вводимых команд N1, N2 .
		cin.get();
		char direction;
		int comand = 0;
		st:
		printf("введите команду (сторону света и поворот без пробела): ");
		scanf("%c%d", &direction, &comand);

		switch (direction)
		{
		case 'N':
		{
			if (comand == 1)
				printf("поворот направо на север на 90 градусов\n");
			else if (comand==-1)
				printf("поворот налево на север на 90 градусов\n");
			else if (comand==2)
				printf("поворот в обратную сторону от севера\n");
			else
			{
				printf("такой команды нет! введите заново\n");
				goto st;
			}				
		}
		break;

		case 'S':
		{
			if (comand == 1)
				printf("поворот направо на юг на 90 градусов\n");
			else if (comand == -1)
				printf("поворот налево на юг на 90 градусов\n");
			else if (comand == 2)
				printf("поворот в обратную сторону от юга\n");
			else
			{
				printf("такой команды нет! введите заново\n");
				goto st;
			}
		}
		break;

		case 'W':
		{
			if (comand == 1)
				printf("поворот направо на запад на 90 градусов\n");
			else if (comand == -1)
				printf("поворот налево на запад на 90 градусов\n");
			else if (comand == 2)
				printf("поворот в обратную сторону от запада\n");
			else
			{
				printf("такой команды нет! введите заново\n");
				goto st;
			}
		}
		break;

		case 'E':
		{
			if (comand == 1)
				printf("поворот направо на восток на 90 градусов\n");
			else if (comand == -1)
				printf("поворот налево на восток на 90 градусов\n");
			else if (comand == 2)
				printf("поворот в обратную сторону от востока\n");
			else
			{
				printf("такой команды нет! введите заново\n");
				goto st;
			}
		}
		break;


		default:
		{
			printf("такой стороны света нет! введите заново\n");
			goto st;
		}
			break;
		}

	}
	break;


	case 2:
	{
		//2.	Даны значения трех сторон треугольника a, b и c. Определить вид треугольника (прямоугольный, равносторонний или простой). Ответ вывести в виде сообщения.
		int a = 0, b = 0, c = 0;
		printf("a = ");
		scanf("%d", &a);

		printf("b = ");
		scanf("%d", &b);

		printf("c = ");
		scanf("%d", &c);

		if (a == b && b == c && a == c)
			printf("треугольник равносторонний\n");
		else if ((pow(a, 2) + pow(b, 2)) == pow(c, 2) || (pow(c, 2) + pow(b, 2)) == pow(c, 2) || (pow(a, 2) + pow(c, 2)) == pow(b, 2))
			printf("треугольник прямоугольный\n");
		else
			printf("треугольник простой\n");
	}
	break;


	case 3:
	{
		//3.	Даны два числа A и B. Разработать и описать алгоритм, в результате которого числа меняют свой знак на противоположный, 
		//если они имеют разный знак и будут заменены на нули, если это не так.
		int a = 0, b = 0;
		a = -100 + rand() % 100;
		b = -100 + rand() % 100;

		if ((a < 0 && b>0) || (a > 0 && b < 0))
		{
			a = -a, b = -b;
			printf("a = %d, b = %d\n", a, b);
		}			
		else
		{
			a = 0, b = 0;
			printf("a = %d, b = %d\n", a, b);
		}			
	}
	break;


	case 4:
	{
		//4.	Дано целое число k (1<k<365). Определить, каким днем недели (понедельник, вторник, воскресенье) является k-день невысокосного года, если 1 января – понедельник.
		int k = 0;
		printf("введите число от 1 до 365: " );
		scanf("%d", &k);

		int kAdd = 0;
		kAdd = k % 7;

		switch (kAdd)
		{
		case 1:
		{
			printf("понедельник\n");
		}
		break;

		case 2:
		{
			printf("вторник\n");
		}
		break;

		case 3:
		{
			printf("среда\n");
		}
		break;

		case 4:
		{
			printf("четверг\n");
		}
		break;

		case 5:
		{
			printf("пятница\n");
		}
		break;

		case 6:
		{
			printf("суббота\n");
		}
		break;

		case 7:
		{
			printf("воскресенье\n");
		}
		break;

		}
	}
	break;


	case 5:
	{
		//5.	Закажите гостиницу на курорте Трускавец, выбрав уровень гостиницы  количество мест в номере, проживание с питанием или без. 
		//Гостиница «Курортная» пять звезд, одноместная комната – 1000 тн в сутки (с питанием 1500 тн), двухместный – 1500 тн (с питанием 2500 тн). 
		//Гостиница «Верховина» четыре звезды, одноместная комната – 600 тн в сутки (с питанием 900 тн), двухместный - 900гр (с питанием 1500 тн). 
		//Гостиница «Гуцулка» три звезды, одноместная комната – 300 тн в сутки (с питанием 500тн), двухместный – 450 тн (с питанием 800 тн).
		//Предусмотреть обработку ошибок ввода.
		
		int hotel=0;
		st1:
		printf("выберите уровень гостиницы (3, 4, 5): ");
		scanf("%d", &hotel);

		int rooms = 0;
		st2:
		printf("введите тип размещения (1 - одноместный, 2 - двухместный): ");
		scanf("%d", &rooms);
		
		cin.get();
		char meal;
		st3:
		printf("выбирите тип питания (R - только проживание, M - с питанием): ");
		scanf("%c", &meal);
		

		switch (hotel)
		{
		case 3:
		{
			switch (rooms)
			{
			case 1:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали одноместный номер без питания в гостинице Гуцулка 3* - 300 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали одноместный номер с питанием в гостинице Гуцулка 3* - 500 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
					break;
				}
			}
			break;

			case 2:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали двухместный номер без питания в гостинице Гуцулка 3* - 450 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали двухместный номер с питанием в гостинице Гуцулка 3* - 800 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
				break;
				}
			}
			break;

			default:
			{
				printf("такого типа размещения нет! введите еще раз\n");
				goto st2;
			}
				break;
			}
		}
		break;

		case 4:
		{
			switch (rooms)
			{
			case 1:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали одноместный номер без питания в гостинице Верховина 4* - 600 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали одноместный номер с питанием в гостинице Верховина 4* - 900 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
				break;
				}
			}
			break;

			case 2:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали двухместный номер без питания в гостинице Верховина 4* - 900 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали двухместный номер с питанием в гостинице Верховина 4* - 1500 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
				break;
				}
			}
			break;

			default:
			{
				printf("такого типа размещения нет! введите еще раз\n");
				goto st2;
			}
			break;
			}
		}
		break;
		
		case 5:
		{
			switch (rooms)
			{
			case 1:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали одноместный номер без питания в гостинице Курортная 5* - 1000 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали одноместный номер с питанием в гостинице Курортная 5* - 1500 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
				break;
				}
			}
			break;

			case 2:
			{
				switch (meal)
				{
				case 'R':
				{
					printf("вы заказали двухместный номер без питания в гостинице Курортная 5* - 1500 тенге/сутки\n");
				}
				break;
				case 'M':
				{
					printf("вы заказали двухместный номер с питанием в гостинице Курортная 5* - 2500 тенге/сутки\n");
				}
				break;

				default:
				{
					printf("такого типа питания нет. еще раз введите\n");
					goto st3;
				}
				break;
				}
			}
			break;

			default:
			{
				printf("такого типа размещения нет! введите еще раз\n");
				goto st2;
			}
			break;
			}
		}
		break;

		default:
		{
			printf("такой гостиницы нет. введите еще раз\n");
			goto st1;
		}
			break;
		}



	}
	break;
	
	default:
		break;
	}
}