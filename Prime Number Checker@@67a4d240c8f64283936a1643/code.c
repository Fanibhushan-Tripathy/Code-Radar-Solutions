int isPrime(int num){
    for (int i = 0; i < num; i++){
        if  ((i != 1) && (i != num)){
            if (num % i == 0){
                return 0;
            } else {
                return 1;
            }
        }
    }
}