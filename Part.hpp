//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                   Part.hpp                                   //
//                                                                              //
//  Purpose    : Part Interface. The interface shall include the includes,      //
//               defines, class definition and prototypes that the compiler     //
//               needs in order to compile and execute Part objects.            //
//                                                                              //
//               Since this class is not a template class, there are no         //
//               template functions.                                            //
//                                                                              //
//  Written By : ???????????????         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

# ifndef PART_CLASS //============================================================

// -------------------------- Includes ----------------------------------- 
# include "Utilities.hpp"

// -------------------------- Defines ------------------------------------ 
# define PART_DIAGNOSTIC_LEVEL 2
# define PART_CLASS

// ---------------------- Classes & Structs ------------------------------

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Class Part                               //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
class Part
{
public:
	Part (char NewName[] = "", long NewNo = 0, long NewDeptNo = 0, 
		  long NewQuantity = 0, double NewCost = 0.0);
	~Part (void);
	void Set(char NewName[] = "", long NewNo = 0, long NewDeptNo = 0,
		long NewQuantity = 0, double NewCost = 0.0);
	bool Get(void);
	long DeptNo_();
	double Cost_(void);
	long Quantity_(void);
	long Key();
	void Display(char Message[] = "");
	void Display50(void);

	friend ostream & operator << (ostream & OutputStream, Part P);

// I have decided that Name is to be the Primary Character Key for this record type.   
	bool operator == (const char Key[]);
	bool operator >  (const char Key[]);
	bool operator >= (const char Key[]);
	bool operator <  (const char Key[]);
	bool operator <= (const char Key[]);
	bool operator != (const char Key[]);
	void operator =  (const char Key[]);

// I have decided that No is to be the Primary Integer Key for this record type.   
	bool operator == (const long Key);
	bool operator >  (const long Key);
	bool operator >= (const long Key);
	bool operator <  (const long Key);
	bool operator <= (const long Key);
	bool operator != (const long Key);
	void operator =  (const long Key);

// I have decided that Name is to be the Primary Key for this record type.   
	bool operator == (const Part & P);
	bool operator >  (const Part & P);
	bool operator >= (const Part & P);
	bool operator <  (const Part & P);
	bool operator <= (const Part & P);
	bool operator != (const Part & P);
	void operator =  (const Part & P);

private:
	char 
		Name [26];
	long
		No, 
		Quantity,
		DeptNo;
	double
		Cost;
	};

// ------------------------- Non-Class Functions Prototypes-----------------------

# ifdef PART_DIAGNOSTIC_LEVEL //---------------------------------------------------
	void TestPart(void);
# endif // PART_DIAGNOSTIC_LEVEL --------------------------------------------------


# endif // PART_CLASS ============================================================