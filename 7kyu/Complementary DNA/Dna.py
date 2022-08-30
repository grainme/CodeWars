def DNA_strand(dna):
    L = {'A':'T','T':'A','C':'G','G':'C'}
    return "".join(L[i] for i in dna if i in L)
