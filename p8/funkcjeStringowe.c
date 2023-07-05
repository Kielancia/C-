/*
    isalpha(c) - true if c is a letter
    isalnum(c) - true if c is a letter or digit
    isdigit(c) - true if c is a digit
    islower(c) - true if c is lowercase letter
    isprint(c) - true if c is a printable character
    ispunct(c) - true if c is a punctuation character
    isupper(c) - true if c is an uppercase letter
    isspace(c) - true if c is whitespace
    tolower(c) - returns lowercase of c
    toupper(c) - returns uppercase of c

    char my_name[8];
    my_name =" Frank";
    strcpy(my_name, "Frank"); //kopiowanie litera³u c do tablicy my_name
    strcat(my_name, "Kaka"); //dodanie kolejnego ci¹gu do tablicy
    strlen(my_name); //iloœæ znaków w talbicy, d³ugoœæ
    strcmp(my_name, "Another"); //porównuje dwa ci¹gi znaków i zwraca: 0 jeœli s¹ równe, < 0 jeœli pierwszy ci¹g jest alfabetycznie po drugi i odwrotnie

    size_t //typ danych coœ jak unsigned int

    string s1; //empty
    string s2 {"Frank"}; //Frank
    string s3 {s2}; //Frank
    string s4 {"Frank", 3}; //Fra
    string s5 {s3,0,2}; //Fr
    string s6 (3, 'X'); //XXX

    cout << s2.at[0] //F
    cout << s2.at(0) //F

    s2[0] = 'f'; //frank
    s2.at(0) = 'p'; //prank

    string s1 {"Frank"};

    for(char c: s1)
        cout << c << endl;
    F
    r
    a
    n
    k

    s2.substr(0,4); //Fran
    s2.find("Frank"); //0
    s2.length(); //5
    s2 += "James"; //Frank James

    getline(cin, s2); //read entire line until \n
    getline(cin, s2, 'x'); // read entire line to 'x'
*/
