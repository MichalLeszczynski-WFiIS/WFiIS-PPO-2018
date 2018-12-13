#include "Complex.h"


	void Complex::Print() const
	{
		if(_im ==0)
		{std::cout<<_re<<std::endl;}
		else if(_re ==0)
		std::cout<<"i"<<_im<<std::endl;
		else 
		std::cout<<_re<<"+i"<<_im<<std::endl;
	}
	
