#include<iostream>
#include<cstring>
using namespace std;


int main() {

	system("cls");
	cout << "\n\n";
	int option;
	string choice;

	double total_rad = 0;   // total_rad -> to store the total radioactivity
	double life_expectancy;      // life_expectancy -> to store the total minutes lost due to radiactivity


	// radiations from the outerspace :
	double cosmic_rad = 26;
	total_rad += cosmic_rad;

	// radiations from sea level :
	double sea_rad;
	cout << "\t\t\t\t\t\tSelect your elevation from the sea level : \n" << endl;
	cout << "\t\t\t\t\t\t\t 1. upto 1000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 2. 1000 - 2000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 3. 2000 - 4000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 4. 4000 - 5000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 5. 5000 - 6000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 6. 6000 - 7000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 7. 7000 - 8000 ft." << endl;
	cout << "\t\t\t\t\t\t\t 8. 8000 - 9000 ft." << "\n" << endl;
	cout << "\t\t\t\t\t\t Enter your option : ";
	cin >> option;

	switch (option) {
	case 1 : sea_rad = 2;
		break;
	case 2 : sea_rad = 5;
		break;
	case 3 : sea_rad = 9;
		break;
	case 4 : sea_rad = 21;
		break;
	case 5 : sea_rad = 29;
		break;
	case 6 : sea_rad = 40;
		break;
	case 7 : sea_rad = 53;
		break;
	case 8 : sea_rad = 70;
		break;
	}

	total_rad += sea_rad;

	// radiations from materials used in house :
	cout << endl << endl;
	double h_material_rad;
	cout << "Do you live in a stone, brick or concrete building ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      h_material_rad = 7;      }
	else {      h_material_rad = 0;      }
	total_rad += h_material_rad;

	// radiations from the surroundings :
	double foodandwater_rad = 40;
	double radon_rad = 200;
	total_rad += (foodandwater_rad + radon_rad);

	// radiations from some of the activities :

	// 1 activity ->
	cout << endl;
	double teeth_rad;
	cout << "Do you have false teeth ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      teeth_rad = 0.07;      }
	else {      teeth_rad = 0;      }
	total_rad += total_rad;

	// 2 activity ->
	cout << endl;
	double camping_rad;
	cout << "Do you use gas latern when camping ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      camping_rad = 0.003;      }
	else {      camping_rad = 0;      }
	total_rad += camping_rad;

	// 3 activity ->
	cout << endl;
	double watch_rad;
	cout << "Do you wear a lumious wristwatch (LCD) ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      watch_rad = 0.006;      }
	else {      watch_rad = 0;      }
	total_rad += watch_rad;

	// 4 activity ->
	cout << endl;
	double tv_rad;
	cout << "Do you watch TV ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      tv_rad = 1;      }
	else {      tv_rad = 0;      }
	total_rad += tv_rad;

	// 5 activity ->
	cout << endl;
	double xrays_rad;
	cout << "Do you had diagnosed by x-ray ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      xrays_rad = 40;      }
	else {      xrays_rad = 0;     }
	total_rad += xrays_rad;

	// 6 activity ->
	cout << endl;
	double n_plant_rad;
	cout << "Do you live within 50 miles of a nuclear power plant ( pressuired water reactor ) ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      n_plant_rad = 0.0009;      }
	else {      n_plant_rad = 0;      }
	total_rad += n_plant_rad;

	// 7 activity ->
	cout << endl;
	double c_plant_rad;
	cout << "Do you live within 50 miles of a coal-fired electricity utility plant ? (yes/no) : ";
	cin >> choice;
	if (choice == "yes") {      c_plant_rad = 0.03;      }
	else {      c_plant_rad = 0;      }
	total_rad += c_plant_rad;

	system("cls");

	// life expectancy :
	life_expectancy = 1.2 * total_rad;

	// output :
	cout << endl << endl;
	cout << "\t\t\t\t\t    PERSONAL ANNUAL RADIATION DOSE CALCULATION " << endl;
	cout << "\t\t\t\t\t    ------------------------------------------ " << endl << endl << endl;
	cout << "\t\t\t\t\t    Cosmic radiations                : " << cosmic_rad << " mrem" << endl;
	cout << "\t\t\t\t\t    Elevation from sea level         : " << sea_rad << " mrem" << endl;
	cout << "\t\t\t\t\t    Type of building                 : " << h_material_rad << " mrem" << endl;
	cout << "\t\t\t\t\t    Food and water                   : " << foodandwater_rad << " mrem" << endl;
	cout << "\t\t\t\t\t    Radon in the air                 : " << radon_rad << " mrem" << endl;
	if (teeth_rad != 0) {
		cout << "\t\t\t\t\t    False teeth                      : " << teeth_rad << " mrem" << endl;
	}
	if (camping_rad != 0) {
		cout << "\t\t\t\t\t    Gas lantern mantles when camping : " << camping_rad << " mrem" << endl;
	}
	if (watch_rad != 0) {
		cout << "\t\t\t\t\t    Luminious wristwatch (LCD)       : " << watch_rad << " mrem" << endl;
	}
	if (tv_rad != 0) {
		cout << "\t\t\t\t\t    Television viewing               : " << tv_rad << " mrem" << endl;
	}
	if (xrays_rad != 0) {
		cout << "\t\t\t\t\t    Diagnostic x-rays                : " << xrays_rad << " mrem" << endl;
	}
	if (n_plant_rad != 0) {
		cout << "\t\t\t\t\t    Nearby nuclear plant             : " << n_plant_rad << " mrem" << endl;
	}
	if (c_plant_rad != 0) {
		cout << "\t\t\t\t\t    Nearby coal plant                : " << c_plant_rad << " mrem" << endl;
	}
	cout << endl << endl;

	cout << "\t\t\t\t\t    Your Total Dose : " << total_rad << " mrem" << endl;
	cout << "\t\t\t\t\t    Reduction in Life Expectancy : " << life_expectancy << " minutes";

	return 0;
}