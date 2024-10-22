#include <iostream>
#include "myLib.cpp"
using namespace std;

class Cadastro {
	private:
		string nome,cargo,curso,serie;
		float salario;
		
	public:
		void setNome(string nome) {
			this->nome=nome;
		}
		
		string getNome() {
			return nome;
		}
		
		void setCargo(string cargo) {
			this->cargo=cargo;
		}
		
		string getCargo() {
			return cargo;
		}
		
		void setCurso(string curso) {
			this->curso=curso;
		}
		
		string getCurso() {
			return curso;
		}
		
		void setSerie(string serie) {
			this->serie=serie;
		}
		
		string getSerie() {
			return serie;
		}
		
		void setSalario(float salario) {
			this->salario=salario;
		}
		
		float getSalario() {
			return salario;
		}
		
};

void lerCadAluno(Cadastro *c) {
	cout << "Cadastro do Aluno" << endl;
	
	cout << "\nNome do Aluno   " << char(175) << " " ;
	c->setNome(leStr());
	
	cout << "Curso do Aluno  " << char(175) << " "; 
	c->setCurso(leStr());
	
	cout << "Serie do Aluno  " << char(175) << " ";
	c->setSerie(leStr());
	
	system("cls");
	cout << "\nFicha do Aluno" << endl;
	cout << "Nome........... : " << c->getNome() << endl;
	cout << "Curso.......... : " << c->getCurso() << endl;
	cout << "Serie.......... : " << c->getSerie() << " Semestre" << endl;
}
void lerCadFuncionario(Cadastro *c) {
	cout << "Cadastro do Funcionario" << endl;
	
	cout << "\nNome do Funcionario   "<< char(175) << " ";
	c->setNome(leStr());
	
	cout << "Cargo do Funcionario  " << char(175) << " "; 
	c->setCargo(leStr());
	
	cout << "Salario               " << char(175) << " ";
	c->setSalario(leFt());
	
	system("cls");
	cout << "\nFicha Salarial" << endl;
	cout << "Nome............. : " << c->getNome() << endl;
	cout << "Curso............ : " << c->getCargo() << endl;
	cout << "Salario.......... : " << c->getSalario() << endl;
}
int main(){
	Cadastro c;
	int op=1;
	char cont='s';
	
	while (op) {
		cout << "Gostaria de Cadastrar : " << endl;
		cout << "Aluno............... (1) " << endl;
		cout << "Funcionario......... (2) " << endl;
		cin >> op;
		cout << endl;
		cont = tolower(cont);
		system("cls");
	
		switch(op) {
		
			case 1:
				lerCadAluno(&c);
				cout << "\nDeseja cadastra outra opcao? sim(s)//nao(n) : ";
				cin >> cont;
				cont = tolower(cont);
				system("cls");
				if(cont == 's') {
				cont = 1;
				system("cls");
				}else{
					op = 0;
				}
				break;
			
			case 2:
				lerCadFuncionario(&c);
				cout << "\nDeseja cadastra outra opcao? sim(s)//nao(n) : ";
				cin >> cont;
				cont = tolower(cont);
				system("cls");
				if(cont == 's') {
				cont = 1;
				system("cls");
				}else{
					op = 0;
				}
				break;
			
			default :
				cout<<"Opcao invalida !";
				break;
				
		}
	}
	
	cout << "Tchau volte sempre ! " ;
	
	return 0;
}