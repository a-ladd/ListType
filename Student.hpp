//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                  Student.hpp                                 //
//                                                                              //
//  Purpose    : Student Interface. The interface shall include the includes,   //
//               defines, class definition and prototypes that the compiler     //
//               needs in order to compile and execute Student objects.         //
//                                                                              //
//               Since this class is not a template class, there are no         //
//               template functions.                                            //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

# ifndef STUDENT_CLASS //============================================================

// -------------------------- Includes ----------------------------------- 
# include "Utilities.hpp"

// -------------------------- Defines ------------------------------------ 
# define MALE false
# define FEMALE true
# define STUDENT_CLASS
# define STUDENT_DIAGNOSTIC_LEVEL 7

// ---------------------- Classes & Structs ------------------------------
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Class Student                            //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
class Student
{
public:

	Student::Student(char NewName[] = "", long int NewNo = 0, bool NewGender = MALE);
	Student::Student(long NewNo, char NewName[] = "", bool NewGender = MALE);
	~Student(void);
	void Display(char Message[] = "");
	void Set(char NewName[] = "", long int NewNo = 0, bool NewGender = MALE);
	bool Get(void);
	void Display50(void);
	long  Key(void);

	friend ostream & operator << (ostream & OutputStream, Student S);

	// I have decided that Name is to be the Primary Character Key for this record type.   
	bool operator == (const char Key[]);
	bool operator >  (const char Key[]);
	bool operator >= (const char Key[]);
	bool operator <  (const char Key[]);
	bool operator <= (const char Key[]);
	bool operator != (const char Key[]);
	void operator =  (const char Key[]);

	// I have decided that No is to be the Primary Long Integer Key for this record type.   
	bool operator >  (const long Key);
	bool operator >= (const long Key);
	bool operator <  (const long Key);
	bool operator <= (const long Key);
	bool operator != (const long Key);
	bool operator == (const long Key);
	void operator =  (const long Key);

	// I have decided that Name is to be the Primary Key for this record type.   
	bool operator == (const Student & S);
	bool operator >  (const Student & S);
	bool operator >= (const Student & S);
	bool operator <  (const Student & S);
	bool operator <= (const Student & S);
	bool operator != (const Student & S);
	void operator =  (const Student & S);

private:
	char
		Name[20];	// Set To Be Empty String   
	long
		No;		    // Set To Be 0   
	bool
		Gender;     // Set To MALE
};

// ------------------------- Prototypes ---------------------------------

# ifdef STUDENT_DIAGNOSTIC_LEVEL //--------------------------------------
void TestStudent(void);
# endif // STUDENT_DIAGNOSTIC_LEVEL -------------------------------------

# endif // STUDENT_CLASS ============================================================
