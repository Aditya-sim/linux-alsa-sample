#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/fs.h>
#include <linux/wait.h>
#include <asm/io.h>
#include <asm/uaccess.h>

static int __init alsa_card_mychip_init(void)
{
	return pci_register_driver(&driver);
}

static int __exit alsa_card_mychip_exit(void)
{
	pci_unregister_driver(&driver);
}

module_init(alsa_card_mychip_init);
module_exit(alsa_card_mychip_exit);

MODULE_LICENSE("GPL");
