#include "Header.h"

void displayDeveloperResume() {
    cout << "Developer Resume:\n";
    cout << "Objective:\n";
    cout << "I am a skilled developer with expertise in C++ and Python, capable of tackling complex software projects.\n\n";

    cout << "Skills:\n";
    cout << "- Proficient in C++ and Python programming\n";
    cout << "- Strong problem-solving and algorithmic skills\n";
    cout << "- Experience in developing desktop and web applications\n";
    cout << "- Good understanding of software development methodologies\n";
    cout << "- Excellent communication skills\n\n";

    cout << "Projects:\n";
    cout << "- Developed a C++ application for data analysis\n";
    cout << "- Built a web application using Python and Django framework\n";
    cout << "- Contributed to open-source C++ and Python projects\n";
    cout << "- Implemented efficient algorithms for data processing\n";
    cout << "- Collaborated with cross-functional teams on software projects\n";
}

void displayStudentResume() {
    cout << "Student Resume:\n";
    cout << "Objective:\n";
    cout << "I am an eager and motivated student who has recently embarked on the journey to learn the C++ and Python programming languages.\n\n";

    cout << "Education:\n";
    cout << "- Currently pursuing a Bachelor's degree in Computer Science\n";
    cout << "  [Your University Name], [City, State]\n";
    cout << "  Expected Graduation: [Month Year]\n\n";

    cout << "Skills:\n";
    cout << "- Basic understanding of C++ and Python fundamentals\n";
    cout << "- Enthusiastic about learning and improving programming skills\n";
    cout << "- Strong problem-solving abilities\n";
    cout << "- Good grasp of the English language\n";
    cout << "- Keen to explore new concepts in computer science\n\n";

    cout << "Projects:\n";
    cout << "- Started small personal projects to practice C++ and Python syntax and concepts\n";
    cout << "- Engaged in online coding challenges and exercises to strengthen coding skills\n";
    cout << "- Actively seeking opportunities for hands-on coding experience\n";
    cout << "- Developing a foundational understanding of algorithms and data structures\n";
    cout << "- Open to collaborating on simple coding projects and contributing to a learning community\n";
}

int main() {
    string mode;
    cout << "Choose a mode (DEV or PROD): ";
    cin >> mode;

    if (mode == "DEV", mode == "dev") {
        displayDeveloperResume();
    }
    else if (mode == "PROD", mode == "prod") {
        displayStudentResume();
    }
    else {
        cout << "Unknown mode. Choose DEV or PROD.\n";
    }

    return 0;
}