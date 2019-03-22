#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);   //背景色
    ofEnableAlphaBlending();    //アルファチャネルを有効化
    ofSetCircleResolution(64);  //円の解像度
    
    model_path = "Escalator 1.3DS";
    mAssimpModelLoader.setScale(0.5, 0.5, 0.5);
    mAssimpModelLoader.loadModel(model_path);
    
    for(int i = 0 ; i <  ofGetWidth() ; i ++){
         random[i] = ofRandom(-1.0 , 1.0 );
        
    }
    


    


}

//--------------------------------------------------------------
void ofApp::update(){
     mAssimpModelLoader.update();
     cam.lookAt(ofVec3f(0,45-ofGetElapsedTimef()*0.5,60));

    
    cout << cam.getPosition() << endl;
    //cout << cam.getDistance() << endl;
    
    cam.setPosition(0, 10+2*ofGetElapsedTimef(), 103-3*ofGetElapsedTimef());
    
//    light.enable();
//    light.setPosition(mAssimpModelLoader.getPosition() + ofPoint(0, 0, 1000));

}

//--------------------------------------------------------------
void ofApp::draw(){

//    //エスカレーター側面 右側
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
//    cam.begin();
//    ofSetColor(255);
//    ofRotateY(90);
//    ofRotateZ(35);
//    ofTranslate(-60,30,-20);
//    for(int i = 0 ; i < 200 ; i+= 3){
//        i += random[i];
//        ofRect(i, 0, 0.5, 30); //四角形を描画
//    }
//    cam.end();
//    ofPopMatrix();

    
    
    //隣エスカレーター側面 右側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofSetColor(255);
    ofRotateY(90);
    ofRotateZ(50);
    ofTranslate(-60,-20,-40);
    for(int i = 0 ; i < 200 ; i+= 3){
        i += random[i];
        ofRect(i, 0, 0.5, 100); //四角形を描画
    }
    cam.end();
    ofPopMatrix();
    
    //隣エスカレーター側面 左側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofSetColor(255);
    ofRotateY(90);
    ofRotateZ(50);
    ofTranslate(-60,-20,40);
    for(int i = 0 ; i < 200 ; i+= 3){
        i += random[i];
        ofRect(i, 0, 0.5, 100); //四角形を描画
    }
    cam.end();
    ofPopMatrix();
    
    
    
    
    
    //エスカレーター脇 右側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofSetColor(255);
    ofRotateY(90);
    ofRotateZ(35);
    ofRotateX(90);
    ofTranslate(-60,30,-20);
    for(int i = 0 ; i < 200 ; i+= 3){
        i += random[i];
        ofRect(i, 0, 0.5, 30); //四角形を描画
    }
    cam.end();
    ofPopMatrix();
    

//    //エスカレーター側面 左側
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
//    cam.begin();
//    ofSetColor(255);
//    ofRotateY(90);
//    ofRotateZ(35);
//    ofTranslate(-60,30,20);
//    for(int i = 0 ; i < 200 ; i+= 3){
//        i += random[i];
//        ofRect(i, 0, 0.5, 30); //四角形を描画
//    }
//    cam.end();
//    ofPopMatrix();
    //エスカレーター脇 右側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofSetColor(255);
    ofRotateY(90);
    ofRotateZ(35);
    ofRotateX(90);
    ofTranslate(-60,-55,-20);
    for(int i = 0 ; i < 200 ; i+= 3){
        i += random[i];
        ofRect(i, 0, 0.5, 30); //四角形を描画
    }
    cam.end();
    ofPopMatrix();
    
    
    
    
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    
    cam.begin();
    //ofDrawGrid(10);

    ofRotateZ(180);
    ofTranslate(0,30);
    ofSetLineWidth(1);
    ofSetColor(150,50);
    mAssimpModelLoader.drawVertices(); //モデルの頂点を描画
    mAssimpModelLoader.drawFaces();  //モデルの面を描画
    cam.end();
    ofPopMatrix();
    
    
    //検証用エスカレーター側面 右側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofRotateY(90);
    ofRotateZ(35);
    ofTranslate(-60,30,-20);
    ofSetColor(0,255);
    for(int i = 0 ; i < 200 ; i++){
        if(i%4 == 0){
            //i += random[i];
            //ofSetColor(0x000000);
            ofRect(i, 0, 3.5, 30); //四角形を描画
            
        }
    }
    cam.end();
    ofPopMatrix();
    
    //検証用エスカレーター側面 左側
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    cam.begin();
    ofRotateY(90);
    ofRotateZ(35);
    ofTranslate(-60,30,20);
    ofSetColor(0,255);
    for(int i = 0 ; i < 200 ; i++){
        if(i%4 == 0){
            //i += random[i];
            //ofSetColor(0x000000);
            ofRect(i, 0, 3.5, 30); //四角形を描画
            
        }
    }
    cam.end();
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
