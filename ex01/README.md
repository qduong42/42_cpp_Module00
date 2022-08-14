Create Two classes

1. PhoneBook
-	Array of Contact Class -> instantiates 8 Contacts with Contact[8]
-	Maximum 8 contacts, 9th contact replaces oldest one by newest
-	NO DYNAMIC ALLOC

2. Contact
-	stands for PhoneBook contact
-	Setter and Getter function for private contact attributes

Note:
-	PhoneBook instantiated as instance of PhoneBook class.
-	Free to design class as you like. 
-	inside class is private, outside is public. -> this operator.

Startup:

PhoneBook => Empty
Usert prompted to enter 3 possible commands.

-> ADD:	save new contact
-	Prompted input Info new contact 1 field at time.
-	All fields complete -> Contact added to PhoneBook
-	Fields: First name, Last name, Nickname, Phone number, Darkest secret
-	NO FIELD EMPTY <br>

-> SEARCH:	display a specific contact
-	Display saved contact list 4 columns: Index, First name, Last name, nickname
-	Column = 10 char wide	PIPE char seperated		right aligned text	if text longer, must be truncated, last displayable char replaced by dot
-	Prompt user again index entry display. Index out of range or wrong, print error. Display contact info, one field per line<br>

-> EXIT
-	Program quits and contacts lost forever

ANY OTHER INPUT DISCARDED

Command executed - program wait for another. EXIT = STOP