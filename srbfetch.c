#include <stdio.h>
#include "./vars.h"
#include <string.h>
// 15
#define VERSION "1.4"
#define RESET "\033[0m"
#define BLACK "\033[30m" 
#define YELLOW "\033[33m" 
#define WHITE "\033[37m"  
#define BLUE "\x1b[34m" 
#define RED "\x1b[31m"
#define BGWH "\033[47m" // White backgroud
#define BGRD "\x1b[41m" // Red background
#define BGBL "\x1b[44m" // Blue Background
#define SEPARATOR "= "
//#define OSNAME "XIU" //XNU MENTIONED // X Is UNIX
const char osname[] = get_kernel;

void srb_linux(void) {
        printf(
                BGRD RED   "#######################" RESET RED " S" RESET BLUE "R" RESET WHITE "B" RESET "Fetch " VERSION "\n"
                BGRD RED   "#######################" RESET  " OS " SEPARATOR "SRBOS\n"
                BGRD RED   "#######################" RESET  " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                BGBL BLUE  "#######################" RESET  " Shell " SEPARATOR get_shell "\n"
                BGBL BLUE  "#######################" RESET  " Hostname " SEPARATOR get_hostname "\n"
                BGBL BLUE  "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n" 
        );      
                 }
void srb_unknown() {
        printf(
                        RED " ## " RESET RED "S" RESET BLUE "R" RESET WHITE "B" RESET "Fetch" VERSION "\n"
                        RED "#  #" RESET "OS " SEPARATOR get_kernel "\n"
                        BLUE "  # " RESET "Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                        BLUE "  # " RESET "Shell " SEPARATOR get_shell "\n"
                        "    Hostname " SEPARATOR get_hostname "\n"
                        WHITE "  # " RESET "\n"
            );
}
void srb_openbsd() {
        printf(
                "       _____"  RED  "     D"  RESET  BLUE  "R"  RESET WHITE "B" RESET "Fetch " VERSION "\n"
                "     \\-     -/"  "   OS " SEPARATOR "SRB_BSD" "\n"
                "  \\_/         \\" "  Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                " |         O O |" " Shell " SEPARATOR get_shell "\n"
                " |_  <   )  3 )" "  Hostname " SEPARATOR get_hostname "\n"
                " /  \\         /\n"
                "    /-_____-\\\n");
}
void srb_netbsd() {
      printf(
          "*" BGRD RED "###### " RESET RED " S" RESET BLUE "R" RESET WHITE "B" RESET "Fetch " VERSION "\n"
          "*" BGBL BLUE "###### " RESET " OS " SEPARATOR "SRB_BSD\n"
          "*" BGWH WHITE "###### " RESET " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
          "*" "        Shell " SEPARATOR get_shell "\n"
          "*" "        Hostname " SEPARATOR get_hostname "\n" ); }
void srb_freebsd();
int main() {
	if(strcmp(osname, "Linux")   == 0)   { srb_linux();   }
  else if(strcmp(osname, "OpenBSD") == 0)   { srb_openbsd(); }
  else if(strcmp(osname, "NetBSD")  == 0)   { srb_netbsd();  }
  else if(strcmp(osname, "FreeBSD") == 0)   { srb_freebsd(); }
  else { srb_unknown(); }
}
