#include <iostream>
int main(){  
	int a,b,c,d,e,f,x,y,z,g; 
	std::cin>> a>>b>>c>>d>>e>>f;  
	std::cout<<"\n hora de entrada="<< a<<":"<<b<<":"<<c; 
	std::cout<<"\n hora de salida="<<d<<":"<<e<<":"<<f; 
	if (a<d){    
		x=a*3600+b*60+c;    
		y=d*3600+e*60+f;   
		z=abs(y-x);   
		g=z%3600;   
		std::cout<< "\n hora de trabajo="<<z/3600<<":"<<g/60<<":"<<g%60;
	}  
	else{    
		x=a*3600+b*60+c;    
		y=d*3600+e*60+f;    
		z=y-x+86400;    
		g=z%3600;   
		std::cout<< "\n horas de trabajo="<<z/3600<<":"<<g/60<<":"<<g%60;  
	}
}
