int main() {
    double R1 = 3.0, R2 = 8.0, R3 = 4.0, RF = 12.0, Vb = 36.0;
    double R23 = R2 + R3;
    double R_parallel = 1.0 / (1.0 / R23 + 1.0 / RF);
    double R_total = R1 + R_parallel;
    double I_total = Vb / R_total;
    double V_R1 = I_total * R1;
    double V_parallel = Vb - V_R1;
    double I_series = V_parallel / R23;
    double I_RF = V_parallel / RF;
    double V_R2 = I_series * R2;
    double V_R3 = I_series * R3;

    printf("Component\tV (volts)\tI (amps)\tR (ohms)\n");
    printf("Battery\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", Vb, I_total, R_total);
    printf("R1\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_R1, I_total, R1);
    printf("R2\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_R2, I_series, R2);
    printf("R3\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_R3, I_series, R3);
    printf("RF\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", V_parallel, I_RF, RF);

    return 0;
}
