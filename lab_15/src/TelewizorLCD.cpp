#include "TelewizorLCD.h"

void TelewizorLCD::Wyswietl(Odtwarzacz* odtwarzacz) const
	{
		std::cout<<std::endl<<"Polaczono TelewizorLCD i "<<odtwarzacz->get_name()<<std::endl;
		for(int i=0;i<_szerokosc/2;i++)
		{
			std::cout<<"- ";
		}
		std::cout<<std::endl;
		for(int i=0;i<_wysokosc;i++)
		{
			for(int i=0;i<_szerokosc;i++)
			{
				std::cout<<odtwarzacz->get_znak();
			}
			std::cout<<std::endl;
		}
		for(int i=0;i<_szerokosc/2;i++)
		{
			std::cout<<"- ";
		}
		std::cout<<std::endl;
	}
