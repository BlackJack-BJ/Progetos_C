#include <stdio.h>
#include <sys/statvfs.h>

int main()
{
    struct statvfs info;

    if (statvfs("/data", &info) != 0) 
    {
        perror("Erro ao obter informações");
        return 1;
    }

    unsigned long long total = info.f_blocks * info.f_frsize;
    unsigned long long livre = info.f_bfree * info.f_frsize;

    // Conversão para GB
    double total_GB = (double)total / (1024 * 1024 * 1024);
    double livre_GB = (double)livre / (1024 * 1024 * 1024);

    // Exibir os resultados
    printf("Espaço Total: %.2f GB\n", total_GB);
    printf("Espaço Livre: %.2f GB\n", livre_GB);

    return 0;
}
