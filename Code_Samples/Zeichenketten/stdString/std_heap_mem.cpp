int main() {

    std::string str;
    
    for(int i=2; i <33; i++){
        str.append("=");
        printf("%02d: %s\n", i,
               str.c_str());
    }
    
    return 0;
}




/*EOF*/