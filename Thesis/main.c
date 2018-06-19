
int addieren_int(const int var1, const int var2){
    return var1 + var2;
}

double addieren_double(const double var1, const double var2){
    return var1 + var2;
}

int main() {
    
    int ival1=3, ival2=4, iret;
    double dval1=3, dval2=4, dret;
    
    iret = addieren_int(ival1, ival2);
    dret = addieren_double(dval1, dval2);
    
    return 0;
}