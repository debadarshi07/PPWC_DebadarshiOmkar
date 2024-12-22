/*
    Following declaration of an array of struct, assumes size of byte, short, int and long are 1,2,3 and 4 respectively. Alignment rule stipulates that n-bytes field must be located at an address divisible by n, the fields in a struct are not rearranged, padding is used to ensure alignment. All elements of array should be of same size.

    struct complex
        Short s,
        Byte b,
        Long l,
        Int i
    End complex
    Complex C[10]
    Assuming C is located at an address divisible by 8, what is the total size of c, in bytes?

    (a) 150
    (b) 160
    (c) 200
    (d) 240

    Answer - (b) 160
*/