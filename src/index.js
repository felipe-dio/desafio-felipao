let nomeJogador = "saile"
let nivelXp = 900
let elo = ""

if(nivelXp <= 1000) elo = "FERRO";
else if(nivelXp <= 2000) elo = "BRONZE";
else if(nivelXp <= 5000) elo = "PRATA";
else if(nivelXp <= 7000) elo = "OURO";
else if(nivelXp <= 8000) elo = "PLATINA";
else if(nivelXp <= 9000) elo = "ASCENDENTE";
else if(nivelXp <= 10000)elo = "IMORTAL";
else if(nivelXp <= 10001)elo = "RADIANTE";

console.log(`O jogador ${nomeJogador} esta no elo ${elo} com (${nivelXp}pts)`)

if(elo === "RADIANTE"){
    console.log("VOCE PODE ENTRAR PARA O TOP GLOBAL!")
}