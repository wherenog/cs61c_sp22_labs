#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
    char *ptr = str;
    int res = 0;
    while (*ptr != '\0') {
        if (*ptr++ == letter)
            res ++;
    }
    return res;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    dna_seq->A_count = num_occurrences(dna_seq->sequence, 'A'); 
    dna_seq->C_count = num_occurrences(dna_seq->sequence, 'C');
    dna_seq->G_count = num_occurrences(dna_seq->sequence, 'G');
    dna_seq->T_count = num_occurrences(dna_seq->sequence, 'T');
    return;
}