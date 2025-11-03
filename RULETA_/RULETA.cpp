#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// --- FUNCIONES DE APOYO ---
string getColor(int number, int lang) {
    int redNumbers[] = {1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
    for (int r : redNumbers) {
        if (number == r) return (lang == 1) ? "Rojo" : "Red";
    }
    if (number == 0) return (lang == 1) ? "Verde" : "Green";
    return (lang == 1) ? "Negro" : "Black";
}

int main() {
    srand(time(0));
    int idioma; // 1 = Español, 2 = Inglés
    int opcion, apuesta, resultado, numeroElegido;
    int saldo = 100;
    char jugarDeNuevo;

    cout << "=== ROULETTE / RULETA ===\n";
    cout << "Select language / Seleccione idioma:\n";
    cout << "1. Español\n";
    cout << "2. English\n";
    cout << "Choose / Elija: ";
    cin >> idioma;
    cout << "\n";

    do {
        cout << ((idioma == 1) ? "Saldo actual: " : "Current balance: ") << saldo << " créditos / credits.\n\n";
        if (idioma == 1) {
            cout << "Opciones de apuesta:\n";
            cout << "1. Número exacto (0-36)\n";
            cout << "2. Par / Impar\n";
            cout << "3. Rojo / Negro\n";
            cout << "4. Bajo (1-18) / Alto (19-36)\n";
            cout << "Elija una opción: ";
        } else {
            cout << "Betting options:\n";
            cout << "1. Exact number (0-36)\n";
            cout << "2. Even / Odd\n";
            cout << "3. Red / Black\n";
            cout << "4. Low (1-18) / High (19-36)\n";
            cout << "Choose an option: ";
        }
        cin >> opcion;

        cout << ((idioma == 1) ? "Ingrese el monto de su apuesta: " : "Enter your bet amount: ");
        cin >> apuesta;

        if (apuesta > saldo || apuesta <= 0) {
            cout << ((idioma == 1) ? "Apuesta inválida.\n\n" : "Invalid bet.\n\n");
            continue;
        }

        resultado = rand() % 37;
        string color = getColor(resultado, idioma);
        bool gana = false;
        int ganancia = 0;

        switch(opcion) {
            case 1: // Número exacto
                cout << ((idioma == 1) ? "Elija un número (0-36): " : "Choose a number (0-36): ");
                cin >> numeroElegido;
                if (numeroElegido < 0 || numeroElegido > 36) {
                    cout << ((idioma == 1) ? "Número inválido.\n" : "Invalid number.\n");
                    continue;
                }
                if (resultado == numeroElegido) {
                    gana = true;
                    ganancia = apuesta * 35;
                }
                break;

            case 2: // Par / Impar
                if (idioma == 1) cout << "Apuesta por (0 = Par, 1 = Impar): ";
                else cout << "Bet on (0 = Even, 1 = Odd): ";
                cin >> numeroElegido;
                if ((resultado != 0) && (resultado % 2 == numeroElegido)) {
                    gana = true;
                    ganancia = apuesta * 2;
                }
                break;

            case 3: // Rojo / Negro
                if (idioma == 1) cout << "Apuesta por (0 = Rojo, 1 = Negro): ";
                else cout << "Bet on (0 = Red, 1 = Black): ";
                cin >> numeroElegido;
                if ((numeroElegido == 0 && color == ((idioma == 1) ? "Rojo" : "Red")) ||
                    (numeroElegido == 1 && color == ((idioma == 1) ? "Negro" : "Black"))) {
                    gana = true;
                    ganancia = apuesta * 2;
                }
                break;

            case 4: // Bajo / Alto
                if (idioma == 1) cout << "Apuesta por (0 = Bajo 1-18, 1 = Alto 19-36): ";
                else cout << "Bet on (0 = Low 1-18, 1 = High 19-36): ";
                cin >> numeroElegido;
                if ((numeroElegido == 0 && resultado >= 1 && resultado <= 18) ||
                    (numeroElegido == 1 && resultado >= 19 && resultado <= 36)) {
                    gana = true;
                    ganancia = apuesta * 2;
                }
                break;

            default:
                cout << ((idioma == 1) ? "Opción inválida.\n" : "Invalid option.\n");
                continue;
        }

        cout << ((idioma == 1) ? "\nGirando la ruleta...\n" : "\nSpinning the roulette...\n");
        cout << ((idioma == 1) ? "Resultado: " : "Result: ") << resultado 
             << " (" << color << ")\n";

        if (gana) {
            cout << ((idioma == 1) ? "¡Ganaste " : "You won ") << ganancia 
                 << ((idioma == 1) ? " créditos!\n" : " credits!\n");
            saldo += ganancia;
        } else {
            cout << ((idioma == 1) ? "Perdiste la apuesta.\n" : "You lost the bet.\n");
            saldo -= apuesta;
        }

        if (saldo <= 0) {
            cout << ((idioma == 1) ? "\nTe quedaste sin créditos. ¡Fin del juego!\n" : "\nYou're out of credits. Game over!\n");
            break;
        }

        cout << ((idioma == 1) ? "\n¿Jugar de nuevo? (s/n): " : "\nPlay again? (y/n): ");
        cin >> jugarDeNuevo;

    } while((idioma == 1 && (jugarDeNuevo == 's' || jugarDeNuevo == 'S')) ||
            (idioma == 2 && (jugarDeNuevo == 'y' || jugarDeNuevo == 'Y')));

    cout << ((idioma == 1) ? "\nSaldo final: " : "\nFinal balance: ") << saldo 
         << ((idioma == 1) ? " créditos.\n" : " credits.\n");
    cout << ((idioma == 1) ? "Gracias por jugar a la Ruleta Virtual!\n" : "Thanks for playing Virtual Roulette!\n");

    return 0;
}