let principal = 640000;
let rate = 10.7;
let cIntrest = (principal*(rate/12))/100;
let cInstalment = cIntrest;
let rAmount = principal ;
let fixInstalment = principal/60;
let combinedIntrest = 0;

console.log("month  principle  rate  fix_instalment  intrest  total_instalment  remaining_amount \n")
for(let i = 1; i <= 60; i++){
    cIntrest= (rAmount*(rate/12))/100;
    combinedIntrest = combinedIntrest + cIntrest;
    cInstalment = fixInstalment + cIntrest;
    rAmount = rAmount + cIntrest - cInstalment;

    console.log(i + "   "+ principal + "    "+ rate + "   "+ fixInstalment.toFixed(2) + "   "+ cIntrest.toFixed(2) + "    "+ cInstalment.toFixed(2) + "    "+ rAmount.toFixed(2) + "    ")
}
console.log("\n \n  final intrest on "+ principal + " at rate of "+ rate +"% is  :"+ combinedIntrest);
