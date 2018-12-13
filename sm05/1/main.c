int mystrcmp(const char *str1, const char *str2)
{
    const char *c1 = str1;
    const char *c2 = str2;
    while(*c1 && *c2) {
	if(*c1 < *c2) {
	    return -1;
	} else if (*c1 > *c2) {
	    return 1;
	}
	++c1;
	++c2;
    }
    if (*c1)
        return -1;
    if (*c2)
        return 1;
    return 0;
}