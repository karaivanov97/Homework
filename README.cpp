u# Homework

1.
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum=0;
	int helper;
	for (int i = 0; i < n; i++) {
		cin >> helper;
		if (helper <= 5555 && helper >= 10) {
			sum = sum + helper;
		}
	}
	cout << sum << endl;
	return 0;
}
  
  
  2.
  #include <iostream>
using namespace std;
int main() {
	int helper;
	int broi = 0;
	int sum = 0;
	int average;
	cin >> helper;
	while (helper >= 1)  
	{
		if (helper <= 200) {
			broi = broi + 1;
			sum = sum + helper;
		}
		cin >> helper;
	}
	average = sum / broi;
	cout << "Broqt na chislata e " << broi << endl
		<< "Sumata na chislata e: " << sum << endl
		<< "Sredno arimetichno e : " << average << endl;
	return 0;
}
  
  
  3.
  #include <iostream>
sing namespace std;
int main() {

int n;
	cin >> n;
	int counter = 0;
	while (n > 0) {

		n = n / 10;
		counter++;
	}
	cout << counter << endl;
	return 0;
}



4.
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int delimo = n;
  	cout << "Deliteli na " << n << " sa : " << endl;
	while (delimo > 0) {
		if (( n % delimo ) == 0) 
		{ //5%5=0
			cout << delimo << " ";
		}
		delimo--;
	}
	return 0;
}
    
  
  5.
  #include <iostream>
using namespace std;
int main() {
	int n = 100;
	for (int i = n; i < 999; i++) {
		int first= i/100;
		int second=((i/10)%10);
		int third=i%10;
		if ((first != second) && (second != third) && (first != third)) {
			cout << i << " ";
		}
	}
	return 0;
}
           
           
6.
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n < 10 || n>100) {
	  cin >> n;
	}
	int sum = 0;
	while (n >= 10) {
		int first = n / 10;
		int second = n % 10;
		sum += (first + second);
		n--;
	}
	cout << sum;
	return 0;
}
  
  
  7.
  #include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n < 10 || n>200) {
	  cin >> n;
	}
	while (n > 0) {
		if (n % 7 == 0) {
			cout << n << " ";
		}
		n--;
	}
	return 0;
}

  
           
