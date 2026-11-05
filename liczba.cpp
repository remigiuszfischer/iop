#include<iostream>

int main(){
	int liczba;
	std::cin>>liczba;

	if(liczba<=0){
		std::cout<<"Liczba nie jest liczba naturalna dodatnia"<<std::endl;
		return 0;
	}

	std::cout<<liczba<<std::endl;
	return 0;
}
