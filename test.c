#include <stdio.h>
 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
struct 
{
   char  title[50];
   char  mm[50];
   char  subject[100];
   int   book_id;
}shit= {"C 语言", "RUNOOB", "编程语言",123123};
int main()
{
    int list [5];
    struct Books book = {"C 语言", "RUNOOB", "编程语言", 123456};
    struct Books * p_book;
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
    printf("shit book id is %d \n",shit.book_id);
    
    for (int i=0;i<5;i++){
        printf("list is %p \n",list[i]);
    }
    return 0;
} 