#include <iostream>

int main()
{
	int x='p'+'a'+'s'+'s'+'w'+'o'+'r'+'d'; //883
	int y='p'^'a'^'s'^'s'^'w'^'o'^'r'^'d'; //31
	int z='p'%'a'%'s'%'s'%'w'%'o'%'r'%'d'; //15
	int a='p'+('a'*2)+('s'*3)+('s'*4)+('w'*5)+('o'*6)+('r'*7)+('d'*8); //3970
	std::cout<<x<<" "<<y<<" "<<z<<" "<<a<<std::endl;
	system("pause");
}
