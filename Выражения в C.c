1) 

#include <iostream>

using namespace std;

int main()

{

    setlocale(LC_ALL,"rus");

    int n, b;

    cout << "Введите число: ";

    cin >> n;

    cout << "Введите делитель: ";

    cin >> b;



    int p = n / b;

    int n1 = b * p;

    int n2 = (n * b) > 0 ? (b * (p + 1)) : (b * (p - 1));

    if (abs(n - n1) < abs(n - n2))
 
        return n1;

         return n2;

}



2) 

#include <iostream>

#include <math.h>


using namespace std;


int main()

{
 
    setlocale(LC_ALL,"rus");


     int a, b, c;

     cout << "Введите первый катит: ";

     cin >> a;

     cout << "Введите второй катит: ";

     cin >> b;

     c = sqrt(pow(a,2) + pow(b,2));

     cout << "Гипатинуза равна: " << c << endl;


    
    return 0;

}
   



3)

#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()

{

    setlocale(LC_ALL,"rus");

    int mainNumbe;

    int a, b, c, d, f;

    cout << "Введите трехзначное число: ";

    cin >> mainNumbe;

    a = mainNumbe % 10;

    mainNumbe /= 10;

    b = mainNumbe % 10;

    mainNumbe /= 10;

    c = mainNumbe % 10;

    mainNumbe /= 10;

    d = a + b + c;

    f = a * b * c;

    cout << "Сумма: " << d << endl;

    cout << "Произведение: " << f << endl;

    

    return 0;

}



4) 
 
#include <iostream>

using namespace std;

int main()

{

    setlocale(LC_ALL,"rus");

    
  
    float x1, y1;

    float x2, y2;
 
   float k, b;


 
   printf("A(x1; y1): ");

    scanf("%f%f", &x1, &y1);

    printf("A(x2; y2): ");

    scanf("%f%f", &x2, &y2);


 
   k = (y1 - y2) / (x1 - x2);

    b = y2 - k * x2;

 
   
    printf("y = %.2fx + %.2f\n", k, b);

}




5)

#include <iostream> 
#include <math.h>


main()

{

    setlocale(LC_ALL,"rus");

    int n,y;

    float p,m,s;
        


    printf("Сумма кредита: ");

    scanf("%d", &n);
   
    printf("количество лет: ");
    
    scanf("%d", &y);
    
    printf("Процент: ");
    
    scanf("%f", &p);
 
 
   
    p = p / 100;
   
    m = (n * p * pow((1+p),y)) / (12 * (pow(1+p,y) - 1));
    
    s = m * 12 * y;
    
    printf("Ежемесячные выплаты: %.0f руб.\nВсего будет выплачено: %.0f руб.\n", m, s);

}




6)

#include <iostream>
main()

{

    setlocale(LC_ALL,"rus");
    


    int a,b,c;

    scanf("%d", &a);

    scanf("%d", &b);

    printf("a=%d; b=%d\n", a, b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("a=%d; b=%d\n", a, b);

}




7)

#include <iostream>

#include <math.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"rus");
    


    int n, a, b, c, d, f;
 
   cout <<"Введите число: ";

    cin >> n;

    d = n % 10;

    n /= 10;

    c = n % 10;
 
   n /= 10;
 
   b = n % 10;

    n /= 10;
 
   a = n;
 
   f = a*b + c*d;

    cout <<"ab+cd=" << f;


}



8)



#include <iostream>

#include <math.h>

using namespace std;

int main()

{
 
   setlocale(LC_ALL,"rus");


    
int a, b, c;

    double pi, d, e, f, g;

    cout << "Диаметр: ";

    cin >> a;

    cout << "Высота: ";

    cin >> b;

    cout << "Окрашеваемая площадь одной банки: ";

    cin >> c;

    pi = 3.14;
    


    d = pi * sqrt(a);

    d /= 4.0;

    e = pi * a * b;

    f = (d + e) / c;

    g = f + 1;

    cout <<"Количество банок: " << g;

}
