#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	float semesterke;
	int skslulus;
	float totalips;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk,float semesterke);

	void setSemester(float semesterke);
	float getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void setIPS(float semester, float ips);
	float getIPS(float semester);
	std::vector<float> getAllIPS();

	int getTahunmasuk();
	void setTahunmasuk(int tahunmasuk);

	float getIPK();
	void setIPK(float IPS);
	void hitungIPK();

	std::string getDepartemen();
	void setDepartemen(std::string _departemen);

	std::string getNRP();
	void setNRP(std::string newnrp);
};

#endif
