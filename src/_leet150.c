#include <stdio.h>
#include <stdlib.h>

#define CHAR2INT(x) (x - '0')

int evalRPN(char** tokens, int tokensSize) {
    int cnt = -1;
    int stoken_[10000];

    for(int i = 0; i < tokensSize; i++) {
        if(tokens[i] == "+") {
            cnt--;
            stoken_[cnt] = stoken_[cnt] + stoken_[cnt+1];
        }
        else if(tokens[i] == "-") {
            cnt--;
            stoken_[cnt] = stoken_[cnt] - stoken_[cnt+1];
        }
        else if(tokens[i] == "*") {
            cnt--;
            stoken_[cnt] = stoken_[cnt] * stoken_[cnt+1];
        }
        else if(tokens[i] == "/") {
            cnt--;
            stoken_[cnt] = stoken_[cnt] / stoken_[cnt+1];
        }
        else
        {
            cnt++;
            stoken_[cnt] = atoi(tokens[i]);
        }
    }
    return stoken_[cnt];
}

void _leet150(int exe) {
    if(exe) {
        char* tokens[] = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
        int tokensize_ = sizeof(tokens) / sizeof(tokens[0]);
        int result = evalRPN(tokens, tokensize_);
        printf("Result: %d\n", result);
    }
}