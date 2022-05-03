# User-Model-in-C
User Model in C with struct,enum,typedef

### Shortly:
```c
// user model
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
  /*
  *
  *and input output codes
  *
  /
```



>- will develop with time (will connect with db, deleting item on db etc.)
