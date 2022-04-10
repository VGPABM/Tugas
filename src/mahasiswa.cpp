#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"

mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, std::string departemen, int tahunmasuk, float semesterke)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke)
{
	this->ipk = 0.0;
	//this->semesterke = 1;
	this->skslulus = 0;
	this->ips=std::vector<float>(14,0);
	/*or (int i = 0; i<ips.size; i++){
		ips[i]=0;
	}*/
}

void mahasiswa::setSemester(float semesterke)
{
	this->semesterke = semesterke;
}

float mahasiswa::getSemester()
{
	return this->semesterke;
}

std::string mahasiswa::getNRP(){
	return this->nrp;
}
void mahasiswa::setNRP(std::string newnrp){
	this->nrp = newnrp;
}

int mahasiswa::getTahunmasuk(){
	return this->tahunmasuk;
}

std::string mahasiswa::getDepartemen(){
	return this->departemen;
}

void mahasiswa::setDepartemen(std::string _departemen){
	this->departemen = _departemen;
}

void mahasiswa::setTahunmasuk(int tahunmasuk){
	this-> tahunmasuk = tahunmasuk;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}	

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::hitungIPK()
{
	float semester;
	float ipksem;
	std::vector<float> ipss;
	ipss = getAllIPS();
	for (float i=0;i<getSemester();++i){
		ipk+=getIPS(i)/getSemester();
	}
	this->ipk = ipk;
}

float mahasiswa::getIPK()
{
	hitungIPK();
	return this->ipk;
}

void mahasiswa::setIPS(float semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
	}
}

float mahasiswa::getIPS(float semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}




