#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>


void odd()
{
	int a, b, i;
	printf("\nEnter the two extreme end points : a and b ");
	scanf("%d%d",&a,&b);
	printf("The odd terms series from %d to %d is : ", a, b);
	if (a % 2 == 0)
		a++;
	if (b % 2 == 0)
		b--;
	for (i = a; i <= b; i += 2)
		printf("%d  ", i);
}

void star()
{
	int a, b, i, j;
	printf("\nEnter the two extreme end points : a and b ");
	scanf("%d%d", &a, &b);
	printf("The series from %d to %d is : ", a, b);

	for (i = a; i <= b; i ++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf(" ");
	}
}

void evenstar()
{
	int a, b, i,j;
	printf("\nEnter the two extreme end points : a and b ");
	scanf("%d%d",&a,&b);
	printf("The even terms series from %d to %d is : ", a, b);
	if (a % 2 != 0)
		a++;
	if (b % 2 != 0)
		b--;
	for (i = a; i <= b; i += 2)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf(" ");
	}
}

void oddstar()
{
	int a, b, i,j;
	printf("\nEnter the two extreme end points : a and b ");
	scanf("%d%d",&a,&b);
	printf("The odd terms series from %d to %d is : ", a, b);
	if (a % 2 == 0)
		a++;
	if (b % 2 == 0)
		b--;
	for (i = a; i <= b; i += 2)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf(" ");
	}

}

void evenodd()
{
	int n;
	printf("\nEnter any number :  ");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("\nThe given number is even ");
	else
		printf("\nThe given number is odd ");
}

void prime()
{

	int flag=0,i,n;
	printf("\nEnter any number:  ");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			flag = 1;
	}

	if (flag == 0)
		printf("\nThe given number is prime ");
	else
		printf("\nThe given number is composite ");
}

void largest()
{
	int a, b, c;
	printf("\nEnter three numbers: a, b and c");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b == c)
		printf("\nAll three given numbers are equal ");
	if (a >= b && a >= c)
		printf("\n%d is greater than %d and %d ", a, b, c);
	else if (b >= a && b >= c)
		printf("\n%d is greater than %d and %d ", b, a, c);
	else if (c >= a && c >= b)
		printf("\n%d is greater than %d and %d ", c, a, b);
}

void hello()
{
	printf("\nHELLO WORLD");
}

void sum()
{
	int a, b;
	printf("\nEnter the two numbers : a and b ");
	scanf("%d%d",&a,&b);

	printf("\nThe sum of the two numbers is : %d",a+b);
}

void difference()
{
	int a, b;
	printf("\nEnter the two numbers : a and b ");
	scanf("%d%d",&a,&b);
	printf("\nThe difference of the two numbers is : %d", a - b);
}

void product()
{
	float a, b;
	printf("\nEnter the two numbers : a and b ");
	scanf("%f%f",&a,&b);
	printf("\nThe product of the two numbers is : %0.2f", a * b);
}

void quotient()
{
	int a, b;
	printf("\nEnter the two numbers : a and b ");
	scanf("%d%d",&a,&b);
	printf("\nThe quotient of the two numbers is : %d", a / b);
}

void modulus()
{
	int a, b;
	printf("\nEnter the two numbers : a and b ");
	scanf("%d%d",&a,&b);
	printf("\nThe modulus of the two numbers is : %d", a % b);
}


void even()
{
	int a, b,i;
	printf("\nEnter the two extreme end points : a and b ");
	scanf("%d%d",&a,&b);
	printf("The even terms series from %d to %d is : ", a, b);
	if (a % 2 != 0)
		a++;
	if (b % 2 != 0)
		b--;
	for (i = a; i <= b; i += 2)
		printf("%d  ", i);
}

void smallest()
{
	int a, b, c;
	printf("\nEnter three numbers: a, b and c");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b == c)
		printf("\nAll three given numbers are equal ");
	if (a <= b && a <= c)
		printf("\n%d is smaller than %d and %d ", a, b, c);
	else if (b <= a && b <= c)
		printf("\n%d is smaller than %d and %d ", b, a, c);
	else if (c <= a && c <= b)
		printf("\n%d is smaller than %d and %d ", c, a, b);
}

void swap()
{
	int temp, a, b;
	printf("\nEnter any two numbers : a and b ");
	scanf("%d%d", &a, &b);
	printf("\nOriginal Values are a : %d  and b: %d ",a,b);
	    temp = a;
		a = b;
		b = temp;
		printf("\nSwapped Values are a: %d and b: %d ", a, b);

}

void firstlast()
{
	int n,j,temp, fdig, ldig, c = 0, i = 1;
	printf("\nEnter any number : ");
	scanf("%d", &n);
	temp = n;
	while (n)
	{
		if (i == 1)
		{
			ldig = n % 10;
			i++;
		}
		c++;
		n /= 10;
	}

	for (j = 0; j < c; j++)
	{
		if (j == c - 1)
		{
			fdig = temp % 10;

	    }
		temp /= 10;
	}

	printf("\nThe first and last digit are %d and %d ", fdig, ldig);
}


void armstrong()
{

	int temp,sum=0,dig,n,flag=0;
	printf("\nEnter any number ");
	scanf("%d", &n);
	temp = n;
		while (temp)
		{
			dig = temp % 10;
			dig= dig * dig * dig;
			sum += dig;
			temp /= 10;
		}
	if (sum == n)
		printf("\nThe given number is an armstrong number ");
	else
		printf("\nThe given number is not an armstrong number ");
}

void perfect()
{
	int i,n,sum=0,dig;
	printf("\nEnter any number ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (n == sum)
		printf("\nThe given number is a perfect number ");
	else
		printf("\nThe given number is not a perfect number ");

}


void palindrome()
{
	int dig,n,sum=0,temp;
	printf("\nEnter any number ");
	scanf("%d", &n);
	temp = n;
	while (temp)
	{
		dig = temp % 10;
		sum = (sum*10) + dig;
		temp /= 10;
	}
	if (sum == n)
		printf("\nThe given number is an palindrome number ");
	else
		printf("\nThe given number is not an palindrome number ");


}

void charac()
{
	char c;
	int ch;
	printf("\nEnter any character ");
	scanf(" %c", &c);
	ch = c;
	if ((ch >= 65) && (ch <= 90))
		printf("\nThe given character %c is an upper case alphabet  ", c);
	else if ((ch >= 97) && (ch <= 122))
		printf("\nThe given character %c is a lower case alphabet   ", c);
	else
		printf("\nThe given input is not an alphabet");
}

void characvw()
{
	char c;
	int ch;
		printf("\nEnter any character ");
	scanf(" %c", &c);
	ch = c;
	if ((ch >= 65) && (ch <= 90))
	{
		if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
			printf("\nThe given character %c is an upper case vowel  ", c);
		else
			printf("\nThe given character %c is an upper case consonant ", c);
	}
	else if ((ch >= 97) && (ch <= 122))
	{
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
			printf("\nThe given character %c is a lower case vowel  ", ch);
		else
			printf("\nThe given character %c is a lower case consonant ", ch);
	}

	else
		printf("\nThe given input is not an alphabet");
}

void posneg()
{
	int n;
	printf("\nEnter any number : ");
	scanf("%d", &n);
	if (n > 0)
		printf("\nThe entered number is a positive number ");
	else if (n < 0)
		printf("\nThe entered number is a negative number ");
	else printf("\nThe entered number is zero ");
}

void areacir()
{
	float r, area;
	printf("\nEnter the radius of the circle:  ");
	scanf("%f", &r);
	area = 2 * 3.14 * r * r;
	printf("\nThe area of the circle with given radius is : %f", area);
}

void areasq()
{
	float area,side;
	printf("\nEnter the side of the square : ");
	scanf("%f", &side);
	area = side * side;
	printf("\nThe area of the square with given side is : %f", area);

}

void arearec()
{
	float area,len, bdt;
	printf("\nEnter the length and the breadth of the rectangle ");
	scanf("%f%f", &len, &bdt);
	area = len * bdt;
	printf("\nThe area of the rectangle with given length and breadth is : %f", area);
}

void tri()
{
	float a, b, c,flag=0;
	printf("\nEnter the three sides of a triangle : ");
	scanf("%f%f%f", &a, &b, &c);
	if ((a == b )&&(a== c))
		flag = 1;
	else if (((a == b) && (b != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a)))
		flag = 2;
	else if (a != b != c)
		flag = 3;
	if (flag == 1)
		printf("\nThe given triangle is an equilateral triangle ");
	else if (flag == 2)
		printf("\nThe given triangle is an isoceles triangle ");
	else if (flag == 3)
		printf("\nThe given triangle is a scalene triangle ");
}

void areatri()
{
	float a, b, c,s, area,temp;
	printf("\nEnter the sides of the triangle ");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	temp = (s * (s - a) * (s - b) * (s - c));
	area = sqrt(temp);
	printf("\nThe area of the triangle with given sides is : %f", area);
}

void pericir()
{
	float peri,r;
	printf("\nEnter the radius of circle : ");
	scanf("%f", &r);
	peri = 2 * 3.14 * r;
	printf("\nThe perimeter of the circle with given radius is : %f", peri);

}

void perirec()
{
	float peri, len, bdt;
	printf("\nEnter the length and the breadth of the rectangle ");
	scanf("%f%f", &len, &bdt);
	peri = 2*(len + bdt);
	printf("\nThe perimeter of the rectangle with given length and breadth is : %f", peri);
}

void perisq()
{
	float peri, side;
	printf("\nEnter the side of the square : ");
	scanf("%f", &side);
	peri = 4 * side;
	printf("\nThe perimeter of the square with given side is : %f", peri);

}

void greater()
{
	int a, b;
	printf("\nEnter two numbers a and b :  ");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("\n%d is greater than %d", a, b);
	else if (a < b)
		printf("\n%d is greater than %d", b, a);
	else printf("\nBoth numbers are equal ");

}

void digits()
{
	int temp,n, c = 0;
	printf("\nEnter any number : ");
	scanf("%d", &n);
	temp = n;
		while (temp)
		{
			c++;
			temp = temp / 10;
		}
	printf("\nThe number of digits in the given number is %d ", c);
}

void simple()
{
	double total;
	float p, r;
	int time;
	printf("\nEnter the principle amount, rate and time : ");
	scanf("%f%f%d", &p, &r, &time);
	total =( p * r * time)/100;
	printf("\nThe simple interest of the given values is : %lf", total);
}

void quadratic()
{
	float det,r1, r2;
	int a, b, c;
	printf("\nEnter the values for a, b and c: ");
	scanf("%d%d%d", &a, &b, &c);
	det = sqrt((b * b) - (4 * a * c));
	r1 = ((-b) + det) / (2 * a);
	r2= ((-b) - det) / (2 * a);
	printf("\nThe roots of the given quadratic equation are : %f and %f ", r1, r2);

}

void sumdig()
{
	int n, dig, c = 0;
	printf("\nEnter any number : ");
	scanf("%d", &n);
	while (n)
	{
		dig = n % 10;
		c+=dig;
		n = n / 10;
	}
	printf("\nThe sum of digits in the given number is %d ", c);
}

void sumnat()
{
	int n, i, sum = 0;
	printf("\nEnter the number of natural numbers to be added : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("\nThe sum of %d natural numbers is : %d", n, sum);

}

void sumran()
{
	int a, b, i, sum = 0;
	printf("\nEnter the extreme points of the range: ");
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		sum += i;
	}
	printf("\nThe sum of the numbers between %d and %d is : %d", a, b, sum);

}
void rev()
{
	int dig, n, sum = 0, temp;
	printf("\nEnter any number ");
	scanf("%d", &n);
	temp = n;
	while (temp)
	{
		dig = temp % 10;
		sum = (sum * 10) + dig;
		temp /= 10;
	}
	printf("\nThe reverse of the given number is : %d", sum);
}

void fact()
{
	int n,fact=1,i;
	printf("\nEnter any number: ");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
	{
		fact *= i;
	}
	if (n == 0)
		printf("\nFactorial of %d is 1", n);
	else if (n < 0)
		printf("\nFactorial of negative numbers is not possible ");
	else
		printf("\nFactorial of %d is %d ", n, fact);
}

void fib()
{
	int sum = 0, n, a = 0, b = 1;
	printf("\nEnter the end point for the fibonacci series : ");
	scanf("%d", &n);
	printf("\nFIBONACCI SERIES : ");
	while (sum <= n)
	{
		printf("%d", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
}

void power()
{
	int a, b;
	float res;
	printf("\nEnter the base and the exponent : ");
	scanf("%d%d", &a, &b);
	res = pow(a, b);
	printf("\n%d raised to the power %d is %f", a, b, res);
}

void leap()
{
	int n;
	printf("\nEnter any year:  ");
	scanf("%d", &n);
	if (n % 100 == 0)
	{
		if (n % 400 == 0)
			printf("\nThe given year is a leap year ");
		else
			printf("\nThe given year isn't a leap year ");
	}
	else if (n % 4 == 0)
		printf("\nThe given year is a leap year ");
	else
		printf("\nThe given year isn't a leap year ");
}

void rec()
{
	int n, m, i, j;
	printf("\nEnter the number of rows and columns : ");
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("*");
        }
		printf("\n");
	}
}

void rec1()
{
	int n, m, i, j;
	printf("\nEnter the number of rows and columns : ");
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i == 0) || (i == n - 1) || (j == 0) || (j == m - 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void pat()
{
	int n, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}

void pat1()
{

	int n, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d", &n);
	for (i = n-1; i >=0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}


void num()
{
	int n, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d",j);
		}
		printf("\n");

	}
}

void num1()
{
	int n, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			printf("%d", j);
		}
		printf("\n");

	}
}

void temp()
{
	float f, c = 0;
	printf("\nEnter the temperature in Fahrenheit scale : ");
	scanf("%f", &f);
	c = ((f - 32) * (0.5556));
	printf("\nThe temperature in Celsius scale is : %f", c);

}

void sumser()
{
	int i,j,n, term=0;
	printf("\nEnter the total number of terms : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			term += j;
		}
	}
	printf("\nThe sum of the series is : %d", term);
}

void arinp()
{
	int n,i;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
}

void arsum()
{
	int n, i,sum=0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
		sum += A[i];
	}
	printf("\nThe sum of the elements of the array is : %d", sum);
}



void arlarge()
{
	int n, i,large;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	large = A[0];
	for (i = 0; i < n; i++)
	{
		if (A[i] > large)
			large = A[i];
	}
	printf("\nThe largest element present in the array is : %d", large);
}

void arsmall()
{
	int n, i, small;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	small = A[0];
	for (i = 0; i < n; i++)
	{
		if (A[i] < small)
			small = A[i];
	}
	printf("\nThe smallest element present in the array is : %d", small);
}

void arprime()
{
	int n, i,j,flag=0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nPrime Elements are : ");
	for (i = 0; i < n; i++)
	{
		for (j = 2; j < A[i]; j++)
		{
			if (A[i] % j== 0)
				flag = 1;
		}

		if (flag == 0)
			printf(" %d ",A[i]);

	}

}

void areven()
{
	int n, i, j, flag = 0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nEven Elements are : ");
	for (i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
				flag = 1;


		if (flag == 1)
			printf(" %d ", A[i]);

	}
}

void arodd()
{
	int n, i, j, flag = 0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nOdd Elements are : ");
	for (i = 0; i < n; i++)
	{
		if (A[i] % 2 != 0)
			flag = 1;


		if (flag == 1)
			printf(" %d ", A[i]);

	}
}

void ararm()
{
	int n, i, j,dig,sum=0 ,flag = 0,temp;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nArmstrong Elements are : ");
	for (i = 0; i < n; i++)
	{
		temp = A[i];
		while (temp)
		{
			dig = temp % 10;
			dig = dig * dig * dig;
			sum += dig;
			temp /= 10;
		}
		if (sum == A[i])
			printf("%d",A[i]);

	}
}

void arper()
{
	int n, i, j, sum = 0, temp;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nPerfect elements are : ");
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < A[i]; j++)
		{
			if (A[i] % j == 0)
				sum += j;
		}
		if (A[i] == sum)
			printf("%d",A[i]);

	}
}

void arpal()
{
	int n, i, j, sum = 0, temp,dig;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nPalindrome elements are : ");
	for (i = 0; i < n; i++)
	{
		temp = A[i];
		while (temp)
		{
			dig = temp % 10;
			sum = (sum * 10) + dig;
			temp /= 10;
		}
		if (sum == A[i])
			printf("%d ",A[i]);

	}
}

void arfact()
{
	int n, i,fact,j;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nThe factorial of elements are: ");
	for (i = 0; i < n; i++)
	{
		for (j = A[i]; j >= 1; j--)
			fact *= j;
		if (A[i] != 0)
			printf("%d", fact);
		else if (A[i] == 0)
			printf("1");
		else if (A[i] < 0)
			printf("Factorial not possible ");
	}
}

void arfind()
{
	int n, i, flag=0,key,pos, j;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\nEnter the key element that is to be searched :  ");
	scanf("%d", &key);
	for (i = 0; i < n; i++)
	{
		if (A[i] == key)
		{
			flag = 1;
			pos = i + 1;
		}
		if (flag == 1)
			printf("\nKey element found at %d position ", pos);
	}
	if (flag == 0)
		printf("\nElement not found ");
}


void arbub()
{
	int n, i, temp , j;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	printf("\nThe sorted array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
}

void arsel()
{
	int n, i, temp, j,min;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the array : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("\nThe original array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		temp = A[min];
		A[min] = A[i];
		A[i] = temp;


	}

	printf("\nThe sorted array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
}
void merge()
{
	int n, m, i, j;
	printf("\nEnter the limit of first array: ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the first array : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	printf("\nEnter the limit of second array: ");
	scanf("%d", &m);
	int B[m];
	printf("\nEnter the elements in the second array : ");
	for (i = 0; i < m; i++)
	{
		scanf("%d", &B[i]);
	}

	int gap = 0, max;
	if (m > n)
	{
		max = m;
		gap = m - n;
		for (i = 0, j = n; i < gap; j++, i++)
		{
			A[j] = 0;
		}

	}

	else if (m < n)
	{
		max = n;
		gap = n - m;
		for (i = 0, j = m; i < gap; j++, i++)
		{
			B[j] = 0;
		}

	}

	int C[max];

	for (i = 0; i < max; i++)
	{
		C[i] = A[i] + B[i];
	}

	printf("\nFinal Array is : ");
	for (i = 0; i < max; i++)
	{
		printf("%d ", C[i]);
	}

}

void submerge()
{
	int n, m, i, j;
	printf("\nEnter the limit of first array: ");
	scanf("%d", &n);
	int A[n];
	printf("\nEnter the elements in the first array : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	printf("\nEnter the limit of second array: ");
	scanf("%d", &m);
	int B[m];
	printf("\nEnter the elements in the second array : ");
	for (i = 0; i < m; i++)
	{
		scanf("%d", &B[i]);
	}

	int gap = 0, max;
	if (m > n)
	{
		max = m;
		gap = m - n;
		for (i = 0, j = n; i < gap; j++, i++)
		{
			A[j] = 0;
		}

	}

	else if (m < n)
	{
		max = n;
		gap = n - m;
		for (i = 0, j = m; i < gap; j++, i++)
		{
			B[j] = 0;
		}

	}

	int C[max];

	for (i = 0; i < max; i++)
	{
		C[i] = A[i] - B[i];
	}

	printf("\nFinal Array is : ");
	for (i = 0; i < max; i++)
	{
		printf("%d ", C[i]);
	}

}


int mat()
{
	int i, j, n, m;
	printf("\nEnter the number of rows and columns of the matrix : ");
	scanf("%d%d", &n, &m);
	int A[n][m];
	printf("\nEnter the elements in the array :");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}


}

int matrow()
{
	int i, j, n, m,sum1=0,k=0;
	printf("\nEnter the number of rows and columns of the matrix : ");
	scanf("%d%d", &n, &m);
	int A[n][m];
	printf("\nEnter the elements in the array :");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		sum1 = 0;
		for (j = 0; j < m; j++)
		{
			sum1 += A[i][j];
		}

			printf("\nThe sum for %d Row is : %d", i + 1, sum1);

	}



}


int matcol()
{
	int i, j, n, m, sum1 = 0, k = 0;
	printf("\nEnter the number of rows and columns of the matrix : ");
	scanf("%d%d", &n, &m);
	int A[n][m];
	printf("\nEnter the elements in the array :");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (j = 0; j < m; j++)
	{
		sum1 = 0;
		for (i = 0; i < n; i++)
		{
			sum1 += A[i][j];
		}

		printf("\nThe sum for %d Column is : %d", j + 1, sum1);

	}



}


int matrowpro()
{
	int i, j, n, m, sum1 = 1, k = 0;
	printf("\nEnter the number of rows and columns of the matrix : ");
	scanf("%d%d", &n, &m);
	int A[n][m];
	printf("\nEnter the elements in the array :");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		sum1 = 1;
		for (j = 0; j < m; j++)
		{
			sum1 *= A[i][j];
		}

		printf("\nThe product for %d Row is : %d", i + 1, sum1);

	}


}

int matcolpro()
{
	int i, j, n, m, sum1 = 1, k = 0;
	printf("\nEnter the number of rows and columns of the matrix : ");
	scanf("%d%d", &n, &m);
	int A[n][m];
	printf("\nEnter the elements in the array :");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (j = 0; j < m; j++)
	{
		sum1 = 1;
		for (i = 0; i < n; i++)
		{
			sum1 *= A[i][j];
		}

		printf("\nThe product for %d Column is : %d", j + 1, sum1);

	}



}

void addmat()
{
	int n1, m1,n2,m2, i, j;
	printf("\nEnter the dimensions of the first matrix : ");
	scanf("%d%d", &n1, &m1);
	int A[n1][m1];
	printf("\nEnter the elements in the first matrix: ");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nThe original first matrix is : \n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the dimensions of the second matrix: ");
	scanf("%d%d", &n2, &m2);
	int B[n2][m2];
	printf("\nEnter the elements in the second matrix: ");
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < m2; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("\nThe original second matrix is : \n");
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < m2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	if ((n1 != n2) || (m1 != m2))
	{
		printf("\nAddition not possible ");
		return;
	}

	int C[n1][m1];
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			C[i][j] =0;
		}
	}

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			C[i][j] = C[i][j] + A[i][j] + B[i][j];
		}
	}

	printf("\nThe final matrix is : \n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf(" %d ", C[i][j]);
		}
		printf("\n");
	}

}

void submat()
{
	int n1, m1, n2, m2, i, j;
	printf("\nEnter the dimensions of the first matrix : ");
	scanf("%d%d", &n1, &m1);
	int A[n1][m1];
	printf("\nEnter the elements in the first matrix: ");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nThe original first matrix is : \n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the dimensions of the second matrix: ");
	scanf("%d%d", &n2, &m2);
	int B[n2][m2];
	printf("\nEnter the elements in the second matrix: ");
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < m2; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("\nThe original second matrix is : \n");
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < m2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	if ((n1 != n2) || (m1 != m2))
	{
		printf("\nSubtraction not possible ");
		return;
	}

	int C[n1][m1];
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			C[i][j] = 0;
		}
	}

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			C[i][j] = C[i][j] + A[i][j] - B[i][j];
		}
	}

	printf("\nThe final matrix is : \n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf(" %d ", C[i][j]);
		}
		printf("\n");
	}

}
void matmul()
{

	int n1, n2, m1, m2, i, j;
	printf("\nEnter the dimensions of first array:");
	scanf("%d%d", &n1, &n2);

	int A[n1][n2];
	printf("\nEnter the elements in the first matrix ");
	for (i = 0; i < n1; i++)
		for (j = 0; j < n2; j++)
			scanf("%d", &A[i][j]);

	printf("\nThe original first matrix is : \n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("\nEnter the dimensions of second array:");
	scanf("%d%d", &m1, &m2);

	int B[m1][m2];
	printf("\nEnter the elements in the second matrix ");
	for (i = 0; i < m1; i++)
		for (j = 0; j < m2; j++)
			scanf("%d", &B[i][j]);
	printf("\nThe original second matrix is : \n");
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	int k;
	int Res[n1][m2];
	for (i = 0; i < n1; i++)
		for (j = 0; j < m2; j++)
		{
			Res[i][j] = 0;
			for (k = 0; k < n2; k++)
			{

				Res[i][j] += (A[i][k] * B[k][j]);
			}
		}
	printf("\nResultant Matix is :\n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m2; j++)
			printf("%d  ", Res[i][j]);
		printf("\n");
	}
}

void secdiag()
{
	int n1, n2;
	printf("\nEnter the dimensions of the matrix :");
	scanf("%d%d", &n1, &n2);

	if (n1 != n2)
	{
		printf("\nNot a Square Matrix!");
		return ;
	}
	int n, i, j;
	n = n1;
	int A[n][n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	printf("\nThe original matrix is : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nSecondary Diagonal Elements :");
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			if ((i + j) == (n - 1))
				printf("%d ", A[i][j]);
		}
	}
}


void strio()
{
	char str[50];
	printf("\nEnter any string :      ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s", str);

}

void strl()
{
	char str[50];
	fflush(stdin);
	printf("\nEnter any string :");
	gets(str);
	printf("\nThe original string is : %s", str);
	int i;
	for (i = 0; str[i]!= NULL; i++);
	printf("\nThe length of the given string is : %d", i);
}

void strl1()
{
	char str[50];
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s", str);
	int len = strlen(str);
	printf("\nThe length of the given string is : %d", len);

}

void strreve()
{
	char str[50];
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	int i,len=0;
	len = strlen(str);
	char temp;
	for (i = 0; i < (len / 2); i++)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("\nThe reversed string is: %s", str);
}

void strreve1()
{
	char str[50];
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	strrev(str);
	printf("\nThe reversed string is : %s", str);
}

void strcom()
{
	char str1[50],str2[50];
	int i,j,len1=0,len2=0,flag=0;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 != len2)
	{
		printf("\nStrings are unequal ");
		return;
	}
	for (i = 0; (str1[i] != NULL) || (str2[i] != NULL); i++)
	{
		if (str1[i] != str2[i])
			flag = 1;
	}
	if (flag == 0)
	{
		printf("\nStrings are equal ");
	}
	else
		printf("\nStrings are unequal ");

}

void strcom1()
{
	char str1[50], str2[50];
	int flag = 0;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	flag = strcmp(str1, str2);
	if (flag == 0)
	{
		printf("\nStrings are equal ");
	}
	else
		printf("\nStrings are unequal ");

}

void strcate()
{
	char str1[50], str2[50];
	int flag = 0,i,len1;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	len1 = strlen(str1);
	for (i = 0; str2[i] != NULL; i++)
	{
		str1[len1 + i] = str2[i];
	}
	str1[len1 + i] = NULL;
	printf("\nThe concatenated string is : %s", str1);

}

void strcate1()
{
	char str1[50], str2[50];
	int flag = 0, i, len1;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	strcat(str1, str2);
	printf("\nThe concatenated string is : %s", str1);

}

void strcopy()
{
	char str1[50], str2[50];
	int flag = 0, i, len1;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	printf("\nThe origina; strings are: 1.%s \n 2.%s ", str1, str2);
	for (i = 0; str2[i] != NULL; i++)
	{
		str1[i] = str2[i];
	}
	str2[i] = NULL;
	printf("\nAfter copying the strings are : 1.%s \n 2.%s ",str1,str2);

}

void strcopy1()
{
	char str1[50], str2[50];
	int flag = 0, i, len1;
	printf("\nEnter first string : ");
	fflush(stdin);
	gets(str1);
	printf("\nEnter second string : ");
	fflush(stdin);
	gets(str2);
	printf("\nThe origina; strings are: 1.%s \n 2.%s ", str1, str2);
	strcpy(str1, str2);
	printf("\nAfter copying the strings are : 1.%s \n 2.%s ", str1, str2);

}

void charconvert()
{
	char str[50];
	int i;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	for (i = 0; str[i] != NULL; i++)
	{
		if ((str[i] >= 67) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		else if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
	}
	printf("\nConverted string is: %s", str);

}

void strcount()
{
	char str[50];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	for (i = 0; str[i] != NULL; i++)
	{
		if ((str[i] >= 67) && (str[i] <= 90))
		{
			c1++;
		}
		else if ((str[i] >= 97) && (str[i] <= 122))
		{
			c2++;
		}

		else if ((str[i] >= 48) && (str[i] <= 57))
		{
			c3++;
		}

		else c4++;
	}
	printf("\nNumber of lower case characters are: %d \n Number of upper case characters are: %d \n Number of numbers are : %d \n Number of special characters are: %d ",c2,c1,c3,c4);


}

void strvw()
{
	char ch, str[50];
	int i, c1 = 0, c2 = 0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	for (i = 0; str[i] != NULL; i++)
	{
		ch = str[i];
		if ((ch >= 65) && (ch <= 90))
		{
			if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
				c1++;
			else
				c2++;
		}
		else if ((ch >= 97) && (ch <= 122))
		{
			if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
				c1++;

			else
				c2++;
		}

	}

	printf("\nNumber of vowels are : %d \nNumber of consonants : %d ", c1, c2);
}

void charcount()
{
	char ch, str[50];
	int i, c1 = 0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	printf("\nEnter the character whose frequency you want to calculate : ");
	scanf("%c", &ch);
	for (i = 0; str[i] != NULL; i++)
	{
		if (ch == str[i])
		{
			c1++;
		}

	}

	printf("\nFrequency of given character is : %d ", c1);
}

void check_pali()
{
	char str[50],temp[50];
	int i, c1 = 0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	strcpy(temp, str);
	strrev(str);
	c1 = strcmp(temp, str);
	if (c1 == 0)
		printf("\nThe given string is a palindrome string ");
	else
		printf("\nThe given string is not a palindrome string ");
}

void chardel()
{
	char ch, str[50];
	int i,j,c1=0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	printf("\nEnter the character that is to be deleted : ");
	scanf("%c", &ch);
	for (i = 0; str[i] != NULL; i++)
	{
		if (ch == str[i])
		{
			for (j = i; str[j] != NULL; j++)
			{
				str[j] = str[j + 1];
			}
			i = i - 1;
		}

	}

	printf("\nString after deletion is : %s ", str);
}

void countsp()
{
	char str[50];
	int i, c1 = 0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	for (i = 0; str[i] != NULL; i++)
	{
		if (' ' == str[i])
		{
			c1++;
		}

	}

	printf("\nFrequency of spaces in the given string is : %d ", c1);
}

void countw()

{
	char str[50], w[20];
	int i,len,c1=0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	len = strlen(str);
	for (i = 0; i <= len; i++)
	{

		if (str[i] == ' ')
			c1++;
	}
	printf("\nThe number of words in the given string are : %d", c1 + 1);
}

void countw4()

{
	char str[50], w[20];
	int i,j=0, len, len1 ,c1=0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	len = strlen(str);
	for (i = 0; i <= len; i++)
	{

		if (str[i] == ' ')
		{
			i++;
			w[j] = NULL;
			len1 = strlen(w);
			if (len1 == 4)
				c1++;
			j = 0;
		}

		else if (i == len)
		{
			w[j] = NULL;
			len1 = strlen(w);
			if (len1 == 4)
				c1++;
				j = 0;
		}
		w[j] = str[i];
		j++;

	}
	printf("\nThe number of words of length 4 in the given string are : %d", c1 );
}

void countwkey()

{
	char str[50], w[20],w1[20];
	int i, j = 0, len, c1 = 0,c;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	len = strlen(str);
	printf("\nEnter the word that you want to search ");
	fflush(stdin);
	gets(w1);
	for (i = 0; i <= len; i++)
	{

		if (str[i] == ' ')
		{
			i++;
			w[j] = NULL;
			c = strcmp(w, w1);
			if (c==0)
				c1++;
			j = 0;
		}

		else if (i == len)
		{
			w[j] = NULL;
			c = strcmp(w, w1);
			if (c == 0)
				c1++;
			j = 0;
		}
		w[j] = str[i];
		j++;

	}
	if (c1 == 0)
		printf("\nKey word not found ");
	else
		printf("\nKey word found ");
}

void delsp()
{
	char ch, str[50];
	int i, j, c1 = 0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	printf("\nThe original string is : %s ", str);
	for (i = 0; str[i] != NULL; i++)
	{
		if (' '== str[i])
		{
			if (' ' == str[i + 1])
			{
				for (j = i; str[j] != NULL; j++)
				{
					str[j] = str[j + 1];
				}
				i = i - 1;
			}

		}

	}

	printf("\nString after deletion is : %s ", str);
}

void countwkey1()

{
	char str[50], w[20], w1[20];
	int i, j = 0, len, c1 = 0, c;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	len = strlen(str);
	printf("\nEnter the word whose frequency is to be calculated : ");
	fflush(stdin);
	gets(w1);
	for (i = 0; i <= len; i++)
	{

		if (str[i] == ' ')
		{
			i++;
			w[j] = NULL;
			c = strcmp(w, w1);
			if (c == 0)
				c1++;
			j = 0;
		}

		else if (i == len)
		{
			w[j] = NULL;
			c = strcmp(w, w1);
			if (c == 0)
				c1++;
			j = 0;
		}
		w[j] = str[i];
		j++;

	}
	if (c1 == 0)
		printf("\nKey word not found ");
	else
		printf("\nFrequency of given word in the string is : %d", c1);
}


void repeat()
{
	char temp,str[50];
	int i,j,len=0;
	printf("\nEnter any string : ");
	fflush(stdin);
	gets(str);
	len = strlen(str);
	printf("\nOriginal string is : %s", str);
	for (i = 0; i<len-1; i++)
	{
		for (j = i + 1; j<len; j++)
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("\nThe sorted string is : %s ", str);

}

int basics()
{
	system("COLOR D0");
	int temp;
	system("cls");
	printf("\n\n\n\t__________________________BASIC C PROGRAMS_______________________\n");
	printf("\tS.NO	PROGRAMES");
	printf("\n	1.	PRESS 1 TO PRINT HELLO WORLD \t\t\n");
	printf("\n	2.	PRESS 2 TO CALCULATE THE SUM OF TWO NUMMBERS \t\t\n");
	printf("\n	3.	PRESS 3 TO CALCULATE THE DIFFERENCE OF TWO NUMBERS \t\t\n");
	printf("\n	4.	PRESS 4 TO CALCULATE THE PRODUCT OF TWO NUMBERS \t\t\n");
	printf("\n	5.	PRESS 5 TO CALCULATE THE QUOTIENT OF TWO NUMBERS \t\t\n");
	printf("\n	6.	PRESS 6 TO CALCULATE THE MODULUS OF TWO NUMBERS \t\t\n");
	printf("\n	7.	PRESS 7 TO SWAP TWO NUMBERS \t\t\n");
	printf("\n	8.	PRESS 8 TO CALCULATE THE AREA OF A CIRCLE WITH A GIVEN RADIUS \t\t\n");
	printf("\n	9.	PRESS 9 TO CALCULATE THE AREA OF A SQUARE WITH A GIVEN SIDE \t\t\n");
	printf("\n	10.	PRESS 10 TO CALCULATE THE AREA OF A RECTANGLE WITH GIVEN LENGTH AND BREADTH \t\t\n");
	printf("\n	11.	PRESS 11 TO CALCULATE THE AREA OF A TRIANGLE WITH GIVEN SIDES \t\t\n");
	printf("\n	12.	PRESS 12 TO CALCULATE THE PERIMETER OF A CIRCLE WITH GIVEN RADIUS \t\t\n");
	printf("\n	13.	PRESS 13 TO CALCULATE THE PERIMETER OF A RECTANGLE WITH GIVEN LENGTH AND RADIUS \t\t\n");
	printf("\n	14.	PRESS 14 TO CALCULATE THE PERIMETER OF A SQUARE WITH GIVEN SIDE \t\t\n");
	printf("\n	15.	PRESS 15 TO CALCULATE SIMPLE INTEREST FOR GIVEN PRINCIPLE AMOUNT, RATE AND TIME \t\t\n");
	printf("\n	16.	PRESS 16 TO CALCULATE THE ROOTS OF A GIVEN QUADRATIC EQUATION \t\t\n");
	printf("\n	17.	PRESS 17 TO CALCULATE THE POWER OF A GIVEN NUMBER \t\t\n");
	printf("\n	18.	PRESS 18 TO CONVERT A TEMPERATURE FROM FAHRENHEIT SCALE TO CELSIUS SCALE \t\t\n");
	printf("\n\t\t\t\t\t\tENTER YOUR CHOICE \t\t\n");
	fflush(stdin);
	scanf("%d",&temp);
	if(temp>=1&&temp<=18){
	system("cls");
	return temp;}
	else
	return 0;
}

int conditionals()
{
	system("COLOR 9F");
	int temp;
	system("cls");
	printf("\n\n\n\t____________________C PROGRAMS USING CONDITIONALS STATEMENTS__________________\n");
	printf("\tS.NO	PROGRAMES");
	printf("\n	19.	PRESS 19 TO CHECK IF A GIVEN NUMBER IS EVEN OR ODD \t\t\n");
	printf("\n	20.	PRESS 20 TO CHECK IF A GIVEN NUMBER IS PRIME OR COMPOSITE \t\t\n");
	printf("\n	21.	PRESS 21 TO FIND THE LARGEST AMONG THREE NUMBERS \t\t\n");
	printf("\n	22.	PRESS 22 TO FIND THE SMALLEST AMONG THREE NUMBERS \t\t\n");
	printf("\n	23.	PRESS 23 TO CHECK IF A GIVEN INPUT IS AN ALPHABET OR NOT \t\t\n");
	printf("\n	24.	PRESS 24 TO CHECK IF A GIVEN INPUT IS A VOWEL OR A CONSONANT \t\t\n");
	printf("\n	25.	PRESS 25 TO CHECK IF A GIVEN NUMBER IS POSITIVE, NEGATIVE OR ZERO \t\t\n");
	printf("\n	26.	PRESS 26 TO CHECK IF A GIVEN TRIANGLE IS SCALENE, ISOCELES AND EQUILATERAL TRIANGLE \t\t\n");
	printf("\n	27.	PRESS 27 TO FIND THE LARGER NUMBER AMONG TWO NUMBERS \t\t\n");
	printf("\n	28.	PRESS 28 TO CHECK IF A GIVEN YEAR IS A LEAP YEAR OR NOT \t\t\n");
	printf("\n\t\t\t\t\t\tENTER YOUR CHOICE \t\t\n");
	fflush(stdin);
	scanf("%d",&temp);
	if(temp>=19&&temp<=28)
	{
		system("cls");
		return temp;
	}
	else
	return 0;
}

int loops()
{
	system("COLOR 1B");
	int temp;
	system("cls");
	printf("\n\t_______________________C PROGRAMS USING LOOPING STATEMENTS______________________\n");
	printf("\tS.NO	PROGRAMES");
	printf("\n	29.	PRESS 29 TO PRINT EVEN TERMS(NUMBERS) SERIES BETWEEN TWO EXTREME POINTS \t\t\n");
	printf("\n	30.	PRESS 30 TO PRINT ODD TERMS(NUMBERS) SERIES BETWEEN TWO EXTREME POINTS \t\t\n");
	printf("\n	31.	PRESS 31 TO PRINT ASTERICKS SERIES BETWEEN TWO EXTREME POINTS \t\t\n");
	printf("\n	32.	PRESS 32 TO PRINT EVEN TERMS(ASTERICKS) SERIES BETWEEN TWO EXTREME POINTS \t\t\n");
	printf("\n	33.	PRESS 33 TO PRINT ODD TERMS(ASTERICKS) SERIES BETWEEN TWO EXTREME POINTS \t\t\n");
	printf("\n	34.	PRESS 34 TO FIND THE FIRST AND LAST DIGIT OF A GIVEN MULTIDIGIT NUMBER \t\t\n");
	printf("\n	35.	PRESS 35 TO CHECK IF A GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT \t\t\n");
	printf("\n	36.	PRESS 36 TO CHECK IF A GIVEN NUMBER IS A PERFECT NUMBER OR NOT \t\t\n");
	printf("\n	37.	PRESS 37 TO CHECK IF A GIVEN NUMBER IS A PALINDROME NUMBER OR NOT \t\t\n");
	printf("\n	38.	PRESS 38 TO CALCULATE THE NUMBER OF DIGITS IN A GIVEN NUMBER \t\t\n");
	printf("\n	39.	PRESS 39 TO CALCULATE THE SUM OF DIGITS IN A NUMBER \t\t\n");
	printf("\n	40.	PRESS 40 TO CALCULATE THE SUM OF N NATURAL NUMBERS \t\t\n");
	printf("\n	41.	PRESS 41 TO CALCULATE THE SUM OF NUMBERS BETWEEN A GIVEN RANGE \t\t\n");
	printf("\n	42.	PRESS 42 TO FIND THE REVERSE OF A GIVEN NUMBER \t\t\n");
	printf("\n	43.	PRESS 43 TO CALCULATE THE FACTORIAL OF A GIVEN NUMBER \t\t\n");
	printf("\n	44.	PRESS 44 TO PRINT THE FIBONACCI SERIES UPTO A GIVEN LIMIT \t\t\n");
	printf("\n	45.	PRESS 45 TO PRINT A SOLID ASTERICKS RECTANGLE PATTERN OF GIVEN ROWS AND COLUMNS \t\t\n");
	printf("\n	46.	PRESS 46 TO PRINT A HOLLOW ASTERICKS RECTANGLE PATTERN OF GIVEN ROWS AND COLUMNS \t\t\n ");
	printf("\n	47.	PRESS 47 TO PRINT A LEFT ALIGNED HALF PYRAMID ASTERICK PATTERN OF GIVEN ROWS \t\t\n");
	printf("\n	48.	PRESS 48 TO PRINT A LEFT ALIGNED INVERTED HALF PYRAMID ASTERICK PATTERN OF GIVEN ROWS \t\t\n ");
	printf("\n	49.	PRESS 49 TO PRINT A LEFT ALIGNED HALF PYRAMID NUMBER PATTERN OF GIVEN ROWS \t\t\n");
	printf("\n	50.	PRESS 50 TO PRINT A LEFT ALIGNED INVERTED HALF PYRAMID NUMBER PATTERN OF GIVEN ROWS \t\t\n");
	printf("\n	51.	PRESS 51 TO CALCULATE THE SUM OF NUMBER SERIES: (1)+(1+2)+(1+2+3).... UPTO GIVEN NUMBER OF TERMS \t\t\n");
	printf("\n\t\t\t\t\t\tENTER YOUR CHOICE \t\t\n");
	fflush(stdin);
	scanf("%d",&temp);
	if(temp>=29&&temp<=51)
	{
		system("cls");
		return temp;
	}
	else
	return 0;
}

int arr()
{
	system("COLOR 56");
	int temp;
	system("cls");
	printf("\n\t________________C PROGRAMS USING THE CONCEPT OF 1-D AND 2-D ARRAY__________________ \n");
	printf("\tS.NO	PROGRAMES");
	printf("\n	52.	PRESS 52 TO INPUT ELEMENTS IN A 1-D INTEGER ARRAY AND PRINT THE ARRAY \t\t\n ");
	printf("\n	53.	PRESS 53 TO FIND THE SUM OF THE ELEMENTS OF A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	54.	PRESS 54 TO FIND THE LARGEST ELEMENT PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	55.	PRESS 55 TO FIND THE SMALLEST ELEMENT PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	56.	PRESS 56 TO FIND ALL PRIME ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	57.	PRESS 57 TO FIND ALL EVEN ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	58.	PRESS 58 TO FIND ALL ODD ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	59.	PRESS 59 TO FIND ALL THE ARMSTRONG ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	60.	PRESS 60 TO FIND ALL THE PERFECT ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	61.	PRESS 61 TO FIND ALL THE PALINDROME ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	62.	PRESS 62 TO PRINT THE FACTORIAL OF ELEMENTS PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	63.	PRESS 63 TO FIND A PARTICULAR KEY ELEMENT PRESENT IN A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	64.	PRESS 64 TO EXECUTE BUBBLE SORT ON A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	65.	PRESS 65 TO EXECUTE SELECTION SORT ON A 1-D INTEGER ARRAY \t\t\n");
	printf("\n	66.	PRESS 66 TO ADD TWO 1-D INTEGER ARRAY OF UNEQUAL SIZE \t\t\n");
	printf("\n	67.	PRESS 67 TO SUBTRACT TWO 1-D INTEGER ARRAY OF UNEQUAL SIZE \t\t\n");
	printf("\n	68.	PRESS 68 TO INPUT ELEMENTS IN A 2-D INTEGER ARRAY AND PRINT THE ARRAY \t\t\n");
	printf("\n	69.	PRESS 69 TO INPUT ELEMENTS IN A 2-D INTEGER ARRAY AND PRINT THE ROW-WISE SUM OF ELEMENTS \t\t\n");
	printf("\n	70.	PRESS 70 TO INPUT ELEMENTS IN A 2-D INTEGER ARRAY AND PRINTF THE COLUMN-WISE SUM OF ELEMENTS \t\t\n");
	printf("\n	71.	PRESS 71 TO INPUT ELEMENTS IN A 2-D INTEGER ARRAY AND PRINTF THE ROW-WISE PRODUCT OF ELEMENTS \t\t\n");
	printf("\n	72.	PRESS 72 TO INPUT ELEMENTS IN A 2-D INTEGER ARRAY AND PRINTF THE COLUMN-WISE PRODUCT OF ELEMENTS \t\t\n");
	printf("\n	73.	PRESS 73 TO INPUT ELEMENTS IN TWO 2-D INTEGER ARRAYS AND PRINT THEIR SUM \t\t\n ");
	printf("\n	74.	PRESS 74 TO INPUT ELEMENTS IN TWO 2-D INTEGER ARRAYS AND PRINT THEIR DIFFERENCE \t\t\n");
	printf("\n	75.	PRESS 75 TO INPUT ELEMENTS IN TWO 2-D INTEGER ARRAYS AND PRINT THEIR PRODUCT \t\t\n");
	printf("\n	76.	PRESS 76 TO INPUT ELEMENTS IN A 2-D INTEGER SQUARE ARRAY AND PRINT THE SECONDARY DIAGONAL ELEMENTS \t\t\n");
	printf("\n 	                                     ENTER YOUR CHOICE \t\t\n");
	fflush(stdin);
	scanf("%d",&temp);
	if(temp>=52&&temp<=76)
	{
		system("cls");
		return temp;
	}
	else
	return 0;
}

int strings()
{
	system("COLOR B4");
	int temp;
	system("cls");
	printf("\n\t__________________C PROGRAMS USING THE CONCEPT OF STRINGS_________________\n");
	printf("\tS.NO	PROGRAMES");
	printf("\n	77.	PRESS 77 TO INPUT A STRING AND PRINT ITS CONTENT \t\t\n");
	printf("\n	78.	PRESS 78 TO INPUT A STRING AND CALCULATE ITS LENGTH \t\t\n");
	printf("\n	79.	PRESS 79 TO INPUT A STRING AND CALCULATE ITS LENGTH(USING IN-BUILT FUNCTIONS) \t\t\n");
	printf("\n	80.	PRESS 80 TO INPUT A STRING AND REVERSE ITS CONTENT \t\t\n");
	printf("\n	81.	PRESS 81 TO INPUT A STRING AND REVERSE ITS CONTENT(USING IN-BUILT FUNCTIONS) \t\t\n");
	printf("\n	82.	PRESS 82 TO INPUT TWO STRINGS AND COMPARE THEM \t\t\n");
	printf("\n	83.	PRESS 83 TO INPUT TWO STRINGS AND COMPARE THEM (USING IN-BUILT FUNCTIONS \t\t\n");
	printf("\n	84.	PRESS 84 TO INPUT TWO STRINGS AND CONCATENATE THEM \t\t\n");
	printf("\n	85.	PRESS 85 TO INPUT TWO STRINGS AND CONCATENATE THEM(USING IN-BUILT FUNCTIONS \t\t\n");
	printf("\n	86.	PRESS 86 TO INPUT TWO STRINGS AND COPY SECOND STRING IN THE FIRST STRING \t\t\n");
	printf("\n	87.	PRESS 87 TO INPUT TWO STRINGS AND COPY SECOND STRING IN THE FIRST STRING (USING IN-BUILT FUNCTIONS \t\t\n");
	printf("\n	88.	PRESS 88 TO INPUT A STRING AND CONVERT ALL UPPER-CASE LETTER TO LOWER-CASE LETTER AND VICE-VERSA \t\t\n");
	printf("\n	89.	PRESS 89 TO INPUT A STRING AND COUNT THE TOTAL NUMBER OF LOWER-CASE LETTER ,UPPER-CASE LETTER ,NUMBERS AND SPECIAL CHARACTERS \t\t\n");
	printf("\n	90.	PRESS 90 TO INPUT A STRING AND COUNT THE NUMBER OF VOWELS AND CONSONANTS \t\t\n");
	printf("\n	91.	PRESS 91 TO INPUT A STRING AND CHECK FOR THE FREQUENCY OF A GIVEN CHARACTER \t\t\n");
	printf("\n	92.	PRESS 92 TO INPUT A STRING AND CHECK IF IT'S PALINDROME OR NOT \t\t\n");
	printf("\n	93.	PRESS 93 TO INPUT A STRING AND DELETE A PARTICULAR CHARACTER FROM THE STRING \t\t\n ");
	printf("\n	94.	PRESS 94 TO INPUT A STRING AND COUNT THE NUMBER OF SPACES PRESENT IN THE STRING \t\t\n");
	printf("\n	95.	PRESS 95 TO INPUT A STRING AND COUNT THE NUMBER OF WORDS PRESENT IN THE STRING \t\t\n");
	printf("\n	96.	PRESS 96 TO INPUT A STRING AND PRINT THE NUMBER OF 4-LETTER-WORDS PRESENT IN THE STRING \t\t\n");
	printf("\n	97.	PRESS 97 TO INPUT A STRING AND CHECK FOR A PARTICULAR WORD IN THE STRING \t\t\n");
	printf("\n	98.	PRESS 98 TO INPUT A STRING AND DELETE UNNECESSARY SPACES FROM THE STRING \t\t\n");
	printf("\n	99.	PRESS 99 TO INPUT A STRING AND COUNT THE FREQUENCY OF A GIVEN WORD IN A STRING \t\t\n");
	printf("\n	100.	PRESS 100 TO INPUT A STRING AND SORT IT IN ALPAHBETICAL ORDER \t\t\n");
	printf("\n\t\t\t\t\tENTER YOUR CHOICE \t\t\n");
	fflush(stdin);
	scanf("%d",&temp);
	if(temp>=77 && temp<=100)
	{
		system("cls");
		return temp;
	}
	else
	return 0;
}

int main()
{
	system("COLOR 4E");
	system("cls");
	int a,ch;
	while (1)
	{
		system("cls");
		printf("\t\t\t\t\tTHIS MY PROJECT\n\n\n");
		printf("\t\t\tMY NAME IS 'MUKUL DEV MALIK'\n\n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\t__________________________MENU FOR ALL TYPES OF FUNCTION_______________________________\n");
		printf("	S.NO	PROGRAMES");
		printf("\n	1.	PRESS 1 FOR BASIC PROGRAMS OF C\t\t\n");
		printf("\n	2.	PRESS 2 FOR C PROGRAMS USING CONDITIONALS STATEMENTS. \t\t\n");
		printf("\n	3.	PRESS 3 FOR C PROGRAMS USING LOOPING STATEMENTS. \t\t\n");
		printf("\n	4.	PRESS 4 FOR C PROGRAMS USING THE CONCEPT OF 1-D AND 2-D ARRAY. \t\t\n");
		printf("\n	5.	PRESS 5 FOR C PROGRAMS USING THE CONCEPT OF STRINGS. \t\t\n");
		printf("\n\t\t\t\t\tENTER YOUR CHOICE \t\t\n");
		fflush(stdin);
		scanf("%d",&ch);

		switch (ch)
		{
		case 1: a = basics();
			break;
		case 2: a = conditionals();
			break;
		case 3: a = loops();
			break;
		case 4: a = arr();
			break;
		case 5: a = strings();
			break;

		default: a = 0;
			printf("\nWRONG INPUT SORRY");
			printf("\n@ ABORTING MENU");
			break;

		}

		switch (a)
		{
		case 1: hello();
			break;

		case 2: sum();
			break;

		case 3:difference();
			break;

		case 4: product();
			break;

		case 5: quotient();
			break;

		case 6: modulus();
			break;

		case 7: swap();
			break;

		case 8: areacir();
			break;

		case 9: areasq();
			break;

		case 10: arearec();
			break;

		case 11: areatri();
			break;

		case 12: pericir();
			break;

		case 13: perirec();
			break;

		case 14: perisq();
			break;

		case 15: simple();
			break;

		case 16: quadratic();
			break;

		case 17: power();
			break;

		case 18: temp();
			break;

		case 19:evenodd();
			break;

		case 20: prime();
			break;

		case 21: largest();
			break;

		case 22: smallest();
			break;

		case 23: charac();
			break;

		case 24: characvw();
			break;

		case 25: posneg();
			break;

		case 26: tri();
			break;

		case 27: greater();
			break;

		case 28: leap();
			break;

		case 29:even();
			break;

		case 30: odd();
			break;

		case 31: star();
			break;

		case 32: evenstar();
			break;

		case 33: oddstar();
			break;

		case 34: firstlast();
			break;

		case 35: armstrong();
			break;

		case 36: perfect();
			break;

		case 37: palindrome();
			break;

		case 38: digits();
			break;

		case 39:sumdig();
			break;

		case 40: sumnat();
			break;

		case 41: sumran();
			break;

		case 42: rev();
			break;

		case 43: fact();
			break;

		case 44: fib();
			break;

		case 45: rec();
			break;

		case 46: rec1();
			break;

		case 47: pat();
			break;

		case 48: pat1();
			break;

		case 49: num();
			break;

		case 50: num1();
			break;

		case 51: sumser();
			break;

		case 52: arinp();
			break;

		case 53: arsum();
			break;

		case 54: arlarge();
			break;

		case 55: arsmall();
			break;

		case 56: arprime();
			break;

		case 57: areven();
			break;

		case 58: arodd();
			break;

		case 59: ararm();
			break;

		case 60: arper();
			break;

		case 61: arpal();
			break;

		case 62: arfact();
			break;

		case 63:arfind();
			break;

		case 64: arbub();
			break;

		case 65: arsel();
			break;

		case 66: merge();
			break;

		case 67: submerge();
			break;

		case 68:mat();
			break;

		case 69:matrow();
			break;

		case 70: matcol();
			break;

		case 71: matrowpro();
			break;

		case 72: matcolpro();
			break;

		case 73: addmat();
			break;

		case 74: submat();
			break;

		case 75: matmul();
			break;

		case 76: secdiag();
			break;

		case 77: strio();
			break;

		case 78: strl();
			break;

		case 79: strl1();
			break;

		case 80: strreve();
			break;

		case 81: strreve1();
			break;

		case 82: strcom();
			break;

		case 83: strcom1();
			break;

		case 84: strcate();
			break;

		case 85: strcate1();
			break;

		case 86:strcopy();
			break;

		case 87: strcopy1();
			break;

		case 88: charconvert();
			break;

		case 89: strcount();
			break;

		case 90:strvw();
			break;

		case 91: charcount();
			break;

		case 92: check_pali();
			break;

		case 93: chardel();
			break;

		case 94: countsp();
			break;

		case 95: countw();
			break;

		case 96: countw4();
			break;

		case 97: countwkey();
			break;

		case 98: delsp();
			break;

		case 99: countwkey1();
			break;

		case 100: repeat();
			break;

		default:
			printf("\nSORRY NO FUNCTION FOR THIS INPUT");
			printf("\n@@EXTING@@");
			getch();
			exit(0);

    	}

		getche();
	}

	return 0;
}
