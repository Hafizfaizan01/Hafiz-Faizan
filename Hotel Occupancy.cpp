#include<iostream>
using namespace std;
int main()
{
	int floors, rooms, occupied, unoccupied,i=0;
	double percentOfOcuupied, totalRooms = 0, totalOccupied = 0;
	cout << "Enter the number of floors:";
	cin >> floors;
	while (i < floors)
	{
		if (i != 13)
		{
			cout << "Enter the number of rooms on floor:";
			cin >> rooms;
			totalRooms += rooms;
			cout << "Enter the number of occcupied rooms:";
			cin >> occupied;
			totalOccupied += occupied;
			unoccupied = totalRooms - totalOccupied;
			percentOfOcuupied = (totalOccupied / totalRooms) * 100;
		}
		else
		{
			cout << "This is teh 13th Floor.\nSo  we skip this.";
		}
		i++;
	}
	cout << "The hotel has  total " << totalRooms << " rooms.\n";
	cout << "The hotel has  total " << totalOccupied << " occupied rooms.\n";
	cout << "The hotel has  total " << unoccupied << " unoccupied rooms.\n";
	cout << "Percentage of occupied rooms is :" << percentOfOcuupied<<endl;
	return 0;
}