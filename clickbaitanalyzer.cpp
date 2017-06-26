#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int checkHeadline(string headline) {

	ifstream headlineFile("headlineterms.txt");
	string temp;
	int count=0;

	for (int i = 0; i <= 99999; i++) {
		headlineFile >> temp;
		if (headline.find(temp) != string::npos) {
			count++;
		}
	}
	
	return count;
}


int checkDomain(string domain) {

	ifstream domainFile("domains.txt");
	string temp;
	int percent=0;

	for (int i = 0; i <= 99999; i++) {
		domainFile >> temp;
		if (domain.find(temp) != string::npos) {
			domainFile >> percent;
		}
	}
	
	return percent;
}




int main()
{
	string headline, domain, anykey;
	cout << "Enter headline."<< endl;
	getline(cin, headline);
	cout << "Enter domain (example: 'time' or 'cnn')." << endl;
	cin >> domain;


	//adjust sensativity parameters here
	if ((checkHeadline(headline) == 0) && (checkDomain(domain) == 0)) {
		cout << "Cannot determine." << endl;
	}

	else if (checkHeadline(headline) >= 0 && checkDomain(domain) >= 0 && checkDomain(domain) < 50) {
		cout << "Maybe" << endl;
	}

	else if (checkHeadline(headline) >= 0 && checkDomain(domain) >= 50 && checkDomain(domain) < 75) {
		cout << "Likely" << endl;
	}
	
	else if (checkHeadline(headline) >= 0 && checkDomain(domain) >= 75) {
		cout << "Most Likely" << endl;
	}
	
	else if (checkHeadline(headline) >= 1 && checkDomain(domain) >= 75) {
		cout << "Absolutley" << endl;
	}



	
	cout << "Press any key to end." << endl;
	cin >> anykey;
    return 0;
}

