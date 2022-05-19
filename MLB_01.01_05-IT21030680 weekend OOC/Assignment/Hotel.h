#pragma once
class Hotel
{
private:
	int Hotel_Id;
	char Hotel_name[30];
	char Hotel_Address[80];
	char Contact[10];
	Rooms* room[5];

public:
	Hotel()
	{
		room[0] = new Rooms();
		room[1] = new Rooms();
	};
	Hotel(int HId, char HName[], char HAddress[], char ContNo[]);
	void getHotelInfo();
	~Hotel();
};

