  // function pointer declaration  
void validateVitals(int spo2,int heartBeat,int glucoseLevel,void (*ptr)(char*)){
    if(spo2 < 95 ){
            //print  on vital watch retina display
            ptr("SPO2 Critical");
    }
    if(heartBeat < 50 && heartBeat > 160){
        ptr("heartBeat Critical");
    }
    if(glucoseLevel < 80 && glucoseLevel > 140)
    {
        ptr("glucoseLevel Critical");
    }
}

//Never ever part of unit testing
void DisplayOnWatchRetina(char* message){
    cout<<message<<endl;
}
void DisplayOnWatchLCD(char* message){
    cout<<message<<endl;
}

//prod Env
validateVitals(95,120,115,DisplayOnWatchRetina);
validateVitals(95,120,115,DisplayOnWatchLCD);


//Test Env
void fakeDisplay(char* message){
    //Fake Implementation
}
validateVitals(120,45,78,fakeDisplay);
