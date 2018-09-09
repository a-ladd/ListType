//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                  ListType.cpp                                //
//                                                                              //
//  Purpose    : All of the Test functions for the template ListType.           //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2015 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

# include "ListType.hpp"

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                                 TestListType                                 //
//                                                                              //
// Purpose : Test each and every method in class ListType.                      //
//                                                                              //
// Written By : Dr. Thomas E. Hicks                   Environment : Windows 7   //
// Date       : xx/xx/xxxx                            Compiler    : Visual C++  //
//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////// 
# ifdef LISTTYPE_DIAGNOSTIC_LEVEL //===============================================


// FillDataArrays-InitializeIntegerListHeader-InitializeAutoHeader-InitializeStudentHeader-
// InitializePartHeader-InitializeInventoryHeader-InitializeClassHeader-InitializeIntegerHeader----
// InitializeAthleteHeader----------------------------------------------------------------------
# pragma region DA_DLLIST_DIAGNOSTIC_LEVEL_0___Testing_Functions //========================================================================

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//                             FillDataArrays                                   //
//                                                                              //
// Purpose : Place 42 Students, 13 Autos, & 56 Parts into Arrays.               //
//                                                                              //
//  Written By : Thomas E. Hicks         Environment : Windows 10               //
//  Date.......: xx/xx/xxxx              Compiler....: Visual Studio 2017 C++   //
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
void FillDataArrays(Student Students[], Auto Autos[], Part Parts[])
{
	Students[0] = 42;
	Students[1].Set("Weston, Clay", 102, MALE);
	Students[2].Set("McBryde, Michael", 103, MALE);
	Students[3].Set("Elsaifi, Leslie", 104, FEMALE);
	Students[4].Set("Kelly, Nick", 105, MALE);
	Students[5].Set("Wilson, Jennifer", 106, FEMALE);
	Students[6].Set("Silliman, Mark", 107, MALE);
	Students[7].Set("Merka, Lauren", 108, FEMALE);
	Students[8].Set("Guest, Ben", 109, MALE);
	Students[9].Set("Condon, Ryan", 200, MALE);
	Students[10].Set("Bertles, Joe, Ryan", 201, MALE);
	Students[11].Set("Gonzaba, Jodi", 202, FEMALE);
	Students[12].Set("Crowe, Loren", 203, MALE);
	Students[13].Set("Marquez, Angel", 204, MALE);
	Students[14].Set("Houck, David", 205, MALE);
	Students[15].Set("Ross, Garrett", 206, MALE);
	Students[16].Set("Schwartz, Scott", 207, MALE);
	Students[17].Set("Caille, Ryan", 208, MALE);
	Students[18].Set("Schubet, Kurt", 209, MALE);
	Students[19].Set("Canion, Todd", 300, MALE);
	Students[20].Set("West, Paul", 301, MALE);
	Students[21].Set("Haik, Adrienne", 302, FEMALE);
	Students[22].Set("Swanson, Anna", 303, FEMALE);
	Students[23].Set("Jones, Travis", 304, MALE);
	Students[24].Set("Stansell, Kevin", 305, MALE);
	Students[25].Set("Lara, Domingo", 306, MALE);
	Students[26].Set("Rodriquez, Anthony", 307, MALE);
	Students[27].Set("Mohajan, Rohit", 308, MALE);
	Students[28].Set("Middleton, Phillip", 309, MALE);
	Students[29].Set("Schwartz, Scott", 204, MALE);
	Students[30].Set("Beyt, Benjamin", 401, MALE);
	Students[31].Set("Brace, Reed", 402, MALE);
	Students[32].Set("Brooks, Lamonte", 403, MALE);
	Students[33].Set("Bui, Thoai", 404, MALE);
	Students[34].Set("Flaherty, Zach", 405, MALE);
	Students[35].Set("Herrick, Ben", 406, MALE);
	Students[36].Set("Khan, Yusuf", 407, MALE);
	Students[37].Set("Killy, Gabe", 408, MALE);
	Students[38].Set("Logan, Eric", 409, MALE);
	Students[39].Set("Mnete, Mohamed", 410, MALE);
	Students[40].Set("Vasquez, Justino", 411, MALE);
	Students[41].Set("Vetter, Lauren", 412, FEMALE);
	Students[42].Set("Hicks, Alexander", 413, MALE);

	Autos[0] = 13;
	Autos[1].Set("Porche 911", 102, CONVERTABLE);
	Autos[2].Set("VW", 103, CONVERTABLE);
	Autos[3].Set("Limo", 104, COUP);
	Autos[4].Set("Lincoln Continental", 105, CONVERTABLE);
	Autos[5].Set("Maxima", 106, COUP);
	Autos[6].Set("Mercury Cougar", 107, CONVERTABLE);
	Autos[7].Set("Mustang", 108, COUP);
	Autos[8].Set("Explorer", 109, CONVERTABLE);
	Autos[9].Set("Lincoln Towncar", 200, CONVERTABLE);
	Autos[10].Set("Chevrolet Capri", 201, CONVERTABLE);
	Autos[11].Set("Jaguar", 202, COUP);
	Autos[12].Set("Honda 2000", 203, CONVERTABLE);
	Autos[13].Set("Corvette Stingray", 101, CONVERTABLE);

	Parts[0] = 56;
	Parts[1].Set("Basketball", 111, 3, 10, 25.00);
	Parts[2].Set("Football", 105, 3, 15, 25.00);
	Parts[3].Set("Tennis Balls", 127, 3, 6, 3.00);
	Parts[4].Set("Golf Balls", 104, 3, 10, 12.00);
	Parts[5].Set("Soccer Ball", 141, 3, 5, 40.00);
	Parts[6].Set("GB Hard Drive", 120, 2, 12, 37.95);
	Parts[7].Set("Microwave", 112, 1, 15, 59.80);
	Parts[8].Set("Gas Stove", 136, 1, 6, 237.69);
	Parts[9].Set("Cup", 156, 3, 23, 8.88);
	Parts[10].Set("Baseball", 123, 3, 10, 8.00);
	Parts[11].Set("Teather Ball", 155, 3, 4, 14.00);
	Parts[12].Set("Golf Tees", 125, 3, 60, 2.00);
	Parts[13].Set("Tennis Shoes", 101, 3, 10, 100.00);
	Parts[14].Set("Ping Pong Balls", 154, 3, 10, 3.00);
	Parts[15].Set("MotherBoard", 113, 2, 11, 55.00);
	Parts[16].Set("SDRAM", 135, 2, 30, 40.01);
	Parts[17].Set("Iron", 132, 1, 21, 38.77);
	Parts[18].Set("Long Socks", 153, 3, 34, 9.99);
	Parts[19].Set("CD-ROM", 110, 2, 11, 30.12);
	Parts[20].Set("CD-RW", 124, 2, 26, 56.13);
	Parts[21].Set("Thin Monitor", 140, 2, 5, 89.00);
	Parts[22].Set("Large Monitor", 139, 2, 9, 78.99);
	Parts[23].Set("Dish Washer", 117, 1, 10, 120.78);
	Parts[24].Set("Tennis Racquet", 118, 3, 4, 80.00);
	Parts[25].Set("Golf Club", 152, 3, 14, 49.00);
	Parts[26].Set("Gym Bag", 151, 3, 10, 14.00);
	Parts[27].Set("Golf Glove", 128, 3, 11, 14.06);
	Parts[28].Set("Golf Bag", 150, 3, 5, 99.00);
	Parts[29].Set("Squash Racquet", 119, 3, 2, 80.00);
	Parts[30].Set("Squash Balls", 149, 3, 3, 8.00);
	Parts[31].Set("Archery Set", 148, 3, 1, 25.00);
	Parts[32].Set("Compound Bow", 102, 3, 1, 80.00);
	Parts[33].Set("Arrows", 147, 3, 100, 6.00);
	Parts[34].Set("Quiver", 131, 3, 2, 16.00);
	Parts[35].Set("Racquet Balls", 146, 3, 15, 6.00);
	Parts[36].Set("Baseball Bats", 106, 3, 4, 48.00);
	Parts[37].Set("Golf Driver", 130, 3, 3, 99.00);
	Parts[38].Set("Knee Pads", 103, 3, 4, 8.00);
	Parts[39].Set("Soccer Cleats", 121, 3, 2, 48.00);
	Parts[40].Set("Shin Guards", 137, 3, 5, 48.05);
	Parts[41].Set("Printer", 145, 2, 14, 29.98);
	Parts[42].Set("Laser Printer", 108, 2, 13, 43.99);
	Parts[43].Set("Printer Cables", 144, 2, 12, 9.99);
	Parts[44].Set("Tranportable Fan", 116, 1, 6, 45.67);
	Parts[45].Set("Dirt Devil", 114, 1, 11, 48.80);
	Parts[46].Set("B-Ball Shoes", 143, 3, 9, 135.99);
	Parts[47].Set("Case", 134, 2, 4, 20.00);
	Parts[48].Set("Graphics Card", 142, 2, 7, 58.00);
	Parts[49].Set("Sound Card", 107, 2, 4, 34.99);
	Parts[50].Set("CD Player", 138, 1, 16, 57.75);
	Parts[51].Set("Floppy Drive", 126, 2, 4, 12.00);
	Parts[52].Set("Removeable Drive", 122, 2, 12, 59.94);
	Parts[53].Set("External zip", 129, 2, 8, 67.75);
	Parts[54].Set("Floppy's", 115, 2, 99, .50);
	Parts[55].Set("Mouse", 109, 2, 35, 7.99);
	Parts[56].Set("Keyboard", 133, 2, 44, 12.99);
}
# pragma endregion


void TestListType(void)
{
	puts("\n\n");
	puts("*******************************************************************");
	puts("*******************************************************************");
	puts("*********************** Start TestListType ************************");
	puts("*******************************************************************");
	puts("*******************************************************************");

	Student
		Students[50];
	Part
		Parts[80];
	Auto
		Autos[30];

	Book
		Books[3];

	FillDataArrays(Students, Autos, Parts);
	


# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_1___Constructor_Destructor //====================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 1)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================ Testing Constructor & Destructor =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 1  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");
	//	ListType <int>
	//		IntNos;

	//	ListType <char>
	//		Chars(5);

	//	ListType <Student>
	//		Class(4);

	//	ListType <Book>
	//		Library(3);

	//	HitCarriageReturnToContinue();
	//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_2___Display //===================================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 2)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================          Testing Display         =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 2  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");
	//	ListType <int>
	//		IntNos;

	//	ListType <char>
	//		Chars(5);

	//	ListType <Student>
	//		Class(4);

	//	IntNos.Display("\n IntNos Should Be Empty");
	//	Chars.Display("\n Chars Should Be Empty");
	//	Class.Display("\n Class Should Be Empty");
	//	HitCarriageReturnToContinue();
	//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_3___Append //====================================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 3)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================          Testing Append          =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 3  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");

	//	ListType <int>
	//		IntNos,
	//		Data(-3);

	//ListType <char>
	//	Chars(5);

	//ListType <Student>
	//	Class(4);

	//Student
	//	Jane("Jane Doe", 123, FEMALE),
	//	John("John Doe", 234, MALE),
	//	Sarah("Sarah Hicks", 345, FEMALE);


	//Class.Append(Sarah);
	//Class.Display("Class ==> Sarah");
	//Class.Append(John);
	//Class.Display("Class ==> Sarah & John");

	//HitCarriageReturnToContinue();
	//puts("\n------------------------------------------------------\n");

	//IntNos.Append(1);
	//IntNos.Display("IntNos ==> 1");
	//IntNos.Append(2);
	//IntNos.Display("IntNos ==> 1 2");

	//HitCarriageReturnToContinue();
	//puts("\n------------------------------------------------------\n");

	//Chars.Append('B');
	//Chars.Display("Chars ==> B");
	//Chars.Append('D');
	//Chars.Display("Chars ==> B D");
	//if (Chars.Append('E'))
	//	Chars.Display("Chars ==> B D E");
	//else
	//	puts("Unable to Append E --> List is Full");
	//if (Chars.Append('F'))
	//	Chars.Display("Chars ==> B D E F");
	//else
	//	puts("Unable to Append F --> List is Full");
	//if (Chars.Append('G'))
	//	Chars.Display("Chars ==> B D E F G");
	//else
	//	puts("Unable to Append G --> List is Full");
	//if (Chars.Append('H'))
	//	Chars.Display("Chars ==> B D E F G H");
	//else
	//	puts("Unable to Append H --> List is Full");
	//if (Chars.Append('I'))
	//	Chars.Display("Chars ==> B D E F G H I");
	//else
	//	puts("Unable to Append I --> List is Full");
	//
	//HitCarriageReturnToContinue();
	//puts("\n------------------------------------------------------\n");

	//for (int pos = 3; pos <= 15; pos++)
	//	if (IntNos.Append(pos))
	//		IntNos.Display();
	//	else
	//		puts("IntNos List Overflow Attempt");

	//	HitCarriageReturnToContinue();
	//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_4___Empty //=====================================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 4)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================          Testing Empty           =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 4  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");
	//	ListType <int>
	//		IntNos(6);

	//	ListType <char>
	//		Chars(3);

	//	if (Chars.Empty())
	//		puts("CORRECT");
	//	else
	//		puts("ERROR");
	//	for (int pos = 1; pos <= 3; pos++)
	//	{
	//		Chars.Append(pos + 65);
	//		if (Chars.Empty())
	//			puts("ERROR");
	//		else
	//			puts("CORRECT");
	//	}
	//	Chars.Display();
	//	HitCarriageReturnToContinue();
	//	puts("\n------------------------------------------------------\n\n");

	//	if (IntNos.Empty())
	//		puts("CORRECT");
	//	else
	//		puts("ERROR");
	//	for (int pos = 1; pos <= 6; pos++)
	//	{
	//		IntNos.Append(pos + 65);
	//		if (IntNos.Empty())
	//			puts("ERROR");
	//		else
	//			puts("CORRECT");
	//	}
	//	IntNos.Display();
	//	HitCarriageReturnToContinue();
	//}
# pragma endregion
	
# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_5___Full //======================================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 5)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================          Testing Full            =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 5  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");

	//	ListType <int>
	//		IntNos(6);

	//	ListType <char>
	//		Chars(3);

	//	for (int pos = 1; pos <= 3; pos++)
	//	{
	//		if (Chars.Full())
	//			puts("ERROR");
	//		else
	//			puts("CORRECT");
	//		Chars.Append(pos + 65);

	//	}
	//	if (Chars.Full())
	//		puts("CORRECT");
	//	else
	//		puts("ERROR");

	//	Chars.Display();
	//	HitCarriageReturnToContinue();
	//	puts("\n------------------------------------------------------\n");

	//	for (int pos = 1; pos <= 6; pos++)
	//	{
	//		if (IntNos.Full())
	//			puts("ERROR");
	//		else
	//			puts("CORRECT");
	//		IntNos.Append(pos + 65);

	//	}
	//	if (IntNos.Full())
	//		puts("CORRECT");
	//	else
	//		puts("ERROR");

	//	IntNos.Display();
	//	HitCarriageReturnToContinue();
	//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_6___Append-Part //===============================================================================
	//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 6)
	//{
	//	puts("\n\n");
	//	puts("===================================================================");
	//	puts("===================================================================");
	//	puts("================         Testing Append Part      =================");
	//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 6  =================");
	//	puts("===================================================================");
	//	puts("===================================================================\n");

	//	Part
	//		Part1("Basketball",   123, 1,  5,   49.99),
	//		Part2("Football",     345, 1,  2,   39.99),
	//		Part3("Softball",     678, 1, 15,    4.99),
	//		Part4("Dell Laptops", 123, 5, 10, 7999.99);

	//	ListType<Part>
	//		Inventory(4);
	//		
	//	Inventory.Append(Part1);
	//	Inventory.Append(Part2);
	//	Inventory.Append(Part3);
	//	Inventory.Append(Part4);
	//	Inventory.Display();
	//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_7___RndomAppend //===============================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 7)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================        Testing RandomAppend      =================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 7  =================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//	srand(2320);
//	ListType <Integer>
//		IntNos1(6),
//		IntNos2(50);
//
//	IntNos1.Append(1);
//	IntNos1.Append(2);
//	IntNos1.Append(3);
//	IntNos1.RandomAppend(15, 6, 7);
//	IntNos1.Display();
//
//	IntNos2.RandomAppend(48, 1, 48);
//	IntNos2.Display();
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_8___BubbleSort //================================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 8)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================        Testing BubbleionSort     =================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 8  =================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Integer>
//		IntNos(500);
//
//	IntNos.HicksRandomAppend(500);
//	IntNos.Display("========================= Unsorted ========================\n\n");
//	HitCarriageReturnToContinue();
//	IntNos.BubbleSort();
//	IntNos.Display("========================== Sorted =========================\n\n");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_9___InsertionSort //=============================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 9)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================        Testing InsertionSort     =================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 9  =================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Integer>
//		IntNos1(8),
//		IntNos2(500);
//
//	IntNos1.HicksRandomAppend(8);
//	IntNos1.Display("========================= Insertion Sort Unsorted ========================");
//	IntNos1.InsertionSort();
//	IntNos1.Display("========================== Insertion Sort Sorted =========================");
//
//	IntNos2.HicksRandomAppend(500);
//	IntNos2.Display("========================= Insertion Sort Unsorted ========================");
//	IntNos2.InsertionSort();
//	IntNos2.Display("========================== Insertion Sort Sorted =========================");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_10___InsertionSort_Autos //=======================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 10)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================    Testing InsertionSort Autos   =================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 10  =================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Auto>
//		NorthPark(15);
//	for (long Pos = 1; Pos <= 13; Pos++)
//		NorthPark.Append(Autos[Pos]);
//	NorthPark.Display(true, "13 UnSorted Autos");
//	NorthPark.InsertionSort();
//	NorthPark.Display(true, "13 Sorted Autos");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_11___SelectionSort //===========================================================================
if (LISTTYPE_DIAGNOSTIC_LEVEL <= 11)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================        Testing SelectionSort      ================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 11  ================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Integer>
//		IntNos1(8),
//		IntNos2(500);
//
//	IntNos1.HicksRandomAppend(8);
//	IntNos1.Display("========================= SelectionSort Sort Unsorted ========================");
//	IntNos1.SelectionSort();
//	IntNos1.Display("========================== SelectionSort Sort Sorted =========================");
//
//	IntNos2.HicksRandomAppend(500);
//	IntNos2.Display("========================= SelectionSort Sort Unsorted ========================");
//	IntNos2.SelectionSort();
//	IntNos2.Display("========================== SelectionSort Sort Sorted =========================");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_12___SelectionSort_Students //===================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 12)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================  Testing SelectionSort Students   ================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 12  ================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Student>
//		CSCI_2320(44);
//	for (long Pos = 1; Pos <= 42; Pos++)
//		CSCI_2320.Append(Students[Pos]);
//	CSCI_2320.Display(true, "42 UnSorted Students");
//	CSCI_2320.SelectionSort();
//	CSCI_2320.Display(true, "42 Sorted Students");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_13___QuickSort //================================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 13)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================          Testing QuickSort        ================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 13  ================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Integer>
//		IntNos1(8),
//		IntNos2(500);
//
//	IntNos1.HicksRandomAppend(8);
//	IntNos1.Display("========================= QuickSort Sort Unsorted ========================");
//	IntNos1.QuickSort();
//	IntNos1.Display("========================== QuickSort Sort Sorted =========================");
//
//	IntNos2.HicksRandomAppend(500);
//	IntNos2.Display("========================= QuickSort Sort Unsorted ========================");
//	IntNos2.QuickSort();
//	IntNos2.Display("========================== QuickSort Sort Sorted =========================");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_14___QuickSort_Parts //==========================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 14)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("================      Testing QuickSort Parts      ================");
//	puts("================   LISTTYPE_DIAGNOSTIC_LEVEL = 14  ================");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	srand(2320);
//	ListType <Part>
//		Inventory(44);
//	for (long Pos = 1; Pos <= 56; Pos++)
//		Inventory.Append(Parts[Pos]);
//	Inventory.Display(true, "56 UnSorted Students");
//	Inventory.SelectionSort();
//	Inventory.Display(true, "56 Sorted Students");
//}
# pragma endregion

# pragma region LISTTYPE_DIAGNOSTIC_LEVEL_15___Resize //====================================================================================
//if (LISTTYPE_DIAGNOSTIC_LEVEL <= 15)
//{
//	puts("\n\n");
//	puts("===================================================================");
//	puts("===================================================================");
//	puts("===               OPTIONAL Testing Resize                       ===");
//	puts("===            LISTTYPE_DIAGNOSTIC_LEVEL = 15                    ===");
//	puts("===                                                             ===");
//	puts("===   Uncomment This Function Only If You Have Done Resize      ===");
//	puts("===                                                             ===");
//	puts("===   Append Function Must Include The Following Code:          ===");
//	puts("===        if (ActNo >= Max)                                    ===");
//	puts("===             if (!Resize())                                  ===");
//	puts("===                return (UNSUCCESSFUL);                       ===");
//	puts("===================================================================");
//	puts("===================================================================\n");
//
//	ListType <int>
//		IntNos;
//
//	for (long Pos = 1; Pos <= 32; Pos++)
//	{
//		IntNos.Append(Pos * 5);
//		if (Pos % 5 == 0)
//		{
//			IntNos.Display("");
//			HitCarriageReturnToContinue();
//		}
//	}
//	IntNos.Display("Shoud have 32 Multiples of 5");
//
//	HitCarriageReturnToContinue();
//}
# pragma endregion


puts("\n\n");
puts("*******************************************************************");
puts("*******************************************************************");
puts("************************ End TestListType *************************");
puts("*******************************************************************");
puts("*******************************************************************");
puts("\n\n");
}

# endif //=========================================================================

