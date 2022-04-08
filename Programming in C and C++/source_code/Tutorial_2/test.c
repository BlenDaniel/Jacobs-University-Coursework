char c1, c2, c3;
// Version 1
scanf("%c\n%c", &c1, &c2);
// Version 2
scanf("%c", &c1);
getchar();
scanf("%c", &c2);
// Version 3
char line[100];
fgets(line, sizeof(line), stdin);
sscanf(line, "%c", &c1);
fgets(line, sizeof(line), stdin);
sscanf(line, "%c", &c2);