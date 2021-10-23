
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;
bool crun = true;
bool running = true;
class Diseases {
    public:
        string type;
        string desc;
        string treatment;
        void d001() {
            Diseases d001;
            d001.type = "\t\t\t\t\tAbdominal aortic aneurysm";
            d001.desc = "An abdominal aortic aneurysm (AAA) is a swelling (aneurysm) of the aorta \- the main blood vessel\nthat leads away from the heart, down through the abdomen to the rest of the body.";
            d001.treatment = "Surgery: \tReplacing the weakened section of the blood vessel with a piece of synthetic tubing.\n\nMedications: \tBeta blockers, Angiotensin II receptor blockers, Statins";
            system("cls");
            cout << "****************************************************************************************************\n";
            cout << d001.type;
            cout << "\n****************************************************************************************************";
            cout << "\n\n" << d001.desc << "\n\n" << d001.treatment;
        }
        void d002() {
            Diseases d002;
            d002.type = "\t\t\t\t\t\tAcne";
            d002.desc = "Acne is a common skin condition that affects most people at some point. It causes spots, oily-\nskin and sometimes skin that's hot or painful to touch.\n";
            d002.treatment = "Medications: \tTopical retinoids, topical antibiotics, azelaic acid, antibiotic tablets,\n\t\tand isotretinoin tablets.";
            system("cls");
            cout << "****************************************************************************************************\n";
            cout << d002.type;
            cout << "\n****************************************************************************************************";
            cout << "\n\n" << d002.desc << "\n" << d002.treatment;
        }
        void d003() {
            Diseases d003;
            d003.type = "\t\t\t\t\tAcute cholecystitis";
            d003.desc = "Acute cholecystitis is swelling (inflammation) of the gallbladder. The main symptom of acute-\ncholecystitis is a sudden sharp pain in the upper right side of your tummy (abdomen) that\nspreads towards your right shoulder.";
            d003.treatment = "Surgery: \tA.) Laparoscopic cholecystectomy - a type of keyhole surgery where the gallbladder\n\t\tis removed using special surgical instruments inserted through a number\n\t\tof small cuts (incisions) in your abdomen.\n\n\t\tB.) Open cholecystectomy - where the gallbladder is removed through a single, \n\t\tlarger incision in your abdomen.\n\t\nMedications: \tIf you have a suspected infection, you will also be given antibiotics.";
            system("cls");
            cout << "****************************************************************************************************\n";
            cout << d003.type;
            cout << "\n****************************************************************************************************";
            cout << "\n\n" << d003.desc << "\n\n" << d003.treatment;
        }
        void d004() {
            Diseases d004;
            d004.type = "\t\t\t\t\tAlcohol-related liver disease";
            d004.desc = "Alcohol-related liver disease (ARLD) refers to liver damage caused by excess alcohol intake.\nThere are several stages of severity and a range of associated symptoms including: feeling sick\nweight loss, loss of appetite, confusion or drowsiness, and vomiting blood.";
            d004.treatment = "Treatment: \tThere's currently no specific medical treatment for ARLD. The main treatment\n\t\tis to stop drinking, preferably for the rest of your life. This reduces the risk\n\t\tof further damage to your liver and gives it the best chance of recovering.";
            system("cls");
            cout << "****************************************************************************************************\n";
            cout << d004.type;
            cout << "\n****************************************************************************************************";
            cout << "\n\n" << d004.desc << "\n\n" << d004.treatment;
        }
        void d005() {
            Diseases d005;
            d005.type = "\t\t\t\t\t\tAnxiety";
            d005.desc = "Anxiety is a feeling of unease, such as worry or fear, that can be mild or severe. Anxiety is the\nmain symptom of several conditions, including panic disorder, phobias, post-traumatic stress\ndisorder and social anxiety disorder (social phobia).";
            d005.treatment = "Initial Treatment: \tA.) Cognitive behavioural therapy - CBT helps you to understand how your\n\t\t\tproblems, thoughts, feelings and behaviour affect each other. It can also\n\t\t\thelp you to question your negative and anxious thoughts, and do things you\n\t\t\twould usually avoid because they make you anxious.\n\n\t\t\tB.) Applied relaxation - an alternative type of psychological treatment\n\t\t\tthat can be as effective as CBT in treating GAD. Applied relaxation focuses\n\t\t\ton relaxing your muscles in a particular way during situations that\n\t\t\tusually cause anxiety.\n\nMedications: \t\tYou may be prescribed with the following medications: selective serotonin-\n\t\t\treuptake inhibitors (SSRIs), serotonin and noradrenaline reuptake inhibitors\n\t\t\t(SNRIs), and pregabalin benzodiazepines.";
            system("cls");
            cout << "****************************************************************************************************\n";
            cout << d005.type;
            cout << "\n****************************************************************************************************";
            cout << "\n\n" << d005.desc << "\n\n" << d005.treatment;
        }

};
//Diseases list
void draw() {
    cout << "**************************************************\n";
    cout << "\t\tCommon Diseases Index\n";
    cout << "**************************************************\n\n";
    cout << "1. Abdominal aortic aneurysm\n";
    cout << "2. Acne\n";
    cout << "3. Acute cholecystitis\n";
    cout << "4. Alcohol-related liver disease\n";
    cout << "5. Anxiety\n";

}
//Main menu
void menu() {

    cout << "--------------------------------------------------\n";
    cout << "\t\tCommon Diseases Index\n";
    cout << "--------------------------------------------------\n\n";

    cout << "[1] Open index";
    cout << "\n[2] Project info";
    cout << "\n[3] Exit program\n";


}
//Group members info
void info() {
    cout << "--------------------------------------------------\n";
    cout << "\t\tGroup Members\n";
    cout << "--------------------------------------------------\n\n";
    
    cout << "1.) Noah Macaldo\n" << "2.) Manny Pacquiao\n" << "3.) Bong Go\n" << "4.) Rodrigo Roronoa Zoro\n" << "5.) Bong Revilla\n";

}

int main()
{
    int c;
    int s;
    char back;
    Diseases obj;
    while (running) {

        menu();

        cout << "\n";

        cout << "Enter a command [1-3]: ";
        cin >> c;

        //Input validation for integer
        while (!((c == 1) || (c == 2) || (c == 3))) {
            system("cls");
            menu();
            cout << "\n\aPlease enter a valid input: ";
            cin.clear();
            cin.ignore(123, '\n');
            cin >> c;
        }

        switch (c) {
        case 1:
            system("cls");
            while (crun) {
                draw();
                cout << "\nEnter (0) to return to main menu.";
                cout << "\nSelect number: ";

                //Input validation for integer
                while (!(cin >> s)) {
                    system("cls");
                    draw();
                    cout << "\nEnter (0) to return to main menu.";
                    cout << "\n\aPlease enter a valid input: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                }            

                while (s < 0 || s > 100) {
                    system("cls");
                    draw();
                    cout << "\nEnter (0) to return to main menu.";
                    cout << "\n\aPlease enter a valid input: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    cin >> s;
                }

                if (s == 0) {
                    system("cls");
                    break;
                }

                while (s >= 0 && s <= 100) {
                    switch (s) {
                    case 1:
                        obj.d001();
                        cout << "\n\nBack?(y): ";
                        cin >> back;

                        while (!((back == 'y') || (back == 'Y'))) {
                            system("cls");
                            obj.d001();
                            cout << "\n\n\aWrong input, enter (y) to return: ";
                            cin.clear();
                            cin.ignore(132, '\n');
                            cin >> back;
                        }
                        if (back == 'y' || back == 'Y') {
                            break;
                        }
                    case 2:
                        obj.d002();
                        cout << "\n\nBack?(y): ";
                        cin >> back;

                        while (!((back == 'y') || (back == 'Y'))) {
                            system("cls");
                            obj.d002();
                            cout << "\n\n\aWrong input, enter (y) to return: ";
                            cin.clear();
                            cin.ignore(132, '\n');
                            cin >> back;
                        }
                        if (back == 'y' || back == 'Y') {
                            break;
                        }
                    case 3:
                        obj.d003();
                        cout << "\n\nBack?(y): ";
                        cin >> back;

                        while (!((back == 'y') || (back == 'Y'))) {
                            system("cls");
                            obj.d003();
                            cout << "\n\n\aWrong input, enter (y) to return: ";
                            cin.clear();
                            cin.ignore(132, '\n');
                            cin >> back;
                        }
                        if (back == 'y' || back == 'Y') {
                            break;
                        }
                    case 4:
                        obj.d004();
                        cout << "\n\nBack?(y): ";
                        cin >> back;

                        while (!((back == 'y') || (back == 'Y'))) {
                            system("cls");
                            obj.d004();
                            cout << "\n\n\aWrong input, enter (y) to return: ";
                            cin.clear();
                            cin.ignore(132, '\n');
                            cin >> back;
                        }
                        if (back == 'y' || back == 'Y') {
                            break;
                        }
                    case 5:
                        obj.d005();
                        cout << "\n\nBack?(y): ";
                        cin >> back;

                        while (!((back == 'y') || (back == 'Y'))) {
                            system("cls");
                            obj.d005();
                            cout << "\n\n\aWrong input, enter (y) to return: ";
                            cin.clear();
                            cin.ignore(132, '\n');
                            cin >> back;
                        }
                        if (back == 'y' || back == 'Y') {
                            break;
                        }
                    }
                    system("cls");
                    break;
                    
                }
                
            }
            break; 
        case 2:
            system("cls");
            info();
            
            cout << "\n\nBack?(y): ";
            cin >> back;
            while (!((back == 'y') || (back == 'Y'))) {
                system("cls");
                info();
                cout << "\n\n\aWrong input, enter (y) to return: ";
                cin.clear();
                cin.ignore(132, '\n');
                cin >> back;
            }
            if (back == 'y' || back == 'Y') {
                system("cls");
                break;
            }

        case 3:

            running = false;
        }
    }
}
