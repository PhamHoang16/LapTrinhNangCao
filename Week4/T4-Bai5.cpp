bool isPrime (int number){
    if(number < 2){
        return false;
    }
    else if(number == 2){
        return true;
    }
    else if(number > 2){
        for(int i = 2; i <= number/2; i++){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
}