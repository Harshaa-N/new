#include <iostream>

float calculate_bmi(float weight, float height) {
    // Calculate the Body Mass Index (BMI)
    float bmi = weight / (height * height);
    return bmi;
}

std::string check_blood_pressure(int systolic, int diastolic) {
    // Check the blood pressure reading
    if (systolic < 120 && diastolic < 80) {
        return "Normal";
    } else if (systolic < 130 && diastolic < 80) {
        return "Elevated";
    } else if (systolic < 140 || diastolic < 90) {
        return "Stage 1 Hypertension";
    } else {
        return "Stage 2 Hypertension";
    }
}

std::string check_cholesterol(int total, int ldl, int hdl) {
    // Check the cholesterol levels
    if (total < 200 && ldl < 100 && hdl >= 40) {
        return "Normal";
    } else if (total < 240 && ldl < 130 && hdl >= 40) {
        return "Borderline High";
    } else {
        return "High";
    }
}

std::string check_glucose(int fasting) {
    // Check the glucose level
    if (fasting < 100) {
        return "Normal";
    } else if (fasting < 126) {
        return "Prediabetes";
    } else {
        return "Diabetes";
    }
}

void perform_general_checkup() {
    // Get user input for general health metrics
    float weight, height;
    int systolic, diastolic, total_cholesterol, ldl_cholesterol, hdl_cholesterol, fasting_glucose;

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Enter your height in meters: ";
    std::cin >> height;
    std::cout << "Enter your systolic blood pressure reading: ";
    std::cin >> systolic;
    std::cout << "Enter your diastolic blood pressure reading: ";
    std::cin >> diastolic;
    std::cout << "Enter your total cholesterol level: ";
    std::cin >> total_cholesterol;
    std::cout << "Enter your LDL cholesterol level: ";
    std::cin >> ldl_cholesterol;
    std::cout << "Enter your HDL cholesterol level: ";
    std::cin >> hdl_cholesterol;
    std::cout << "Enter your fasting glucose level: ";
    std::cin >> fasting_glucose;

    // Calculate BMI
    float bmi = calculate_bmi(weight, height);
    std::cout << "BMI: " << bmi << std::endl;

    // Check blood pressure
    std::string blood_pressure_result = check_blood_pressure(systolic, diastolic);
    std::cout << "Blood Pressure: " << blood_pressure_result << std::endl;

    // Check cholesterol levels
    std::string cholesterol_result = check_cholesterol(total_cholesterol, ldl_cholesterol, hdl_cholesterol);
    std::cout << "Cholesterol: " << cholesterol_result << std::endl;

    // Check glucose level
    std::string glucose_result = check_glucose(fasting_glucose);
    std::cout << "Glucose: " << glucose_result << std::endl;
}

int main() {
    // Perform general check-up
    perform_general_checkup();

    return 0;
}