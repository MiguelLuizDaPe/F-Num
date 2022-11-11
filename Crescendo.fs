let EscreveEmOrdemCrescente num1 num2 =
  let verificarSeCresce num1 num2 =
    num1 < num2
  let escreveNaOrdem num1 num2 =
    if verificarSeCresce num1 num2 then
      printfn "%i, %i" num1 num2
    else
      printfn "%i, %i" num2 num1
      
  escreveNaOrdem num1 num2

EscreveEmOrdemCrescente 6 5
