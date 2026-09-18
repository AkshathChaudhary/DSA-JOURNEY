bool lemonadeChange(int* bills, int billsSize) {
    int five=0;
    int ten=0;
    for(int i=0;i<billsSize;i++){
        if(bills[i]==5){
            five++;
        }else if(bills[i]==10){
            if(five==0){
                return FALSE;
            }
            five--;
            ten++;
        }else if(bills[i]==20){
            if(five>0 && ten>0){
                ten--;
                five--;
            }else if(five>=3){
                five-=3;
            }else{
                return FALSE;
            }

        }
    }
        return TRUE;
}