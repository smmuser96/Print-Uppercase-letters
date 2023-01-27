#include<iostream>

using namespace std;

int main() {
	
	cout << "1. Letter A :" << endl << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == 0 && j == 3) {
				cout << " A";
			}
			else if (i == 1 && (j == 2 || j == 4)) {
				cout << " A" ;
			}
			else if (i == 2 && ((j != 0) && ( j != 6))) {
				cout << " A" ;
			}
			else if (i == 3 && (j == 0 || j == 6)) {
				cout << " A";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	

	cout << " \n\n2. Letter B :" << endl << endl;
	for (int i = 0; i < 5; i++) {
		if (i == 0 || i == 2 || i == 4) {
			for (int a = 0; a < 3; a++) {
				cout << " B";
			}
			cout << endl;
		}
		else {
			for (int b = 0; b < 4; b++) {
				if (b == 0 || b == 3) {
					cout << " B";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}

	}
	
	
	cout << " \n\n3. Letter C :" << endl << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i == 0 || i == 5) && (j == 1 || j == 2)) {
				cout << " C";
			}
			else if ((i == 1 || i == 4) && (j == 0 || j == 3)) {
				cout << " C";
			}
			else if ((i == 2 || i == 3) &&  j == 0) {
				cout << " C";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	

	cout << " \n\n4. Letter D :" << endl << endl;
	for (int i = 0; i < 6; i++) {
		if (i == 0 || i == 5) {
			for (int j = 0; j < 3; j++) {
				cout << " D";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 4; k++) {
				if (k == 0 || k == 3) {
					cout << " D";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}	
	}

	cout << " \n\n5. Letter E :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		if (i == 0 || i == 3 || i == 6) {
			for (int j = 0; j < 4; j++) {
				cout << " E";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 4; k++) {
				if (k == 0 ) {
					cout << " E";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	cout << " \n\n6. Letter F :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		if (i == 0 || i == 3 ) {
			for (int j = 0; j < 4; j++) {
				cout << " F";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 4; k++) {
				if (k == 0) {
					cout << " F";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	cout << " \n\n7. Letter G :" << endl << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i == 0 || i == 5) && (j == 1 || j == 2)) {
				cout << " G";
			}
			else if ((i == 1 || i == 4) && (j == 0 || j == 3)) {
				cout << " G";
			}
			else if (i == 2  && j == 0) {
				cout << " G";
			}
			else if ( i == 3 && (j == 0 || j == 2 || j == 3 )) {
				cout << " G";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n8. Letter H :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		if ( i == 3) {
			for (int j = 0; j < 4; j++) {
				cout << "  H";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 4; k++) {
				if (k == 0 || k == 3) {
					cout << "  H";
				}
				else {
					cout << "   ";
				}
			}
			cout << endl;
		}
	}

	cout << " \n\n9. Letter I :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		if (i == 0 || i == 6) {
			for (int j = 0; j < 5; j++) {
				cout << " I";
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 5; k++) {
				if (k == 2) {
					cout << " I";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	cout << " \n\n10. Letter J :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		if (i == 0 ) {
			for (int j = 0; j < 5; j++) {
				cout << " J";
			}
			cout << endl;
		}
		else if (i == 5) {
			for (int l = 0; l < 3; l++) {
				if (l == 0 || l == 2) {
					cout << " J";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		else if (i == 6) {
			for (int m = 0; m < 2; m++) {
				if (m == 1 ) {
					cout << " J";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		else {
			for (int k = 0; k < 5; k++) {
				if (k == 2) {
					cout << " J";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	cout << " \n\n11. Letter K :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 5; k++) {
			if (k == 0 ) {
				cout << " K";
			}
			else if (k == 4 - i) {
				cout << " K";
			}
			else if ((i == k + 2) && (k > 1 && k < 5)) {
				cout << " K";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n12. Letter L :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 5; k++) {
			if (k == 0) {
				cout << " L";
			}
			else if (i == 6) {
				cout << " L";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	cout << " \n\n13. Letter M :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 13; k++) {
			if (k == 0 || k == 12) {
				cout << " M";
			}
			else if (i == k) {
				cout << "M";
			}
			else if (k > 6 && k == 12 - i) {
				cout << "M";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << " \n\n14. Letter N :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 7; k++) {
			if (k == 0 || k == 6) {
				cout << " N";
			}
			else if (i == k) {
				cout << " N";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	cout << " \n\n15. Letter O :" << endl << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++) {
			if ((i == 0 || i == 7) && (j > 0 && j < 5)) {
				cout << " O";
			}
			else if (i > 0 && i < 7) {
				if (j == 0 || j == 5) {
					cout << " O";
				}
				else {
					cout << "  ";
				}
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n16. Letter P :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 0) {
				cout << " P";
			}
			else if ((i == 0 || i == 3) && j < 4) {
				cout << " P";
			}
			else if (j == 4 && (i == 1 || i == 2)) {
				cout << " P";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n17. Letter Q :" << endl << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i == 0 || i == 7) && (j > 0 && j < 5)) {
				cout << " Q";
			}
			else if (i > 0 && i < 7) {
				if (j == 0 || j == 5) {
					cout << " Q";
				}
				else {
					cout << "  ";
				}
			}
			else if ( i == j + 1) {
				cout << " Q";
			}
			else {
				cout << "  ";
			}
			
			
		}
		cout << endl;
	}
	
	cout << " \n\n18. Letter R :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 0) {
				cout << " R";
			}
			else if ((i == 0 || i == 3) && j < 4) {
				cout << " R";
			}
			else if (j == 4 && (i == 1 || i == 2)) {
				cout << " R";
			}
			else if (i == j + 2) {
				cout << " R";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n19. Letter S :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++) {
			if ((i == 0 || i == 3 || i == 6) && 0 < j && j < 4) {
				cout << " S";
			}
			else if (j == 0 && ( (i > 0 && i < 4) || i == 5 )) {
				cout << " S";
			}
			else if (j == 4 && (i == 1 || (i > 2 && i < 6))) {
				cout << " S";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	cout << " \n\n20. Letter T :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) {
				cout << " T";
			}
			else if (j == 2) {
				cout << " T";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n21. Letter U :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if ((j == 0 || j == 5) && i < 6) {
				cout << " U";
			}
			else if (i == 6 && 0 < j && j < 5) {
				cout << " U";
			}
			
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " \n\n22. Letter V :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 13; k++) {
			if (i == k) {
				cout << "V";
			}
			else if (k > 6 && k == 12 - i) {
				cout << "V";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << " \n\n23. Letter W :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 13; k++) {
			if (k == 0 || k == 12) {
				cout << "W";
			}
			else if ( k == 6 - i) {
				cout << "W";
			}
			else if (k > 6 && k == i + 6) {
				cout << "W";
			}
			
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << " \n\n24. Letter X :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 7; k++) {
			if (k == i) {
				cout << " X";
			}
			else if ( k == 6 - i) {
				cout << " X";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << " \n\n25. Letter Y :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k <7; k++) {
			if (i < 4) {
				if (k == i) {
					cout << " Y";
				}
				else if (k == 6 - i) {
					cout << " Y";
				}
				else {
					cout << " ";
				}
			}
			else if (k == 3) {
				cout << " Y";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << " \n\n26. Letter Z :" << endl << endl;
	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 7; k++) {
			if (i == 0 || i == 6) {
				cout << " Z";
			}
			else if (k == 6 - i) {
				cout << " Z";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	


	return 0;
}