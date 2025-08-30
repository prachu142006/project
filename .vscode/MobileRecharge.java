 class MobileRecharge{
    public Static void main(String[]args){
        int accountbalance = 500;
        int rechargeamount = 299;
        if(accountbalance >= rechargeamount){
            accountbalance-= rechargeamount;
            System.out.println("Recharge,successful.Remaining balance:Rs."+accountbalance);
        }
    }
}
