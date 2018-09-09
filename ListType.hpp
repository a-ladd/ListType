
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                  ListType.hpp                                //
//                                                                              //
//  Purpose    : ListType Interface. The interface shall include the includes,  //
//               defines, class definition and prototypes that the compiler     //
//               needs in order to compile and manage ListType objects.         //
//                                                                              //
//               The ListType is a dynamic templated list class which will be   //
//               used as a container to hold and manage objects.                //
//                                                                              //
//               The List Info will contain elements Info[0] . . . Info[Max]    //
//               The first element will be placed in Info[1], the second in     //
//               Info[2], etc. The ActNo will be initialized to 0.              //
//                                                                              //
//               Since this is a templated class, all of the class methods      //
//               will be placed in the .hpp file.                               //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
# ifndef LISTTYPE_CLASS //========================================================

// ----------------------------------- Includes ----------------------------------
# include "Utilities.hpp"
# include "Utilities.cpp"

// ------------------------------------ Defines -----------------------------------
# define LISTTYPE_DIAGNOSTIC_LEVEL 6
# define LISTTYPE_CLASS

// ------------------------------ Diagnostic Includes -----------------------------
# ifdef LISTTYPE_DIAGNOSTIC_LEVEL //===============================================
# include "Student.hpp"
# include "Part.hpp"
# include "Athlete.hpp"
# include "Integer.hpp"
# include "Client.hpp"
# include "Auto.hpp"
# include "Book.hpp"
# endif //=========================================================================

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                     Class ListType                           //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
template <class InfoType>
class ListType
{
public:
	ListType(long int NewMax = 10);
	~ListType(void);
	bool Empty(void);
	bool Full(void);
	void Display(bool Delay = true, char Message[] = "");
	void Display(char Message[]);
	bool Append(InfoType NewInfo);
	void RandomAppend(long NoToAppend, long Low, long High);
	void HicksRandomAppend(long NoToAppend);
	void BubbleSort(void);
	void InsertionSort(void);
	void SelectionSort(void);
	void QuickSort(void);
	// You are welcome to add QuickSort helper functions if you do it recursively?
	bool Resize(long int SizeChange = 5);

private:
	InfoType
		* Info;
	long
		Max,
		ActNo;
	bool
		Sorted;
};

# pragma region PART_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //========================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                   ListType                                   //
//                                                                              //
//  Purpose : Constructor(s) for ListType.                                      //
//            Initialize the Max to NewMax. Always maintain it correctly.  The  //
//              default value for Max is to be 10.                              //
//            Initialize the ActNo to 0. Always maintain it correctly.          //
//            Initialize the Sorted Flag to True. Always maintain it correctly. //
//            Allocate Dynamic Memory for Info (if possible). Never let it      //
//              get to a state where the application can crash.                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
template <class InfoType>
ListType <InfoType> :: ListType (long int NewMax)
{
# ifdef LISTTYPE_DIAGNOSTIC_LEVEL //===============================================
	if (LISTTYPE_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Constructor ListType(NewMax)");
# endif //=========================================================================

}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                    ~ListType                                 //
//                                                                              //
//  Purpose    : This function is to do all that is necessary to destroy a      //
//               List Object.                                                   // 
//                                                                              //
//               Return the memory, associated with Info, if any, to the the    //
//               dynamic memory manager and assign Info pointer to NULL.        // 
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
template <class InfoType>
ListType <InfoType> :: ~ListType (void)
{
# ifdef LISTTYPE_DIAGNOSTIC_LEVEL //===============================================
	if (LISTTYPE_DIAGNOSTIC_LEVEL <= 1)
		puts("Evoking Destructor ~ListType()");
# endif //=========================================================================

}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_2___Display //=======================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 Method Display                               //
//                                                                              //
// Purpose : The purpose of this function is to provide a great graphical view  //
//           that represents the data associated with the List structure.       //
//           Since we are not going to store valid data in Info[0], stop        //
//           your display when you get to Info[1].                              //
//                                                                              //
//   [1]  If there is a message, this function will display it on a line.       //
//                                                                              //
//   [2]  If the Info structure is Full , display the following:                //
//        [Notice ActNo & Max at the bottom]                                    //
//                    |----------------------------------------------------|    //
//                    |                   List Is Full                     |    //
//                    |----------------------------------------------------|    //
//                                                                              //
//   [3]  If the Info structure is Empty, display the following:                //
//        [Notice ActNo & Max at the bottom]                                    //
//                    |----------------------------------------------------|    //
//                    |                   List Is Empty                    |    //
//                    |----------------------------------------------------|    //
//                    ActNo = 0      Max = 10     Sorted = F      &1775304      //
//                                                                              //
//   [4]  If there is valid data in the Info structure, use cout or Display50   //
//        to display a  neatly bound grid (from the top to the bottom) in the   //
//        following format:  [Notice ActNo & Max at the bottom]                 //
//                                                                              //
//                   |-----------------------------------------------------|    //
//                3  | .............. Data For Record 3 ...................|    //
//                   |-----------------------------------------------------|    //
//                2  | .............. Data For Record 2 ...................|    //
//                   |-----------------------------------------------------|    //
//                1  | .............. Data For Record 1 ...................|    //
//                   |-----------------------------------------------------|    //
//                    ActNo = 0      Max = 10     Sorted = F      &1775304      //
//                                                                              //
//   [5]  Skip A Blank Line after all displays.                                 //
//                                                                              //
//  Written By : Dr. Tom Hicks           Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////   
template <class InfoType>
void ListType <InfoType> ::Display(bool Delay, char Message[])
{
	long int
		Postition;
	puts("\n");
	//	if (strlen(Message) > 0)
	puts(Message);
	puts("\n");

	if (Full())
	{
		puts("      |----------------------------------------------------|");
		puts("      |                   List Is Full                     |");
		puts("      |----------------------------------------------------|");
	}

	if (Empty())
	{
		puts("      |----------------------------------------------------|");
		puts("      |                   List Is Empty                    |");
		puts("      |----------------------------------------------------|");
	}

	else
		for (Postition = ActNo; Postition >= 1; Postition--)
		{
			puts("      |----------------------------------------------------|");

			fflush(stdout);
			cout << setw(5) << right << Postition << " | ";
			cout << setw(50) << Info[Postition];
			cout << " |\n";
			cout.flush();
			if (Postition == 1)
				puts("      |----------------------------------------------------|");
		}
	if (Sorted)
		printf("        ActNo = %4ld   Max = %-4ld  Sorted = T    &=%ld      \n\n",
			ActNo, Max, (long)&Info[0]);
	else
		printf("        ActNo = %4ld   Max = %-4ld  Sorted = F    &=%ld      \n\n",
			ActNo, Max, (long)&Info[0]);

	if (Delay)
		HitCarriageReturnToContinue();
}

template <class InfoType>
void ListType <InfoType> ::Display(char Message[])
{
	Display(true, Message);
}
# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_4___Empty //=========================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                      Empty                                   //
//                                                                              //
//  Purpose : This function is to explicitly return true if there are no        //
//            valid records in the List ==> ActNo = 0; otherwise return false.  //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 

template <class InfoType>
bool ListType <InfoType> ::Empty() {
	if(ActNo == 0) true else false
}


# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_5___Full //==========================================================================================
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                       Full                                   //
//                                                                              //
//  Purpose : This function is to explicitly return true if there is            //
//            insufficient capacity to add another InfoType object to the List. //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 

template <class InfoType>
bool ListType <InfoType> ::Full() {
	if (ActNo == Max) true else false
}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_3___Append //========================================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                                  Append                                      //  
//                                                                              //  
// Purpose    : This function is to add the next InfoType record to the top of  //
//              the list, adjust the  list ActNo, and return SUCCESSFUL.        //
//                                                                              //  
//              If there is insufficeint room to add another InfoType item,     //  
//              the function will attempt to resize the structure (if there     //
//              is a Resize method).                                            //
//                                                                              //  
//              The first item added to the stack will be added to Info[1].     //  
//                                                                              //  
//              This function explicitly returns UNSUCCESSFUL if unable to add  //
//              the NewInfo to the Top of the List.                             //
//                                                                              //  
//              Sorted should now be false.                                     //  
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class InfoType>
bool ListType <InfoType> ::Append(InfoType NewInfo) {
	if (Full()) {
		return UNSUCCESSFUL;
	}else Info[ActNo + 1] = NewInfo
		return SUCCESSFUL;
}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_7___RandomAppend //==================================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                                  RandomAppend                                //  
//                                                                              //  
// Purpose    : If possible, randomly append NoToAppend InfoType items to end   //
//              of the Info array.                                              //  
//                                                                              //  
//              If there is insufficeint room, add as many as is possible.      //  
//              Resize if you have done the extra credit Resize function.       //
//                                                                              //  
//              The first item added to the stack will be added to Info[1].     //  
//                                                                              //  
//              The Random Numbers are to be in the range Low <= X <+ High      //
//              You might consider using function RandNo (Utilities.cpp)        //
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class InfoType>
void ListType <InfoType> ::RandomAppend(long NoToAppend, long Low, long High) {
	if (ActNo + NoToAppend >= Max) {
		while (ActNo <= Max) {
				Info[ActNo] = RandNo(Low, High)
				ActNo++
		}
	}
	else {
		for (int i = 0; i <= NoToAppend; i++) {
				ActNo++;
				Info[ActNo] = RandNo(Low, High);
		}
	}
}


# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_8___Bubble_Sort //================================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                                BubblenSort                                   //  
//                                                                              //  
// Purpose    : Use the bubble sort algorithm to sort the data.                 //
//              Remember that our insertion begins with element 1; you might    //
//              have to modify an algorithm that you find on the internet.      //  
//                                                                              //  
//              Set the sorted flag to true.                                    //
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class InfoType>
void ListType <InfoType> ::BubbleSort() {
	for (int a = 1; a < Info.length - 1; a++) {
		for (int b = 1; b < Info.length - 1 - a; b++) {
			if (Info[b] > Info[b + 1]) {
				InfoType temp = Info[b];
				Info[b] = Info[b + 1];
				Info[b + 1] = temp;
			}
		}
	}
}



# pragma endregion



# pragma region PART_DIAGNOSTIC_LEVEL_9___Insertion_Sort //================================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                               InsertionSort                                  //  
//                                                                              //  
// Purpose    : Use the insertion sort algorithm to sort the data.              //
//              Remember that our insertion begins with element 1; you might    //
//              have to modify an algorithm that you find on the internet.      //  
//                                                                              //  
//              Set the sorted flag to true.                                    //
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class InfoType>
void ListType <InfoType> ::InsertionSort() {
	int i, key, j;
	for (i = 1; i < Info.length - 1; i++)
	{
		key = Info[i];
		j = i - 1;

		while (j >= 0 && Info[j] > key)
		{
			Info[j + 1] = Info[j];
			j = j - 1;
		}
		Info[j + 1] = key;
	}
}


# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_11___Selection_Sort //===============================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                               SelectionSort                                  //  
//                                                                              //  
// Purpose    : Use the selection sort algorithm to sort the data.              //
//              Remember that our insertion begins with element 1; you might    //
//              have to modify an algorithm that you find on the internet.      //  
//                                                                              //  
//              Set the sorted flag to true.                                    //
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class InfoType>
void ListType <InfoType> ::SelectionSort() {
	int i, j, min;

	
	for (i = 0; i < Info.length - 1; i++)
	{
	
		min = i;
		for (j = i + 1; j < Info.length - 1; j++)
			if (Info[j] < Info[min])
				min = j;
			
			
		InfoType temp = &Info[min];
		&Info[min] = &Info[i];
		&Info[i] = temp;

	}
}

# pragma endregion

# pragma region PART_DIAGNOSTIC_LEVEL_13__Extra_Credit_ResizeQuick_Sort //===================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                                  QuickSort                                   //  
//                                                                              //  
// Purpose    : Use the quick sort algorithm to sort the data.                  //
//              Remember that our insertion begins with element 1; you might    //
//              have to modify an algorithm that you find on the internet.      //  
//                                                                              //  
//              Set the sorted flag to true.                                    //
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////


# pragma endregion

# pragma region STACK_DIAGNOSTIC_LEVEL_14___Extra_Credit_Resize //==========================================================================
//////////////////////////////////////////////////////////////////////////////////  
//////////////////////////////////////////////////////////////////////////////////  
//                                 Resize                                       //  
//                                                                              //  
//  Purpose : The resize function will enable the class to increase, or         //
//            decrease the number of items that can be placed in the Info       //
//            structure. This function will attempt to create a NewInfo         //
//            container with the the capacity defined by the SizeChange.        //
//                                                                              //  
//            If there is insufficient memory to create the new structure,      //  
//            the function will explicitly return UNSUCCESSFUL.                 //  
//                                                                              //  
//            If the new size defined by a negative SizeChange is too small     //  
//            to hold the existing data, the function will adjust the new size  //  
//            to hold the existing data==> (maybe Max = ActNo).                 //  
//                                                                              //  
//            All of the valid data will be copied from the old Info structure  //  
//            to the new structure.                                             // 
//            The memory associated with the old Info container will be         //
//            returned to the memory manager.                                   //  
//            The Info pointer, the Max, and the Top will be adjusted as is     //  
//            necessary.                                                        //  
//            Explicitly return SUCCESSFUL.                                     //  
//                                                                              //  
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

# pragma endregion

//=========================================================================================================================================

// ----------------------------- Function Prototypes ----------------------------

# ifdef LISTTYPE_DIAGNOSTIC_LEVEL //===============================================
	void TestListType(void);
# endif //=========================================================================

# endif //LISTTYPE_CLASS =========================================================
