int isPrime(int num){
    int z = 0;
    for (int i = 2; i < num; i++){
        if  ((num % i) == 0){
            return 0;
        } else {
            z = 1;
            return 1;
        }
    }
}