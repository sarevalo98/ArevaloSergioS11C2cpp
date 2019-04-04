#include<iostream>


int primos(int a, int b);
	
int main()
	{
	int a;
	int b;
	std::cin>>a;
	std::cin>>b;
	primos(a,b);
	return 0;
	}
int primos(int a,int b)
		{
		for(int i=a; i<=b;i++)
			int contador=0;
			{for(int h=1; h<=b;h++)
				{if(i%h==0)
					{contador++;
					if(contador==2)
						{std::cout<< i << " es numero primo" <<std::endl;
						}
					}
				}
			}
		}
