import time
import random
import sys
import msvcrt
import os

def obter_escolha_jogador():
    escolhas = ["Pedra", "Papel", "Tesoura", "Spock", "Lagarto"]
    teclas = [b"1", b"2", b"3", b"4", b"5"]

    print("\nEscolha sua jogada:")
    print("1. Pedra")
    print("2. Papel")
    print("3. Tesoura")
    print("4. Spock")
    print("5. Lagarto")

    while True:
        if msvcrt.kbhit():
            tecla = msvcrt.getch()
            if tecla in teclas:
                return escolhas[teclas.index(tecla)]
            else:
                print('Opção inválida! Esolha de 1 a 5.')
                continue

def obter_escolha_maquina():
    escolhas = ["Pedra", "Papel", "Tesoura", "Spock", "Lagarto"]
    return random.choice(escolhas)

def avaliar_escolhas(escolha_jogador, escolha_maquina):
    if escolha_jogador == escolha_maquina:
        return "Empate"

    if (
        (escolha_jogador == "Pedra" and escolha_maquina in ["Tesoura", "Lagarto"]) or
        (escolha_jogador == "Papel" and escolha_maquina in ["Pedra", "Spock"]) or
        (escolha_jogador == "Tesoura" and escolha_maquina in ["Papel", "Lagarto"]) or
        (escolha_jogador == "Spock" and escolha_maquina in ["Tesoura", "Pedra"]) or
        (escolha_jogador == "Lagarto" and escolha_maquina in ["Spock", "Papel"])
    ):
        return "Jogador"

    return "Máquina"

def exibir_resultado(resultado):
    print("\n")
    if resultado == "Empate":
        print("Empate!")
    elif resultado == "Jogador":
        print("Você ganhou!")
    else:
        print("Você perdeu!")

def atualizar_pontos(resultado, pontos):
    if resultado == "Jogador":
        pontos["jogador"] += 1
    elif resultado == "Máquina":
        pontos["máquina"] += 1

def exibir_pontos(pontos):
    print("\n")
    print(f"Jogador: {pontos['jogador']} pontos")
    print(f"Máquina: {pontos['máquina']} pontos")

def jogo():
    turnos = [10, 15, 20]
    pontos = {"jogador": 0, "máquina": 0}

    while True:
        os.system("cls" if os.name == "nt" else "clear")
        print("Bem-vindo ao Jogo Sheldon!")

        print("\nEscolha a quantidade de jogadas:")
        print("1. 10 jogadas")
        print("2. 15 jogadas")
        print("3. 20 jogadas")
        print("4. Sair do jogo")

        opcao = input("Digite o número da opção desejada: ")

        if opcao == "4":
            print('Saindo do jogo...')
            time.sleep(1)
            sys.exit()

        try:
            turno = turnos[int(opcao) - 1]
        except (ValueError, IndexError):
            print("Opção inválida. Tente novamente.")
            time.sleep(1)
            continue

        pontos["jogador"] = 0
        pontos["máquina"] = 0

        for jogadas in range(turno):
            os.system("cls" if os.name == "nt" else "clear")
            print(f"\nJogadas restantes: {turno - jogadas}")
            exibir_pontos(pontos)

            print("\nJogador")
            escolha_jogador = obter_escolha_jogador()

            print("\nMáquina")
            escolha_maquina = obter_escolha_maquina()

            print(f"Você escolheu: {escolha_jogador}")
            print(f"A máquina escolheu: {escolha_maquina}")

            resultado = avaliar_escolhas(escolha_jogador, escolha_maquina)
            exibir_resultado(resultado)
            atualizar_pontos(resultado, pontos)
            exibir_pontos(pontos)

            time.sleep(4)

        os.system("cls" if os.name == "nt" else "clear")
        if pontos["jogador"] > pontos["máquina"]:
            print("\nYou Win!")
        else:
            print("\nYou Lose!")

        print("\nDeseja iniciar um novo jogo?")
        print("1. Sim")
        print("2. Sair do jogo")

        opcao = input("Digite o número da opção desejada: ")

        if opcao == "2":
            sys.exit()

def main():
    jogo()

if __name__ == "__main__":
    main()
