#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("정렬할 단어를 입력해주세요.\n");
        return 0;
    }
    for (int i = 1; i < argc - 1; i++) {
        for (int j = 1; j < argc - i; j++) {
            if (strcmp(argv[j], argv[j + 1]) > 0) {
                char *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

    for(int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
