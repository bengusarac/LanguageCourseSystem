#include <iostream>
#include <string>
#include <vector>

using namespace std;


class I_Course {

public:

	virtual void Instructor(int a) = 0;
	virtual void Lecture(string x, char ch, int b) = 0;
	virtual void lecture() = 0;
};

class Person {

private:
	string name_surname;
	string id;
	string phone_number;

	string e_mail;
	string password;

	string mail;
	string password2;


public:
	void set_name_surname(string name) {
		name_surname = name;
	}
	string get_name_surname(void) {
		return name_surname;
	}
	void set_phone_number(string phone_num) {
		phone_number = phone_num;
	}
	string get_phone_number(void) {
		return phone_number;
	}

	void set_id(string id_1) {
		id = id_1;
	}
	string get_id(void) {
		return id;
	}
	void set_e_mail(string mail) {
		e_mail = mail;
	}
	string get_e_mail(void) {
		return e_mail;
	}
	void set_password(string password1) {
		password = password1;
	}
	string get_password(void) {
		return password;
	}



	void set_mail(string mail1) {
		mail = mail1;
	}
	string get_mail(void) {
		return mail;
	}
	void set_password2(string p) {
		password2 = p;
	}
	string get_password2(void) {
		return password2;
	}

public:

	void registerPrint() {

		cout << "Your information:  " << endl;
		cout << get_name_surname() << endl;
		cout << get_id() << endl;

		cout << get_phone_number() << endl;

		cout << get_e_mail() << endl;
	}


	bool operator==(const Person& obj) {


		return(obj.mail == e_mail && obj.password2 == password);
	}

};


class instructor {

public:
	string instructorn[4] = { "Jonas Gerber","Alex Rodriguez","Olivia Baker","Alexandre Martin" };

};

class Schedule {

public:
	vector<string>day_online = { "Saturday","Wednesday","Wednesday","Tuesday" };
	vector<string>day_facetoface = { "Friday","Sunday","Monday","Friday" };


	vector<int>starthour_online = { 19,18,18,17 };
	vector<int>starthour_facetoface = { 17,12,16,14 };


	vector<int>finishHour_online = { 22,21,21,20 };
	vector<int>finishHour_facetoface = { 20,15,19,17 };

};


vector<string> courseList;

class Course : virtual public I_Course {

public:

	instructor instructorname;
	Schedule program;



	void  Instructor(int a) override {

		cout << endl << "Your instructor name : " << instructorname.instructorn[a];


	}

	void Lecture(string x, char ch, int b) override {

		if (ch == 'o') {
			cout << "Day: " << program.day_online.at(b) << endl << "Start: " << program.starthour_online.at(b) << ":00" << endl << "Finish: " << program.finishHour_online.at(b) << ":00";
			string result = "Course: " + x + "  Day: " + program.day_online.at(b) + "  Start: " + to_string(program.starthour_online.at(b)) + ":00" + "  Finish: " + to_string(program.finishHour_online.at(b)) + ":00";
			courseList.push_back(result);
		}
		if (ch == 'f') {
			cout << "Day: " << program.day_facetoface.at(b) << endl << "Start: " << program.starthour_facetoface.at(b) << ":00" << endl << "Finish: " << program.finishHour_facetoface.at(b) << ":00";
			string result = "Course: " + x + "  Day: " + program.day_facetoface.at(b) + "  Start: " + to_string(program.starthour_facetoface.at(b)) + ":00" + "  Finish: " + to_string(program.finishHour_facetoface.at(b)) + ":00";
			courseList.push_back(result);
		}

	}



};

class German :public Course {

public:

	int type;
	string day;

	void lecture() override {

		do {

			cout << "Options for you :" << endl;
			cout << "1-Online\n2-Face to face \n";
			cout << "Your option (1/2): ";
			cin >> type;

			if (type == 1) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("German", 'o', 0);
				break;
			}
			else if (type == 2) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("German", 'f', 0);
				break;

			}
			else {
				cout << endl << "Please choose 1/2..." << endl << endl;
			}

		} while (type != 1 || type != 2);


	}


	virtual void Instructor(int a) override {

		Course::Instructor(a);
	}

};

class Spanish :public Course {

public:

	int type;
	string day;

	void lecture() override {

		do {

			cout << "Options for you :" << endl;
			cout << "1-Online\n2-Face to face \n";
			cout << "Your option (1/2): ";
			cin >> type;

			if (type == 1) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("Spanish", 'o', 1);
				break;

			}
			else if (type == 2) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("Spanish", 'f', 1);
				break;

			}

			else {
				cout << endl << "Please choose 1/2..." << endl << endl;
			}


		} while (type != 1 || type != 2);

	}

	virtual void Instructor(int a) override {

		Course::Instructor(a);
	}

};


class English :public Course {

public:

	int type;
	string day;

	void lecture() override {

		do {

			cout << "Options for you :" << endl;
			cout << "1-Online\n2-Face to face \n";
			cout << "Your option (1/2): ";
			cin >> type;

			if (type == 1) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("English", 'o', 2);
				break;

			}
			else if (type == 2) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("English", 'f', 2);
				break;

			}

			else {
				cout << endl << "Please choose 1/2..." << endl << endl;
			}


		} while (type != 1 || type != 2);
	}

	virtual void Instructor(int a) override {

		Course::Instructor(a);
	}

};


class French :public Course {

public:

	int type;
	string day;

	void lecture() override {

		do {

			cout << "Options for you :" << endl;
			cout << "1-Online\n2-Face to face \n";
			cout << "Your option (1/2): ";
			cin >> type;

			if (type == 1) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("French", 'o', 3);
				break;

			}
			else if (type == 2) {

				cout << endl << "Your course schedule: " << endl << endl;
				Course::Lecture("French", 'f', 3);
				break;

			}

			else {
				cout << endl << "Please choose 1/2..." << endl << endl;
			}


		} while (type != 1 || type != 2);

	}

	virtual void Instructor(int a) override {

		Course::Instructor(a);
	}

};



int main(void) {

	Person student, temp;

	string name_surname, mail, id, password, m, p;
	string phone_num;
	int selectnum;


	cout << "**********Welcome to Language Course**********" << endl << endl;
	cout << "First Register Language Course:" << endl;

	cout << "Enter your name and surname: ";
	getline(cin, name_surname);
	student.set_name_surname(name_surname);


	do {

		try {

			cout << "Enter your id: ";
			cin >> id;
			student.set_id(id);

			if (id.size() != 11) {

				throw 0;
			}
		}
		catch (int x) {

			cout << endl << "Your id is wrong" << endl;

		}

	} while (id.size() != 11);



	do {

		try {

			cout << "Enter your phone number:";
			cin >> phone_num;
			student.set_phone_number(phone_num);
			cin.ignore();

			if (phone_num.size() != 11) {

				throw 0;
			}
		}
		catch (int x) {

			cout << endl << "Your phone number is wrong" << endl;

		}

	} while (phone_num.size() != 11);


	cout << "Enter your e-mail: ";
	getline(cin, mail);
	student.set_e_mail(mail);


	cout << "Enter password: ";
	getline(cin, password);
	student.set_password(password);

	cout << endl << "Your informations completed successfully!" << endl << endl;
	student.registerPrint();


	do {
		cout << "\nPlease login the system " << endl;
		cout << "Email: ";
		getline(cin, m);
		temp.set_mail(m);


		cout << "Password: ";
		getline(cin, p);
		temp.set_password2(p);

		if (student == temp) {

			cout << endl << "Successfully logged into the system" << endl;
			break;
		}

		else {

			cout << "Try again" << endl;
		}



	} while (1);


	bool isContinue = true;
	do {


		cout << endl << "*************Course Menu***************" << endl;
		cout << "1-German\n2-Spanish\n3-English\n4-French\n5-Exit" << endl;
		cout << endl << "Choose your language(1/2/3/4/5): ";
		cin >> selectnum;
		cout << endl;




		if (selectnum == 1) {

			Course* g1 = new German;


			g1->lecture();
			g1->Instructor(0);

			cout << endl;

			delete g1;


		}

		else if (selectnum == 2) {

			Course* s1 = new Spanish;

			s1->lecture();
			s1->Instructor(1);

			cout << endl;

			delete s1;

		}

		else if (selectnum == 3) {

			Course* e1 = new English;

			e1->lecture();
			e1->Instructor(2);

			cout << endl;

			delete e1;
		}

		else if (selectnum == 4) {

			Course* f1 = new French;

			f1->lecture();
			f1->Instructor(3);

			cout << endl;

			delete f1;

		}
		else if (selectnum == 5) {

			cout << "Your schedule : " << endl;

			for (string i : courseList)

				cout << i << " " << endl;

			isContinue = false;
		}

	} while (isContinue);






	return 0;
}


