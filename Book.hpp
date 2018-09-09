#pragma once
//----------------------------------  Includes -----------------------------------
# include "Athlete.hpp"
# include "Auto.hpp"
# include "Client.hpp"
# include "Utilities.hpp"
#include <string.h>

// ---------------------------------- Defines ------------------------------------
# define BOOK_DIAGNOSTIC_LEVEL 2

//-----------------------------  Classes & Structs //-----------------------------
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Class Book                               //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
class Book
{
public:
	Book::Book(void);
	Book(char NewTitle[], long NewNo = 0, long NewCatalogNo = 0,
		long NewQuantity = 0, double NewCost = 0.0);
	~Book(void);
	void Set(char NewTitle[] = "", long NewNo = 0, long NewCatalogNo = 0,
		long NewQuantity = 0, double NewCost = 0.0);
	bool Get(void);
	long CatalogNo_();
	double Cost_(void);
	long Quantity_(void);
	long Key();
	void Display(char Message[] = "");
	void Display50(void);

	friend ostream & operator << (ostream & OutputStream, Book B);

	// I have decided that Title is to be the primary Character Key for this record type
	bool operator == (const char Key[]);
	bool operator >  (const char Key[]);
	bool operator >= (const char Key[]);
	bool operator <  (const char Key[]);
	bool operator <= (const char Key[]);
	bool operator != (const char Key[]);
	void operator =  (const char Key[]);

	// I have decided that No is to be the primary Integer Key for this record type
	bool operator == (const long Key);
	bool operator >  (const long Key);
	bool operator >= (const long Key);
	bool operator <  (const long Key);
	bool operator <= (const long Key);
	bool operator != (const long Key);
	void operator =  (const long Key);

	// I have decided that Title is to be the primary Key for this record type
	bool operator == (const Book & B);
	bool operator >  (const Book & B);
	bool operator >= (const Book & B);
	bool operator <  (const Book & B);
	bool operator <= (const Book & B);
	bool operator != (const Book & B);
	void operator =  (const Book & B);

private:
	char
		Title[26];
	long
		No,
		Quantity,
		CatalogNo;
	double
		Cost;
};

void TestBook();

