char Upperchar(char c)
{
	if ( c >= 'a' && c <= 'z')
			c = c - ('a' - 'A');
	else
		c = c;
	return (c);
}


