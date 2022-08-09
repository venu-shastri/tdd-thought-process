int add(int x,int y){
    return x+y;
}

//test Env
//Test Specification
//Given 10,20 as an aruments When Add is called Then Result 30 is expected
//Arrange Act Assert
//Arrange - Given
int expectedValue=30;
int operand_x=10;
int operand_y=20;

//Act - When 
int actualValue=add(operand_x,operand_y);

//One Assertion
//Compare actualValue == expectedValue
