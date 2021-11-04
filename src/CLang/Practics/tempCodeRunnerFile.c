int main(void)
{
    FILE *p;
    p = fopen("test1", "r");
    getc(p);
    if (feof(p))
    {
        printf("Errors, Open.");
    }
    else
    {
        rewind(p); // jump back the head of file
        int a;
        fscanf(p, "%d", &a);
        printf("%d", a);
    }
    return 0;
}