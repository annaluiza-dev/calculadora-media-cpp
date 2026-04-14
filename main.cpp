#include <iostream>
using namespace std;

int main() {
    float n1, n2, media;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    media = (n1 + n2) / 2;

    cout << "Media: " << media << endl;

    if(media >= 6) {
        cout << "Aprovado!" << endl;
    } else {
        cout << "Reprovado!" << endl;
    }

    return 0;
}
