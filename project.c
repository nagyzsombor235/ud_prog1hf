#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define version "0.1"

int exists(char *lang)
{
    FILE *asd;
    asd = fopen(lang, "r");
    if (asd == NULL)
    {
        return 0;
    }
    else
    {fclose(asd);return 1;}
}

void hemp()
{
    printf("avaliable options:");
        printf("\n -h, --help,  shows this help info"
        "\n -v, --version,   version info"
        "\n --stdout,    prints result to stdout"
        "\n"
        "avaliable languages:c   python  go  bash\n");
}

void create(char *lang,char *content)
{
    if (exists(lang) == 0)
    {
    FILE *f;
    f = fopen(lang, "w");
    if (f == NULL)
    {
        printf("Couldnt create file\n");
        fclose(f);
        return;
    }
    fprintf(f,"%s", content);
    fclose(f);
    printf("Succesfully generated file:%s\n", lang);
    }
    else
    {printf("File already exists\n"); return;}
    
}


int main(int argc, char *argv[])
{
char *c_hello=
"#include <stdio.h>\n\n"
"int main() {\n"
"    printf(\"Hello World from C!\\n\");\n"
"    return 0;\n"
"}\n";

char *py_hello = 
"print(\"Hello World from Python!\")\n";

char *go_hello = 
"package main\n\n"
"import \"fmt\"\n\n"
"func main() {\n"
"    fmt.Println(\"Hello World from Go!\")\n"
"}\n";

char *bash_hello = 
"#!/bin/bash\n"
"echo \"Hello World from Bash!\"\n";

{
    if (argc > 3)
    {
        printf("You can only give three arguments: file_name; language/extension (optional:--stdout for language output)");
        return 1;
    }
    if (argc <2)
    {
        hemp();
    }
    else
    {
        switch (argc)
        {
        case (2):
            if (strcmp(argv[1],"-h") == 0)
            {
                hemp();
            }
            else if ((strcmp(argv[1],"-v") == 0))
            {
                printf("%s",version);
            }
            else if ((strcmp(argv[1],"c") == 0))
            {
                create("result.c", c_hello);
            }
            else if ((strcmp(argv[1],"python") == 0))
            {
                create("result.py", py_hello);
            }
            else if ((strcmp(argv[1],"go") == 0))
            {
                create("result.go", go_hello);
            }
            else if ((strcmp(argv[1],"bash") == 0))
            {
                create("result.sh", bash_hello);
            }
        break;
        case(3):
            if(strcmp(argv[2],"--stdout") == 0)
            {
            if ((strcmp(argv[1],"c") == 0))
            {
                printf("%s", c_hello);
            }
            else if ((strcmp(argv[1],"python") == 0))
            {
                printf("%s", py_hello);
            }
            else if ((strcmp(argv[1],"go") == 0))
            {
                printf("%s", go_hello);
            }
            else if ((strcmp(argv[1],"bash") == 0))
            {
                printf("%s", bash_hello);
            }
            }
            else{printf("you can only use --stdout as a 3rd argument");return 1;}
            break;
        }
    }
}
}