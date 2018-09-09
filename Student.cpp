//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                  Student.cpp                                 //
//                                                                              //
//  Purpose    : Include all of the non-template methods & functions that       //
//               support the Student Class --> Including the test code.         //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

# include "Student.hpp"

# pragma region STUDENT_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //===========
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    Student                                   //
//                                                                              //
//  Purpose : Constructors for Class Student. Set Name to NewName and No to     //
//           NewNo and Gender to NewGender. Default NewName = blank.            //
//           Default NewNo = 0. Default Sex = FEMALE = false.                   //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Student::Student(char NewName[], long NewNo, bool NewGender)
{
# ifdef STUDENT_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (STUDENT_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Student (NewName[], NewNo, NewGender)");
# endif // STUDENT_DIAGNOSTIC_LEVEL --------------------------------------------------

	strcpy_s(Name, NewName);
	No = NewNo;
	Gender = NewGender;
}

Student::Student(long NewNo, char NewName[], bool NewGender)
{
# ifdef STUDENT_DIAGNOSTIC_LEVEL //-------------------------------
	if (STUDENT_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Student (NewNo, NewName[], NewGender)");
# endif // STUDENT_DIAGNOSTIC_LEVEL ------------------------------

	strcpy_s(Name, NewName);
	No = NewNo;
	Gender = NewGender;
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    ~Student                                  //
//                                                                              //
//  Purpose : Do all that is necessary to destroy an object. In this class we   //
//            are only going to insert a diagnostic display to verify the the   //
//            destructor is firing properly.                                     //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Student::~Student(void)
{
# ifdef STUDENT_DIAGNOSTIC_LEVEL //--------------------------------------
	if (STUDENT_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Destructor ~Student(void)");
# endif // STUDENT_DIAGNOSTIC_LEVEL -------------------------------------

}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_2___Display //==========================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Method Display                               //
//                                                                              //
//  Purpose : If there is a message, display it --> Return.                     //
//           Then display each of the private data members, one to a line. The  //
//           output should look like:                                           //
//                                                                              //
//           Optional Message .................                                 //
//           Name ...:  Tom Hicks                                               //
//           No .....:  1207                                                    //
//           Gender .:  Male                                                    //
//             ---- Skip a line ----    .                                       // 
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
void Student::Display(char Message[])

{
	if (strlen(Message) > 0)
		puts(Message);
	printf("Name ...:  %-s\n", Name);
	printf("No .....:  %ld\n", No);
	if (Gender == FEMALE)
		puts("Gender .:  Female\n\n");
	else
		puts("Gender .:  Male \n\n");
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_3___Set//================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Set                                      //
//                                                                              //
//  Purpose : Assign the following:                                             //
//                                                                              //
//           Name = NewName                                                     //
//           No = NewNo                                                         //
//           Gender = NewGender                                                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Student::Set(char NewName[], long int NewNo, bool NewGender)
{
	strcpy_s(Name, NewName);
	No = NewNo;
	Gender = NewGender;
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_4___Get//===============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Get                                      //
//                                                                              //
//  Purpose : Set is an interactive function in which we will allow the user    //
//            enter data from keyboard.                                         //
//            The prompt for the First Data Member will be:                     //
//	                                                                            //
//                  Enter Name [Hit Return/Enter To Exit]:                      //
//	                                                                            //
//	          This provides the user with an opportunity to exit the function   //
//            without entering all of the data members; after all, they may     //
//            have entered this function by mistake.                            //
//                                                                              //
//            This function will explicitly returns INVALID if user chooses to  //
//            opt out by hitting the return key; otherwise return VALID after   //
//            the user has entered all of the data members. Your processing     //
//            must be exactly as shown below:                                   //
//	                                                                            //
//           Enter Name [Hit Return/Enter To Exit]: Jane Doe                    //  
//           Enter No . . . . . . . . . . . . . . : 1234                        //
//           Enter Gender [M/F] . . . . . . . . . : F                           //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Student::Get(void)
{
	char
		Temp[200],
		GenderChar;

	flush_stream(stdin);
	printf("\nEnter Name [Hit Return To Exit].: ");
	gets_s(Temp);
	if (strlen(Temp) == 0)
		return (INVALID);
	strncpy_s(Name, Temp, 19);
	Name[19] = 0;
	flush_stream(stdin);
	printf("\nEnter No .......................: ");
	scanf("%d", &No);

	flush_stream(stdin);
	printf("\nEnter Sex [M/F] ................: ");
	scanf("%c", &GenderChar);
	if (GenderChar == 'M')
		Gender = MALE;
	else
		Gender = FEMALE;
	flush_stream(stdin);
	return (VALID);
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_5___Display50//==========================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Display50                                    //
//                                                                              //
//  Purpose : This is nothing more than a diagnostic display utility that will  //
//            display the most important 50 characters of the class. We will    //
//            develop several such utilities. Selecting the items to display    //
//            will often be tough in a class with 100 data members, but it is   //
//            quite easy for this class. This function uses puts & printf.      //
//                                                                              //
//            There will be no line feed. The format is to be  [32 char for     //
//            Name,  2 blanks, 8 char for No, 2 blanks,  and the specified      //
//            Gender {i.e. Male or Female}.                                     //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Jane Doe                          12345678  Female                 //
//                                                                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Student::Display50(void)
{
	if (Gender == FEMALE)
		printf("%-32s  %8ld  Female", Name, No);
	else
		printf("%-32s  %8ld  Male  ", Name, No);
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_6___cout//===============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                  << Overload                                 //
//                                                                              //
//  Purpose : This is nothing more than a diagnostic display utility that will  //
//            display the most important 50 characters of the class. We will    //
//            develop several such utilities. Selecting the items to display    //
//            will often be tough in a class with 100 data members, but it is   //
//            quite easy for this class. This function uses puts & printf.      //
//                                                                              //
//            There will be no line feed. The format is to be  [32 char for     //
//            Name,  2 blanks, 8 char for No, 2 blanks,  and the specified      //
//            Gender {i.e. Male or Female}.                                     //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Jane Doe                          12345678  Female                 //
//                                                                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
ostream & operator << (ostream & OutputStream, Student S)
{
	char
		TempName[50];

	strncpy_s(TempName, S.Name, 31);
	TempName[31] = 0;

	flush_stream(stdout);
	OutputStream << setw(32) << left << TempName;
	OutputStream << "  " << setw(8) << S.No << " ";
	if (S.Gender == FEMALE)
		OutputStream << "Female ";
	else
		OutputStream << "Male   ";
	return (OutputStream);
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_7___Key//================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Key                                      //
//                                                                              //
//  Purpose : Explicitly Return a long integer that represents this student.    //
//            In some classes it will be difficult to determine which long      //
//            integer best represents the object; in this class we have but     //
//            one. Explicitly return the No.                                    //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
long  Student::Key(void)
{
	return (No);
}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_8___Char_String_Overloads //=============
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                        char operator Overloads                               //
//                                                                              //
//  Purpose : Overload the operators in such a way that the Name becomes the    //
//            primary character key for the Student Class.                      //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Student objects.                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Student::operator > (const char Key[])
{
	if (strcmp(Name, Key) > 0)
		return (true);
	else
		return (false);
}

bool Student::operator < (const char Key[])
{
	if (strcmp(Name, Key) < 0)
		return (true);
	else
		return (false);
}

bool Student::operator <= (const char Key[])
{
	if (strcmp(Name, Key) <= 0)
		return (true);
	else
		return (false);
}

bool Student::operator >= (const char Key[])
{
	if (strcmp(Name, Key) >= 0)
		return (true);
	else
		return (false);
}

bool Student::operator != (const char Key[])
{
	if (strcmp(Name, Key) != 0)
		return (true);
	else
		return (false);
}

bool Student::operator == (const char Key[])
{
	if (strcmp(Name, Key) == 0)
		return (true);
	else
		return (false);
}

void Student::operator = (const char Key[])
{
	strcpy_s(Name, Key);
}

# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_9___Long_Integer_Overloads //===========
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                              long Overloads                                  //
//                                                                              //
//  Purpose : Overload the operators in such a way that the No becomes the      //
//            primary long integer key for the Student Class.                   //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Student objects.                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Student::operator == (const long Key)
{
	if (No == Key)
		return (true);
	else
		return (false);
}

bool Student::operator > (const long Key)
{
	if (No > Key)
		return (true);
	else
		return (false);
}

bool Student::operator >= (const long Key)
{
	if (No >= Key)
		return (true);
	else
		return (false);
}

bool Student::operator < (const long Key)
{
	if (No < Key)
		return (true);
	else
		return (false);
}

bool Student::operator <= (const long Key)
{
	if (No <= Key)
		return (true);
	else
		return (false);
}

bool Student::operator != (const long Key)
{
	if (No != Key)
		return (true);
	else
		return (false);
}

void Student::operator = (const long Key)
{
	No = Key;
}

# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_10___Student_Overloads //================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                            Student Object Overloads                          //
//                                                                              //
//  Purpose : Overload the operators in such a way that the Name becomes the    //
//            primary key when comparing two objects of Student type.           //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Student objects.                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Student::operator == (const Student & S)
{
	if (strcmp(Name, S.Name) == 0)
		return (true);
	else
		return (false);
}

bool Student::operator > (const Student & S)
{
	if (strcmp(Name, S.Name) > 0)
		return (true);
	else
		return (false);
}

bool Student::operator >= (const Student & S)
{
	if (strcmp(Name, S.Name) >= 0)
		return (true);
	else
		return (false);
}

bool Student::operator < (const Student & S)
{
	if (strcmp(Name, S.Name) < 0)
		return (true);
	else
		return (false);
}

bool Student::operator <= (const Student & S)
{
	if (strcmp(Name, S.Name) <= 0)
		return (true);
	else
		return (false);
}


bool Student::operator != (const Student & S)
{
	if (strcmp(Name, S.Name) != 0)
		return (true);
	else
		return (false);
}

void Student::operator = (const Student & S)
{
	strcpy(Name, S.Name);
	No = S.No;
	Gender = S.Gender;
}

# pragma endregion

# ifdef STUDENT_DIAGNOSTIC_LEVEL //--------------------------------------
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                               Function TestStudent                           //
//                                                                              //
//  Purpose : Test each and every method in class Student.                      //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void TestStudent(void)
{
	puts("\n\n");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("************************ Start TestStudent ************************");
	puts("*******************************************************************");
	puts("*******************************************************************");

# pragma region STUDENT_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //============
	if (STUDENT_DIAGNOSTIC_LEVEL <= 1)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========     Testing Constructor & Destructor     ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 1        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student1,
			Student2("Pete", 2222, MALE),
			Student3("Sandra", 3333),
			Student4("Amber"),
			Student5(5555, "Nathan", MALE),
			Student6(6666, "Betty"),
			Student7(7777),
			Class[4];

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_2___Display //============================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 2)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display               ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 2        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student1,
			Student2("Pete", 2222, MALE),
			Student3("Sandra", 3333),
			Student4("Amber"),
			Student5(5555, "Nathan", MALE),
			Student6(6666, "Betty"),
			Student7(7777),
			Class[4];

		Student1.Display("This Is Student1");
		Student2.Display();
		Student3.Display("This Is Student3");
		Student4.Display("This Is Student4");
		Student5.Display("This Is Student5");
		Student6.Display("This Is Student6");
		Student7.Display("This Is Student7");
		for (int ClassNo = 0; ClassNo <= 3; ClassNo++)
			Class[ClassNo].Display();

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_3___Set//================================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 3)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Set                 ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 3        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student1,
			Student2("Pete", 1234, MALE),
			Class[4];

		Student1.Set("Alpha", 111, FEMALE);
		Student1.Display("Student1 Set With Alpha, 111, FEMALE");
		Class[0].Set("Beta", 222);
		Class[0].Display("Class[0] Set With Beta, 222");
		Class[1].Set("Gamma");
		Class[1].Display("Class[1] Set With Gamma");      Student1.Set();
		Student1.Display("Student1");


		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_4___Get//================================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 4)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Get                 ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 4        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student1,
			Class[4];

		if (Student1.Get())
			Student1.Display("\nStudent1:");
		else
			puts("\nYou Chose Not To Enter Data For Student1\n");
		if (Class[3].Get())
			Class[3].Display("\nClass[3]:");
		else
			puts("\nYou Chose Not To Enter Data For Class[3]\n");


		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_5___Set//================================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 5)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display50             ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 5        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student2("Pete", 123456, MALE),
			Student5(5555, "Jane", FEMALE);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		printf("| ");
		Student2.Display50();
		puts(" |");

		puts("------------------------------------------------------");
		printf("| ");
		Student5.Display50();
		puts(" |");
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_6___Cout//================================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 6)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========          Testing << Overload             ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 6        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student2("Pete", 123456, MALE),
			Student5(5555, "Jane", FEMALE);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		cout << "| " << Student2 << " |" << endl;

		puts("------------------------------------------------------");
		cout << "| " << Student5 << " |" << endl;
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_7___Cout//================================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 7)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========               Testing Key                ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 7        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student2("Pete", 123456, MALE),
			Student5(5555, "Jane", FEMALE);

		printf("Student2.Key() = %ld\n", Student2.Key());
		printf("Student5.Key() = %ld\n", Student5.Key());

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_8___Char_String_Overloads //==============
	if (STUDENT_DIAGNOSTIC_LEVEL <= 8)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========   Test Operator Comparison With Strings  ==============");
		puts("===========      STUDENT_DIAGNOSTIC_LEVEL = 8        ==============");
		puts("===================================================================");
		puts("===================================================================\n");

		Student
			Student2("CCC", 3, MALE),
			Student5("Doug", 20, MALE);

		Student5.Display("Info Stored In Student5:");
		if (Student5 == "Doug")
			puts("CORRECT ==> Student.Description == 'Doug'");
		else
			puts("ERROR ==> Student.Description != 'Doug'");

		if (Student5 == " Doug")
			puts("ERROR ==> Student.Description == ' Doug'");
		else
			puts("CORRECT ==> Student.Description != ' Doug'");


		if (Student5 == "Doug ")
			puts("ERROR ==> Student.Description == 'Doug '");
		else
			puts("CORRECT ==> Student.Description != 'Doug '");


		if (Student5 == "   dOuG   ")
			puts("ERROR ==> Student.Description == '   dOuG   '");
		else
			puts("CORRECT ==> Student.Description != '   dOuG   '");

		if (Student5 == "Harry")
			puts("ERROR ==> Student.Description == Harry");
		else
			puts("CORRECT ==> Student.Description != Harry");

		Student2.Display("\nInfo Stored In Student2:");

		if (Student2 == "AAA")                   // Test = Char
			puts("ERROR ==> True ---> CCC = AAA");
		else
			puts("CORRECT ==> False --> CCC = AAA");

		if (Student2 > "AAA")                   // Test > Char
			puts("CORRECT ==> True ---> CCC > AAA");
		else
			puts("ERROR ==>  ==> False --> CCC > AAA");

		if (Student2 >= "AAA")                   // Test >= Char
			puts("CORRECT ==> True ---> CCC >= AAA");
		else
			puts("ERROR ==> False --> CCC >= AAA\n");

		if (Student2 < "AAA")                   // Test < Char
			puts("ERROR ==> True ---> CCC < AAA");
		else
			puts("CORRECT ==> False --> CCC < AAA");

		if (Student2 <= "AAA")                   // Test <= Char
			puts("ERROR ==> True ---> CCC <= AAA\n");
		else
			puts("CORRECT ==> False --> CCC <= AAA");

		if (Student2 != "AAA")                   // Test != Char
			puts("CORRECT ==> True ---> CCC != AAA");
		else
			puts("ERROR ==> False --> CCC != AAA");
		Student2.Display("\nContents of Student2"); // Test = Char
		Student2 = "David";
		Student2.Display("\nNew Contents of Student2");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_9___Long_Integer_Overloads //=============

	if (STUDENT_DIAGNOSTIC_LEVEL <= 9)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("========= Test Operator Comparison With Long Integers  ============");
		puts("=========        STUDENT_DIAGNOSTIC_LEVEL = 9          ============");
		puts("===================================================================");
		puts("===================================================================\n");

		Student
			Student5("CCC", 3, MALE);

		if (Student5 == 5)                   // Test = Integer
			puts("ERROR ==> True ---> 3 == 5");
		else
			puts("CORRECT ==> False --> 3 == 5");

		if (Student5 > 5)                   // Test > Integer
			puts("ERROR ==> True ---> 3 > 5");
		else
			puts("CORRECT ==> False --> 3 > 5");

		if (Student5 >= 5)                   // Test >= Integer
			puts("ERROR ==> True ---> 3 >= 5");
		else
			puts("CORRECT ==> False --> 3 >= 5");

		if (Student5 < 5)                   // Test < Integer
			puts("CORRECT ==> True ---> 3 < 5");
		else
			puts("ERROR ==> False --> 3 < 5");

		if (Student5 <= 5)                   // Test <= Integer
			puts("CORRECT ==> True ---> 3 <= 5");
		else
			puts("ERROR ==> False --> 3 <= 5");

		if (Student5 != 5)                   // Test != Integer
			puts("CORRECT ==> True ---> 3 != 5");
		else
			puts("ERROR ==> False --> 3 != 5");

		Student5.Display("\nContents of Student5"); // Test = Integer
		Student5 = 21;
		Student5.Display("\nNew Contents of Student5");
		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region STUDENT_DIAGNOSTIC_LEVEL_10___Student_Overloads //==================
	if (STUDENT_DIAGNOSTIC_LEVEL <= 10)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("=======     Test Operator Comparison With Students      ============");
		puts("=======          STUDENT_DIAGNOSTIC_LEVEL = 10          ============");
		puts("===================================================================");
		puts("===================================================================\n");
		Student
			Student3("James", 21, MALE),
			Student5("Andrew", 5, MALE);

		if (Student5 == Student3)                 // Test == Student
			puts("ERROR ==> True ---> Andrew = James");
		else
			puts("CORRECT ==> False --> Andrew = James");

		if (Student5 > Student3)                  // Test > Student
			puts("ERROR ==> True ---> Andrew > James");
		else
			puts("CORRECT ==> False --> Andrew > James");

		if (Student5 >= Student3)                  // Test >= Student
			puts("ERROR ==> True ---> Andrew >= James");
		else
			puts("CORRECT ==> False --> Andrew >= James");

		if (Student5 < Student3)                   // Test < Student
			puts("CORRECT ==> True ---> Andrew < James");
		else
			puts("ERROR ==> False --> Andrew < James\n");

		if (Student5 <= Student3)                   // Test < Student
			puts("CORRECT ==> True ---> Andrew <= James");
		else
			puts("ERROR ==> False --> Andrew <= James\n");

		if (Student5 != Student3)                   // Test != Student
			puts("CORRECT ==> True ---> Andrew != James");
		else
			puts("ERROR ==> False --> Andrew != James\n");

		Student5.Display("\nNew Contents of Student5");
		Student3.Display("New Contents of Student3");
		Student5 = Student3;                        // Test = Student
		Student5.Display("New Contents of Student5");
		Student3.Display("New Contents of Student3");
		HitCarriageReturnToContinue();

	}
# pragma endregion


	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("************************  End TestStudent  ************************");
	puts("*******************************************************************");
	puts("*******************************************************************");
}
# endif // STUDENT_DIAGNOSTIC_LEVEL -------------------------------------

