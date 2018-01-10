#include <iostream>
#include <string>
using namespace std;

class Shirt {
	int price;
	string place;
	string material;
public:
	Shirt(int pri, string pla, string mat) {
		price = pri;
		place = pla;
		material = mat;
	}
	void out(int n) {
		for ( int i = n; i > 0; i--)
			cout << price << ' ' << place <<  ' ' << material << endl;
	}
	int TotalPrice(int n) {return price*n;}
	void DateIn(int n) {
		cout << n << " * shirt data in: price/place/material =>";
		cout << endl;
	}
};

class cap {
	int price;
	string place;
	string material;
	string style;
public:
	cap(int pri, string pla, string mat, string sty) {
		price = pri;
		place = pla;
		material = mat;
		style = sty;
	}
	void out(int n) {
		for ( int i = n; i > 0; i--)
			cout << price << ' ' << place <<  ' ' << material << ' ' << style << endl;
	}
	int TotalPrice(int n) {return price*n;}
	void DateIn(int n) {
		cout << n << " * cap data in: price/place/material/style =>";
		cout << endl;
	}
};

class Wardrobe {
	int price;
	string place;
	string material;
	string color;
public:
	Wardrobe(int pri, string pla, string mat, string col) {
		price = pri;
		place = pla;
		material = mat;
		color = col;
	}
	void out(int n) {
		for ( int i = n; i > 0; i--)
			cout << price << ' ' << place <<  ' ' << material << ' ' << color << endl;
	}
	int TotalPrice(int n) {return price*n;}
	void DateIn(int n) {
		cout << n << " * Wardrobe data in: price/place/material/color =>";
	    cout << endl;
	}
};

int main() {
	int price;
	string place,material,style,color;
	cin >> price >> place >> material;
	Shirt shiSto1(price,place,material);
	cin >> price >> place >> material;
	Shirt shiSto2(price,place,material);

    cin >> price >> place >> material >> style;
	cap capSto1 (price,place,material,style);
	cin >> price >> place >> material >> style;
	cap capSto2 (price,place,material,style);

	cin >> price >> place >> material >> color;
	Wardrobe WarSto1(price,place,material,color);
	cin >> price >> place >> material >> color;
	Wardrobe WarSto2(price,place,material,color);

	shiSto1.DateIn(5);
	shiSto2.DateIn(3);
	shiSto1.out(5);
	shiSto2.out(3);
	cout << "shiSto.TotalPrice()=" << (shiSto1.TotalPrice(5)+shiSto2.TotalPrice(3)) << endl;
	shiSto1.out(4);
	cout << "shiSto.TotalPrice()=" << shiSto1.TotalPrice(4) << endl;

	capSto1.DateIn(5);
	capSto2.DateIn(3);
	capSto1.out(5);
	capSto2.out(3);
	cout << "capSto.TotalPrice()=" << (capSto1.TotalPrice(5)+capSto2.TotalPrice(3)) << endl;
	capSto1.out(4);
	cout << "capSto.TotalPrice()=" << capSto1.TotalPrice(4) << endl;

	WarSto1.DateIn(5);
	WarSto2.DateIn(3);
	WarSto1.out(5);
	WarSto2.out(3);
	cout << "WarSto.TotalPrice()=" << (WarSto1.TotalPrice(5)+WarSto2.TotalPrice(3)) << endl;
	WarSto1.out(4);
	cout << "WarSto.TotalPrice()=" << WarSto1.TotalPrice(4) << endl;
	return 0;
}
