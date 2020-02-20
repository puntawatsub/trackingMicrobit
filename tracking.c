// replace left with average of the left side
// replace right with average of the right side
input.onButtonPressed(Button.A, function () {
    if (iBIT.ReadADC(ibitReadADC.ADC0) > "left" && iBIT.ReadADC(ibitReadADC.ADC1) > "Right" {
        iBIT.Motor(ibitMotor.Forward, 70)
    } else if (iBIT.ReadADC(ibitReadADC.ADC0) > "left" && iBIT.ReadADC(ibitReadADC.ADC1) < "Right") {
        iBIT.Spin(ibitSpin.Left, 80)
    } else if (iBIT.ReadADC(ibitReadADC.ADC0) < "left" && iBIT.ReadADC(ibitReadADC.ADC1) > "Right") {
        iBIT.Spin(ibitSpin.Right, 80)
    } else if (iBIT.ReadADC(ibitReadADC.ADC0) < "left" && iBIT.ReadADC(ibitReadADC.ADC1) > "Right") {
        iBIT.MotorStop()
    }

})
