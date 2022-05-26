#include <iostream>
int main()
{
	int a,b,c;
	std:: cout<<"Nhap a va b"<<std::endl;
	std:: cin >> a >>b;
	std:: cout<< "a=" << a <<std::endl;
	std:: cout<< "b=" << b <<std::endl;
	for ( c=a+1; c<b ;c++)
	std:: cout<<" " << c <<std::endl;
	return 0;
}
