#include <stdio.h>
int main()
{
    char input;
    float kmsTomiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsTokgs = 0.453592;
    float inchesTometers = 0.0254;

    while (1)
    {
        printf("Enter the input character. q to quit\n     1. kms to miles\n     2. inches to foot\n     3. cms to inches\n     4. pounds to kgs\n     5. inches to meter\n");
        scanf("%c", input);

        switch (input)
        {
        case 'q':
            goto break;

        default:
            break;
        }
    }

    return 0;
}
// kms to miles
// inches to foot
// cms to inches
// pounds to kgs
// inches to meter