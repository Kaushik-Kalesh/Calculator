#include <bits/stdc++.h>
using namespace std;
void interest_calc(){
   int inp;
   double n,r,p,i,j,sinterest,cinterest;
   cout << "Enter;\n";
   cout << "Initial Amount = Rs. "; cin >> p;
   cout << "\n";
   cout << "Rate of interest(without %) = "; cin >> r;
   cout << "\n";
   cout << "No.of.years = "; cin >> n;
   cout << "\n";
   cout << "I need to calculate (1.Simple Interest/ 2.Compound Interest): "; cin >> inp;
   cout << "\n";
   if (inp==1){
    sinterest=p*n*r/100;
    cout << "The Simple Interest = Rs. " << sinterest << endl;
    cout << "The Final amount = Rs. " << sinterest+p << endl;
   }
   else {
    i=1+r/100;
    j=pow(i,n);
    cinterest=p*j;
    cout << "The Final amount = Rs. " << cinterest << endl;
   }
}
class mensuration{
protected:
    float a,l,b,h,r,R; int inp;
    float pi = 3.14159;
};
class area:public mensuration{
public:
    void cube(){
        cout << setw(10) << "Side Length = "; cin >> a;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given cube is = " << float(4)*a << " cm²" << endl;
        }
        else {
            cout << "TSA of given cube is = " << float(6)*a << " cm²" << endl;
        }
    }
    void cuboid(){
        cout << "Length = "; cin >> l;
        cout << "Width = "; cin >> b;
        cout << "Height = "; cin >> h;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given cuboid is = " << float(2)*h* (l+b) << " cm²" << endl;
        }
        else {
            cout << "TSA of given cuboid is = " << float(2)* (l*b+b*h+l*h) << " cm²" << endl;
        }
    }
    void cone(){
        cout << setw(11) << "Base Radius = "; cin >> r;
        cout << setw(10) << "Slant height = "; cin >> l;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given cone is = " << pi*r*l << " cm²" << endl;
        }
        else {
            cout << "TSA of given cone is = " << pi*r* (r+l) << " cm²" << endl;
        }
    }
    void cylinder(){
        cout << setw(11) << "Base Radius = "; cin >> r;
        cout << "Height = "; cin >> h;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given cylinder is = " << float(2)*pi*r*h << " cm²" << endl;
        }
        else {
            cout << "TSA of given cylinder is = " << float(2)*pi*r* (r+h) << " cm²" << endl;
        }
    }
    void frustum(){
        cout << setw(10) << "Base Radius-1 = "; cin >> r;
        cout << setw(10) << "Base Radius-2 = "; cin >> R;
        cout << setw(11) << "Slant height = "; cin >> l;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given frustum is = " << pi * l * (R + r) << " cm²" << endl;
        }
        else {
            cout << "TSA of given frustum is = " << pi * l * (R + r) + pi * (r * r + R * R) << " cm²" << endl;
        }
    }
    void hemisphere(){
        cout << setw(10) << "Radius = "; cin >> r;
        cout << "I want to calculate:\n";
        cout << setw(10) << "1. LSA\n";
        cout << setw(10) << "2. TSA\n";
        cout << "Enter: "; cin >> inp;
        if (inp==1){
            cout << "LSA of given hemi-sphere is = " << float(2)*pi*r*r << " cm²" << endl;
        }
        else {
            cout << "TSA of given hemi-sphere is = " << float(3)*pi*r*r << " cm²" << endl;
        }
    }
    void sphere(){
        cout << setw(10) << "Radius = "; cin >> r;
        cout << "The Area of the Sphere is = " << float(4)*pi*r*r << " cm²" << endl;
    }
};
class volume:public mensuration{
public:
    void cube(){
        cout << "Side length = "; cin >> a;
        cout << "The volume of given cube is = " << a*a*a << " cm³" << endl;
    }
    void cuboid(){
        cout << "Length = "; cin >> l;
        cout << "Width = "; cin >> b;
        cout << "Height = "; cin >> h;
        cout << "The volume of given cuboid is = " << l*b*h << " cm³" << endl;
    }
    void cone(){
        cout << "Base Radius = "; cin >> r;
        cout << "Height = "; cin >> h;
        cout << "The volume of given cone is = " << float(1)/float(3) *pi*r*r*h << " cm³" << endl;
    }
    void cylinder(){
        cout << "Base Radius = "; cin >> r;
        cout << "Height = "; cin >> h;
        cout << "The volume of given cylinder is = " << pi*r*r*h << " cm³" << endl;
    }
    void frustum(){
        cout << "Base Radius-1 = "; cin >> r;
        cout << "Base Radius-2 = "; cin >> R;
        cout << "Height = "; cin >> h;
        cout << "The volume of given frustum is = " << (float(1) / float(3)) * pi * h * (r * r + R * R + r * R) << " cm³"  << endl;
    }
    void hemisphere(){
        cout << "Radius = "; cin >> r;
        cout << "The volume of given hemi-sphere is = " << (float(2)/float(3)) *pi*r*r*r << " cm³" << endl;
    }
    void sphere(){
        cout << "Radius = "; cin >> r;
        cout << "The volume of given sphere is = " << (float(4)/float(3)) *pi*r*r*r << " cm³" << endl;
    }
};
void mensuration2(){
    int inp,inp2; char creply;
    area obj1; volume obj2;
    cout << "Select:\n";
    cout << "1. Area\n2. Volume\nEnter: "; cin >> inp;
    cout << "NOTE- Enter all values in centimeters(cm)\n";
    cout << "Select:\n1. Cube\n2. Cuboid\n3. Cone\n4. Cylinder\n5. Frustum\n6. Hemi-sphere\n7. Sphere\nEnter: "; cin >> inp2;
    cout << "Enter;\n\n";
    if (inp==1){
        if (inp2==1){obj1.cube();}
        else if (inp2==2){obj1.cuboid();}
        else if (inp2==3){obj1.cone();}
        else if (inp2==4){obj1.cylinder();}
        else if (inp2==5){obj1.frustum();}
        else if (inp2==6){obj1.hemisphere();}
        else {obj1.sphere();}
    }
     else {
        if (inp2==1){obj2.cube();}
        else if (inp2==2){obj2.cuboid();}
        else if (inp2==3){obj2.cone();}
        else if (inp2==4){obj2.cylinder();}
        else if (inp2==5){obj2.frustum();}
        else if (inp2==6){obj2.hemisphere();}
        else {obj2.sphere();}
     }
}
void unit_converter(){
   string inp2,ainp; int inp;
   float inp3,inp4,f,c,mph,kph,celsius,fahrenheit;
   cout << "I need to convert:\n1. SPEED UNITs\n2. TEMPERATURE UNITs\nEnter: "; cin >> inp;
   if (inp==1){
        cout << "I need to find {mph/kph}: "; cin >> inp2;
        string stemp1="mph",stemp2="kph";
        if (inp2==stemp2){
            cout << setw(10) << "mph = " << setw(10); cin >> inp3;
            kph=inp3*1.60934;
            cout << setw(10) << "kph = " << kph << endl;
        }
        else if (inp2==stemp1){
            cout << setw(10) << "kph = " << setw(10); cin >> inp4;
            mph=inp4/1.60934;
            cout << setw(10) << "mph = " << mph << endl;
        }
        else {
            cout << "Input is wrong!\n";
        }
   }
   else if (inp==2){
      cout << "I need to find (celsius/fahrenheit): "; cin >> ainp;
      string stemp1="celsius",stemp2="fahrenheit";
      if (ainp==stemp1){
            cout << setw(10) << "fahrenheit = " << setw(10); cin >> f;
            celsius=(f-32)*(5/9);
            cout << setw(10) << "celsius = " << celsius << endl;
      }
      else if (ainp==stemp2){
            cout << setw(10) << "celsius = " << setw(10); cin >> c;
            fahrenheit=(c*(9/5))+32;
            cout << setw(10) << "fahrenheit = " << fahrenheit << endl;
      }
      else {
            cout << "Input is wrong!\n";
      }
}
   else {
      cout << "Input is wrong!\n";
   }
}
class stats {
public:
static void mean(vector<float> v) {
    cout << "The average of the numbers is = " << (accumulate(v.begin(),v.end(),0.0))/(v.size()) << endl;
    }
static void median(vector<float> v) {
    sort(v.begin(),v.end());
    float i,j,k,l; int n = v.size();
    float med,med2,med3,val;
    for (i=0;i<n;++i){
        j=i;
        j=(n-1)/2;
        med=v[j];
    }
    for (j=0;j<n;++j){
        med2=v[j];
        k=i;
        k=(n-2)/2;
        med2=v[k];
        l=k+1;
        med3=v[l];
    }
    val=n%2;
    if (val!=0){
        cout << "The median of the numbers is " << med << endl;
    }
    else{
        cout << "The medians of the numbers is " << (med2 + med3)/2 <<  endl;
    }
   }
static void mode(vector<float> v) {
    sort(v.begin(),v.end());
    vector<int> v2; int temp=0;
    for (int i=0;i<v.size();++i) {
        temp = 0;
        for (int j=i;j<v.size();++j) {
            if (v[i] == v[j]) {
                temp++;
            }
        }
        v2.push_back(temp);
    }
    vector<int> v3;
    int max = *max_element(v2.begin(),v2.end());
    for (int i=0;i<v2.size();++i) {
        if (max == v2[i]) {
            v3.push_back(i);
            continue;
        }
    }
    vector<int> v4;
    for (int i=0;i<v3.size();++i) {
        v4.push_back(v[v3[i]]);
    }
    if (v4.size() != 1) {
       cout << "The Mode of the numbers are [";
       for (int i=0;i<v4.size()-1;++i) {
           cout << v4[i] << "," ;
       }
       cout << v4[v4.size()-1] << "]\n";
    }
    else {
       cout << "The Mode of the numbers is " << v4[0] << endl;
    }
    }
};
void ctendancy(){
   int inp,N; char creply;
   vector<float> v; float x;
   cout << "I want to calculate:\n";
   cout << "1. Average\n2. Median\n3. Mode\nEnter: "; cin >> inp;
   cout << "Enter the number of numbers: "; cin >> N;
   cout << "Enter the numbers:\n";
   for (int i=0;i<N;++i) {
     cin >> x;
     v.push_back(x);
   }
   if (inp==1) {stats::mean(v);}
   else if (inp==2) {stats::median(v);}
   else {stats::mode(v);}
}
void speedcalc(){
    float v,s,t;
    int creply1;
    cout << "Enter:\n";
    cout << "1. SPEED\n2. DISTANCE\n3. TIME\n";
    cout << "Enter your choice: "; cin >> creply1;
    cout << "Note-Enter values only in kilometers and hours\n\n";
    cout << "Enter;\n";
    if (creply1==1)
    {
        cout << setw(17) << "Distance = "; cin >> s;
        cout << setw(13) << "Time = "; cin >> t;
        v=s/t;
        cout << setw(14) << "Speed = " << v << " kmph\n";
    }
    else if (creply1==2)
    {
        cout << setw(14) << "Speed = "; cin >> v;
        cout << setw(13) << "Time = "; cin >> t;
        s=v*t;
        cout << setw(17) << "Distance = " << s << " km(s)\n";
    }
    else
    {
        cout << setw(17) << "Distance = "; cin >> s;
        cout << setw(14) << "Speed = "; cin >> v;
        t=s/v;
        cout << setw(13) << "Time = " << t << " hour(s)\n";
    }
}
void QES() {
  float a,b,c,root1,root2;
  cout << "Enter;\n";
  cout << "a = "; cin >> a;
  cout << "\nb = "; cin >> b;
  cout << "\nc = "; cin >> c;
  float discriminant = pow(b,2) - 4*a*c;
  if(discriminant < 0) {
      float i_discriminant  = sqrt(1 - discriminant);
      float part1 = -b/float(2*a);
      float part2 = i_discriminant/float(2*a); 
      cout << "\nThe Roots of the equation [" << a << "x² + " << b << "x + " << c << "] are (" << fixed << setprecision(2) << (part1) << " + " << fixed << setprecision(2) << (part2) << "i) and (" << fixed << setprecision(2) << (part1) << " - " << fixed << setprecision(2) << (part2) << "i) \n";
  }
  else {
      root1 = (-b + sqrt(discriminant))/float(2*a);
      root2 = (-b - sqrt(discriminant))/float(2*a);
      cout << "\nThe Roots of the equation [" << a << "x² + " << b << "x + " << c << "] are (" << fixed << setprecision(2) << root1 << ") and (" << fixed << setprecision(2) << root2 << ")\n";
  }
}
int main(){
    string stemp1="EXPONENTIATION", stemp2="ROOT";
    int i,j,q;
    double temp = 1;
    int n;char creply;
    vector<double> v; double x;
    do
    {
    cout << "I need to calculate:" << endl;
    cout << "1. ADDITION/SUBTRACTION\n2. MULTIPLICATION\n3. DIVISION\n4. EXPONENTIATIONT\n5. ROOT\n";
    cout << "6. CENTRAL TENDANCY\n7. UNIT CONVERTER\n8. SPEED CALCULATOR\n9. MENSURATION CALCULATOR\n";
    cout << "10. INTEREST CALCULATOR\n11. QUADRATIC EQUATION SOLVER\n\n";
    cout << "Enter: "; cin >> n;
    cout << "\n";
    if ((n==1)||(n==2)){
    cout << "Enter total no.of numbers: "; cin >> q;
    cout << "Enter the numbers:" << endl;
    for (i=0;i<q;++i){
        cin >> x;
        v.push_back(x);
        temp=x*temp;
    }
    if (n==1){
        x=accumulate(v.begin(),v.end(),0);
    }
    else if (n==2){
        x=temp;
    }
     cout << "The solution is = " << x << endl;
    }
    else if (n==3){
        float a,b;
        cout << "Enter 2 numbers: "; cin >> a >> b;
        cout << "The Solution is = " << (a/b) << endl;
    }
    else if (n==4){
        float inp1,inp2;
        cout << "Enter the number: "; cin >> inp1;
        cout << "Enter the exponent: "; cin >> inp2;
        x=pow(inp1,inp2);
        cout << "The solution is = " << x << endl;
    }
    else if (n==5){
        float inp1,inp2;
        cout << "Enter the number: "; cin >> inp1;
        cout << "Enter the root number(n): "; cin >> inp2;
        x=pow(inp1,(1/inp2));
        cout << "The solution is = " << x << endl;
    }
    else if (n==6){ctendancy();}
    else if (n==7){unit_converter();}
    else if (n==8){speedcalc();}
    else if (n==9){mensuration2();}
    else if (n==10){interest_calc();}
    else if (n==11){QES();}
    else{
        cout << "Input is wrong!" << endl;
    }
    cout << "\nDo you want to continue(y/n)?\n";
    cin >> creply;
} while (creply!='n');
}
