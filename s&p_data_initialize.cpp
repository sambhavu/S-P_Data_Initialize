#include<algorithm>
#include<vector>
#include<string> 
#include<cmath>
#include<iostream>
#include<fstream>
using namespace std; 


class equity{
    
    public: 
    
    vector<string> ticker; 
    vector<string> name; 
    vector<string> sector;
    vector<string> links; 
    
    vector<double> price; 
    vector<double> pe; 
    vector<double> psales; 
    vector<double> dividend;
    vector<double> eps; 
    
    
    
    
    equity();
    void getdata();
};

equity::equity(){
    
    getdata();
    
}

void equity::getdata(){
    std::ifstream infile;
    string str;
    double val; 
    
    infile.open("/users/USER/Desktop/ticker.txt", std::ifstream::binary);
    while(infile){
        getline(infile, str);
        ticker.push_back(str); 
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/name.txt", std::ifstream::binary);
    while(infile){
        getline(infile, str);
        name.push_back(str);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/sector.txt", std::ifstream::binary);
    while(infile){
        getline(infile, str);
        sector.push_back(str);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/price.txt", std::ifstream::binary);
    while(infile){
        infile>>val;
        price.push_back(val);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/pe.txt", std::ifstream::binary);
    while(infile){
        infile>>val;
        pe.push_back(val);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/psales.txt", std::ifstream::binary);
    while(infile){
        infile>>val;
        psales.push_back(val);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/links.txt", std::ifstream::binary);
    while(infile){
        infile>>str; 
        links.push_back(str);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/dividend.txt", std::ifstream::binary);
    while(infile){
        infile>>val;
        dividend.push_back(val);
    }
    infile.close();
    
    infile.open("/users/USER/Desktop/eps.txt", std::ifstream::binary);
    while(infile){
        infile>>val;
        eps.push_back(val);
    }
    infile.close();
}


int main(){
    equity snp;
    
}
