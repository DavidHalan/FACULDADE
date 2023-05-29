import random

def escolher_palavra():
    palavras = ['banana', 'abacaxi', 'laranja', 'morango', 'uva']
    return random.choice(palavras)

def atualizar_palavra(palavra_secreta, palavra_adivinhada, letra):
    nova_palavra = ''
    for i in range(len(palavra_secreta)):
        if palavra_secreta[i] == letra:
            nova_palavra += letra
        else:
            nova_palavra += palavra_adivinhada[i]
    return nova_palavra

def jogo_da_forca():
    max_tentativas = 6
    tentativas = 0
    palavra_secreta = escolher_palavra()
    palavra_adivinhada = '-' * len(palavra_secreta)

    print("Bem-vindo ao Jogo da Forca!")
    print("Adivinhe a palavra secreta digitando uma letra de cada vez.")
    print(f"Você tem {max_tentativas} tentativas.")

    while tentativas < max_tentativas:
        print("\n" + palavra_adivinhada)

        letra = input("Digite uma letra: ")
        if len(letra) != 1:
            print("Por favor, digite apenas uma letra.")
            continue

        if letra in palavra_secreta:
            palavra_adivinhada = atualizar_palavra(palavra_secreta, palavra_adivinhada, letra)
            if palavra_adivinhada == palavra_secreta:
                print("Você venceu!")
                return
        else:
            tentativas += 1
            print(f"Letra errada! Tentativas restantes: {max_tentativas - tentativas}")

    print("Você perdeu! A palavra secreta era:", palavra_secreta)

jogo_da_forca()
