unsigned char      rev_bits(unsigned char octet)
{
    unsigned char result = 0;
    int  i = 8;
    while(i--)
    {
        result = result << 1;
        result = result | (octet & 1);
        octet = octet >> 1;
    }
    return result;
}
