'''
O projeto baseX trata-se de um software de linha de comando para conversão de 
números entre bases posicionais. 
As bases utilizadas são: binária, octal, decimal e hexadecimal. 
'''

import sys

bases = {
        '--b': 'binário',
        '--o': 'octal',
        '--d': 'decimal',
        '--h': 'hexadecimal'
    }

def binario_para_decimal(numero):
    return int(numero, 2)

def binario_para_octal(numero):
    decimal = binario_para_decimal(numero)
    return decimal_para_octal(decimal)

def binario_para_hexadecimal(numero):
    decimal = binario_para_decimal(numero)
    return decimal_para_hexadecimal(decimal)

def decimal_para_binario(numero):
    return bin(numero)[2:]

def decimal_para_octal(numero):
    return oct(numero)[2:]

def decimal_para_hexadecimal(numero):
    return hex(numero)[2:].upper()

def octal_para_decimal(numero):
    return int(numero, 8)

def octal_para_binario(numero):
    decimal = octal_para_decimal(numero)
    return decimal_para_binario(decimal)

def octal_para_hexadecimal(numero):
    decimal = octal_para_decimal(numero)
    return decimal_para_hexadecimal(decimal)

def hexadecimal_para_decimal(numero):
    return int(numero, 16)

def hexadecimal_para_binario(numero):
    decimal = hexadecimal_para_decimal(numero)
    return decimal_para_binario(decimal)

def hexadecimal_para_octal(numero):
    decimal = hexadecimal_para_decimal(numero)
    return decimal_para_octal(decimal)

def converter_base(numero, base):
    if base == '--b':
        return decimal_para_binario(numero)
    elif base == '--o':
        return decimal_para_octal(numero)
    elif base == '--d':
        return str(numero)
    elif base == '--h':
        return decimal_para_hexadecimal(numero)
    else:
        return None

def converter_numero(numero, base_origem, bases_destino):
    try:
        if base_origem == '--b':
            decimal = binario_para_decimal(numero)
            tipo_origem = 'binário'
        elif base_origem == '--o':
            decimal = octal_para_decimal(numero)
            tipo_origem = 'octal'
        elif base_origem == '--d':
            decimal = int(numero)
            tipo_origem = 'decimal'
        elif base_origem == '--h':
            decimal = hexadecimal_para_decimal(numero)
            tipo_origem = 'hexadecimal'
        else:
            return None, None
    except:
        return None, None

    resultados = {}
    if '--all' in bases_destino:
        bases_destino = ['--b', '--o', '--d', '--h']

    for base_destino in bases_destino:
        if base_destino != base_origem:
            resultado = converter_base(decimal, base_destino)
            if resultado:
                resultados[base_destino] = resultado
    
    return resultados, tipo_origem

def converter_numeros_arquivo(nome_arquivo):
    try:
        with open(nome_arquivo, 'r') as arquivo:
            linhas = arquivo.readlines()
    except:
        print(f'Erro: Arquivo "{nome_arquivo}" não encontrado.')
        return

    conversoes = []

    for i, linha in enumerate(linhas, start=1):
        dados = linha.strip().split()
        if len(dados) < 2:
            print(f'Erro: Formato inválido na linha {i} do arquivo.')
            continue

        numero = dados[0]
        base_origem = dados[1]
        bases_destino = dados[2:]

        print(f'\nConversão {i}:')
        resultados, tipo_origem = converter_numero(numero, base_origem, bases_destino)

        if base_origem == '--b':
            tipo_origem = 'binário'
        elif base_origem == '--o':
            tipo_origem = 'octal'
        elif base_origem == '--d':
            tipo_origem = 'decimal'
        elif base_origem == '--h':
            tipo_origem = 'hexadecimal'
        
        if resultados is None:
            print(f'Erro: Número inválido para a base fornecida: {numero}({tipo_origem})')
            conversoes.append((numero, None, tipo_origem))
        elif not resultados:
            print(f'Erro de parâmetros de conversão para o número: {numero}({tipo_origem})')
            conversoes.append((numero, None, tipo_origem))
        else:
            conversoes.append((numero, resultados, tipo_origem))
            exibir_resultados(numero, resultados, tipo_origem)

    salvar_arquivo = input('\nDeseja salvar as conversões em um arquivo? (s/n): ')
    if salvar_arquivo.lower() == 's':
        nome_saida = input("Digite o nome do arquivo(sem a extensão): ")
        nome_arquivo_saida = nome_saida + ".txt"
        salvar_conversoes(nome_arquivo, nome_arquivo_saida, conversoes)
    else:
        print('As conversões não serão salvas em arquivo.')

def salvar_conversoes(nome_arquivo, nome_arquivo_saida, conversoes):
    try:
        with open(nome_arquivo_saida, 'w') as arquivo_saida:
            arquivo_saida.write(f'Conversões a partir do arquivo: {nome_arquivo}\n\n')
            for numero, resultados, tipo_origem in conversoes:
                arquivo_saida.write(f'Número de origem: {numero}({tipo_origem})\n')
                if resultados is None:
                    arquivo_saida.write('Erro: Número inválido para a base fornecida.\n')
                elif not resultados:
                    arquivo_saida.write('Erro de parâmetros de conversão.\n')
                else:
                    for base, resultado in resultados.items():
                        arquivo_saida.write(f'{resultado}({bases[base]}) ')
                    arquivo_saida.write('\n')
                arquivo_saida.write('\n')
        print(f'Conversões salvas com sucesso no arquivo: {nome_arquivo_saida}')
    except:
        print(f'Erro ao salvar as conversões no arquivo: {nome_arquivo_saida}')

def exibir_ajuda():
    print('============================================================')
    print('Uso: python basex.py <número> <base> <BASES DE CONVERSÃO>')
    print('Exemplo: python basex.py 23456 --d --b --o')
    print('Para uso de arquivos como parâmetros e notas:')
    print('Uso: python basex.py --file <nome do arquivo>')
    print('Notas: pyhton basex.py --help file')
    print('Exemplo: python basex.py --file entrada.txt')
    print()
    print('Opções de base:')
    print('--b\t\tbinário')
    print('--o\t\toctal')
    print('--d\t\tdecimal')
    print('--h\t\thexadecimal')
    print('--all\t\ttodas as bases')
    print('--file\t\tconversão de números a partir de um arquivo')
    print('--help\t\tajuda do sistema')
    print('--version\tversão do código')
    print('============================================================')

def exibir_nota_file():
    print('Nota para o uso do parametro "--file" para evitar erros:')
    print()
    print('As informações no arquivo devem estar neste formato: <numero> <base> <bases de conversão>')
    print('Se você fornecer um arquivo .bin por exemplo, o código tentará ler o conteúdo desse arquivo.')
    print('No entanto, a conversão de base depende da interpretação correta dos dados no arquivo.')
    print('Se o arquivo contiver dados que não possam ser interpretados como números ou não estiverem formatados corretamente para a conversão de base, podem ocorrer erros durante a execução do programa.')
    print('Certifique-se de fornecer arquivos de texto com formato adequado para evitar erros de conversão.\n')

def exibir_versao():
    print('==================================')
    print('    baseX - Conversor de bases    ')
    print('==================================')
    print('Versão: 2.0')
    print('Direitos de Uso: Livre')
    print('==================================')

def exibir_resultados(numero, resultados, tipo_origem):
    print(f'Número de origem: {numero}({tipo_origem})')
    for base, resultado in resultados.items():
        print(f'{resultado}({bases[base]})', end=' ')
    print()

def informar_parametros_invalidos(indice):
    parametros_invalidos = sys.argv[indice:]
    print(f'\nERRO: Parâmetros inválidos "{" ".join(parametros_invalidos)}"!')
    print('Use: "python basex --help" para informações de uso do programa!\n')


def main():
    if len(sys.argv) > 1:
        if sys.argv[1] == '--version' and len(sys.argv) == 2:
            exibir_versao()
        elif sys.argv[1] == '--help' and len(sys.argv) == 2:
            exibir_ajuda()
        elif sys.argv[1] == '--help' and len(sys.argv) == 3 and sys.argv[2] == 'file':
            exibir_nota_file()
        elif sys.argv[1] == '--help' and sys.argv[2] == 'file' and len(sys.argv) > 3:
            informar_parametros_invalidos(3)
        elif (sys.argv[1] == '--help' or sys.argv[1] == '--version') and len(sys.argv) >= 3:
            informar_parametros_invalidos(2)
        elif sys.argv[1] == '--file' and len(sys.argv) == 3:
            if not sys.argv[2].endswith('.txt'):
                arquivo = sys.argv[2] + '.txt'
            converter_numeros_arquivo(arquivo)
        elif sys.argv[1] == '--file' and len(sys.argv) > 3:
            informar_parametros_invalidos(3)
        elif sys.argv[3] == '--all' and len(sys.argv) > 4:
            informar_parametros_invalidos(4)
        elif len(sys.argv) < 7:
            numero = sys.argv[1]
            base_origem = sys.argv[2]
            bases_destino = sys.argv[3:]

            resultados, tipo_origem = converter_numero(numero, base_origem, bases_destino)

            if resultados is None:
                print(f'\nErro: Número inválido para a base fornecida: {numero}({bases[base_origem]})\n')
            elif not resultados:
                print(f'\nErro de parâmetros de conversão para o número: {numero}({bases[base_origem]})\n')
            else:
                exibir_resultados(numero, resultados, tipo_origem)
        else:
            informar_parametros_invalidos(6)
    else:
        print('\nERRO: Falta de parâmetros!')
        print('Use: "python basex --help" para informações de uso do programa!\n')

if __name__ == '__main__':
    main()
