#pragma config(Sensor, S1,     ultrasonicSensor, sensorSONAR)
#pragma config(Sensor, S2,     colorSensor,    sensorLightActive)
#pragma config(Sensor, S3,     touchSensor,    sensorTouch)
#pragma config(Motor,  motorB,          rightMotor,    tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1)
	{
	}
	while (true) {
		while(SensorValue[colorSensor] >= 853)
		{
			motor[leftMotor] = 50;
			motor[rightMotor] = 50;
		}
		while(SensorValue[colorSensor] < 853)
		{
			motor[leftMotor] = 20;
			motor[rightMotor] = -20;
		}
	}
}