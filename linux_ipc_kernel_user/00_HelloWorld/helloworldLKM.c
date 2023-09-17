/* 
 * Module Info & Boiler Plate code 
*/

#include <linux/module.h> 


#define AUTHOR_NAME "SWANAND_SAPRE"
#define MODULE_DESC "HELLO_LKM"
#define LICENSE     "GPL"

MODULE_AUTHOR(AUTHOR_NAME);
MODULE_DESCRIPTION(MODULE_DESC);
MODULE_LICENSE(LICENSE);

/**
 * USER CODE STARTS HERE 
*/


int hello_world_init(void) {
    printk(KERN_INFO "SSAPRE: Moudel loaded successfully \n");
    return 0;
}

void hello_world_deinit(void) {
    printk(KERN_INFO "SSAPRE: Module exit \n");
}

/**
 * Link our user module init (loading) and deinit (exit) function with 
 * kernel Framework
*/

module_init(hello_world_init);
module_exit(hello_world_deinit);


