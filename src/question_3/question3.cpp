#include "question3.h"

using std::string; using std::cout;

string transcribe_dna_into_rna(std::string dna)
{
    string rna = "";

    for(unsigned int i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'T')
        {
            rna += 'U';
        }
        else
        {
            rna += dna[i];
        }
    }
    //cout<<rna;
    return rna;
}