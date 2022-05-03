#include<stdio.h>

int main()
{  
  int size = 0;
  int i;

  enum role { Customer=1, Employee, Executive };
  typedef enum role setRole; // for setting role => 'setRole <rolename>;'

  // user model
  struct User{
    char name[100];
    char surname[100];
    char email[100];
    struct Birthday{
      int day;
      int month;
      int year;
    } birthday;
    setRole role;

  };
  typedef struct User createUser; // for creating user quickly => '$ Createuser <something>;'
  
  //input size
  printf("How many users do you want to create?\n");
  scanf("%d", &size);

  //create users with size
  createUser Myuser[size];

  //posting data
  for (i=0;i<size;i++){
    printf("\nInput User%d informations:\n", i+1);
    printf("Name: ");
    scanf("%s", Myuser[i].name);
    printf("Surname: ");
    scanf("%s", Myuser[i].surname);
    printf("Email: ");  
    scanf("%s", Myuser[i].email);
    printf("Birthday(example: 01-10-1998): ");
    scanf("%d-%d-%d", &Myuser[i].birthday.day, &Myuser[i].birthday.month, &Myuser[i].birthday.year);
    printf("Role:\n- For Customer = 1\n- For Employee = 2\n- For Executive = 3\n:");
    scanf("%u", &Myuser[i].role);
  } 

  printf("----------------------------------\n");
  printf("Users Creating is Completed\n");
  printf("Showing All Users:\n");
  
  //getting data
  for (i=0;i<size;i++){
    printf("%d) %s %s - %s - %d/%d/%d - ", i+1 ,Myuser[i].name, Myuser[i].surname, Myuser[i].email, Myuser[i].birthday.day, Myuser[i].birthday.month, Myuser[i].birthday.year);
    if (Myuser[i].role == Customer)
      printf("Customer\n");
    else if (Myuser[i].role == Employee)
      printf("Employee\n");
    else printf("Executive\n");
  }
  printf("\n-----------------------------------\n");
  return 0;
}