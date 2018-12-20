int mystrcmp(const char *str1, const char *str2) {
    const unsigned char *c1 = (const unsigned char*)str1;
    const unsigned char *c2 = (const unsigned char*)str2;
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
        return 1;
    if (*c2)
        return -1;
    return 0;
}