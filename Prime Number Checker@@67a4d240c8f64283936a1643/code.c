int isPrime(int num){
    if (num == 1){
        return 0;
    } else if (num == 0) {
        return 1;
    }
    for (int i = 2; i < num; i++){
        if  (num % i == 0){
            return 0;
        }
    }
    return 1;
}