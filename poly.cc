#include <iostream>
#include <string>
#include <sstream>
#include <vector>

struct Point{double a,b ;};

struct Polygon { std::vector<Point>TuP{}; };
Polygon construct(const std::vector<double>& x, const std::vector<double>& y);
double volume(const Polygon& polygon);

int main()
{
   std::vector<double> a = {0.0,2.0,2.0,0.0};
   std::vector<double> b = {0.0,0.0,2.0,2.0};

Polygon ss = construct( a,b);

for (int i ; i <ss.TuP.size() ; i++ )
{

std:: cout<<'('<<ss.TuP[i].a<<" , ";
std::cout <<ss.TuP[i].b<<')'<<std::endl;

}
std::cout<<volume (ss);
return 0 ;
}


Polygon construct(const std::vector<double>& x, const std::vector<double>& y)
{
Polygon Result={} ;

for (int i ; i < x.size();i++)
{
 Point P {  x[i], y[i]};
Result.TuP.push_back(P);
}
return Result;
}

double volume(const Polygon& polygon){

  double A=0 ; // msa7a
  //double xi=polygon.;
 int n = polygon.TuP.size();
  for (int i=0 ; i< n-1;i++)
 {
   Point x = polygon.TuP[i] ;
   Point x1;
   if(i+1<n)
    x1= polygon.TuP[i+1];
   else  x1 =polygon.TuP[0] ;
   //std::cout<<x.a << "," << x.b <<"-"<<x1.a<<","<<x1.b <<std::endl ;
   A = A+(0.5)*((x.a)*(x1.b)-(x1.a)*(x.b)) ;
 }
  return A ;
}
