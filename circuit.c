#include <stdio.h>

int main() {
    double R1 = 3.0, R2 = 6.0, R3 = 4.0, RF = 12.0, V_battery = 12.0;
    double R_parallel = 1 / ((1/R2) + (1/R3) + (1/RF));
    double R_total = R1 + R_parallel;
    double I_total = V_battery / R_total;
    double V_R1 = I_total * R1;
    double V_parallel = V_battery - V_R1;
    double I_R2 = V_parallel / R2;
    double I_R3 = V_parallel / R3;
    double I_RF = V_parallel / RF;

    printf("Component\tV (volts)\tI (amps)\tR (ohms)\n");
    printf("Battery\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_battery, I_total, R_total);
    printf("    R1\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_R1, I_total, R1);
    printf("    R2\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_parallel, I_R2, R2);
    printf("    R3\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_parallel, I_R3, R3);
    printf("    RF\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_parallel, I_RF, RF);

    return 0;
}