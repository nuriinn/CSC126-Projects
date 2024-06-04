#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main ()
{
	//declaration
	string description, username, password;
	int options, surfaceArea;
	double side, volume, surface, length, width, height, radius, weight;
	char proceed;
	
	//chosing the 3D GEOMETRY
	char code[7];
	
	do{
		int counter = 1;
		const double pi = 3.142;
		cout<<"\nEnter your code: ";
		
		while(counter <=3 ){
		cin.getline(code, 7);
		
	
			if(strcmp(code, "A") == 0 || strcmp(code, "a") == 0){
					cout<<"Your chosen 3D Geometry shape is Cube."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  "<<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the side(s): " <<endl;
						    cin>>side;
						    volume = pow(side,3);
						    cout<<"The volume for the Cube is " <<volume;
					    }
					    else if (options == '2')
						{
					    	cout<<"Please enter the side(s): " <<endl;
					    	cin>>side;
						    surface = pow((6,side),2);
						    cout<<"The surface for the Cube is " <<surface;
					    }
			}
	
			else if (strcmp(code, "B") == 0 || strcmp(code, "b") == 0){
					cout<<"Your chosen 3D Geometry shape is Rectangel Solid."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  " <<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the length: " <<endl;
						    cin>>length;
						    cout<<"Please enter the width: " <<endl;
						    cin>>width; 
						    cout<<"Please enter the height: " <<endl;
						    cin>>height;
						    volume = length * width * height;
						    cout<<"The volume for the Rectangle Solid is " <<volume;
					    }
					    else if (options == '2')
						{
					    	cout<<"Please enter the length: " <<endl;
					    	cin>>length;
						    cout<<"Please enter the width: " <<endl;
						    cin>>width;
						    cout<<"Please enter the height: " <<endl;
						    cin>>height;
						    surface = (2*length*weight) + (2*length*height) + (2*weight*height);
						    cout<<"The surface for the Rectangle Solid is " <<surface;
					    }
			}
	
			else if (strcmp(code, "C") == 0 || strcmp(code, "c") == 0){
					cout<<"Your chosen 3D Geometry shape is Sphere." <<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  "<<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the radius: " <<endl;
						    cin>>radius;
						    volume = 1.33*pi*pow (radius,2);
						    cout<<"The volume for the Rectangle Solid is " <<volume;
					    }
					    else if (options == '2')
						{
					        cout<<"Please enter the radius: " <<endl;
					        cin>>radius;
						    volume =4*pi*pow (radius,2);
						    cout<<"The surface for the Rectangle Solid is " <<surface;
					    }
			}
	
			else if (strcmp(code, "D") == 0 || strcmp(code, "d") == 0){
					cout<<"Your chosen 3D Geometry shape is Right Circular Cylinder."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  " <<options;
					    if (options == '1')
						{
						    cout<<"Please enter the radius: " <<endl;
						    cin>>radius;
						    cout<<"Please enter the height: " <<endl;
						    cin>>height;
						    volume = pi*pow(radius,2)*height;
						    cout<<"The volume for the Right Circular Cylinder is " <<volume;
					    }
					    else if (options == '2')
						{
					        cout<<"Please enter the radius: "<<endl;
					        cin>>radius;
					         cout<<"Please enter the height: " <<endl;
					         cin>>height;
						    surface = 2*pi*radius*height + 2*pi*pow(radius,2);
						    cout<<"The surface for the Right Circular Cylinder is " <<surface;
					    }
			}
	
			else if (strcmp(code, "E") == 0 || strcmp(code, "e") == 0){
					cout<<"Your chosen 3D Geometry shape is Right Circular Cone."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  "<<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the radius: " <<endl;
						    cin>>radius;
						    cout<<"Please enter the height: " <<endl;
						    cin>>height;
						    volume = 0.33*pi*pow(radius,2)*height;
						    cout<<"The volume for the Right Circular Cone is " <<volume;
					    }
					    else if (options == '2')
						{
					        cout<<"Please enter the radius: " <<endl;
					        cin>>radius;
					         cout<<"Please enter the height: " <<endl;
					         cin>>height;
						    surface = pi*radius; sqrt(pow(side,2));+4*pow(height,2));
						    cout<<"The surface for the Right Circular Cone is " <<surface;
					    }
			}	 
	
			else if (strcmp (code, "F") == 0 || strcmp (code, "f") == 0){
					cout<<"Your chosen 3D Geometry shape is Square Pyramid."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  "<<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the side: " <<endl;
						    cin>>side;
						    cout<<"Please enter the height: "<<endl;
						    cin>>height;
						    volume = 0.33*sqrt(s,2)*height;
						    cout<<"The volume for the Right Circular Cone is " <<volume;
					    }
					    else if (options == '2')
						{
					        cout<<"Please enter the side: " <<endl;
					        cin>>side;
					         cout<<"Please enter the height: "<<endl;
					         cin>>height;
						    surface = side(side+pow(sqrt(side,2)+4*sqrt(height,2)));
						    cout<<"The surface for the Right Circular Cone is " <<surface;
					    }
			}
	
			else if (strcmp ( code, "G") == 0 || strcmp (code, "g") == 0){
					cout<<"Your chosen 3D Geometry shape is Regular Tetrahedron."<<endl;
					cout<<"Do you want to calculate the ( 1.volume or 2.surface ):  "<<endl;
					cin>>options;
					    if (options == '1')
						{
						    cout<<"Please enter the side: " <<endl;
						    cin>>side;
						    volume = 0.833*pow(2*sqrt(side,3));
						    cout<<"The volume for the Right Circular Cone is " <<volume;
					    }
					    else if (options == '2')
						{
					        cout<<"Please enter the side: "<<endl;
					        cin>>side;
						    surface = pow(3*sqrt(side,2));
						    cout<<"The surface for the Right Circular Cone is " <<surface;
					    }
			}
			counter++;
		}
		
	}while(toupper(proceed) == 'Y');
	cout<<"Press Y to continue: ";
	cin>>proceed;

	
	
	cout<<"End of Program";
	return 0;
	
}
