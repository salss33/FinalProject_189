#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() {}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}

	void setY(int b) {
		this->y = b;
	}

	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar { 
public:
	void input() {
		cout<< "Masukkan jejari : ";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}

	float Luas(int jejari) {
		return 3.14 * jejari * jejari;
	}

	float keliling(int jejari) {
		return 2 * 3.14 * jejari;
	}

	void cekUkuran() {
		if (keliling(getX()) > 40)
		cout << "Ukuran lingkaran adalah Besar" << endl;
		else if (keliling(getX()) < 20)
			cout << "Ukuran lingkaran adalah Sedang" << endl;
		else if (Keliling(getX()) < 10)
			cout << "Ukuran lingkaran adalah Kecil" << endl;
	}
};

class Persegipanjang :public bidangDatar {
public:
	void input() {
		cout << "Masukkan panjang : ";
		int panjang;
		cin >> panjang;
		setX(panjang);

		cout << "Masukkan lebar : ";
		int lebar;
		cin >> lebar;
		setY(lebar);
	}

	float Luas(int panjang) {
		return panjang * getY();
	}

	float Keliling(int panjang) {
		return 2 * (panjang + getY())
	}

	void cekUkuran() {
		if (Keliling(getX()) > 40)
			cout << "Ukuran Persegi Panjang Adalah Besar" << endl;
		else if (Keliling(getX()) < 20)
			cout << "Ukurang Persegi Panjang Adalah Besar" << endl;
		else if (Keliling(getX()) < 10)
			cout << "Ukuran Persegi Panjang adalah Kecil" << endl;
	}
};

int main() {
	char repeat;
	do {
		bidangDatar;

		cout << "\nMenu" << endl;
		cout << "1. Lingkaran" << endl;
		cout << "2. Persegi Panjang" << endl;
		cout << "3. Exit" << endl;
		cout << ""
	}
};