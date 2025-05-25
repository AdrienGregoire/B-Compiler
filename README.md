# B-Compiler

B-Compiler est un compilateur minimaliste pour le langage B, le prédécesseur historique du langage C.  
Ce projet vise à lire un fichier .b, analyser son code, puis exécuter ou traduire ce code en affichant le résulat.  
L'objectif est à la fois pédagogique et rétro, pour comprendre les bases de la compilation tout en manipulant un langage simple mais ancien.  

# Fonctionnalités
- Lecture de fichiers source .b.
- Analyse lexicale.
- Analyse syntaxique

# Prérequis
- Compilateur C
- Linux ou Windows
- commande make (optionnel)

# Installation
`git clone http://this_repo  `
`cd B-Compiler`  
`make`

# Usage:
`
./b_compiler your_file.b
`

# Exemple:

`Voici un code en B :`

    main()
    {
        auto i;
        i = 0;
        while (i < 5) {
            putchar('H');
            putchar('E');
            putchar('L');
            putchar('L');
            putchar('O');
            putchar('\\n');
            i = i + 1;
        }
    }
