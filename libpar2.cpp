#include "libpar2.h"

LibPar2::LibPar2(CommandLine* commandline) {
  commandLine = commandline;

  switch (commandLine->GetVersion())
    {
    case CommandLine::verPar1:
      {
	par1Repairer = new Par1Repairer;
	/*  repairer->sig_filename.connect( sigc::mem_fun(*this,&MainWindow::signal_filename));
	    repairer->sig_progress.connect( sigc::mem_fun(*this,&MainWindow::signal_progress));*/
      }
      break;
    case CommandLine::verPar2:
      {
	par2Repairer = new Par2Repairer;
	par2Repairer->sig_filename.
	  connect( sigc::mem_fun(*this, &LibPar2::signal_filename));
	par2Repairer->sig_progress.
	  connect( sigc::mem_fun(*this,&LibPar2::signal_progress));
	par2Repairer->sig_headers.
	  connect( sigc::mem_fun(*this,&LibPar2::signal_headers));
	par2Repairer->sig_done.
	  connect( sigc::mem_fun(*this,&LibPar2::signal_done));
	//par2Repairer->
      }
      break;
    case CommandLine::opNone:
      break;
    }
}

LibPar2::~LibPar2(void) {
  //delete par1Repairer;
  //delete par2Repairer;
}


Result LibPar2::PreProcess() {
  Result result;
  switch (commandLine->GetVersion())
    {
    case CommandLine::verPar1:
      {
	//result = par1Repairer->PreProcess(*commandLine);
      }
      break;
    case CommandLine::verPar2:
      {
	result = par2Repairer->PreProcess(*commandLine);
      }
      break;
    case CommandLine::opNone:
      break;
    }
  return result;
}

Result LibPar2::Process(bool dorepair) {
  Result result;
  switch (commandLine->GetVersion())
    {
    case CommandLine::verPar1:
      {
	result = par1Repairer->Process(*commandLine, dorepair);
      }
      break;
    case CommandLine::verPar2:
      {
	result = par2Repairer->Process(*commandLine, dorepair);
      }
      break;
    case CommandLine::opNone:
      break;
    }
  return result;
}

void LibPar2::signal_filename(std::string str) {
  sig_filename.emit(str);
};
void LibPar2::signal_progress(double value) {
  sig_progress.emit(value);
};

void LibPar2::signal_headers(ParHeaders* headers) {
  sig_headers.emit(headers);
}

void LibPar2::signal_done(std::string filename, int blocks_available, 
			  int blocks_total) {
  sig_done.emit(filename, blocks_available, blocks_total);
}
