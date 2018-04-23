#include <iostream>
#include "Wallet.h"

using namespace std;


int main(int argc, char *argv[]) {
	string pathFile = "C:\\Users\\mkharraz\\Desktop\\dev\\Integration_cpp\\composants\\test.json";
	Wallet w(pathFile);
	std::cout << "argc" << argc << endl;
	std::cout << "LANCEMENT DU PROGRAMME WALLET" << std::endl;
	/*if (argc == 2 && 0 == strcmp(argv[1], "resume")) {
		w.solde();
	}
	else if (argc == 4 && 0 == strcmp(argv[1], "transaction")) {


		//transforme les arguments pour appeller la fonction transaction

		//string clePrivee(argv[2]);
		//string clePublique(argv[3]);
		//int montant = atoi(argv[4]);
		string clePrivee = "PRIVATE";
		string clePublique = "PUBLIC";
		int montant = 10;
		cout << "cle prive : " << clePrivee;
		w.depenser(clePublique,clePrivee, montant);

		
	}*/

	
	string clePrivee = "az2";
	string clePublique = "az1";
	int montant = 10;

	cout << w.solde(clePublique) << endl;

	cout << "cle prive : " << clePrivee << endl;
	w.depenser(clePublique, clePrivee, montant);


	std::getchar();
	return 0;
}