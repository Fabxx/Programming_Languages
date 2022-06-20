In C/C++, after you use a function to fill data in a structure, a variable or a class, you need to export that data or else
will be destroyed. The struct won't hold the data in memory other than that memory region. A pointer as argument
is sufficient to export it on other memory regions.

example:

typedef struct data
{
  int a, b;
} data;

void input()
{
  data capture;
  scanf("%d %d", capture.a, capture.b);
} //data will be destroyed, a and b will be empty.
 
 void output()
 {
    data capture //new memory region that is empty.
    printf("%d %d", capture.a, capture.b);
 }
 
 void input(data *capture) //passing pointer as parameter to export.
{
  data capture;
  scanf("%d %d", capture.a, capture.b);
 } 
 
 void output(data *capture)
 {
  //parameter is equivalent of:
  data capture;
  input(&capture); //manually making it pointer if argument isn't pointer.
  input(capture);
  printf("%d %d", capture->a, capture->b) //if argument is not pointer, replace -> with .
  }
