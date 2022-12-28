#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#define MaxSize 50
#define Bi_size 20
#define C_size 20
#define Bu_size 10
using namespace std;
int slot = 0, a_space = MaxSize, bike = 0, car = 0, bus = 0;
int s_bus = Bu_size, s_car = C_size, s_bike = Bi_size;
int bike_cost = 30, car_cost = 200, bus_cost = 350;
int total_cost = 0, Bi_cost, Bu_cost, C_cost;
struct Members
{
  string owner_name, v_no, v_type;
  int p_cost;

} vh[MaxSize];
void TotalEarning()
{
  for (int j = 0; j < slot; j++)
  {
    total_cost += vh[j].p_cost;
  }
}
void Bike()
{
  if (bike != Bi_size)
  {
  Again:
    cin.ignore();
    cout << "Enter Owner Name: ";
    getline(cin, vh[slot].owner_name);
    string temp_id;
    cout << "Enter Vehicle Number: ";
    cin >> temp_id;
    for (int j = 0; j < slot; j++)
    {
      if (temp_id == vh[j].v_no)
      {
        cout << "This number is already taken...!!" << endl;
        goto Again;
      }
    }
    vh[slot].v_no = temp_id;
    vh[slot].p_cost = bike_cost;
    vh[slot].v_type = "Bike";
    slot++;
    bike++;
    s_bike--;
    a_space--;
    cout << endl;
    cout << "Available Space For Bike: " << s_bike << endl;

    cout << "Total Vehicles: " << slot << "\tTotal Available Space: " << a_space << endl;
    int temp_cost = 0;
    for (int j = 0; j < slot; j++)
    {
      if (vh[j].v_type == "Bike")
        temp_cost += vh[j].p_cost;
    }
    Bi_cost = temp_cost;
  }
  else
  {
    cout << "No Space Avaialbe For Bike" << endl;
  }

  TotalEarning();
}
void Bus()
{
  if (bus != Bu_size)
  {
  Again:
    cin.ignore();
    cout << "Enter Owner Name: ";
    getline(cin, vh[slot].owner_name);
    string temp_id;
    cout << "Enter Vehicle Number: ";
    cin >> temp_id;
    for (int j = 0; j < slot; j++)
    {
      if (temp_id == vh[j].v_no)
      {
        cout << "This number is already taken...!!" << endl;
        goto Again;
      }
    }
    vh[slot].v_no = temp_id;
    vh[slot].p_cost = bus_cost;
    vh[slot].v_type = "Bus";
    slot++;
    bus++;
    s_bus--;
    a_space--;
    cout << endl;
    cout << "Available Space For Bus: " << s_bus << endl;
    cout << "Total Vehicles: " << slot << "\tTotal Available Space: " << a_space << endl;
    int temp_cost = 0;
    for (int j = 0; j < slot; j++)
    {
      if (vh[j].v_type == "Bus")
        temp_cost += vh[j].p_cost;
    }
    Bu_cost = temp_cost;
  }
  else
  {
    cout << "No Space Avaialbe For Bus" << endl;
  }
  TotalEarning();
}
void Car()
{
  if (car != C_size)
  {
  Again:
    cin.ignore();
    cout << "Enter Owner Name: ";
    getline(cin, vh[slot].owner_name);
    string temp_id;
    cout << "Enter Vehicle Number: ";
    cin >> temp_id;
    for (int j = 0; j < slot; j++)
    {
      if (temp_id == vh[j].v_no)
      {
        cout << "This numebr is already taken...!!" << endl;
        goto Again;
      }
    }
    vh[slot].v_no = temp_id;
    vh[slot].p_cost = car_cost;
    vh[slot].v_type = "Car";
    slot++;
    car++;
    s_car--;
    a_space--;
    cout << endl;
    cout << "Available Space For Car: " << s_car << endl;
    cout << "Total Vehicles: " << slot << "\tTotal Available Space: " << a_space << endl;
    int temp_cost = 0;
    for (int j = 0; j < slot; j++)
    {
      if (vh[j].v_type == "Car")
        temp_cost += vh[j].p_cost;
    }
    C_cost = temp_cost;
  }
  else
  {
    cout << "No Space Avaialbe For Car" << endl;
  }
  TotalEarning();
}
void Display()
{
  system("cls");
  if (slot == 0)
  {
    cout << "Parking Slot is 'EMPTY'" << endl;
  }
  else
  {
    cout << "------------------------------------------------------" << endl;
    cout << "||--->  ***  All Vehicles List of Parking  ***  <---||" << endl;
    cout << "------------------------------------------------------" << endl;
    cout.setf(ios::left);
    cout << setw(10) << "Name" << setw(10) << "V.ID" << setw(7) << "V.Type" << setw(10) << "P.Cost" << endl;
    for (int j = 0; j < slot; j++)
    {
      cout << setw(10) << vh[j].owner_name << setw(10) << vh[j].v_no << setw(7) << vh[j].v_type << setw(10) << vh[j].p_cost << endl;
    }
    cout << endl;
    // cout << "[ Meal Rate: " << fixed << setprecision(2) << ml_rate << " ]" << endl;
    cout << "Earning From Bike: " << Bi_cost << ",\t"
         << "Earning From Bus: " << Bu_cost << ",\t"
         << "Earning From Car: " << C_cost << endl;
    cout << "Total Earning: " << total_cost << endl;

    cout << "Available Space For Bike: " << s_bike << endl;
    cout << "Available Space For Car: " << s_car << endl;
    cout << "Available Space For Bus: " << s_bus << endl;

    cout << "Total Vehicles: " << slot << "\tTotal Available Space: " << a_space << endl;
  }
}
void Delete()
{
  if (slot == 0)
  {
    cout << "No Member For Delete...! Underflow...!" << endl;
  }
  else
  {

    string d_id;
    cout << "Enter Vehicle Number for Leaving: ";
    cin >> d_id;
    int index, found = 0;
    for (int j = 0; j < slot; j++)
    {
      if (vh[j].v_no == d_id)
      {
        found++;
        index = j;
        break;
      }
    }
    int a = index;
    cout.setf(ios::left);
    cout << setw(10) << "Name" << setw(10) << "V.ID" << setw(7) << "V.Type" << setw(10) << "P.Cost" << endl;
    cout << setw(10) << vh[index].owner_name << setw(10) << vh[index].v_no << setw(7) << vh[index].v_type << setw(10) << vh[index].p_cost << endl;
    if (found != slot)
    {
      if (found != 0)
      {
        if (vh[index].v_type == "Bike")
        {
          bike--;
          s_bike++;
        }
        else if (vh[index].v_type == "Bus")
        {
          bus--;
          s_bus++;
        }
        else
        {
          car--;
          s_car++;
        }
        for (int j = index; j < slot - 1; j++)
        {
          vh[j].v_no = vh[j + 1].v_no;
          vh[j].owner_name = vh[j + 1].owner_name;
          vh[j].v_type = vh[j + 1].v_type;
          vh[j].p_cost = vh[j + 1].p_cost;
        }
        slot--;
        a_space++;
        cout << endl;
        cout << "Deleted Successfull....." << endl;
      }
      else
      {
        cout << "[ No matches ID found for Delete ]" << endl;
      }
    }
    else
    {
      slot--;
      a_space++;
      cout << "\nDeleted Succesfull....\n"
           << endl;
    }
  }
}
void Modify()
{
  cin.ignore();
  string m_id;
  cout << "Enter Vehicle Number for Update: ";
  cin >> m_id;
  int index, found = 0;
  for (int j = 0; j < slot; j++)
  {
    if (vh[j].v_no == m_id)
    {
      found++;
      index = j;
      break;
    }
  }
  if (found == 0)
  {
    cout << "No Matches ID for Update....! Try Again...!" << endl;
  }
  else
  {
    cout.setf(ios::left);
    cout << setw(10) << "Name" << setw(10) << "V.ID" << setw(7) << "V.Type" << setw(10) << "P.Cost" << endl;
    cout << setw(10) << vh[index].owner_name << setw(10) << vh[index].v_no << setw(7) << vh[index].v_type << setw(10) << vh[index].p_cost << endl;
    string n_id;
    cout << "Enter New Vehicle Number: " << endl;
    cin >> n_id;
    vh[index].v_no = n_id;
    string n_name;
    cout << "Enter New Name: " << endl;
    cin.ignore();
    getline(cin, n_name);
    vh[index].owner_name = n_name;
    cout << "Successfully Updated...." << endl;
  }
  TotalEarning();
}
void S_ByID()
{
  string s_id;
  cout << "Enter ID for search: ";
  cin >> s_id;
  int found = 0, index;
  for (int j = 0; j < slot; j++)
  {
    if (s_id == vh[j].v_no)
    {
      found++;
      index = j;
    }
  }
  if (found != 0)
  {
    cout.setf(ios::left);
    cout << setw(10) << "Name" << setw(10) << "V.ID" << setw(7) << "V.Type" << setw(10) << "P.Cost" << endl;
    cout << setw(10) << vh[index].owner_name << setw(10) << vh[index].v_no << setw(7) << vh[index].v_type << setw(10) << vh[index].p_cost << endl;
  }
  else
  {
    cout << "Not Found...!" << endl;
  }
}
int main()
{
StartMenu:
  system("cls");
  cout << endl;
  cout << "-------------------------------------" << endl;
  cout << "|      Garage ManageMent System     |" << endl;
  cout << "-------------------------------------" << endl;
  cout << "1. Parking New Vehicle" << endl;
  cout << "2. Search Vehicles" << endl;
  cout << "3. Update A Vehicle" << endl;
  cout << "4. Leaving A Vehicle" << endl;
  cout << "5. Show All Vehicles" << endl;
  cout << "6. Exit" << endl;
  cout << "--------------------------------" << endl;
  cout << "[ Choose Option: 1/2/3/4/5/6 ]" << endl;
  cout << "--------------------------------" << endl;
  int choice;
  cout << "Enter Your Choice: ";
  cin >> choice;
  string y_n;
  switch (choice)
  {
  case 1:
    do
    {
      if (slot == MaxSize)
      {
        cout << "[ No Space Available For New Member ]" << endl;
        break;
      }
      else
      {
        int opt;
        cout << "1. Bike Parking" << endl;
        cout << "2. Car Parking" << endl;
        cout << "3. Bus Parking" << endl;
        cout << "Enter Your Choice: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
          Bike();
          break;
        case 2:
          Car();
          break;
        case 3:
          Bus();
          break;
        default:
          cout << "Wrong Choice...! Try Again....!" << endl;
          break;
        }
        cout << "Add More Vehicles (y/n):  ";
        cin >> y_n;
      }
    } while (y_n == "y" || y_n == "Y");
    break;
  case 2:
    if (slot == 0)
    {
      cout << "No Vehicles For Search....!" << endl;
    }
    else
    {
      S_ByID();
    }
    break;
  case 3:
    if (slot == 0)
    {
      cout << "No Vehicles For Update....!" << endl;
    }
    else
    {
      Modify();
    }
    break;
  case 4:
    Delete();
    break;
  case 5:
    Display();
    break;
  case 6:
    exit(0);
  default:
    cout << "Invalid Choice.....!" << endl;
    cout << "Press any key for continue.....";
  }
  cout << "Press any key for continue.....";
  getch();
  goto StartMenu;
  return 0;
}