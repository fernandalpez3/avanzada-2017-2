#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "qsort.h"

/* Add function signatures here */



typedef struct s {
  char *name;
  int matricula;
} Student;

int cmpStudent(void const *element1, void const *element2, int attribute){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres
  Student *student1 = (Student *) element1; //Cast a student, ya sabemos que ese estudiante tendra un nombre y una matricula
  Student *student2 = (Student *) element2;
  
  return strcmp(student1->name, student2->name);
  
  
  }

int cmpNames(void const *element1, void const *element2){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres
Student *student1 = (Student *) element1; //Cast a student, ya sabemos que ese estudiante tendra un nombre y una matricula
Student *student2 = (Student *) element2;

return strcmp(student1->name, student2->name);


}
int cmpMatriculas(void const *element1, void const *element2){  //es lo que esta ahi guardado, pero realmente sabemos que son dos nombres
  Student *student1 = (Student *) element1; //Cast a student, ya sabemos que ese estudiante tendra un nombre y una matricula
  Student *student2 = (Student *) element2;
  
  return student1->matricula -  student2->matricula;
  
  
  }

int main(int argc, char **argv) {
  /* Start your code here */
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
    qsort(group, 3 , sizeof(Student), cmpNames);
  }
  if(!strcmp(order,"matricula")){
    qsort(group, 3 , sizeof(Student), cmpMatriculas);
  }

  for(int i=0; i <3; i++){
    printf("Student %s %d \n", group[i].name,group[i].matricula);
  }
  return 0;
}
