#include <stdio.h>
#include <string.h>

struct account {
   char     	name[100];
   unsigned int no;
   double   	balance;
   unsigned int pin;
};

void createAccount(const char *name, unsigned n, unsigned p, struct account *k) {
   strcpy(k->name, name);
   k->no		= n;
   k->balance	= 0;
   k->pin		= p;
}
void deposit(struct account *k, double amount) { k->balance += amount; }
void drawout(struct account *k, double amount) { k->balance -= amount; }

void transfer(struct account *from, struct account *to, double amount) {
   drawout(from, amount);
   deposit(to, amount);
}

int main(void) {
   struct account  one, two;

   createAccount("Joe Bloggs", 12345, 4711, &one);
   deposit(&one, 1000);
   printf("%s (%d): %.2lf\n", one.name, one.no, one.balance);
   createAccount("Jane Doe", 33226, 9999, &two);
   deposit(&two, 500);
   printf("%s (%d): %.2lf\n", two.name, two.no, two.balance);

   printf("----------------------------- 300: one --> two\n");
   transfer(&one, &two, 300);
   printf("%s (%d): %.2lf\n", one.name, one.no, one.balance);
   printf("%s (%d): %.2lf\n", two.name, two.no, two.balance);

   printf("----------------------------- 150: from one\n");
   drawout(&one, 150); // uncontrolled access possible
   printf("%s (%d): %.2lf\n", one.name, one.no, one.balance);

   printf("----------------------------- 200: two --> one\n");
   transfer(&two, &one, 200); // uncontrolled access possible
   printf("%s (%d): %.2lf\n", one.name, one.no, one.balance);
   printf("%s (%d): %.2lf\n", two.name, two.no, two.balance);

   // no protection, one can even access the stored pin
   printf("------------------------------ The secret pins:\n");
   printf("Pin of %s: %d\n", one.name, one.pin);
   printf("Pin of %s: %d\n", two.name, two.pin);

   return 0;
}
