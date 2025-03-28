int isPrime(int num){
    for (int i = 2; i < num; i++){
        int z = 0;
        if((num % i) == 0){
            return z;
        } else {
            z = 1;
            return z;
        }
    }
}