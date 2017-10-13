#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "qsort.h"
#define MAX_LENGTH_ORDER 20
#define STUDENTS_LENGTH 3

/* Add function signatures here */



typedef struct s {
  char *name;
  int matricula;
} Student;

int cmpStudent(void const *element1, void const *element2, int attribute){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres
  Student *student1 = (Student *) element1; //Cast a student, ya sabemos que ese estudiante tendra un nombre y una matricula
  Student *student2 = (Student *) element2;

  switch(attribute){
    case 0: //name
      return strcmp (student1 -> name, student2 ->name);
    case 1: //matricula
      return student1 -> matricula - student2 -> matricula;
  }
  
  
  
  }

int cmpNames(void const *element1, void const *element2){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres
//Student *student1 = (Student *) element1; //Cast a student, ya sabemos que ese estudiante tendra un nombre y una matricula


return cmpStudent(element1, element2, 0);


}
int cmpMatriculas(void const *element1, void const *element2){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres

  return cmpStudent(element1, element2, 1);
  
  
  }

int main(int argc, char **argv) {
  /* Start your code here */
  char order[MAX_LENGTH];
  int neededStudent;
  int i;

  Student key;
  Student *foundStudent;
  Student 

  Student group[3];
  char order[20];
  group[0].name = strdup("juanito");
  group[0].matricula = 17;
  
  group[1].name = strdup("pedro");
  group[1].matricula = 7;

  group[2].name = strdup("fer");
  group[2].matricula = 13;

  printf("Give me the order ");
  scanf("%s", order);

  if(!strcmp(order,"name")){
    qsort(group, STUDENTS_LENGTH , sizeof(Student), cmpNames);
  }
  if(!strcmp(order,"matricula")){
    qsort(group, STUDENTS_LENGTH, sizeof(Student), cmpMatriculas);
  }

  for(int i=0; i < STUDENTS_LENGTH; i++){
    printf("Student %s %d \n", group[i].name,group[i].matricula);
  }

  printf("Which is the id:");
  scanf("%d", &neededStudent);
  key.matricula = neededStudent;

  foundStudent = (Student *)bsearch(&key, group, STUDENTS_LENGTH,sifeof(Student), cmpMatriculas);
  if(foundStudent != NULL){
    printf("Student %s %d \n", foundStudent ->name, foundStudent->matricula);

  }else{
    printf("Student not found with id %d", neededStudent);
    
  }
  return 0;
}
