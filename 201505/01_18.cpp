#include <iostream>
int main()
{
	std::cout << "Enter two numbers " << std::endl;
	int v1,v2;
	std::cin >>v1 >> v2;
	if(v1 < v2){
		for (int i = v1; i <= v2; ++i)
			std::cout << i << " ";
	}else if(v1 > v2){
		for (int i = v2; i <= v1; ++i)
			std::cout << i << " ";
	}else{
		std::cout << v1 ;
	}
}
