


// C++ Dersleri 1.cpp : Bu dosya 'main' i�levi i�eriyor. Program y�r�tme orada ba�lay�p biter.
// C++ cout print i�lemi g�r�r
// using namespace std; Bu sat�rda using kodu herhangi bir komutu tan�mlamak i�in kullan�l�r(cout<< gibi)namespace ise bu gibi komutlar�n hepsini birlikte tan�mlamaya imkan verir. -> int main() Bu sat�rda ise her C veya C++ kodunda olmas� gereken ana fonksiyonumuzu tan�ml�yoruz.
// /n bo�ul b�rakt�rmaya yarar
// C++ tip belirlemek zorundas�n
// C++ const bir de�i�keni global yapmak i�in kullan�l�r.
// boolean 1 byte char 2 byte int 4 byte float 4 byte double 8 byte kullan�r.
// C++ da her stringin bir indexi vard�r indexler 0 dan ba�lar de�i�tirebilir.
// C++ da max min sqr round log gibi matematiksel i�lemleri  kullanabildi�imiz fonksiyonlar vard�r.
//break stoplamaya continue ise skiplemeye yarar.
//& işareti ile bellekteki yerini öğrenebiliriz.
// fonskiyonları mainden sonra tanımlayamazsın.Taki yukarda tanımını verip aşagıda tanımlamazsan.
// parametlere default değer atabilir. herhangi bir parametre gönderilmesi hata çıktısı vermez ve default değeri basar 


/*
+	Addition	Adds together two values	x + y
-	Subtraction	Subtracts one value from another	x - y
*	Multiplication	Multiplies two values	x * y
/	Division	Divides one value by another	x / y
%	Modulus	Returns the division remainder	x % y
++	Increment	Increases the value of a variable by 1	++x
--	Decrement	Decreases the value of a variable by 1	--x
*/

/*
\n	New Line
\t	Tab
*/

/*
=	x = 5	x = 5
+=	x += 3	x = x + 3
-=	x -= 3	x = x - 3
*=	x *= 3	x = x * 3
/=	x /= 3	x = x / 3
%=	x %= 3	x = x % 3
&=	x &= 3	x = x & 3
|=	x |= 3	x = x | 3
^=	x ^= 3	x = x ^ 3
>>=	x >>= 3	x = x >> 3
<<=	x <<= 3	x = x << 3

*/

/*
==	Equal to	x == y
!=	Not equal	x != y
>	Greater than	x > y
<	Less than	x < y
>=	Greater than or equal to	x >= y
<=	Less than or equal to	x <= y
*/

/*
&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

*/

/*
\'	'	Single quote
\"	"	Double quote
\\	\	Backslash
*/

/*
Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be execute

*/
#include <string>
#include <iostream>

    using namespace std;
    const float PI = 3.14;

    void myfunc(string fname = "Maymun");
    

    int main() {

        for (int i = 0; i < 10; i++) {
            if (i == 4) {
                break;
            }
            cout << i << "\n";
        }

        string cars[] = { "Volvo", "BMW", "Ford", "Mazda" };
        cars[0] = "Opel";
        for (string i : cars) {
            cout << i<<"\n";

        }
        cout << cars[0];

        struct {
            string brand;
            string model;
            int year;
        } myCar1, myCar2;

        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;

        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

        string food = "Pizza";

        cout << food << "\n";
        cout << &food << "\n";
  
        string* ptr = &food;    
        cout << food << "\n";
        cout << &food << "\n";
        cout << ptr << "\n";
        cout << *ptr << "\n";
        *ptr = "Hamburger";
        cout << *ptr << "\n";
        cout << food << "\n";

        myfunc("Afacan");
        myfunc("Pamuk");
        myfunc();




        /*
         int i = 0;
            while (i < 5) {
                cout << i << "\n";
                i++;

            }

            for (int i = 0; i < 10; i=i+2) {
                cout << i << "\n";

            }

            for (int i = 1; i <= 5;++i) {
                cout << "giris:"<<i << "\n";
                for (int j = 1; j <= 3; ++j) {
                    cout << "cikis:"<<j << "\n";

                }
            }
            int myNumbers[5] = { 10, 20, 30, 40, 50 };
            for (int i : myNumbers) {
                cout << i << "\n";
            }
            return 0;




        */

        /*
        *int intenum = 12;
        double dobenum = 5.99;
        char myLetter = 'D';

        std::cout << "Hello World!\n";
        std::cout << "Hello World!2\n";
        cout << intenum << "\n";
        cout << dobenum << "\n";
        cout << myLetter << "\n";
        string myText = "Hello\n";
        bool myBoolean = true;

        cout << "My Age " << intenum << " .\n";

        int n1 = 12;
        int n2 = 5;
        int sum = n1 + n2;
        *  string firstName = "Pamuk ";
        string lastName = "Afacan";
        string fullName = firstName + lastName;
        cout << fullName << "\n";

        string x = "10";
        string y = "20";
        string z = x + y;
        cout << z << "\n";

        string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout << "The lenght of the txt is: " << txt.length() << "\n";
        cout << "The length of the txt string is: " << txt.size() << "\n";

        string myString = "Hello";
        cout << myString[0] << "\n";
        myString[0] = 'J';
        cout << myString[0] << "\n";

        string fullName2;
        cout << "Type your full name: ";
        getline(cin, fullName2);
        cout << "Your name is: " << fullName2 << "\n";
        *bool Pamuk = true;
        bool Afacan = false;
        cout << Pamuk;  // Outputs 1 (true)
        cout << Afacan;  // Outputs 0 (false)
        int x1 = 10;
        int y2 = 9;
        cout << (x > y);

        int myAge = 25;
        int votingAge = 18;

        if (myAge >= votingAge) {
            cout << "Old enough to vote!";
        }
        else {
            cout << "Not old enough to vote.";

        }
        *
        int day = 4;
        switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        }
        return 0;
        */


        /*
        int x,y;
        //cout << "sum: " << sum;
        //cout << PI;
        */



        /*
        cout << "Type a number: ";
        cin >> x;
        cout << "Type another number: ";
        cin >> y;
        int sum2 = x + y;
        cout << "Sum is: " << sum2;
        */



        //cout << max(5, 10);
        //cout << min(5,10);
        //cout << sqrt(64);
        //cout << round(2.6);
        //cout << log(2);

    
        
    }

    void myfunc(string fname) {

        cout << fname<<"\n";
    }

