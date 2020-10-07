#include <iostream>

int main() {
	int n{};
	std::cin >> n;

	while (n--) {
		unsigned dna_size{4};
		char dna_seq[1000]{};
		bool allow{true};

		std::cin >> dna_size >> dna_seq;

		for (size_t i{}; i < dna_size; i++) {
			switch (dna_seq[i]){
			case 'A': 
				dna_seq[i] = 'T';
				break;
			case 'T':
				dna_seq[i] = 'A';
				break;
			case 'G':
				dna_seq[i] = 'C';
				break;
			case 'C':
				dna_seq[i] = 'G';
				break;
			default:
				allow = false;
				i = dna_size;
				break;
			}
		}
		if (allow == true)
			std::cout << dna_seq << std::endl;
		else
			std::cout << "Error RNA nucleobases found!" << std::endl;
	}
}

/*

#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	while (n--) {
		std::string dna_seq;
		unsigned dna_size;
		std::cin >> dna_size >> dna_seq;

		for (size_t i{}; i < dna_size; i++) {
			switch (dna_seq[i]) {
			case 'A':
				dna_seq[i] = 'T';
				break;
			case 'T':
				dna_seq[i] = 'A';
				break;
			case 'G':
				dna_seq[i] = 'C';
				break;
			case 'C':
				dna_seq[i] = 'G';
				break;
			default:
				dna_seq = "Error RNA nucleobases found!";
				i = dna_size;
				break;
			}
		}
		std::cout << dna_seq << std::endl;
	}
}*/