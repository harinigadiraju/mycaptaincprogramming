# include <stdio.h>
void main()
{
  int marks;
  printf("Enter marks ");
  scanf("%d", &marks);
  if(marks < 0 || marks > 100)
  {
    printf("inavalid input");
  }
  else if (marks <= 100 && marks >= 85)
  {
    printf("Grade A");
  }
  else if (marks <= 84 && marks >= 70)
  {
    printf("Grade B");
  }
  else if (marks <= 69 && marks >= 55)
  {
    printf("Grade C");
  }
  else if (marks <= 54 && marks >= 40)
  {
    printf("Grade D");
  }
  else if (marks <= 39)
  {
    printf("Grade F");
  }
}
