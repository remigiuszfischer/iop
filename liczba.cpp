#include<iostream>

bool czy_doskonala(int liczba){
	if(liczba<2) return false;
	int suma=1;
	for(int i=2;i*i<=liczba;i++){
		if(liczba%i==0){
			suma+=i;
			if(i*i!=liczba) suma+=liczba/i;
		}
	}
	return suma==liczba;
}

int main(){
	int liczba;
	std::cin>>liczba;
	if(czy_doskonala(liczba)) std::cout<<"Liczba "<<liczba<<" jest liczba doskonala"<<std::endl;
	else std::cout<<"Liczba "<<liczba<<" nie jest liczba doskonala"<<std::endl;
	return 0;
}
