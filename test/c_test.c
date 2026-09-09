#include <assert.h>
#include <stdio.h>
#include "bindings/c/tree-sitter-dockerfile.h"

int main(void) {
    const TSLanguage *language = tree_sitter_dockerfile();
    assert(language != NULL);
    printf("C binding test passed: language loaded successfully at %p\n", (void*)language);
    return 0;
}
