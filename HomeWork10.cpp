#include <iostream>
#include <Windows.h>
using namespace std;
void task_1(int*, int*);
void task_2(int , int* );

 





int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	int task = 0;
	cout << "Введите номер задания: "<< endl;
		cin >> task;
	switch (task)
    {
	  case 1:

      { cout << "Задание № 1";
		cout << "Запишите программу, содержащую функцию, которая получает" << endl;
	    cout << "в качестве аргумента указатели на две переменные, значение первой переменной увеличивает в 2 раза," << endl;
	    cout << "а значение второй переменной увеличивается на 2 и возвращает их сумму." << endl;
	    cout << "Значения переменных вводятся с клавиатуры в отдельных строках." << endl;
	    cout << "Выведите на экран значение первой переменной, значение второй переменной и результат работы функции в строку через один пробел." << endl;
	    int a;
	    int b;
	    int* pa = &a;
	    int* pb = &b;
	    cout << "Введите первое число: " << endl;
	    cin >> a;
	    cout << "Введите второе число: " << endl;
	    cin >> b;
		task_1(pa, pb);
		cout << "Значение первой переменной a =  " << a << endl;
		cout << "Значение второй переменной b =  " << b;
		break;
      }
	  case 2:
	  {   cout << "Задание № 2"<< endl;
	  
	    cout << "Напишите программу, которая запрашивает ввод десяти целых значений и записывает их в массив." << endl;
	    cout << "Напишите функцию, которая будет увеличивать каждый элемент массива на 2," << endl;
	    cout << "функция в качестве параметров получает количество элементов в массиве и указатель на массив," << endl;
	    cout << "организуйте увеличение значений элементов массива на 2 через указатель внутри функции." << endl;
	    cout << "Выведите массив на экран в одну строку через один пробел." << endl;
	  
	    const int SIZE = 10;
	    int arr[SIZE];

	    int* pArr = arr;
	    cout << "Введите значения для создания массива"<< endl;
	 
	  
	    for (int i = 0; i < SIZE; i++)
	    {
		  cout << i + 1<<"\\"<< SIZE<<": ";
		  cin >> arr[i];
	    }
	  task_2(SIZE, pArr);
	    for (int i = 0; i < SIZE; i++)
	    {
		  cout << arr[i] << " ";
	    }
		  break;
	  }

	  case 3:
	    {
		  cout << "Задание № 3" << endl;
	      cout << "Напишите программу, которая запрашивает количество строк и столбцов"<< endl;
	      cout << "двумерного массива(количество строк должно быть равно количеству столбцов),"<< endl;
	      cout << "затем запрашивает ввод самих элементов массива."<< endl;
		  cout << "Программа должна вывести на экран сумму элементов главной диагонали массива."<<endl << endl;
		  
		  
		   int row ;
		   int column;
		   int sum = 0;
		   cout << "Количество столбцов и строк должно совпадать!" << endl;
		   cout << "Введите количество строк в массиве" << endl;
		   cin >> row;
		  
		  
		  cout << "Введите количество столбцов в массиве" << endl;
		  cin >> column;
		  if (row != column)
		  {
			  cout << "Ясно же сказано одинаково!!";
			  exit ;
		  }
		  	  
		  int** arr = new int* [row];             // Выделяем динамическую память для строк
		  for (int i = 0; i < row; i++)
		  {
			  arr[i] = new int[column];           //  В цикле выделяем память для столбцов
		  }
		  for (int i = 0; i < row; i++)           // Заполняем массив числами

			  for (int j = 0; j < column; j++)
			  {
				  cout << "Введите числа: ";
				  cin >> arr[i][j];                 
			  }
		  for (int i = 0; i < row; i++)
		  {
			  cout << endl;
			  for (int j = 0; j < column; j++)     // Просто для наглядности выводим аккуратно массив по строчно и по столбцам 
			  {
				  cout.width(2);                   // Все ровняем
				  cout << arr[i][j]<<" ";
			  }
		  }

		    cout << endl << endl;
		    for (int i = 0; i < row; i++)
	  	    {
			 sum += (arr[i][i]);                   // Считаем сумму главной диагонали
			}
		  cout<< "Сумма главной диагонали = " << sum;

		  for(int i = 0; i < row; i++)
		  delete[]arr[i];                          // удаляем выделенную память
		  delete[]arr;
		  cout << endl;
		  
		  break;
	  }


	  case 4:
	  {
		  cout << "Задание № 4" << endl;
		  cout << "Создайте структуру для хранения данных об автомобиле(марка, модель, гос.номер, год выпуска).";
		  cout << "Программа должна запрашивать ввод данных с клавиатуры, вывести на экран информацию в формате :";
		  cout << "<марка> <модель> <год выпуска> года выпуска, гос.номер <гос.номер>";
		  cout << endl;
		  struct garage
		  {
			  char car_brand[10];
			  char car_model[10];
			  int year = 0;
			  char num_avto [10];

			  void garage_info()
			  {
				  cout << car_brand << " " << car_model << " " << year << " " << "года выпуска, " << "гос. номер " << num_avto;
			  }
		  };
		  garage  myGarage;
		  cout << "Укажите марку авто" << endl;
		  cin >> myGarage.car_brand;
		  cout << "Укажите модель" << endl;
		  cin >> myGarage.car_model;
		  cout << "Укажите год выпуска" << endl;
		  cin >> myGarage.year;
		  cout << "Укажите гос номер" << endl;
		  cin >> myGarage.num_avto;
		  myGarage.garage_info();
		  
		  break;
	  }
	  case 5:
	  {/*
	   Создайте структуру для хранения данных об клиенте банка 
	   (Имя, Фамилия, дата рождения (число, месяц, год), номер счета, 
	   паспортные данные (серия, номер, кем выдан, дата выдачи (число, месяц, год) ). 
	   Программа должна запрашивать ввод данных с клавиатуры, вывести на экран информацию в формате: 
       <фамилия> <имя> <отчество> Дата рождения: <день месяц год> 
	   Номер счета: Паспорт: серия <серия паспорта> номер <номер паспорта> выдан <кем выдан> дата выдачи <день месяц число>
	   */
		  struct client
		  {  
			  char surname[10];          // Фамилия
			  char name[10];             // Имя
			  char otchestvo[10];        // Отчество
			  double date_of_birth_day ;    // Дата рождения день
			  int date_of_birth_month;   // Дата рождения месяц
			  int date_of_birth_year;    // Дата рождения год
			  int account_number;        // Номер счета
			  int serial;                // Серия паспорта
			  int number;                // Номер паспорта
			  char issued[10];           // Кем выдан
			  int date_of_issue_day;     //Дата выдачи (число)
			  int date_of_issue_month;   //Дата выдачи (месяц)
			  int date_of_issue_year;    //Дата выдачи (год)


			  void client_info()
			  {
				  cout << surname <<" " << name << " " << otchestvo << " " << "(" << "Дата рождения: " << date_of_birth_day << " " << date_of_birth_month << " " << date_of_birth_year <<")" << endl;
				  cout << "Номер счета: " << "Паспорт: серия " << serial << " " << "Номер " << number << " " << "Выдан " << issued << " " << "Дата выдачи " << date_of_issue_day << " " << date_of_issue_month << " " << date_of_issue_year << " года " << endl;
			  }
		  };
		  client  client_of_bank;
		  cout << "Введите Фамилию" << endl;
		  cin >> client_of_bank.surname;
		  cout << "Имя" << endl;
		  cin >> client_of_bank.name;
		  cout << "Отчество" << endl;
		  cin >> client_of_bank.otchestvo;
		  cout << "Введите день рождения" << endl;
		  cin >> client_of_bank.date_of_birth_day;
		  cout << "Введите месяц рождения" << endl;
		  cin >> client_of_bank.date_of_birth_month;
		  cout << "Введите год рождения" << endl;
		  cin >> client_of_bank.date_of_birth_year;
		  cout << "Введите номер счета" << endl;
		  cin >> client_of_bank.account_number;
		  cout << "Введите серию паспорта" << endl;
		  cin >> client_of_bank.serial;
		  cout << "Введите номер паспорта" << endl;
		  cin >> client_of_bank.number;
		  cout << "Введите кем выдан  паспорт" << endl;
		  cin >> client_of_bank.issued;
		  cout << "Введите дату выдачи паспорта" << endl;
		  cin >> client_of_bank.date_of_issue_day;
		  cout << "Введите месяц выдачи паспорта" << endl;
		  cin >> client_of_bank.date_of_issue_month;
		  cout << "Введите год выдачи паспорта" << endl;
		  cin >> client_of_bank.date_of_issue_year;






		  client_of_bank.client_info();
		  break;
	  }


	  


	   default:
		cout << "Нет такого задания!";
		break;
	}


}

void task_1(int* z, int* y)
{
	int q = 0;
	*z *= 2;
	q = *y += 2;
	*y = *z + q;
}

void task_2(const int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) += 2;
	}
}
















//void task1()
//{
//	
//	cout << " Задача № 1";
//	cout << "Запишите программу, содержащую функцию, которая получает";
//	cout << "в качестве аргумента указатели на две переменные, значение первой переменной увеличивает в 2 раза";
//	cout << "а значение второй переменной увеличивается на 2 и возвращает их сумму.";
//	cout << "Значения переменных вводятся с клавиатуры в отдельных строках.";
//	cout << "Выведите на экран значение первой переменной, значение второй переменной и результат работы функции в строку через один пробел.";
//	cout << "Введите первое число: ";
//	
//	
//
//	
//}

































//
//	setlocale(LC_ALL, "RU");
//	//int task = 0;
//	cout << "Введите номер задния" << endl;
//	int num = 0;
//	cin >> num;
//
//	switch (num)
//	{
//	   case 1:
//	  {
//		int n = 10;                      // Объявляем переменную n
//		int a = 0;                       // Объявляем переменную а
//		int* pn = &n;                    // Объявляем указатель на переменную pn и приравниваем его к адресу переменной n
//		cout << &n;
//		int* pa = &a;                    // Объявлему указатель на переменную  pa и приравниваем его к адресу переменной а  
//		func(pn, pa);                    // Вызываем функцию  м вкачестве аргументов указываем указатели
//		cout << "Вызов в функции main: " << "n = " << n << " " << "a = " << a;
//		break;
//	  }
//	case 2:
//
//	  {
//
//	  }
//
//	  default:
//		cout << "Нет такого задания!";
//		break;
//	}
//
//}
//void func(int* z, int* q)                    // Создаем функцию которая в качестве аргументов принимает указатели
//{
//	cout << " Введите первое число: ";
//	cin >> *z;
//	cout << " Введите второе число: ";
//	cin >> *q;
//	(*z) *= 2;
//	*q = *z + 10;
//	cout << "(z которое принимает n без разминовывателя: " << z << endl;
//	cout << "c разминовывателем:  " << *z;
//}
//
//






