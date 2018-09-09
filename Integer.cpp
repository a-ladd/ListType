//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                Integer.cpp                                   //
//                                                                              //
//  Purpose    : Include all of the non-template methods & functions that       //
//               support the Integer Class --> Including the test code.         //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

//------------------------------- Includes --------------------------------------

# include "Integer.hpp"

# pragma region INTEGER_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //===========

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    Integer                                   //
//                                                                              //
//  Purpose : Constructors for Class Integer. Set Name to NewName and No to     //
//           NewNo. Defaults for Numeric Data Members shall be 0.               //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Integer::Integer ( long int NewNo)
{
# ifdef INTEGER_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (INTEGER_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Integer (NewNo)");
# endif // INTEGER_DIAGNOSTIC_LEVEL --------------------------------------------------

	No = NewNo;
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     ~Integer                                 //
//                                                                              //
//  Purpose : Do all that is necessary to destroy an object. In this class we   //
//            are only going to insert a diagnostic display to verify the the   //
//            destructor is firing properly.                                    //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
Integer::~Integer (void)
{
# ifdef INTEGER_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (INTEGER_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Destructor Integer (NewNo)");
# endif // INTEGER_DIAGNOSTIC_LEVEL --------------------------------------------------

}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_2___Display //==========================

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Display                                  //
//                                                                              //
//  Purpose : If there is a message, display it --> Return.                     //
//           Then display each of the private data members, one to a line. The  //
//           output should look like:                                           //
//                                                                              //
//           Optional Message .................                                 //
//               No .............: 111                                          // 
//               ---- Skip a line ----    .                                     // 
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
void Integer::Display(char Message[])

{
	if (strlen(Message) > 0)
		puts(Message);
	printf("No .............: %ld\n\n", No);
}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_3___Set//================================

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Set                                      //
//                                                                              //
//  Purpose : Assign the following: All Numerics shall default to 0.            //
//           No = NewNo                                                         //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Integer::Set(long int NewNo)
{
   No = NewNo;
}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_4___Get//=================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Get                                      //
//                                                                              //
//  Purpose : Set is an interactive function in which we will allow the user    //
//            enter data from keyboard.                                         //
//            The prompt for the First Data Member will be:                     //
//	                                                                            //
//                  Enter No [-9999 To Exit]....:                               //
//	                                                                            //
//	          This provides the user with an opportunity to exit the function   //
//            without entering all of the data members; after all, they may     //
//            have entered this function by mistake.                            //
//                                                                              //
//            This function will explicitly returns INVALID if user chooses to  //
//            opt out by entering -9999; otherwise return VALID after           //
//            the user has entered all of the data members. Your processing     //
//            must be exactly as shown below:                                   //
//	                                                                            //
//               Enter No [-9999 To Exit]....: 123                              // 
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Integer::Get(void)
{
	flush_stream(stdin);
	printf ("\nEnter No [-9999 To Exit]....: ");
	scanf ("%ld", &No);
	if (No == -9999)
		return (INVALID);
	else
		return (VALID);
}

# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_5___Display50//==========================
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
//            There will be no line feed. The format is to be  [50 char for     //
//            No.]                                                              //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//                                                          123                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

void Integer::Display50(void)
{
	printf("%50d", No);
}

# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_6___cout//===============================
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
//            There will be no line feed. The format is to be  [50 char for     //
//            No.]                                                              //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//                                                          123                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
ostream & operator << (ostream & OutputStream, Integer P)
{
	OutputStream << setw(50) << right << P.No;
	return (OutputStream);
}

# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_7___Key//================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Key                                      //
//                                                                              //
//  Purpose : Explicitly Return a longeger that represents this Integer.        //
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

long int  Integer::Key(void)
{
	return (No);
}

# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_8___Long_Integer_Overloads //===========
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                              long Overloads                                  //
//                                                                              //
//  Purpose : Overload the operators in such a way that the No becomes the      //
//            primary longeger key for the Integer Class.                       //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Integer objects.                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Integer::operator == (const long int Key)
{
   if (No == Key) 
      return (true);
   else 
      return (false);
}

bool Integer::operator > (const long int Key)
{
   if (No > Key) 
      return (true);
   else 
      return (false);
}

bool Integer::operator >= (const long int Key) 
{
   if (No >= Key) 
      return (true);
   else 
      return (false);
}

bool Integer::operator < (const long int Key)
{
   if (No < Key) 
      return (true);
   else 
      return (false);
}

bool Integer::operator <= (const long int Key) 
{
   if (No <= Key) 
      return (true);
   else 
      return (false);
}

bool Integer::operator != (const long int Key) 
{
   if (No != Key) 
      return (true);
   else 
      return (false);
}

void Integer::operator = (const long int Key) 
{
   No = Key;
}


# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_9___Integer_Overloads //=================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                            Integer Object Overloads                          //
//                                                                              //
//  Purpose : Overload the operators in such a way that the No becomes the      //
//            primary key when comparing two objects of Integer type.           //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   // 
//            decisions involving Integer objects.                              //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Integer::operator == (const Integer Key)
{
	if (No == Key.No)
		return (true);
	else
		return (false);
}

bool Integer::operator > (const Integer Key)
{
	if (No > Key.No)
		return (true);
	else
		return (false);
}

bool Integer::operator >= (const Integer Key)
{
	if (No >= Key.No)
		return (true);
	else
		return (false);
}

bool Integer::operator < (const Integer Key)
{
	if (No < Key.No)
		return (true);
	else
		return (false);
}

bool Integer::operator <= (const Integer Key)
{
	if (No <= Key.No)
		return (true);
	else
		return (false);
}

bool Integer::operator != (const Integer Key)
{
	if (No != Key.No)
		return (true);
	else
		return (false);
}

void Integer::operator = (const Integer Key)
{
	No = Key.No;
}


# pragma endregion

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Function TestInteger                         //
//                                                                              //
//  Purpose : Test each and every method in class Integer.                      //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void TestInteger(void)
{
	puts("\n\n");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("************************ Start TestInteger ************************");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("*******************************************************************");

# pragma region INTEGER_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //============
	if (INTEGER_DIAGNOSTIC_LEVEL <= 1)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========     Testing Constructor & Destructor     ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 1       ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1,
			Integer2(2222),
			Integer3(3333);

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_2___Display //===========================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 2)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display               ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 2       ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1,
			Integer2(2222),
			Integer3(3333);

		Integer1.Display("This Is Integer1");
		Integer2.Display("This Is Integer2");
		Integer3.Display();

		HitCarriageReturnToContinue();
	}
# pragma endregion	

# pragma region INTEGER_DIAGNOSTIC_LEVEL_3___Set//================================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 3)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Set                 ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 3       ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1;

		Integer1.Set(111);
		Integer1.Display();
		Integer1.Set();
		Integer1.Display();

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_4___Get//================================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 4)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========              Testing Get                 ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 4       ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1;

		Integer1.Display("Blank Integer1");

		while (Integer1.Get())
		{
			Integer1.Display("\n\nNewly Filled Integer1");
			puts("\n");
		}
		puts("Integer1 Fill Was Aborted By Entering A Blank Description");
		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_5___Display50//===========================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 5)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========            Testing Display50             ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 5       ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1(2222),
			Integer2(12);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		printf("| ");
		Integer1.Display50();
		puts(" |");

		puts("------------------------------------------------------");
		printf("| ");
		Integer2.Display50();
		puts(" |");
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_6___Cout//===============================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 6)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========          Testing << Overload             ==============");
		puts("===========        INTEGER_DIAGNOSTIC_LEVEL = 6      ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1(2222),
			Integer2(12);

		puts("------------------------------------------------------");
		puts("| 12345678901234567890123456789012345678901234567890 |");
		puts("------------------------------------------------------");
		cout << "| " << Integer1 << " |" << endl;

		puts("------------------------------------------------------");
		cout << "| " << Integer2 << " |" << endl;
		puts("------------------------------------------------------");

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_7___Key//================================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 7)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========                Testing Key               ==============");
		puts("===========        INTEGER_DIAGNOSTIC_LEVEL = 7      ==============");
		puts("===================================================================");
		puts("===================================================================\n");
		Integer
			Integer1(2222),
			Integer2(12);

		printf("Integer1.Key() = %ld\n", Integer1.Key());
		printf("Integer2.Key() = %ld\n", Integer2.Key());

		HitCarriageReturnToContinue();
	}
# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_8___Long_Overloads //====================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 8)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========   Test Operator Comparison With Longs    ==============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 8       ==============");
		puts("===================================================================");
		puts("===================================================================\n");

		Integer
			Integer5(3),
			Integer2(12);

		if (Integer5 == 5)                   // Test == Integer
			puts("ERROR --> True ---> 3 == 5");
		else
			puts("CORRECT --> False --> 3 == 5");
		if (Integer5 == 3)                   // Test == Integer
			puts("CORRECT --> True ---> 3 == 3\n");
		else
			puts("ERROR --> False --> 3 == 3\n");


		if (Integer5 > 5)                   // Test > Integer
			puts("ERROR --> True ---> 3 > 5");
		else
			puts("CORRECT --> False --> 3 > 5");
		if (Integer5 > 1)                   // Test > Integer
			puts("CORRECT --> True ---> 3 > 1\n");
		else
			puts("ERROR --> False --> 3 > 1\n");


		if (Integer5 >= 5)                   // Test >= Integer
			puts("ERROR --> True ---> 3 >= 5");
		else
			puts("CORRECT --> False --> 3 >= 5");
		if (Integer5 >= 1)                   // Test >= Integer
			puts("CORRECT --> True ---> 3 >= 1");
		else
			puts("ERROR --> False --> 3 >= 1");
		if (Integer5 >= 3)                   // Test >= Integer
			puts("CORRECT --> True ---> 3 >= 3\n");
		else
			puts("ERROR --> False --> 3 >= 3\n");


		if (Integer5 < 5)                   // Test < Integer
			puts("CORRECT --> True ---> 3 < 5");
		else
			puts("ERROR --> False --> 3 < 5");
		if (Integer5 < 1)                   // Test < Integer
			puts("ERROR --> True ---> 3 < 1\n");
		else
			puts("CORRECT --> False --> 3 < 1\n");


		if (Integer5 <= 5)                   // Test <= Integer
			puts("CORRECT --> True ---> 3 <= 5");
		else
			puts("ERROR --> False --> 3 <= 5");
		if (Integer5 <= 1)                   // Test <= Integer
			puts("ERROR --> True ---> 3 <= 1");
		else
			puts("CORRECT --> False --> 3 <= 1");
		if (Integer5 <= 3)                   // Test <= Integer
			puts("CORRECT --> True ---> 3 <= 3\n");
		else
			puts("ERROR --> False --> 3 <= 3\n");


		if (Integer5 != 5)                   // Test != Integer
			puts("CORRECT --> True ---> 3 != 5");
		else
			puts("ERROR --> False --> 3 != 5");
		if (Integer5 != 3)                   // Test != Integer
			puts("ERROR --> True ---> 3 != 3\n");
		else
			puts("CORRECT --> False --> 3 != 3\n");

		Integer5.Display("\n\nContents of Integer5"); // Test = Integer
		Integer5 = 21;
		Integer5.Display("\nNew Contents of Integer5");
		HitCarriageReturnToContinue();
	}

# pragma endregion

# pragma region INTEGER_DIAGNOSTIC_LEVEL_9___Integer_Overloads //=================
	if (INTEGER_DIAGNOSTIC_LEVEL <= 9)
	{
		puts("\n\n");
		puts("===================================================================");
		puts("===================================================================");
		puts("===========   Test Operator Comparison With Integers   ============");
		puts("===========       INTEGER_DIAGNOSTIC_LEVEL = 9         ============");
		puts("===================================================================");
		puts("===================================================================\n");

		Integer
			Integer5(3),
			Integer2(12);

		if (Integer5 == Integer2)                   // Test == Integer
			puts("ERROR ----> True ---> Integer5 == Integer2");
		else
			puts("CORRECT --> False --> Integer5 == Integer2");

		if (Integer5 == Integer5)                   // Test == Integer
			puts("CORRECT --> True ---> Integer5 == Integer5");
		else
			puts("ERROR ----> False --> Integer5 == Integer5");

		if (Integer5 != Integer5)                   // Test != Integer
			puts("ERROR ----> True ---> Integer5 != Integer5");
		else
			puts("CORRECT --> False --> Integer5 != Integer2");

		if (Integer5 != Integer2)                   // Test != Integer
			puts("CORRECT --> True ---> Integer5 != Integer5\n");
		else
			puts("ERROR ----> False --> Integer5 != Integer2\n");


		if (Integer5 > Integer2)                   // Test > Integer
			puts("ERROR ----> True ---> Integer5 > Integer2");
		else
			puts("CORRECT --> False --> Integer5 > Integer2");

		if (Integer2 > Integer5)                   // Test > Integer
			puts("CORRECT --> True ---> Integer2 > Integer5");
		else
			puts("ERROR ----> False --> Integer2 > Integer5");

		if (Integer5 >= Integer2)                   // Test >= Integer
			puts("ERROR ----> True ---> Integer5 >= Integer2");
		else
			puts("CORRECT --> False --> Integer5 >= Integer2");

		if (Integer2 >= Integer5)                   // Test >= Integer
			puts("CORRECT --> True ---> Integer2 >= Integer5");
		else
			puts("ERROR ----> False --> Integer2 >= Integer5");

		if (Integer2 >= Integer2)                   // Test >= Integer
			puts("CORRECT --> True ---> Integer2 >= Integer2\n");
		else
			puts("ERROR ----> False --> Integer2 >= Integer2\n");

		if (Integer5 < Integer2)                   // Test < Integer
			puts("CORRECT --> False --> Integer5 < Integer2");
		else
			puts("ERROR ----> True ---> Integer5 < Integer2");

		if (Integer2 < Integer5)                   // Test < Integer
			puts("ERROR ----> False --> Integer2 < Integer5");
		else
			puts("CORRECT --> True ---> Integer2 < Integer5");

		if (Integer5 <= Integer2)                   // Test <= Integer
			puts("CORRECT --> False --> Integer5 <= Integer2");
		else
			puts("ERROR ----> True ---< Integer5 <= Integer2");

		if (Integer2 <= Integer5)                   // Test <= Integer
			puts("ERROR ----> False --> Integer2 <= Integer5");
		else
			puts("CORRECT --> True ---> Integer2 <= Integer5");

		if (Integer2 <= Integer2)                   // Test <>= Integer
			puts("CORRECT --> True ---> Integer2 <= Integer2");
		else
			puts("ERROR ----> False --> Integer2 <= Integer2");

		Integer5.Display("\n\nContents of Integer5"); // Test = Integer
		Integer5 = 21;
		Integer5.Display("\nNew Contents of Integer5");
		Integer5 = Integer2;
		Integer5.Display("\nNew Contents of Integer5");
		HitCarriageReturnToContinue();
	}
# pragma endregion

}