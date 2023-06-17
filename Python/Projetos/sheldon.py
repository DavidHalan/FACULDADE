import time
import random
import sys
import msvcrt
import os

def limpar_tela():
    os.system("cls" if os.name == "nt" else "clear")

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
                print('Opção inválida! Escolha de 1 a 5.')
                continue

def obter_escolha_maquina():
    escolhas = ["Pedra", "Papel", "Tesoura", "Spock", "Lagarto"]
    return random.choice(escolhas)

def avaliar_escolhas(escolha_jogador1, escolha_jogador2):
    if escolha_jogador1 == escolha_jogador2:
        return "Empate"

    if (
        (escolha_jogador1 == "Pedra" and escolha_jogador2 in ["Tesoura", "Lagarto"]) or
        (escolha_jogador1 == "Papel" and escolha_jogador2 in ["Pedra", "Spock"]) or
        (escolha_jogador1 == "Tesoura" and escolha_jogador2 in ["Papel", "Lagarto"]) or
        (escolha_jogador1 == "Spock" and escolha_jogador2 in ["Tesoura", "Pedra"]) or
        (escolha_jogador1 == "Lagarto" and escolha_jogador2 in ["Spock", "Papel"])
    ):
        return "Jogador 1"

    return "Jogador 2"

def exibir_resultado(resultado):
    print("\n")
    if resultado == "Empate":
        print("Empate!")
    else:
        print(f"{resultado} ganhou!")

def atualizar_pontos(resultado, pontos):
    if resultado != "Empate":
        pontos[resultado] += 1

def exibir_pontos(pontos):
    print(f"Jogador 1: {pontos['Jogador 1']} pontos")
    print(f"Jogador 2: {pontos['Jogador 2']} pontos")

def jogo_contra_maquina():
    limpar_tela()
    print("Bem-vindo ao Jogo Sheldon (Modo Player vs Máquina)!")

    nome_jogador = input("Digite o nome do jogador: ")
    turnos = [10, 15, 20]
    pontos = {"Jogador 1": 0, "Jogador 2": 0}

    while True:
        limpar_tela()

        print("Escolha a quantidade de jogadas:")
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

        pontos["Jogador 1"] = 0
        pontos["Jogador 2"] = 0

        for jogadas in range(turno):
            limpar_tela()
            print(f"\nJogadas restantes: {turno - jogadas}")
            exibir_pontos(pontos)

            print(f"\nJogador 1: {nome_jogador}")
            escolha_jogador1 = obter_escolha_jogador()

            print("\nMáquina")
            escolha_jogador2 = obter_escolha_maquina()

            print(f"Jogador 1 escolheu: {escolha_jogador1}")
            print(f"Máquina escolheu: {escolha_jogador2}")

            resultado = avaliar_escolhas(escolha_jogador1, escolha_jogador2)
            exibir_resultado(resultado)
            atualizar_pontos(resultado, pontos)
            exibir_pontos(pontos)

            time.sleep(4)

        limpar_tela()
        if pontos["Jogador 1"] > pontos["Jogador 2"]:
            print("\nYou Win!")
        else:
            print("\nYou Lose!")

        print("\nDeseja iniciar um novo jogo?")
        print("1. Sim")
        print("2. Sair do jogo")

        opcao = input("Digite o número da opção desejada: ")

        if opcao == "2":
            sys.exit()

def jogo_contra_jogador():
    limpar_tela()
    print("Bem-vindo ao Jogo Sheldon (Modo Player vs Player)!")

    nome_jogador1 = input("Digite o nome do jogador 1: ")
    nome_jogador2 = input("Digite o nome do jogador 2: ")
    turnos = [10, 15, 20]
    pontos = {"Jogador 1": 0, "Jogador 2": 0}

    while True:
        limpar_tela()

        print("Escolha a quantidade de jogadas:")
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

        pontos["Jogador 1"] = 0
        pontos["Jogador 2"] = 0

        for jogadas in range(turno):
            limpar_tela()
            print(f"\nJogadas restantes: {turno - jogadas}")
            exibir_pontos(pontos)

            print(f"\nJogador 1: {nome_jogador1}")
            escolha_jogador1 = obter_escolha_jogador()

            print(f"\nJogador 2: {nome_jogador2}")
            escolha_jogador2 = obter_escolha_jogador()

            print(f"Jogador 1 escolheu: {escolha_jogador1}")
            print(f"Jogador 2 escolheu: {escolha_jogador2}")

            resultado = avaliar_escolhas(escolha_jogador1, escolha_jogador2)
            exibir_resultado(resultado)
            atualizar_pontos(resultado, pontos)
            exibir_pontos(pontos)

            time.sleep(4)

        limpar_tela()
        if pontos["Jogador 1"] > pontos["Jogador 2"]:
            print(f"\n{nome_jogador1} Win!")
        elif pontos["Jogador 2"] > pontos["Jogador 1"]:
            print(f"\n{nome_jogador2} Win!")
        else:
            print("\nEmpate!")

        print("\nDeseja iniciar um novo jogo?")
        print("1. Sim")
        print("2. Sair do jogo")

        opcao = input("Digite o número da opção desejada: ")

        if opcao == "2":
            sys.exit()

def main():
    limpar_tela()
    print("Bem-vindo ao Jogo Sheldon!")
    print("Escolha o modo de jogo:")
    print("1. Jogador vs Máquina")
    print("2. Jogador vs Jogador")
    print("3. Sair do jogo")

    opcao = input("Digite o número da opção desejada: ")

    if opcao == "1":
        jogo_contra_maquina()
    elif opcao == "2":
        jogo_contra_jogador()
    elif opcao == "3":
        sys.exit()
    else:
        print("Opção inválida. Tente novamente.")
        time.sleep(1)
        main()

if __name__ == "__main__":
    main()