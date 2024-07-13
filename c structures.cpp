
//struct 
 #include<stdio.h>
 #include<string.h>
struct student{
    char name[60], email[60], RegNo[60], dob[60];
    int PhoneNo, age;
    
     }student;
   int main() {    
   struct student;
   strcpy(student.name, "Masikonte Stephen");
   strcpy(student.email, "masikpontestephen@gmail.com");
   strcpy(student.RegNo, "BSE/05/0057/2023");
   strcpy(student.dob, "20/12/2005");
    student.PhoneNo = 2453647;
    student.age = 40;
       printf("%s,%s,%s,%s,%d,%d", student.name,student.email,student.RegNo,student.dob,student.name,student.age);
       
       return 0;
   }


