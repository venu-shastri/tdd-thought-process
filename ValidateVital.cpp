void validateVitals(int spo2,int heartBeat,int glucoseLevel){
    if(spo2 < 95){

            cout<<"SPO2 Critical"<<endl;
    }
    if(heartBeat < 50 && heartBeat > 160){
        cout<<"Abnormal Heart Rythm"<<endl;
    }
    if(glucoseLevel < 80 && glucoseLevel > 140)
    {
        cout<<"glucoseLevel Critical"<<endl;
    }
}

//Test Case Specification - All the paths - Cyclomatic Complexity - number = 1(3..5)
//Dependency
