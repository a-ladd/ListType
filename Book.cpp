#include "Book.hpp"

# pragma region BOOK_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //===========
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    Book                                      //
//                                                                              //
//  Purpose: Constructors for Class Book. Set Title to NewTitle and No to       //
//           NewNo, CatalogNo to NewCatalogNo, Quantity to NewQuantity, and     //
//           Cost to NewCost.  Defaults for Character Data Members shall be     //
//           blank. Defaults for Numeric Data Members shall be 0.               //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Book::Book()
{
# ifdef Book_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (Book_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Book ()");
# endif // Book_DIAGNOSTIC_LEVEL --------------------------------------------------

	strcpy_s(Title, "");
	No = 0;
	CatalogNo = 0;
	Cost = 0.0;
	Quantity = 0;
}

Book::Book(char NewTitle[], long NewNo, long NewCatalogNo,
	long NewQuantity, double NewCost)
{
# ifdef Book_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (Book_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor Book (NewTitle[], NewNo, NewCatalogNo, NewQuantity, NewCost)");
# endif // Book_DIAGNOSTIC_LEVEL --------------------------------------------------

	strcpy_s(Title, NewTitle);
	No = NewNo;
	CatalogNo = NewCatalogNo;
	Cost = NewCost;
	Quantity = NewQuantity;
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    ~Book                                     //
//                                                                              //
//  Purpose:  Do all that is necessary to destroy an object. In this class we   //
//            are only going to insert a diagnostic Display to verify the the   //
//            destructor is firing B.oB.rly.                                    //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
Book::~Book(void)
{
# ifdef BOOK_DIAGNOSTIC_LEVEL //---------------------------------------------------
	if (BOOK_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Destructor ~Book (void)");
# endif // BOOK_DIAGNOSTIC_LEVEL --------------------------------------------------

}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_2___Display //==========================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Method Display                               //
//                                                                              //
//  Purpose: If there is a message, Display it --> Return.                      //
//           Then Display each of the private data members, one to a line.      //
//           The output should look like:                                       //
//                                                                              //
//           Optional Message .................                                 //
//              Title...........:  Bible                                        //
//              No .............:  1207                                         //
//              CatalogNo.......:  12                                           //
//              Cost ..........:$  18.99    --> (2 digits )                     //
//              Quantity .......:  164                                          //
//               ---- Skip a line ----    .                                     //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Book::Display(char Message[])
{
	if (strlen(Message) > 0)
		puts(Message);
	printf("Title...........: %s\n", Title);
	printf("No .............: %ld\n", No);
	printf("CatalogNo.......: %ld\n", CatalogNo);
	printf("Cost ..........:$ %.2f\n", Cost);
	printf("Quantity .......: %ld\n\n", Quantity);
}

# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_3___Set//================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Set                                      //
//                                                                              //
//  Purpose: Assign the following: All Character Strings shall default to       //
//                                 blank & all Numerics to 0.                   //
//           Title = NewTitle                                                   //
//           No = NewNo                                                         //
//           CatalogNo = NewCatalogNo                                           //
//           Cost = NewCost                                                     //
//           Quantity = NewQuantity                                             //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Book::Set(char NewTitle[], long NewNo, long NewCatalogNo,
	long NewQuantity, double NewCost)
{
	strcpy_s(Title, NewTitle);
	No = NewNo;
	CatalogNo = NewCatalogNo;
	Cost = NewCost;
	Quantity = NewQuantity;
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_4___Get//===============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Get                                      //
//                                                                              //
//  Purpose:  Set is an interactive function in which we will allow the user    //
//            enter data from keyboard.                                         //
//            The Name for the First Data Member will be:                       //
//	                                                                            //
//                  Enter Title [Hit Return/Enter To Exit]:                     //
//	                                                                            //
//	          This provides the user with an oB.ortunity to exit the function   //
//            without entering all of the data members; after all, they may     //
//            have entered this function by mistake.                            //
//                                                                              //
//            This function will Explicitly returns INVALID if user chooses to  //
//            oB. out by hitting the return key; otherwise return VALID after   //
//            the user has entered all of the data members. Your processing     //
//            must be exactly as shown below:                                   //
//	                                                                            //
//           Enter Book Title [Hit Return/Enter To Exit]..: Bible               //
//           Enter Book No ..-............................: 1207                //
//           Enter Catalog No ............................: 12                  //
//           Enter Cost .................................:$ 18.99               //
//           Enter Quantity ..............................: 164                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Book::Get(void)
{
	char
		Temp[200];

	flush_stream(stdin);
	printf("\nEnter Book Title [Hit Return/Enter To Exit]..: ");
	gets_s(Temp);
	if (strlen(Temp) == 0)
		return (INVALID);
	strncpy_s(Title, Temp, 25);
	Title[25] = 0;

	flush_stream(stdin);
	printf("\nEnter Book No ..-............................: ");
	scanf("%ld", &No);

	flush_stream(stdin);
	printf("\nEnter Catalog No ............................: ");
	scanf("%ld", &CatalogNo);

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

# pragma region BOOK_DIAGNOSTIC_LEVEL_5___Display50//==========================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Display50                                    //
//                                                                              //
//  Purpose:  This is nothing more than a diagnostic Display utility that will  //
//            Display the most important 50 characters of the class. We will    //
//            develop several such utilities. Selecting the items to Display    //
//            will often be tough in a class with 100 data members, but it is   //
//            quite easy for this class. This function uses puts & printf.      //
//                                                                              //
//            There will be no line feed. The format is to be  [20 char for     //
//            Title,  1 blank, 6 char for No, 1 blank,  6 char for CatalogNo,   //
//            1 blank, 6 char for Quantity, 1 blank,  8 char for Cost (2 to     //
//            right of decimal point).                                          //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Dying: A Memoir      123456     22   1000   123.55                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void Book::Display50(void)
{
	printf("%-20s %6ld %6ld %6ld %8.2f", Title, No, CatalogNo, Quantity, Cost);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_6___cout//===============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                  << Overload                                 //
//                                                                              //
//  Purpose:  This is nothing more than a diagnostic Display utility that will  //
//            Display the most important 50 characters of the class. We will    //
//            develop several such utilities. Selecting the items to Display    //
//            will often be tough in a class with 100 data members, but it is   //
//            quite easy for this class. This function uses puts & printf.      //
//                                                                              //
//            There will be no line feed. The format is to be  [22 char for     //
//            Title,  1 blank, 6 char for No, 1 blank,  6 char for CatalogNo,   //
//            1 blank, 6 char for Quantity, 1 blank,  6 char for Cost (2 to     //
//            right of decimal point).                                          //
//                                                                              //
//           12345678901234567890123456789012345678901234567890                 //
//           --------------------------------------------------                 //
//           Dying: A Memoir      123456     22   1000   123.55                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
ostream & operator << (ostream & OutputStream, Book B)
{
	char
		TempName[50];

	strncpy_s(TempName, B.Title, 19);
	TempName[19] = 0;

	OutputStream << setw(20) << left << TempName;
	//-- You Do
	OutputStream << " " << right << setw(6) << B.No;
	OutputStream << " " << setw(6) << B.CatalogNo;
	OutputStream << " " << setw(6) << B.Quantity;
	OutputStream.setf(ios::fixed);
	OutputStream.precision(2);
	OutputStream << " " << setw(8) << B.Cost;
	return (OutputStream);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_7___Key//================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Key                                      //
//                                                                              //
//  Purpose:  Explicitly Return a long that represents this Book.               //
//            In some classes it will be difficult to determine which long      //
//            integer best represents the object; in this class we have only    //
//            a few choices. Explicitly return the No.                          //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
long  Book::Key(void)
{
	return (No);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_8___Char_String_Overloads //=============
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                        char operator Overloads                               //
//                                                                              //
//  Purpose: Overload the operators in such a way that the Title becomes the    //
//            primary character key for the Book Class.                         //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   //
//            decisions involving Book objects.                                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Book::operator == (const char Key[])
{
	if (strcmp(Title, Key) == 0)
		return (true);
	else
		return (false);
}

bool Book::operator > (const char Key[])
{
	if (strcmp(Title, Key) > 0)
		return (true);
	else
		return (false);
}

bool Book::operator >= (const char Key[])
{
	if (strcmp(Title, Key) >= 0)
		return (true);
	else
		return (false);
}

bool Book::operator < (const char Key[])
{
	if (strcmp(Title, Key) < 0)
		return (true);
	else
		return (false);
}

bool Book::operator <= (const char Key[])
{
	if (strcmp(Title, Key) <= 0)
		return (true);
	else
		return (false);
}

bool Book::operator != (const char Key[])
{
	if (strcmp(Title, Key) != 0)
		return (true);
	else
		return (false);
}

void Book::operator = (const char Key[])
{
	strcpy_s(Title, Key);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_9___Long_Integer_Overloads //===========
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                              long Overloads                                  //
//                                                                              //
//  Purpose:  Overload the operators in such a way that the No becomes the      //
//            primary long key for the Book Class.                              //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   //
//            decisions involving Book objects.                                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Book::operator == (const long Key)
{
	if (No == Key)
		return (true);
	else
		return (false);
}

bool Book::operator > (const long Key)
{
	if (No > Key)
		return (true);
	else
		return (false);
}

bool Book::operator >= (const long Key)
{
	if (No >= Key)
		return (true);
	else
		return (false);
}

bool Book::operator < (const long Key)
{
	if (No < Key)
		return (true);
	else
		return (false);
}

bool Book::operator <= (const long Key)
{
	if (No <= Key)
		return (true);
	else
		return (false);
}

bool Book::operator != (const long Key)
{
	if (No != Key)
		return (true);
	else
		return (false);
}

void Book::operator = (const long Key)
{
	No = Key;
}

# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_10___Book_Overloads //================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                            Book Object Overloads                             //
//                                                                              //
//  Purpose:  Overload the operators in such a way that the Title becomes the   //
//            primary key when comparing two objects of Book type.              //
//                                                                              //
//            These overloads will better enable us to search, sort, and make   //
//            decisions involving Book objects.                                 //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
bool Book::operator == (const Book & B)
{
	if (strcmp(Title, B.Title) == 0)
		return (true);
	else
		return (false);
}

bool Book::operator > (const Book & B)
{
	if (strcmp(Title, B.Title) > 0)
		return (true);
	else
		return (false);
}

bool Book::operator >= (const Book & B)
{
	if (strcmp(Title, B.Title) >= 0)
		return (true);
	else
		return (false);
}

bool Book::operator < (const Book & B)
{
	if (strcmp(Title, B.Title) < 0)
		return (true);
	else
		return (false);
}

bool Book::operator <= (const Book & B)
{
	if (strcmp(Title, B.Title) <= 0)
		return (true);
	else
		return (false);
}


bool Book::operator != (const Book & B)
{
	if (strcmp(Title, B.Title) != 0)
		return (true);
	else
		return (false);
}

void Book::operator = (const Book & B)
{
	strcpy_s(Title, B.Title);
	No = B.No;
	Cost = B.Cost;
	Quantity = B.Quantity;
	CatalogNo = B.CatalogNo;
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_11___Cost//==============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Cost_                                    //
//                                                                              //
//  Purpose:  Explicitly Return the Cost that represents this Book.             //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
double  Book::Cost_(void)
{
	return (Cost);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_12___Quantity//==========================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                  Quantity_                                   //
//                                                                              //
//  Purpose:  Explicitly Return the Quantity that represents this Book.         //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
long  Book::Quantity_(void)
{
	return (Quantity);
}
# pragma endregion

# pragma region BOOK_DIAGNOSTIC_LEVEL_13___CatalogNo//============================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                   CatalogNo_                                 //
//                                                                              //
//  Purpose:  Explicitly Return the CatalogNo that represents this Book.        //
//                                                                              //
//            Since the data members are generally private, it is not at all    //
//            to have several accessor methods                                  //
//                                                                              //
//  Written By : ?????????????           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
long  Book::CatalogNo_(void)
{
	return (CatalogNo);
}
# pragma endregion
