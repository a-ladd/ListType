//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                  Part.cpp                                    //
//                                                                              //
//  Purpose    : Include all of the non-template methods & functions that       //
//               support the Part Class --> Including the test code.            //
//                                                                              //
//  Written By : ???????????????         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
# include "Part.hpp"

# pragma region PART_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //=========================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    Part                                      //
//                                                                              //
//  Purpose : Constructors for Class Part. Set Name to NewName and No to        //
//           NewNo, DeptNo to NewDeptNo, Quantity to NewQuantity, and Cost to   //
//           NewCost.  Defaults for Character Data Members shall be blank.      //
//           Defaults for Numeric Data Members shall be 0.                      //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Part::Part(char NewName[] , long NewNo, long NewDeptNo,
	long NewQuantity, double NewCost)
{
# ifdef PART_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (PART_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Part (NewName[], NewNo, NewDeptNo, NewQuantity, NewCost)");
# endif // PART_DIAGNOSTIC_LEVEL --------------------------------------------------


}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    ~Part                                     //
//                                                                              //
//  Purpose : Do all that is necessary to destroy an object. In this class we   //
//            are only going to insert a diagnostic display to verify the the   //
//            destructor is firing properly.                                    //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Part::~Part(void)
{
# ifdef PART_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (PART_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Destructor ~Part (void)");
# endif // PART_DIAGNOSTIC_LEVEL --------------------------------------------------

}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_2___Display //========================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Method Display                               //
//                                                                              //
//  Purpose : If there is a message, display it --> Return.                     //
//           Then display each of the private data members, one to a line. The  //
//           output should look like:                                           //
//                                                                              //
//           Optional Message .................                                 //
//              Name...........: Mac                                            //
//              No ............: 1207                                           //
//              DeptNo.........: 12                                             //
//              Cost .........:$ 2199.99    --> (2 digits)                      //
//              Quantity ......: 16                                             //
//               ---- Skip a line ----    .                                     // 
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Part::Display(char Message[])
{
	if (strlen(Message) > 0)
		puts(Message);
	printf("Name...........: %s\n", Name);
	printf("No .............: %ld\n", No);
	printf("DeptNo.......: %ld\n", DeptNo);
	printf("Cost ..........:$ %.2f\n", Cost);
	printf("Quantity .......: %ld\n\n", Quantity);
}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_3___Set//=============================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Set                                      //
//                                                                              //
//  Purpose : Assign the following: All Character Strings shall default to      //
//                                  blank & all Numerics to 0.                  //
//           Name = NewName                                                     //
//           No = NewNo                                                         //
//           DeptNo = NewDeptNo                                                 //
//           Cost = NewCost                                                     //
//           Quantity = NewQuantity                                             //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

void Part::Set(char NewName[], long NewNo, long NewDeptNo,
	long NewQuantity, double NewCost)
{
	strcpy_s(Name, NewName);
	No = NewNo;
	DeptNo = NewDeptNo;
	Cost = NewCost;
	Quantity = NewQuantity;
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_4___Get//=============================================================================================
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
//           Enter Part Name [Hit Return/Enter To Exit]..: Tennis Balls         //  
//           Enter Part No ..............................: 123412               //
//           Enter Dept No ..............................: 12                   //
//           Enter Cost ................................:$ 7.95                 //
//           Enter Quantity .............................: 200                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Part::Get(void)
{
	char
		Temp[200];

	flush_stream(stdin);
	printf("\nEnter Part Name [Hit Return/Enter To Exit]..: ");
	gets_s(Temp);
	if (strlen(Temp) == 0)
		return (INVALID);
	strncpy_s(Name, Temp, 25);
	Name[25] = 0;

	flush_stream(stdin);
	printf("\nEnter Part No ..-............................: ");
	scanf("%ld", &No);

	flush_stream(stdin);
	printf("\nEnter Department No ............................: ");
	scanf("%ld", &DeptNo);

	flush_stream(stdin);
	printf("\nEnter Cost .................................:$ ");
	scanf("%lf", &Cost);

	flush_stream(stdin);
	printf("\nEnter Quantity ..............................: ");
	scanf("%ld", &Quantity);
	flush_stream(stdin);

	flush_stream(stdin);
	return (VALID);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_5___Display50//=======================================================================================
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
//            There will be no line feed. The format is to be  [20 char for     //
//            Name,  1 blank, 6 char for No, 1 blank,  6 char for DeptNo,       //
//            1 blank, 6 char for Quantity, 1 blank,  8 char for Cost (2 to     //
//            right of decimal point).                                          //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Basketball           123456     22   1000   123.55                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Part::Display50(void)
{
	printf("%-20s %6ld %6ld %6ld %8.2f", Name, No, DeptNo, Quantity, Cost);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_6___cout//============================================================================================
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
//            There will be no line feed. The format is to be  [20 char for     //
//            Name,  1 blank, 6 char for No, 1 blank,  6 char for DeptNo,       //
//            1 blank, 6 char for Quantity, 1 blank,  6 char for Cost (2 to     //
//            right of decimal point).                                          //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Basketball           123456     22   1000   123.55                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
ostream & operator << (ostream & OutputStream, Part P)
{
	char
		TempName[50];

	strncpy_s(TempName, P.Name, 19);
	TempName[19] = 0;

	OutputStream << setw(20) << left << TempName;
	//-- You Do
	OutputStream << " " << right << setw(6) << P.No;
	OutputStream << " " << setw(6) << P.DeptNo;
	OutputStream << " " << setw(6) << P.Quantity;
	OutputStream.setf(ios::fixed);
	OutputStream.precision(2);
	OutputStream << " " << setw(8) << P.Cost;
	return (OutputStream);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_7___Key//=============================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Key                                      //
//                                                                              //
//  Purpose:  Explicitly Return a long that represents this Part.               //
//            In some classes it will be difficult to determine which long      //
//            integer best represents the object; in this class we have only    //
//            a few choices. Explicitly return the No.                          //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              ComB.ler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
long  Part::Key(void)
{
	return (No);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_8___Char_String_Overloads //==========================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                        char operator Overloads                               //
//                                                                              //
//  Purpose : Overload the operators in such a way that the Name becomes the    //
//            primary character key for the Part Class.                         //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Part objects.                                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Part::operator == (const char Key[])
{
	if (strcmp(Name, Key) == 0)
		return (true);
	else
		return (false);
}

bool Part::operator > (const char Key[])
{
	if (strcmp(Name, Key) > 0)
		return (true);
	else
		return (false);
}

bool Part::operator >= (const char Key[])
{
	if (strcmp(Name, Key) >= 0)
		return (true);
	else
		return (false);
}

bool Part::operator < (const char Key[])
{
	if (strcmp(Name, Key) < 0)
		return (true);
	else
		return (false);
}

bool Part::operator <= (const char Key[])
{
	if (strcmp(Name, Key) <= 0)
		return (true);
	else
		return (false);
}

bool Part::operator != (const char Key[])
{
	if (strcmp(Name, Key) != 0)
		return (true);
	else
		return (false);
}

void Part::operator = (const char Key[])
{
	strcpy_s(Name, Key);
}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_9___Long_Integer_Overloads //=========================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                              long Overloads                                  //
//                                                                              //
//  Purpose : Overload the operators in such a way that the No becomes the      //
//            primary longeger key for the Part Class.                          //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Part objects.                                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Part::operator == (const long Key)
{
	if (No == Key)
		return (true);
	else
		return (false);
}

bool Part::operator > (const long Key)
{
	if (No > Key)
		return (true);
	else
		return (false);
}

bool Part::operator >= (const long Key)
{
	if (No >= Key)
		return (true);
	else
		return (false);
}

bool Part::operator < (const long Key)
{
	if (No < Key)
		return (true);
	else
		return (false);
}

bool Part::operator <= (const long Key)
{
	if (No <= Key)
		return (true);
	else
		return (false);
}

bool Part::operator != (const long Key)
{
	if (No != Key)
		return (true);
	else
		return (false);
}

void Part::operator = (const long Key)
{
	No = Key;
}


# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_10___Part_Overloads //================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                            Part Object Overloads                             //
//                                                                              //
//  Purpose : Overload the operators in such a way that the Name becomes the    //
//            primary key when comparing two objects of Part type.              //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Part objects.                                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
bool Part::operator == (const Part & B)
{
	if (strcmp(Name, B.Name) == 0)
		return (true);
	else
		return (false);
}

bool Part::operator > (const Part & B)
{
	if (strcmp(Name, B.Name) > 0)
		return (true);
	else
		return (false);
}

bool Part::operator >= (const Part & B)
{
	if (strcmp(Name, B.Name) >= 0)
		return (true);
	else
		return (false);
}

bool Part::operator < (const Part & B)
{
	if (strcmp(Name, B.Name) < 0)
		return (true);
	else
		return (false);
}

bool Part::operator <= (const Part & B)
{
	if (strcmp(Name, B.Name) <= 0)
		return (true);
	else
		return (false);
}


bool Part::operator != (const Part & B)
{
	if (strcmp(Name, B.Name) != 0)
		return (true);
	else
		return (false);
}

void Part::operator = (const Part & B)
{
	strcpy_s(Name, B.Name);
	No = B.No;
	Cost = B.Cost;
	Quantity = B.Quantity;
	DeptNo = B.DeptNo;
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_11___Cost//===========================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Cost_                                    //
//                                                                              //
//  Purpose : Explicitly Return the Cost that represents this part.             //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
double  Part::Cost_(void)
{
	return (Cost);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_12___Quantity//=======================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                  Quantity_                                   //
//                                                                              //
//  Purpose : Explicitly Return the Quantity that represents this part.         //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
long  Part::Quantity_(void)
{
	return (Quantity);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_13___DeptNo//=========================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    DeptNo_                                   //
//                                                                              //
//  Purpose : Explicitly Return the DeptNo that represents this part.           //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
long  Part::DeptNo_(void)
{
	return (DeptNo);
}
# pragma endregion

# ifdef PART_DIAGNOSTIC_LEVEL //---------------------------------------------------

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Function TestPart                            //
//                                                                              //
//  Purpose : Test each and every method in class Part.                         //
//                                                                              //
//  Written By : ???????????????         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void TestPart(void)
{
	puts("\n\n*******************************************************************");
	puts("*******************************************************************");
	puts("************************* Start TestPart **************************");
	puts("*******************************************************************");
	puts("*******************************************************************");

# pragma region PART_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //=========================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 1)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========     Testing Constructor & Destructor     ==============");
		puts("===========         PART_DIAGNOSTIC_LEVEL = 1        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football"),
			Part3("Basketball", 111),
			Part4("Tennis", 222, 10),
			Part5("Skeet", 333, 10, 25),
			Part6("Golf", 444, 10, 5, 99.25),
			Inventory[4];
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_2___Display //========================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 2)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display               ==============");
		puts("===========       PART_DIAGNOSTIC_LEVEL = 2          ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football"),
			Part3("Basketball", 111),
			Part4("Tennis", 222, 10),
			Part5("Skeet", 333, 10, 25),
			Part6("Golf", 444, 10, 5, 99.25),
			Inventory[4];

		Part1.Display("\nContents Of Part1");
		Part2.Display("\nContents Of Part2");
		Part3.Display("\nContents Of Part3");
		Part4.Display("\nContents Of Part4");
		Part5.Display("\nContents Of Part5");
		Part6.Display("\nContents Of Part6");
		Inventory[0].Display();
		Inventory[1].Display();
		Inventory[2].Display();
		Inventory[3].Display();
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_3___Set//=============================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 3)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Set                 ==============");
		puts("===========       PART_DIAGNOSTIC_LEVEL = 3          ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1;

		Part1.Set("Football");
		Part1.Display("Football");
		Part1.Set("Basketball", 111);
		Part1.Display("Basketball - 111");
		Part1.Set("Tennis", 222, 10);
		Part1.Display("Tennis - 222 - 10");
		Part1.Set("Skeet", 333, 10, 25);
		Part1.Display("Skeet - 333 - 10 - 25");
		Part1.Set("Golf", 444, 10, 5, 99.25);
		Part1.Display("Golf - 444 - 10 - 5 - 99.25");

		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_4___Get//=============================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 4)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Get                 ==============");
		puts("===========       PART_DIAGNOSTIC_LEVEL = 4          ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Class[4];

		if (Part1.Get())
			Part1.Display("\nPart1:");
		else
			puts("\nYou Chose Not To Enter Data For Part1\n");
		if (Class[3].Get())
			Class[3].Display("\nClass[3]:");
		else
			puts("\nYou Chose Not To Enter Data For Class[3]\n");


		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_5___Set//=============================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 5)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display50             ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 5         ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part2("Golf", 444, 10, 5, 99.25),
			Part5("Tennis", 1234, 12, 1, 123.5);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		printf("| ");
		Part2.Display50();
		puts(" |");

		puts("------------------------------------------------------");
		printf("| ");
		Part5.Display50();
		puts(" |");
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_6___Cout//============================================================================================
	  
	if (PART_DIAGNOSTIC_LEVEL <= 6)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========          Testing << Overload             ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 6         ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part2("Golf", 444, 10, 5, 99.25),
			Part5("Tennis", 1234, 12, 1, 123.5);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		cout << "| " << Part2 << " |" << endl;

		puts("------------------------------------------------------");
		cout << "| " << Part5 << " |" << endl;
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_7___Key//================================v============================================================
	if (PART_DIAGNOSTIC_LEVEL <= 7)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========                Testing Key               ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 7         ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football", 22, 1, 4, 22.50),
			Part3("Softball", 33, 1, 6, 10.10),
			Part5("GolfBall", 44, 1, 5, 7.70),
			Part4("SoccerBall", 11, 1, 10, 15.15),
			Inventory[4];

		printf("Part1.Key() = %ld\n", Part1.Key());
		printf("Part2.Key() = %ld\n", Part2.Key());
		printf("Part3.Key() = %ld\n", Part3.Key());
		printf("Part4.Key() = %ld\n", Part4.Key());
		printf("Part5.Key() = %ld\n", Part5.Key());
		printf("Inventory[1].Key() = %ld\n\n\n", Inventory[1].Key());
		HitCarriageReturnToContinue();

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_8___Char_String_Overloads //==========================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 8)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========   Test Operator Comparison With Strings  ==============");
		puts("===========      PART_DIAGNOSTIC_LEVEL = 8           ==============");
		puts("===================================================================");
		puts("===================================================================\n");

		Part
			Part3("FootBall", 44),
			Part5("CCC", 3);

		Part3.Display("\nInfo Stored In Part3:");
		if (Part3 == "FootBall")
			puts("CORRECT ==> Part.Name == 'FootBall'");
		else
			puts("ERROR ==> Part.Name != 'FootBall'");
		if (Part3 == "FootBall ")
			puts("ERROR ==> Part.Name == 'FootBall '");
		else
			puts("CORRECT ==> Part.Name != 'FootBall '");
		if (Part3 == " FootBall")
			puts("ERROR ==> Part.Name == ' FootBall'");
		else
			puts("CORRECT ==> Part.Name != ' FootBall'");


		if (Part3 == "   FooTBAll   ")
			puts("ERROR ==> Part.Name == ' FooTBAll '");
		else
			puts("CORRECT ==> Part.Name != '   FooTBAll   '");

		if (Part3 == "TennisBall")
			puts("ERROR ==> Part.Name == TennisBall");
		else
			puts("CORRECT ==> Part.Name != TennisBall");

		if (Part5 == "AAA")                   // Test = Char
			puts("ERROR ==> True ---> CCC = AAA");
		else
			puts("CORRECT ==> False --> CCC = AAA");
		if (Part5 > "AAA")                   // Test > Char
			puts("CORRECT ==> True ---> CCC > AAA");
		else
			puts("ERROR ==> False --> CCC > AAA");
		if (Part5 >= "AAA")                   // Test >= Char
			puts("CORRECT ==> True ---> CCC >= AAA");
		else
			puts("CORRECT ==> False --> CCC >= AAA");
		if (Part5 < "AAA")                   // Test < Char
			puts("ERROR ==> True ---> CCC < AAA");
		else
			puts("CORRECT ==> False --> CCC < AAA");
		if (Part5 <= "AAA")                   // Test <= Char
			puts("ERROR ==> True ---> CCC <= AAA");
		else
			puts("CORRECT ==> False --> CCC <= AAA");
		if (Part5 != "AAA")                   // Test != Char
			puts("CORRECT ==> True ---> CCC != AAA");
		else
			puts("ERROR ==> False --> CCC != AAA");

		Part5.Display("\n\nContents of Part5"); // Test = Char
		Part5 = "GolfBall";
		Part5.Display("New Contents of Part5");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_9___Long_Integer_Overloads //=========================================================================

	if (PART_DIAGNOSTIC_LEVEL <= 9)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("========= Test Operator Comparison With Long Integers  ============");
		puts("=========        PART_DIAGNOSTIC_LEVEL = 9             ============");
		puts("===================================================================");
		puts("===================================================================\n");

		Part
			Part3("SoccerBall", 44),
			Part5("FootBall", 55);

		Part5.Set("CCC", 3);
		if (Part5 == 5)                   // Test = Integer
			puts("ERROR ==> True ---> 3 == 5");
		else
			puts("CORRECT ==> False --> 3 == 5");
		if (Part5 > 5)                   // Test > Integer
			puts("ERROR ==> True ---> 3 > 5");
		else
			puts("CORRECT ==> False --> 3 > 5");
		if (Part5 >= 5)                   // Test >= Integer
			puts("ERROR ==> True ---> 3 >= 5");
		else
			puts("CORRECT ==> False --> 3 >= 5");
		if (Part5 < 5)                   // Test < Integer
			puts("CORRECT ==> True ---> 3 < 5");
		else
			puts("ERROR ==> False --> 3 < 5");
		if (Part5 <= 5)                   // Test <= Integer
			puts("CORRECT ==> True ---> 3 <= 5");
		else
			puts("ERROR ==> False --> 3 <= 5");
		if (Part5 != 5)                   // Test != Integer
			puts("CORRECT ==> True ---> 3 != 5");
		else
			puts("ERROR ==> False --> 3 != 5");
		Part5.Display("\n\nContents of Part5"); // Test = Integer
		Part5 = 21;
		Part5.Display("New Contents of Part5");
		HitCarriageReturnToContinue();

	}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_10___Part_Overloads //================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 10)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("=======       Test Operator Comparison With Parts      ============");
		puts("=======            PART_DIAGNOSTIC_LEVEL = 10          ============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part3("SoccerBall", 44),
			Part5("FootBall", 55);

		Part5.Set("BaseBall", 5);
		Part3.Set("TennisBall", 21);

		if (Part5 == Part3)                 // Test == Part
			puts("ERROR ==> True ---> BaseBall = TennisBall");
		else
			puts("CORRECT ==> False --> BaseBall = TennisBall");

		if (Part5 > Part3)                  // Test > Part
			puts("ERROR ==> True ---> BaseBall > TennisBall");
		else
			puts("CORRECT ==> False --> BaseBall > TennisBall");

		if (Part5 >= Part3)                  // Test >= Part
			puts("ERROR ==> True ---> BaseBall >= TennisBall");
		else
			puts("CORRECT ==> False --> BaseBall >= TennisBall");

		if (Part5 < Part3)                   // Test < Part
			puts("CORRECT ==> True ---> BaseBall < TennisBall");
		else
			puts("ERROR ==> False --> BaseBall < TennisBall");

		if (Part5 <= Part3)                   // Test < Part
			puts("CORRECT ==> True ---> BaseBall <= TennisBall");
		else
			puts("ERROR ==> False --> BaseBall <= TennisBall");

		if (Part5 != Part3)                   // Test != Part
			puts("CORRECT ==> True ---> BaseBall != TennisBall");
		else
			puts("ERROR ==> False --> BaseBall != TennisBall");

		Part5.Display("\nNew Contents of Part5");
		Part3.Display("\nNew Contents of Part3");
		Part5 = Part3;                        // Test = Part
		Part5.Display("\nNew Contents of Part5");
		Part3.Display("\nNew Contents of Part3");
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_11___Cost//===========================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 11)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========                Testing Cost_             ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 11        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football", 22, 1, 4, 22.50),
			Part3("Softball", 33, 1, 6, 10.10),
			Part5("GolfBall", 44, 1, 5, 7.70),
			Part4("SoccerBall", 11, 1, 10, 15.15),
			Inventory[4];

		printf("Part1.Cost_() = %lf\n", Part1.Cost_());
		printf("Part2.Cost_() = %lf\n", Part2.Cost_());
		printf("Part3.Cost_() = %lf\n", Part3.Cost_());
		printf("Part4.Cost_() = %lf\n", Part4.Cost_());
		printf("Part5.Cost_() = %lf\n", Part5.Cost_());
		printf("Inventory[1].Cost_() = %lf\n\n\n", Inventory[1].Cost_());
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_12___Quantity//=======================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 12)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========             Testing Quantity_            ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 12        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football", 22, 1, 4, 22.50),
			Part3("Softball", 33, 1, 6, 10.10),
			Part5("GolfBall", 44, 1, 5, 7.70),
			Part4("SoccerBall", 11, 1, 10, 15.15),
			Inventory[4];

		printf("Part1.Quantity_() = %ld\n", Part1.Quantity_());
		printf("Part2.Quantity_() = %ld\n", Part2.Quantity_());
		printf("Part3.Quantity_() = %ld\n", Part3.Quantity_());
		printf("Part4.Quantity_() = %ld\n", Part4.Quantity_());
		printf("Part5.Quantity_() = %ld\n", Part5.Quantity_());
		printf("Inventory[1].Quantity_() = %ld\n\n\n", Inventory[1].Quantity_());
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_13___DeptNo//=========================================================================================
	if (PART_DIAGNOSTIC_LEVEL <= 13)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing DeptNo_             ==============");
		puts("===========        PART_DIAGNOSTIC_LEVEL = 13        ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Part
			Part1,
			Part2("Football", 22, 1, 4, 22.50),
			Part3("Softball", 33, 2, 6, 10.10),
			Part5("GolfBall", 44, 3, 5, 7.70),
			Part4("SoccerBall", 11, 4, 10, 15.15),
			Inventory[4];

		printf("Part1.DeptNo_() = %ld\n", Part1.DeptNo_());
		printf("Part2.DeptNo_() = %ld\n", Part2.DeptNo_());
		printf("Part3.DeptNo_() = %ld\n", Part3.DeptNo_());
		printf("Part4.DeptNo_() = %ld\n", Part4.DeptNo_());
		printf("Part5.DeptNo_() = %ld\n", Part5.DeptNo_());
		printf("Inventory[1].DeptNo_() = %ld\n\n\n", Inventory[1].DeptNo_());
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_14___Part_Arrays //===================================================================================

	if (PART_DIAGNOSTIC_LEVEL <= 14)
	{
	puts("\n\n===================================================================");
	puts("===================================================================");
	puts("=================     Final Testing Of Array     ==================");
	puts("==================  PART_DIAGNOSTIC_LEVEL = 14   ==================");
	puts("===================================================================");
	puts("===================================================================\n");
	long
		Counter;
	Part
		Inventory[30];

		Inventory[0].Set("SoftBall",      100, 1,  10,    5.50);
		Inventory[1].Set("FootBall",      101, 1, 100,   33.30);
		Inventory[2].Set("IBM",           102, 2,   1,  800.00);
		Inventory[3].Set("Oven",          103, 3,   1,  200.00);
		Inventory[4].Set("Microwave",     104, 3,  10,   75.50);
		Inventory[5].Set("Macintosh",     105, 2,   1, 2000.00);
		Inventory[6].Set("Dell",          106, 2,  500,1000.00);
		Inventory[7].Set("BasketBall",    107, 1,  10,   25.50);
		Inventory[8].Set("BaseBall",      108, 1,  10,    6.50);
		Inventory[9].Set("TennisBall",    109, 1,  10,    3.50);

		Inventory[10].Set("VolleyBall",   119, 1,  10,   25.50);
		Inventory[11].Set("Gateway",      118, 2,  10,  800.00);
		Inventory[12].Set("Micron",       117, 2,   1, 2500.00);
		Inventory[13].Set("HP",           116, 2,  10,  700.00);
		Inventory[14].Set("Mixer",        115, 3,  10,   25.50);
		Inventory[15].Set("NoBrand",      114, 2, 100,  350.00);
		Inventory[16].Set("HandBall",     113, 1,  10,    7.50);
		Inventory[17].Set("PingPongBall", 112, 1,  10,    2.50);
		Inventory[18].Set("TeatherBall",  111, 1,  10,   65.00);
		Inventory[19].Set("RoundBall",    110, 1,  10,    5.00);

		puts("      ------------------------------------------------------");
		puts("      | 12345678901234567890123456789012345678901234567890 |");
		puts("      ------------------------------------------------------");
		for (Counter = 0; Counter <= 19; Counter ++)
		{
			printf("%5ld | ", Counter);
			flush_stream(stdout);
			cout << Inventory[Counter];
			puts(" |");
		}
		puts("      ------------------------------------------------------");
		HitCarriageReturnToContinue();
	}
# pragma endregion

	puts("\n\n*******************************************************************");
	puts("*******************************************************************");
	puts("*************************** End TestPart **************************");
	puts("*******************************************************************");
	puts("*******************************************************************\n\n");
}

# endif // PART_DIAGNOSTIC_LEVEL --------------------------------------------------
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                