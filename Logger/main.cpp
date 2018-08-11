#include "../HeaderFiles/Log.hpp"


int main(){
    Log log;
    log.SetLogLevel(1);
    log.Warn("Don't do that or else you got an unexpected result!");
    log.Error("See, i said don't do that!");
    log.Info("You must specified the true value!");
}
