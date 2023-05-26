import sys

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
        if base_origem == "--b":
            decimal = binario_para_decimal(numero)
            tipo_origem = "binário"
        elif base_origem == "--o":
            decimal = octal_para_decimal(numero)
            tipo_origem = "octal"
        elif base_origem == "--d":
            decimal = int(numero)
            tipo_origem = "decimal"
        elif base_origem == "--h":
            decimal = hexadecimal_para_decimal(numero)
            tipo_origem = "hexadecimal"
        else:
            return None, None
    except ValueError:
        return None, None

    resultados = {}
    if "--all" in bases_destino:
        bases_destino = ["--b", "--o", "--d", "--h"]

    for base_destino in bases_destino:
        if base_destino != base_origem:
            resultado = converter_base(decimal, base_destino)
            if resultado:
                resultados[base_destino] = resultado
    
    return resultados, tipo_origem

def exibir_ajuda():
    print('============================================================')
    print('Uso: python basex.py <número> <base> <BASES DE CONVERSÃO>')
    print('Exemplo: python basex.py 23456 --d --b --o')
    print()
    print('Opções de base:')
    print('--b\t\tbinário')
    print('--o\t\toctal')
    print('--d\t\tdecimal')
    print('--h\t\thexadecimal')
    print('--all\t\ttodas as bases')
    print('--help\t\tajuda do sistema')
    print('--version\tversão do código e direitos de uso')
    print('============================================================')

def exibir_versao():
    print('==================================')
    print('    baseX - Conversor de bases    ')
    print('==================================')
    print('Versão: 1.0')
    print('Direitos de Uso: Livre')
    print('==================================')

def exibir_resultados(numero, resultados, tipo_origem):
    bases = {
        "--b": "binário",
        "--o": "octal",
        "--d": "decimal",
        "--h": "hexadecimal"
    }
    print(f"Número de origem: {numero}({tipo_origem})")
    for base, resultado in resultados.items():
        print(f"{resultado}({bases[base]})", end=" ")
    print()

def main():
    if len(sys.argv) < 2 or len(sys.argv) > 7:
        print('=============================================')
        print('  Erro: Número incorreto de parâmetros.')
        exibir_ajuda()
        return

    if len(sys.argv) == 2 and sys.argv[1] == '--help':
        exibir_ajuda()
        return
    
    if len(sys.argv) == 2 and sys.argv[1] == '--version':
        exibir_versao()
        return

    numero = sys.argv[1]
    base_origem = sys.argv[2]
    bases_destino = sys.argv[3:]

    if base_origem not in ['--b', '--o', '--d', '--h']:
        print('==========================================')
        print('  Erro na base de origem do número.')
        exibir_ajuda()
        return

    for base in bases_destino:
        if base not in ['--b', '--o', '--d', '--h', '--all']:
            print('========================================')
            print(f'  Erro: Base de conversão inválida: {base}')
            exibir_ajuda()
            return

    resultados, tipo_origem = converter_numero(numero, base_origem, bases_destino)

    if resultados is None:
        print('==========================================')
        print('  Erro: Número inválido para a base fornecida.')
        exibir_ajuda()
        return

    if not resultados:
        print('==========================================')
        print('  Erro de parâmetros de conversão.')
        exibir_ajuda()
        return

    exibir_resultados(numero, resultados, tipo_origem)

if __name__ == '__main__':
    main()