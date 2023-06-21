#include <iostream>

using namespace std;

int main() {

	double number1=0;
	double number2=0;

	int number1int=0;
	int number2int=0;

	char operation, again;

	cout<<"~~ Welcome to \"The Command Line Calculator\" ~~"<<endl;

		do{

			cout<<"\nAllowed functions are:"<<endl;
			cout<<"\tAddition(+)"<<endl<<"\tSubstraction(-)"<<endl<<"\tMultiplication(x or *)"<<endl;
			cout<<"\tDivision(/)"<<endl<<"\tRemainder(r)"<<endl;
			
			cout<<"\nNote that USE DOT(.) for decimals NOT comma(,) & Remainder works well with only integer numbers."<<endl;
			cout<<"Calculation type must be like \"x+y\", then press the Enter.\n"<<endl;

			cin>>number1>>operation>>number2;


				switch(operation){

					case'+':
						cout<<"Result is: "<<number1+number2;
					break;

					case'-':
						cout<<"Result is: "<<number1-number2;
					break;

					case'*':
					case'x':
					case'X':
						cout<<"Result is: "<<number1*number2;
					break;

					case'/':
						cout<<"Result is: "<<number1/number2;
					break;

					case'r':
					case'R':
						number1int=number1;
						number2int=number2;
						cout<<"Result is: "<<number1int%number2int;
					break;

					default:
						cout<<"Undefined operation.";

				}


			cout<<endl<<endl;
			cout<<"Do you want to calculate one more? ('y' for YES, any other keys for NO | then press the Enter)"<<endl;
			cin>>again;

			cout<<"-------------------------------------------------------------------------------------------------";

		}while(again=='Y' || again=='y');

		cout<<endl<<":) Thank you for preferring our Calculator.";

return 0;
}
