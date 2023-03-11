// Criar Função para mostrar os numeros primos
function exibirNumerosPrimos(limite) {
    for (let numero = 2; numero <= limite; numero++) {
        let primo = true;

        for (let divisor = 2; divisor < numero; divisor++) {
            if (numero % divisor === 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            console.log(numero)
        }
    }
}
// Primos
// Compostos

exibirNumerosPrimos(250);

