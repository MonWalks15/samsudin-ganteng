#include <vector>
#ifndef ANTRIAN_H
#include "lagu.h"
#include <iostream>

class Antrian {
private:
	std::vector<Lagu> antrian_lagu;
	int indeks_lagu_sekarang;
public:
	void tambahLagu(Lagu lagu_baru);
	void next();
	void prev();
	void play();
};

#endif // !ANTRIAN_H
