//
//  main.cpp
//  
//

#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"
#include <cmath>
using namespace std;




int main() {
        //welcome message and program selector
    cout<<"Welcome to the Ultimate Geometry Calculator. Please select one of the following options by entering the corresponding number and pressing enter:"<<endl<<"1- Calculate Area/Perimeter of Shape"<<endl<<"2- View Saved Answers"<<endl;
    

    
    int userProgram, shape, errorCount=0;
    cin>>userProgram;
    
     while(userProgram != 1 && userProgram !=2){
          errorCount=errorCount+1;
          if(errorCount<=2){
               cout<<"Your input was not recognized, try again. Strike: "<<errorCount<<endl;
               
          }
          else{
               cout<<"I'd recomend a reading lesson ;) "<<endl;
               return 0;
          }
          cin>>userProgram;
     }

    while (userProgram==1){
        cout<<"You have selected to calculate an area/perimeter. Please select one of the following shapes:"<<endl<<"1- Cirlce"<<endl<<"2- Triangle"<<endl<<"3- Rectangle"<<endl<<"4- Equilateral Pentagon"<<endl<<"5- Equilateral Hexagon"<<endl;
        cin>>shape;
                    //circle//
        if (shape==1){
            cout<<"Please enter the radius and press enter."<<endl;
            CircleClass object;
            int saveAnswer;
            double userx, area;
            cin>>userx;
            object.setRadius(userx);
             area=object.getRadius()*object.getRadius()*3.14159;
             cout<<"The area of the circle is: "<<area<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
             cin>>saveAnswer;
             if (saveAnswer==1){
                  string fileName;
                  cout<<"Please enter a name without spaces."<<endl;
                  cin>>fileName;
                  ofstream feedbackFile;
                  feedbackFile.open(fileName);
                  if (feedbackFile.is_open()){
                       feedbackFile<<area;
                       feedbackFile.close();
                       cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                  }
             }
                  //circle perimeter calc
             cout<<"Would you like to caclulate it's perimeter?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
             int permAnswer;
             cin>>permAnswer;
             if (permAnswer==1){
                  double sum;
                  sum=object.getRadius()*6.283184;
                  cout<<"The perimeter of the circle is: "<<sum<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                  cin>>saveAnswer;
                  if (saveAnswer==1){
                       string fileName;
                       cout<<"Please enter a name without spaces."<<endl;
                       cin>>fileName;
                       ofstream feedbackFile;
                       feedbackFile.open(fileName);
                       if (feedbackFile.is_open()){
                            feedbackFile<<sum;
                            feedbackFile.close();
                            cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                       }
                  }
             }
             
             
             
             cout<<"Thanks for using the Ultimate Geomety Calculator!"<<endl;
            return 0;
             
        }
        
        
        else
                //triangle//
            if (shape==2){
                cout<<"Enter the base length of the triangle."<<endl;
                int saveAnswer;
                double userbase, userheight, area;
                cin>>userbase;
                cout<<"Enter the height of the triangle."<<endl;
                cin>>userheight;
                TriangleClass baseObject, heightObject;
                baseObject.setBase(userbase);
                heightObject.setHeight(userheight);
                 area=(baseObject.getBase()*heightObject.getHeight())*(.5);
                 cout<<"The area of the triangle is: "<<area<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                 cin>>saveAnswer;
                 if (saveAnswer==1){
                      string fileName;
                      cout<<"Please enter a name without spaces."<<endl;
                      cin>>fileName;
                      ofstream feedbackFile;
                      feedbackFile.open(fileName);
                      if (feedbackFile.is_open()){
                           feedbackFile<<area;
                           feedbackFile.close();
                           cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                      }
                 }
                 
                      //tri perimeter calc
                 cout<<"Would you like to caclulate it's perimeter?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                 int permAnswer;
                 cin>>permAnswer;
                 if (permAnswer==1){
                      double perimeter[2], sum=0;
                      cout<<"Enter the length of each side each followed by enter."<<endl;
                      for (int i=0; i<3; ++i){
                           cin>>perimeter[i];
                           sum+=perimeter[i];
                      }
                      cout<<"The perimeter of the triangle is: "<<sum<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                      cin>>saveAnswer;
                      if (saveAnswer==1){
                           string fileName;
                           cout<<"Please enter a name without spaces."<<endl;
                           cin>>fileName;
                           ofstream feedbackFile;
                           feedbackFile.open(fileName);
                           if (feedbackFile.is_open()){
                                feedbackFile<<sum;
                                feedbackFile.close();
                                cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                           }
                      }
                 };
                 cout<<"Thanks for using the Ultimate Geometry Calculator!"<<endl;
                return 0;
            
            }
            else{
                      //rectangle//
                 if (shape==3){
                      cout<<"Enter the length of the rectangle."<<endl;
                      int saveAnswer;
                      double userlength, userheight, area;
                      cin>>userlength;
                      cout<<"Enter the height of the rectangle."<<endl;
                      cin>>userheight;
                      RectangleClass lengthObject, heightObject;
                      lengthObject.setLength(userlength);
                      heightObject.setHeight(userheight);
                      area=(lengthObject.getLength()*heightObject.getHeight());
                      cout<<"The area of the rectangle is: "<<area<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                      cin>>saveAnswer;
                      if (saveAnswer==1){
                           string fileName;
                           cout<<"Please enter a name without spaces."<<endl;
                           cin>>fileName;
                           ofstream feedbackFile;
                           feedbackFile.open(fileName);
                           if (feedbackFile.is_open()){
                                feedbackFile<<area;
                                feedbackFile.close();
                                cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                           }
                      }
                      
                           //rectangle perimeter calc
                      cout<<"Would you like to caclulate it's perimeter?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                      int permAnswer;
                      cin>>permAnswer;
                      if (permAnswer==1){
                           double perimeter[3], sum=0;
                           cout<<"Enter the length of each side each followed by enter."<<endl;
                           for (int i=0; i<4; ++i){
                                cin>>perimeter[i];
                                sum+=perimeter[i];
                           }
                           cout<<"The perimeter of the rectangle is: "<<sum<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                           cin>>saveAnswer;
                           if (saveAnswer==1){
                                string fileName;
                                cout<<"Please enter a name without spaces."<<endl;
                                cin>>fileName;
                                ofstream feedbackFile;
                                feedbackFile.open(fileName);
                                if (feedbackFile.is_open()){
                                     feedbackFile<<sum;
                                     feedbackFile.close();
                                     cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                                }
                           }
                      };
                      
                      cout<<"Thanks for using the Ultimate Geometry Calculator!"<<endl;
                      return 0;
                      
                 }
                 else{
                           //pentagon//
                      if (shape==4){
                           cout<<"Enter the length of a side."<<endl;
                           int saveAnswer;
                           double userside, area;
                           cin>>userside;
                           PentagonClass sideObject;
                           sideObject.setSide(userside);
                           area=(sideObject.getSide()*sideObject.getSide())*(.25)*sqrt(5*(5+(2*sqrt(5))));
                           cout<<"The area of the pentagon is: "<<area<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                           cin>>saveAnswer;
                           if (saveAnswer==1){
                                string fileName;
                                cout<<"Please enter a name without spaces."<<endl;
                                cin>>fileName;
                                ofstream feedbackFile;
                                feedbackFile.open(fileName);
                                if (feedbackFile.is_open()){
                                     feedbackFile<<area;
                                     feedbackFile.close();
                                     cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                                }
                           }
                           
                                //pentagon perimeter calc
                           cout<<"Would you like to caclulate it's perimeter?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                           int permAnswer;
                           cin>>permAnswer;
                           if (permAnswer==1){
                                double perimeter[4], sum=0;
                                cout<<"Enter the length of each side each followed by enter."<<endl;
                                for (int i=0; i<5; ++i){
                                     cin>>perimeter[i];
                                     sum+=perimeter[i];
                                }
                                cout<<"The perimeter of the pentagon is: "<<sum<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                                cin>>saveAnswer;
                                if (saveAnswer==1){
                                     string fileName;
                                     cout<<"Please enter a name without spaces."<<endl;
                                     cin>>fileName;
                                     ofstream feedbackFile;
                                     feedbackFile.open(fileName);
                                     if (feedbackFile.is_open()){
                                          feedbackFile<<sum;
                                          feedbackFile.close();
                                          cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                                     }
                                }
                           };
                           
                           cout<<"Thanks for using the Ultimate Geometry Calculator!"<<endl;
                           return 0;
                           
                      }
                      else{
                           
                                //hexagon//
                           if (shape==5){
                                cout<<"Enter the length of a side."<<endl;
                                int saveAnswer;
                                double userside, area;
                                cin>>userside;
                                HexagonClass sideObject;
                                sideObject.setSide(userside);
                                area=(sideObject.getSide()*sideObject.getSide())*((.5)*(3*sqrt(3)));
                                cout<<"The area of the hexagon is: "<<area<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                                cin>>saveAnswer;
                                if (saveAnswer==1){
                                     string fileName;
                                     cout<<"Please enter a name without spaces."<<endl;
                                     cin>>fileName;
                                     ofstream feedbackFile;
                                     feedbackFile.open(fileName);
                                     if (feedbackFile.is_open()){
                                          feedbackFile<<area;
                                          feedbackFile.close();
                                          cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                                     }
                                }
                                
                                     //hexagon perimeter calc
                                cout<<"Would you like to caclulate it's perimeter?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                                int permAnswer;
                                cin>>permAnswer;
                                if (permAnswer==1){
                                     double perimeter[5], sum=0;
                                     cout<<"Enter the length of each side each followed by enter."<<endl;
                                     for (int i=0; i<6; ++i){
                                          cin>>perimeter[i];
                                          sum+=perimeter[i];
                                     }
                                     cout<<"The perimeter of the hexagon is: "<<sum<<"."<<endl<<"Would you like to save this answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                                     cin>>saveAnswer;
                                     if (saveAnswer==1){
                                          string fileName;
                                          cout<<"Please enter a name without spaces."<<endl;
                                          cin>>fileName;
                                          ofstream feedbackFile;
                                          feedbackFile.open(fileName);
                                          if (feedbackFile.is_open()){
                                               feedbackFile<<sum;
                                               feedbackFile.close();
                                               cout<<"Your answer has been saved with the name "<<fileName<<"."<<endl;
                                          }
                                     }
                                };
                                
                                
                                cout<<"Thanks for using the Ultimate Geometry Calculator!"<<endl;
                                return 0;
                                
                           }
                           else{


                                cout<<"Please enter a valid shape."<<endl;
                
                                return -1;}
                    }
                 }
            }
    }
          //Answer viewer
     
         while (userProgram==2){
              string fileName;
              int saveLoop=1;
              double savedAnswer;
              while(saveLoop==1){
              cout<<"Enter the name of the answer you saved to display it."<<endl;
              cin>>fileName;
              ifstream file (fileName);
              if (file.is_open()){
                        file>>savedAnswer;
                   cout<<"The name "<<fileName<<" contains: "<<savedAnswer<<endl;
                   
                   cout<<"Would you like to display another saved answer?"<<endl<<"1- Yes"<<endl<<"2- No"<<endl;
                   cin>>saveLoop;
              }
                        else{
                        cout<<"Your answer name was not reconized."<<endl;

                        return -1;}
              }
              
                   if(saveLoop==2){
                        cout<<"Thanks for using the Ultimate Geometry Calculator!"<<endl;
                        return 0;
                   }
              
         }
         


}

