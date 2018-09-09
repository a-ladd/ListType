//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                Integer.hpp                                   //
//                                                                              //
//  Purpose    : House includes, defines, class definitions, function           //
//               prototypes, and all template methods.                          //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 

# ifndef INTEGER_CLASS //=========================================================

// ----------------------------------- Includes ----------------------------------
# include "Utilities.hpp"

// ----------------------------------- Defines -----------------------------------
# define INTEGER_CLASS
# define INTEGER_DIAGNOSTIC_LEVEL 8

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Class Integer                            //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
class Integer
{
public:
	Integer (long int NewNo = 0);
	~Integer (void);
	void Set (long int NewNo = 0);
	bool Get(void);
	void Display(char Message[] = "");
   	void Display50(void);
	long int Key(void);

	// I have decided that No is to be the Primary Long Integer Key for this record type.   
   bool operator == (const long int Key);
   bool operator >  (const long int Key);
   bool operator >= (const long int Key);
   bool operator <  (const long int Key);
   bool operator <= (const long int Key);
   bool operator != (const long int Key);
   void operator =  (const long int Key);

   bool operator == (const Integer Key);
   bool operator >  (const Integer Key);
   bool operator >= (const Integer Key);
   bool operator <  (const Integer Key);
   bool operator <= (const Integer Key);
   bool operator != (const Integer Key);
   void operator =  (const Integer Key);

   friend ostream & operator << (ostream & OutputStream, Integer S);

private:
   long int
      No;
 };

// ------------------------- Non-Class Functions Prototypes-----------------------
void TestInteger(void);

# endif // INTEGER_CLASS ==========================================================