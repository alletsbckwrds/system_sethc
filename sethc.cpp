#include <iostream>

bool get_access()
{
	std::cout<<"Input password: ";
	std::string in;
	getline(std::cin, in);
	int length=in.length();
	int sum=0;
	int sum2;
	int sum3;
	int sum4=0;
	
	for(int i=0; i<length; i++)
		sum += in[i];
	
	sum2=in[0];
	for(int i=1; i<length; i++)
		sum2=sum2^in[i];
	
	sum3=in[0];
	for(int i=1; i<length; i++)
		sum3=sum3%in[i];
	
	for(int i=1; i<=length; i++)
		sum4=sum4+in[i-1]*i;
	
	if(sum==883) //x
	{
		std::cout<<" (i) check 1/4 passed\n";
		if(sum2==31) //y
		{
			std::cout<<" (i) check 2/4 passed\n";
			if(sum3==15) //z
			{
				std::cout<<" (i) check 3/4 passed\n";
				if(sum4==3970) //a
				{
					std::cout<<" (i) check 4/4 passed\n";
					return 1;
				}
				else //i know this else is useless, but I FUCKING SWEAR that without it, it doesn't work on dev-c++!!!
				{
					std::cout<<"Wrong password.\n";
					system("pause");
					return 0;
				}
			}
		}
	}
	else
	{
		std::cout<<"Wrong password.\n";
		system("pause");
		return 0;
	}
}

int main(){
	system("mode 168");
	if(get_access())
		system("cmd");
	return 0;
}
