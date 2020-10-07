const int numServos = 16; 
const int numWalkFrames = 4; 
 
struct WalkFrame{ 
    float servoAngles[numServos]; 
    float delayTillNextFraame; 
}; 
 
static const WalkFrame walkFrames[numWalkFrames] = { 
.... ///initialize with predefined values. 
} 
 
void operateRobot(){ 
    int frameIndex = 0; 
    while(true){ 
        const auto& frame = walkFrames[frameIndex]; 
        for (int servoIndex = 0; servoIndex < numSerovs; servoIndex++) 
            setServoAngle(servoIndex, frame[servoIndex]) 
        sleep(frame.delayTillNextFrame); 
        frameIndex = (frameIndex + 1) % numWalkFrames; 
    } 
} 