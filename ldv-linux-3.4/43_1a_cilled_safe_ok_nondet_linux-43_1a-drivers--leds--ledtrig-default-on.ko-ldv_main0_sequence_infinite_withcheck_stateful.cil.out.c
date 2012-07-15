/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 23 "include/asm-generic/int-ll64.h"
typedef unsigned short __u16;
#line 26 "include/asm-generic/int-ll64.h"
typedef unsigned int __u32;
#line 30 "include/asm-generic/int-ll64.h"
typedef unsigned long long __u64;
#line 43 "include/asm-generic/int-ll64.h"
typedef unsigned char u8;
#line 45 "include/asm-generic/int-ll64.h"
typedef short s16;
#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 48 "include/asm-generic/int-ll64.h"
typedef int s32;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 51 "include/asm-generic/int-ll64.h"
typedef long long s64;
#line 52 "include/asm-generic/int-ll64.h"
typedef unsigned long long u64;
#line 14 "include/asm-generic/posix_types.h"
typedef long __kernel_long_t;
#line 15 "include/asm-generic/posix_types.h"
typedef unsigned long __kernel_ulong_t;
#line 75 "include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
#line 76 "include/asm-generic/posix_types.h"
typedef __kernel_long_t __kernel_ssize_t;
#line 91 "include/asm-generic/posix_types.h"
typedef long long __kernel_loff_t;
#line 21 "include/linux/types.h"
typedef __u32 __kernel_dev_t;
#line 24 "include/linux/types.h"
typedef __kernel_dev_t dev_t;
#line 27 "include/linux/types.h"
typedef unsigned short umode_t;
#line 38 "include/linux/types.h"
typedef _Bool bool;
#line 54 "include/linux/types.h"
typedef __kernel_loff_t loff_t;
#line 63 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 68 "include/linux/types.h"
typedef __kernel_ssize_t ssize_t;
#line 202 "include/linux/types.h"
typedef unsigned int gfp_t;
#line 221 "include/linux/types.h"
struct __anonstruct_atomic_t_6 {
   int counter ;
};
#line 221 "include/linux/types.h"
typedef struct __anonstruct_atomic_t_6 atomic_t;
#line 226 "include/linux/types.h"
struct __anonstruct_atomic64_t_7 {
   long counter ;
};
#line 226 "include/linux/types.h"
typedef struct __anonstruct_atomic64_t_7 atomic64_t;
#line 227 "include/linux/types.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 55 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/alternative.h"
struct module;
#line 55
struct module;
#line 146 "include/linux/init.h"
typedef void (*ctor_fn_t)(void);
#line 46 "include/linux/dynamic_debug.h"
struct device;
#line 46
struct device;
#line 57
struct completion;
#line 57
struct completion;
#line 58 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/page_types.h"
struct page;
#line 58
struct page;
#line 26 "include/asm-generic/getorder.h"
struct task_struct;
#line 26
struct task_struct;
#line 290 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/pgtable_types.h"
struct file;
#line 290
struct file;
#line 327 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt_types.h"
struct arch_spinlock;
#line 327
struct arch_spinlock;
#line 306 "include/linux/bitmap.h"
struct bug_entry {
   int bug_addr_disp ;
   int file_disp ;
   unsigned short line ;
   unsigned short flags ;
};
#line 234 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt.h"
struct static_key;
#line 234
struct static_key;
#line 433 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/processor.h"
struct kmem_cache;
#line 23 "include/asm-generic/atomic-long.h"
typedef atomic64_t atomic_long_t;
#line 14 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u16 __ticket_t;
#line 15 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u32 __ticketpair_t;
#line 16 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct __raw_tickets {
   __ticket_t head ;
   __ticket_t tail ;
};
#line 26 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
union __anonunion_ldv_5907_29 {
   __ticketpair_t head_tail ;
   struct __raw_tickets tickets ;
};
#line 26 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct arch_spinlock {
   union __anonunion_ldv_5907_29 ldv_5907 ;
};
#line 27 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef struct arch_spinlock arch_spinlock_t;
#line 33 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/rwlock.h"
struct __anonstruct_ldv_5914_31 {
   u32 read ;
   s32 write ;
};
#line 33 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/rwlock.h"
union __anonunion_arch_rwlock_t_30 {
   s64 lock ;
   struct __anonstruct_ldv_5914_31 ldv_5914 ;
};
#line 33 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/rwlock.h"
typedef union __anonunion_arch_rwlock_t_30 arch_rwlock_t;
#line 34
struct lockdep_map;
#line 34
struct lockdep_map;
#line 55 "include/linux/debug_locks.h"
struct stack_trace {
   unsigned int nr_entries ;
   unsigned int max_entries ;
   unsigned long *entries ;
   int skip ;
};
#line 26 "include/linux/stacktrace.h"
struct lockdep_subclass_key {
   char __one_byte ;
};
#line 53 "include/linux/lockdep.h"
struct lock_class_key {
   struct lockdep_subclass_key subkeys[8U] ;
};
#line 59 "include/linux/lockdep.h"
struct lock_class {
   struct list_head hash_entry ;
   struct list_head lock_entry ;
   struct lockdep_subclass_key *key ;
   unsigned int subclass ;
   unsigned int dep_gen_id ;
   unsigned long usage_mask ;
   struct stack_trace usage_traces[13U] ;
   struct list_head locks_after ;
   struct list_head locks_before ;
   unsigned int version ;
   unsigned long ops ;
   char const   *name ;
   int name_version ;
   unsigned long contention_point[4U] ;
   unsigned long contending_point[4U] ;
};
#line 144 "include/linux/lockdep.h"
struct lockdep_map {
   struct lock_class_key *key ;
   struct lock_class *class_cache[2U] ;
   char const   *name ;
   int cpu ;
   unsigned long ip ;
};
#line 556 "include/linux/lockdep.h"
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
#line 32 "include/linux/spinlock_types.h"
typedef struct raw_spinlock raw_spinlock_t;
#line 33 "include/linux/spinlock_types.h"
struct __anonstruct_ldv_6122_33 {
   u8 __padding[24U] ;
   struct lockdep_map dep_map ;
};
#line 33 "include/linux/spinlock_types.h"
union __anonunion_ldv_6123_32 {
   struct raw_spinlock rlock ;
   struct __anonstruct_ldv_6122_33 ldv_6122 ;
};
#line 33 "include/linux/spinlock_types.h"
struct spinlock {
   union __anonunion_ldv_6123_32 ldv_6123 ;
};
#line 76 "include/linux/spinlock_types.h"
typedef struct spinlock spinlock_t;
#line 23 "include/linux/rwlock_types.h"
struct __anonstruct_rwlock_t_34 {
   arch_rwlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
#line 23 "include/linux/rwlock_types.h"
typedef struct __anonstruct_rwlock_t_34 rwlock_t;
#line 48 "include/linux/wait.h"
struct __wait_queue_head {
   spinlock_t lock ;
   struct list_head task_list ;
};
#line 53 "include/linux/wait.h"
typedef struct __wait_queue_head wait_queue_head_t;
#line 670 "include/linux/mmzone.h"
struct mutex {
   atomic_t count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct task_struct *owner ;
   char const   *name ;
   void *magic ;
   struct lockdep_map dep_map ;
};
#line 171 "include/linux/mutex.h"
struct rw_semaphore;
#line 171
struct rw_semaphore;
#line 172 "include/linux/mutex.h"
struct rw_semaphore {
   long count ;
   raw_spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct lockdep_map dep_map ;
};
#line 128 "include/linux/rwsem.h"
struct completion {
   unsigned int done ;
   wait_queue_head_t wait ;
};
#line 312 "include/linux/jiffies.h"
union ktime {
   s64 tv64 ;
};
#line 59 "include/linux/ktime.h"
typedef union ktime ktime_t;
#line 341
struct tvec_base;
#line 341
struct tvec_base;
#line 342 "include/linux/ktime.h"
struct timer_list {
   struct list_head entry ;
   unsigned long expires ;
   struct tvec_base *base ;
   void (*function)(unsigned long  ) ;
   unsigned long data ;
   int slack ;
   int start_pid ;
   void *start_site ;
   char start_comm[16U] ;
   struct lockdep_map lockdep_map ;
};
#line 302 "include/linux/timer.h"
struct work_struct;
#line 302
struct work_struct;
#line 45 "include/linux/workqueue.h"
struct work_struct {
   atomic_long_t data ;
   struct list_head entry ;
   void (*func)(struct work_struct * ) ;
   struct lockdep_map lockdep_map ;
};
#line 46 "include/linux/pm.h"
struct pm_message {
   int event ;
};
#line 52 "include/linux/pm.h"
typedef struct pm_message pm_message_t;
#line 53 "include/linux/pm.h"
struct dev_pm_ops {
   int (*prepare)(struct device * ) ;
   void (*complete)(struct device * ) ;
   int (*suspend)(struct device * ) ;
   int (*resume)(struct device * ) ;
   int (*freeze)(struct device * ) ;
   int (*thaw)(struct device * ) ;
   int (*poweroff)(struct device * ) ;
   int (*restore)(struct device * ) ;
   int (*suspend_late)(struct device * ) ;
   int (*resume_early)(struct device * ) ;
   int (*freeze_late)(struct device * ) ;
   int (*thaw_early)(struct device * ) ;
   int (*poweroff_late)(struct device * ) ;
   int (*restore_early)(struct device * ) ;
   int (*suspend_noirq)(struct device * ) ;
   int (*resume_noirq)(struct device * ) ;
   int (*freeze_noirq)(struct device * ) ;
   int (*thaw_noirq)(struct device * ) ;
   int (*poweroff_noirq)(struct device * ) ;
   int (*restore_noirq)(struct device * ) ;
   int (*runtime_suspend)(struct device * ) ;
   int (*runtime_resume)(struct device * ) ;
   int (*runtime_idle)(struct device * ) ;
};
#line 289
enum rpm_status {
    RPM_ACTIVE = 0,
    RPM_RESUMING = 1,
    RPM_SUSPENDED = 2,
    RPM_SUSPENDING = 3
} ;
#line 296
enum rpm_request {
    RPM_REQ_NONE = 0,
    RPM_REQ_IDLE = 1,
    RPM_REQ_SUSPEND = 2,
    RPM_REQ_AUTOSUSPEND = 3,
    RPM_REQ_RESUME = 4
} ;
#line 304
struct wakeup_source;
#line 304
struct wakeup_source;
#line 494 "include/linux/pm.h"
struct pm_subsys_data {
   spinlock_t lock ;
   unsigned int refcount ;
};
#line 499
struct dev_pm_qos_request;
#line 499
struct pm_qos_constraints;
#line 499 "include/linux/pm.h"
struct dev_pm_info {
   pm_message_t power_state ;
   unsigned char can_wakeup : 1 ;
   unsigned char async_suspend : 1 ;
   bool is_prepared ;
   bool is_suspended ;
   bool ignore_children ;
   spinlock_t lock ;
   struct list_head entry ;
   struct completion completion ;
   struct wakeup_source *wakeup ;
   bool wakeup_path ;
   struct timer_list suspend_timer ;
   unsigned long timer_expires ;
   struct work_struct work ;
   wait_queue_head_t wait_queue ;
   atomic_t usage_count ;
   atomic_t child_count ;
   unsigned char disable_depth : 3 ;
   unsigned char idle_notification : 1 ;
   unsigned char request_pending : 1 ;
   unsigned char deferred_resume : 1 ;
   unsigned char run_wake : 1 ;
   unsigned char runtime_auto : 1 ;
   unsigned char no_callbacks : 1 ;
   unsigned char irq_safe : 1 ;
   unsigned char use_autosuspend : 1 ;
   unsigned char timer_autosuspends : 1 ;
   enum rpm_request request ;
   enum rpm_status runtime_status ;
   int runtime_error ;
   int autosuspend_delay ;
   unsigned long last_busy ;
   unsigned long active_jiffies ;
   unsigned long suspended_jiffies ;
   unsigned long accounting_timestamp ;
   ktime_t suspend_time ;
   s64 max_time_suspended_ns ;
   struct dev_pm_qos_request *pq_req ;
   struct pm_subsys_data *subsys_data ;
   struct pm_qos_constraints *constraints ;
};
#line 558 "include/linux/pm.h"
struct dev_pm_domain {
   struct dev_pm_ops ops ;
};
#line 18 "include/asm-generic/pci_iomap.h"
struct vm_area_struct;
#line 18
struct vm_area_struct;
#line 18 "include/linux/elf.h"
typedef __u64 Elf64_Addr;
#line 19 "include/linux/elf.h"
typedef __u16 Elf64_Half;
#line 23 "include/linux/elf.h"
typedef __u32 Elf64_Word;
#line 24 "include/linux/elf.h"
typedef __u64 Elf64_Xword;
#line 193 "include/linux/elf.h"
struct elf64_sym {
   Elf64_Word st_name ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf64_Half st_shndx ;
   Elf64_Addr st_value ;
   Elf64_Xword st_size ;
};
#line 201 "include/linux/elf.h"
typedef struct elf64_sym Elf64_Sym;
#line 445
struct sock;
#line 445
struct sock;
#line 446
struct kobject;
#line 446
struct kobject;
#line 447
enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE = 0,
    KOBJ_NS_TYPE_NET = 1,
    KOBJ_NS_TYPES = 2
} ;
#line 453 "include/linux/elf.h"
struct kobj_ns_type_operations {
   enum kobj_ns_type type ;
   void *(*grab_current_ns)(void) ;
   void const   *(*netlink_ns)(struct sock * ) ;
   void const   *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
#line 57 "include/linux/kobject_ns.h"
struct attribute {
   char const   *name ;
   umode_t mode ;
   struct lock_class_key *key ;
   struct lock_class_key skey ;
};
#line 33 "include/linux/sysfs.h"
struct attribute_group {
   char const   *name ;
   umode_t (*is_visible)(struct kobject * , struct attribute * , int  ) ;
   struct attribute **attrs ;
};
#line 62 "include/linux/sysfs.h"
struct bin_attribute {
   struct attribute attr ;
   size_t size ;
   void *private ;
   ssize_t (*read)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                   loff_t  , size_t  ) ;
   ssize_t (*write)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                    loff_t  , size_t  ) ;
   int (*mmap)(struct file * , struct kobject * , struct bin_attribute * , struct vm_area_struct * ) ;
};
#line 98 "include/linux/sysfs.h"
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const   * , size_t  ) ;
   void const   *(*namespace)(struct kobject * , struct attribute  const  * ) ;
};
#line 117
struct sysfs_dirent;
#line 117
struct sysfs_dirent;
#line 182 "include/linux/sysfs.h"
struct kref {
   atomic_t refcount ;
};
#line 49 "include/linux/kobject.h"
struct kset;
#line 49
struct kobj_type;
#line 49 "include/linux/kobject.h"
struct kobject {
   char const   *name ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   struct kref kref ;
   unsigned char state_initialized : 1 ;
   unsigned char state_in_sysfs : 1 ;
   unsigned char state_add_uevent_sent : 1 ;
   unsigned char state_remove_uevent_sent : 1 ;
   unsigned char uevent_suppress : 1 ;
};
#line 107 "include/linux/kobject.h"
struct kobj_type {
   void (*release)(struct kobject * ) ;
   struct sysfs_ops  const  *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations  const  *(*child_ns_type)(struct kobject * ) ;
   void const   *(*namespace)(struct kobject * ) ;
};
#line 115 "include/linux/kobject.h"
struct kobj_uevent_env {
   char *envp[32U] ;
   int envp_idx ;
   char buf[2048U] ;
   int buflen ;
};
#line 122 "include/linux/kobject.h"
struct kset_uevent_ops {
   int (* const  filter)(struct kset * , struct kobject * ) ;
   char const   *(* const  name)(struct kset * , struct kobject * ) ;
   int (* const  uevent)(struct kset * , struct kobject * , struct kobj_uevent_env * ) ;
};
#line 139 "include/linux/kobject.h"
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops  const  *uevent_ops ;
};
#line 215
struct kernel_param;
#line 215
struct kernel_param;
#line 216 "include/linux/kobject.h"
struct kernel_param_ops {
   int (*set)(char const   * , struct kernel_param  const  * ) ;
   int (*get)(char * , struct kernel_param  const  * ) ;
   void (*free)(void * ) ;
};
#line 49 "include/linux/moduleparam.h"
struct kparam_string;
#line 49
struct kparam_array;
#line 49 "include/linux/moduleparam.h"
union __anonunion_ldv_13363_134 {
   void *arg ;
   struct kparam_string  const  *str ;
   struct kparam_array  const  *arr ;
};
#line 49 "include/linux/moduleparam.h"
struct kernel_param {
   char const   *name ;
   struct kernel_param_ops  const  *ops ;
   u16 perm ;
   s16 level ;
   union __anonunion_ldv_13363_134 ldv_13363 ;
};
#line 61 "include/linux/moduleparam.h"
struct kparam_string {
   unsigned int maxlen ;
   char *string ;
};
#line 67 "include/linux/moduleparam.h"
struct kparam_array {
   unsigned int max ;
   unsigned int elemsize ;
   unsigned int *num ;
   struct kernel_param_ops  const  *ops ;
   void *elem ;
};
#line 458 "include/linux/moduleparam.h"
struct static_key {
   atomic_t enabled ;
};
#line 225 "include/linux/jump_label.h"
struct tracepoint;
#line 225
struct tracepoint;
#line 226 "include/linux/jump_label.h"
struct tracepoint_func {
   void *func ;
   void *data ;
};
#line 29 "include/linux/tracepoint.h"
struct tracepoint {
   char const   *name ;
   struct static_key key ;
   void (*regfunc)(void) ;
   void (*unregfunc)(void) ;
   struct tracepoint_func *funcs ;
};
#line 86 "include/linux/tracepoint.h"
struct kernel_symbol {
   unsigned long value ;
   char const   *name ;
};
#line 27 "include/linux/export.h"
struct mod_arch_specific {

};
#line 34 "include/linux/module.h"
struct module_param_attrs;
#line 34 "include/linux/module.h"
struct module_kobject {
   struct kobject kobj ;
   struct module *mod ;
   struct kobject *drivers_dir ;
   struct module_param_attrs *mp ;
};
#line 43 "include/linux/module.h"
struct module_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct module_attribute * , struct module_kobject * , char * ) ;
   ssize_t (*store)(struct module_attribute * , struct module_kobject * , char const   * ,
                    size_t  ) ;
   void (*setup)(struct module * , char const   * ) ;
   int (*test)(struct module * ) ;
   void (*free)(struct module * ) ;
};
#line 69
struct exception_table_entry;
#line 69
struct exception_table_entry;
#line 198
enum module_state {
    MODULE_STATE_LIVE = 0,
    MODULE_STATE_COMING = 1,
    MODULE_STATE_GOING = 2
} ;
#line 204 "include/linux/module.h"
struct module_ref {
   unsigned long incs ;
   unsigned long decs ;
};
#line 219
struct module_sect_attrs;
#line 219
struct module_notes_attrs;
#line 219
struct ftrace_event_call;
#line 219 "include/linux/module.h"
struct module {
   enum module_state state ;
   struct list_head list ;
   char name[56U] ;
   struct module_kobject mkobj ;
   struct module_attribute *modinfo_attrs ;
   char const   *version ;
   char const   *srcversion ;
   struct kobject *holders_dir ;
   struct kernel_symbol  const  *syms ;
   unsigned long const   *crcs ;
   unsigned int num_syms ;
   struct kernel_param *kp ;
   unsigned int num_kp ;
   unsigned int num_gpl_syms ;
   struct kernel_symbol  const  *gpl_syms ;
   unsigned long const   *gpl_crcs ;
   struct kernel_symbol  const  *unused_syms ;
   unsigned long const   *unused_crcs ;
   unsigned int num_unused_syms ;
   unsigned int num_unused_gpl_syms ;
   struct kernel_symbol  const  *unused_gpl_syms ;
   unsigned long const   *unused_gpl_crcs ;
   struct kernel_symbol  const  *gpl_future_syms ;
   unsigned long const   *gpl_future_crcs ;
   unsigned int num_gpl_future_syms ;
   unsigned int num_exentries ;
   struct exception_table_entry *extable ;
   int (*init)(void) ;
   void *module_init ;
   void *module_core ;
   unsigned int init_size ;
   unsigned int core_size ;
   unsigned int init_text_size ;
   unsigned int core_text_size ;
   unsigned int init_ro_size ;
   unsigned int core_ro_size ;
   struct mod_arch_specific arch ;
   unsigned int taints ;
   unsigned int num_bugs ;
   struct list_head bug_list ;
   struct bug_entry *bug_table ;
   Elf64_Sym *symtab ;
   Elf64_Sym *core_symtab ;
   unsigned int num_symtab ;
   unsigned int core_num_syms ;
   char *strtab ;
   char *core_strtab ;
   struct module_sect_attrs *sect_attrs ;
   struct module_notes_attrs *notes_attrs ;
   char *args ;
   void *percpu ;
   unsigned int percpu_size ;
   unsigned int num_tracepoints ;
   struct tracepoint * const  *tracepoints_ptrs ;
   unsigned int num_trace_bprintk_fmt ;
   char const   **trace_bprintk_fmt_start ;
   struct ftrace_event_call **trace_events ;
   unsigned int num_trace_events ;
   struct list_head source_list ;
   struct list_head target_list ;
   struct task_struct *waiter ;
   void (*exit)(void) ;
   struct module_ref *refptr ;
   ctor_fn_t (**ctors)(void) ;
   unsigned int num_ctors ;
};
#line 88 "include/linux/kmemleak.h"
struct kmem_cache_cpu {
   void **freelist ;
   unsigned long tid ;
   struct page *page ;
   struct page *partial ;
   int node ;
   unsigned int stat[26U] ;
};
#line 55 "include/linux/slub_def.h"
struct kmem_cache_node {
   spinlock_t list_lock ;
   unsigned long nr_partial ;
   struct list_head partial ;
   atomic_long_t nr_slabs ;
   atomic_long_t total_objects ;
   struct list_head full ;
};
#line 66 "include/linux/slub_def.h"
struct kmem_cache_order_objects {
   unsigned long x ;
};
#line 76 "include/linux/slub_def.h"
struct kmem_cache {
   struct kmem_cache_cpu *cpu_slab ;
   unsigned long flags ;
   unsigned long min_partial ;
   int size ;
   int objsize ;
   int offset ;
   int cpu_partial ;
   struct kmem_cache_order_objects oo ;
   struct kmem_cache_order_objects max ;
   struct kmem_cache_order_objects min ;
   gfp_t allocflags ;
   int refcount ;
   void (*ctor)(void * ) ;
   int inuse ;
   int align ;
   int reserved ;
   char const   *name ;
   struct list_head list ;
   struct kobject kobj ;
   int remote_node_defrag_ratio ;
   struct kmem_cache_node *node[1024U] ;
};
#line 15 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
enum led_brightness {
    LED_OFF = 0,
    LED_HALF = 127,
    LED_FULL = 255
} ;
#line 21
struct led_trigger;
#line 21 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
struct led_classdev {
   char const   *name ;
   int brightness ;
   int max_brightness ;
   int flags ;
   void (*brightness_set)(struct led_classdev * , enum led_brightness  ) ;
   enum led_brightness (*brightness_get)(struct led_classdev * ) ;
   int (*blink_set)(struct led_classdev * , unsigned long * , unsigned long * ) ;
   struct device *dev ;
   struct list_head node ;
   char const   *default_trigger ;
   unsigned long blink_delay_on ;
   unsigned long blink_delay_off ;
   struct timer_list blink_timer ;
   int blink_brightness ;
   struct rw_semaphore trigger_lock ;
   struct led_trigger *trigger ;
   struct list_head trig_list ;
   void *trigger_data ;
};
#line 113 "include/linux/leds.h"
struct led_trigger {
   char const   *name ;
   void (*activate)(struct led_classdev * ) ;
   void (*deactivate)(struct led_classdev * ) ;
   rwlock_t leddev_list_lock ;
   struct list_head led_cdevs ;
   struct list_head next_trig ;
};
#line 211
struct klist_node;
#line 211
struct klist_node;
#line 37 "include/linux/klist.h"
struct klist_node {
   void *n_klist ;
   struct list_head n_node ;
   struct kref n_ref ;
};
#line 67
struct dma_map_ops;
#line 67 "include/linux/klist.h"
struct dev_archdata {
   void *acpi_handle ;
   struct dma_map_ops *dma_ops ;
   void *iommu ;
};
#line 17 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/device.h"
struct device_private;
#line 17
struct device_private;
#line 18
struct device_driver;
#line 18
struct device_driver;
#line 19
struct driver_private;
#line 19
struct driver_private;
#line 20
struct class;
#line 20
struct class;
#line 21
struct subsys_private;
#line 21
struct subsys_private;
#line 22
struct bus_type;
#line 22
struct bus_type;
#line 23
struct device_node;
#line 23
struct device_node;
#line 24
struct iommu_ops;
#line 24
struct iommu_ops;
#line 25 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/device.h"
struct bus_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct bus_type * , char * ) ;
   ssize_t (*store)(struct bus_type * , char const   * , size_t  ) ;
};
#line 51 "include/linux/device.h"
struct device_attribute;
#line 51
struct driver_attribute;
#line 51 "include/linux/device.h"
struct bus_type {
   char const   *name ;
   char const   *dev_name ;
   struct device *dev_root ;
   struct bus_attribute *bus_attrs ;
   struct device_attribute *dev_attrs ;
   struct driver_attribute *drv_attrs ;
   int (*match)(struct device * , struct device_driver * ) ;
   int (*uevent)(struct device * , struct kobj_uevent_env * ) ;
   int (*probe)(struct device * ) ;
   int (*remove)(struct device * ) ;
   void (*shutdown)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t  ) ;
   int (*resume)(struct device * ) ;
   struct dev_pm_ops  const  *pm ;
   struct iommu_ops *iommu_ops ;
   struct subsys_private *p ;
};
#line 125
struct device_type;
#line 182
struct of_device_id;
#line 182 "include/linux/device.h"
struct device_driver {
   char const   *name ;
   struct bus_type *bus ;
   struct module *owner ;
   char const   *mod_name ;
   bool suppress_bind_attrs ;
   struct of_device_id  const  *of_match_table ;
   int (*probe)(struct device * ) ;
   int (*remove)(struct device * ) ;
   void (*shutdown)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t  ) ;
   int (*resume)(struct device * ) ;
   struct attribute_group  const  **groups ;
   struct dev_pm_ops  const  *pm ;
   struct driver_private *p ;
};
#line 245 "include/linux/device.h"
struct driver_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device_driver * , char * ) ;
   ssize_t (*store)(struct device_driver * , char const   * , size_t  ) ;
};
#line 299
struct class_attribute;
#line 299 "include/linux/device.h"
struct class {
   char const   *name ;
   struct module *owner ;
   struct class_attribute *class_attrs ;
   struct device_attribute *dev_attrs ;
   struct bin_attribute *dev_bin_attrs ;
   struct kobject *dev_kobj ;
   int (*dev_uevent)(struct device * , struct kobj_uevent_env * ) ;
   char *(*devnode)(struct device * , umode_t * ) ;
   void (*class_release)(struct class * ) ;
   void (*dev_release)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t  ) ;
   int (*resume)(struct device * ) ;
   struct kobj_ns_type_operations  const  *ns_type ;
   void const   *(*namespace)(struct device * ) ;
   struct dev_pm_ops  const  *pm ;
   struct subsys_private *p ;
};
#line 394 "include/linux/device.h"
struct class_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct class * , struct class_attribute * , char * ) ;
   ssize_t (*store)(struct class * , struct class_attribute * , char const   * , size_t  ) ;
   void const   *(*namespace)(struct class * , struct class_attribute  const  * ) ;
};
#line 447 "include/linux/device.h"
struct device_type {
   char const   *name ;
   struct attribute_group  const  **groups ;
   int (*uevent)(struct device * , struct kobj_uevent_env * ) ;
   char *(*devnode)(struct device * , umode_t * ) ;
   void (*release)(struct device * ) ;
   struct dev_pm_ops  const  *pm ;
};
#line 474 "include/linux/device.h"
struct device_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device * , struct device_attribute * , char * ) ;
   ssize_t (*store)(struct device * , struct device_attribute * , char const   * ,
                    size_t  ) ;
};
#line 557 "include/linux/device.h"
struct device_dma_parameters {
   unsigned int max_segment_size ;
   unsigned long segment_boundary_mask ;
};
#line 567
struct dma_coherent_mem;
#line 567 "include/linux/device.h"
struct device {
   struct device *parent ;
   struct device_private *p ;
   struct kobject kobj ;
   char const   *init_name ;
   struct device_type  const  *type ;
   struct mutex mutex ;
   struct bus_type *bus ;
   struct device_driver *driver ;
   void *platform_data ;
   struct dev_pm_info power ;
   struct dev_pm_domain *pm_domain ;
   int numa_node ;
   u64 *dma_mask ;
   u64 coherent_dma_mask ;
   struct device_dma_parameters *dma_parms ;
   struct list_head dma_pools ;
   struct dma_coherent_mem *dma_mem ;
   struct dev_archdata archdata ;
   struct device_node *of_node ;
   dev_t devt ;
   u32 id ;
   spinlock_t devres_lock ;
   struct list_head devres_head ;
   struct klist_node knode_class ;
   struct class *class ;
   struct attribute_group  const  **groups ;
   void (*release)(struct device * ) ;
};
#line 681 "include/linux/device.h"
struct wakeup_source {
   char const   *name ;
   struct list_head entry ;
   spinlock_t lock ;
   struct timer_list timer ;
   unsigned long timer_expires ;
   ktime_t total_time ;
   ktime_t max_time ;
   ktime_t last_time ;
   unsigned long event_count ;
   unsigned long active_count ;
   unsigned long relax_count ;
   unsigned long hit_count ;
   unsigned char active : 1 ;
};
#line 2 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_spin_lock(void) ;
#line 3
void ldv_spin_unlock(void) ;
#line 4
int ldv_spin_trylock(void) ;
#line 220 "include/linux/slub_def.h"
extern void *kmem_cache_alloc(struct kmem_cache * , gfp_t  ) ;
#line 223
void *ldv_kmem_cache_alloc_16(struct kmem_cache *ldv_func_arg1 , gfp_t ldv_func_arg2 ) ;
#line 11 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_check_alloc_flags(gfp_t flags ) ;
#line 12
void ldv_check_alloc_nonatomic(void) ;
#line 14
struct page *ldv_check_alloc_flags_and_return_some_page(gfp_t flags ) ;
#line 137 "include/linux/leds.h"
extern int led_trigger_register(struct led_trigger * ) ;
#line 138
extern void led_trigger_unregister(struct led_trigger * ) ;
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/leds/leds.h"
__inline static void led_set_brightness(struct led_classdev *led_cdev , enum led_brightness value ) 
{ unsigned int __cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  void (*__cil_tmp19)(struct led_classdev * , enum led_brightness  ) ;

  {
  {
#line 23
  __cil_tmp3 = (unsigned int )value;
#line 23
  __cil_tmp4 = (unsigned long )led_cdev;
#line 23
  __cil_tmp5 = __cil_tmp4 + 12;
#line 23
  __cil_tmp6 = *((int *)__cil_tmp5);
#line 23
  __cil_tmp7 = (unsigned int )__cil_tmp6;
#line 23
  if (__cil_tmp7 < __cil_tmp3) {
#line 24
    __cil_tmp8 = (unsigned long )led_cdev;
#line 24
    __cil_tmp9 = __cil_tmp8 + 12;
#line 24
    __cil_tmp10 = *((int *)__cil_tmp9);
#line 24
    value = (enum led_brightness )__cil_tmp10;
  } else {

  }
  }
#line 25
  __cil_tmp11 = (unsigned long )led_cdev;
#line 25
  __cil_tmp12 = __cil_tmp11 + 8;
#line 25
  *((int *)__cil_tmp12) = (int )value;
  {
#line 26
  __cil_tmp13 = (unsigned long )led_cdev;
#line 26
  __cil_tmp14 = __cil_tmp13 + 16;
#line 26
  __cil_tmp15 = *((int *)__cil_tmp14);
#line 26
  __cil_tmp16 = __cil_tmp15 & 1;
#line 26
  if (__cil_tmp16 == 0) {
    {
#line 27
    __cil_tmp17 = (unsigned long )led_cdev;
#line 27
    __cil_tmp18 = __cil_tmp17 + 24;
#line 27
    __cil_tmp19 = *((void (**)(struct led_classdev * , enum led_brightness  ))__cil_tmp18);
#line 27
    (*__cil_tmp19)(led_cdev, value);
    }
  } else {

  }
  }
#line 28
  return;
}
}
#line 35 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
static void defon_trig_activate(struct led_classdev *led_cdev ) 
{ unsigned long __cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  int __cil_tmp4 ;
  enum led_brightness __cil_tmp5 ;

  {
  {
#line 37
  __cil_tmp2 = (unsigned long )led_cdev;
#line 37
  __cil_tmp3 = __cil_tmp2 + 12;
#line 37
  __cil_tmp4 = *((int *)__cil_tmp3);
#line 37
  __cil_tmp5 = (enum led_brightness )__cil_tmp4;
#line 37
  led_set_brightness(led_cdev, __cil_tmp5);
  }
#line 38
  return;
}
}
#line 40 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
static struct led_trigger defon_led_trigger  =    {"default-on", & defon_trig_activate, (void (*)(struct led_classdev * ))0, {{0LL},
                                                                               0U,
                                                                               0U,
                                                                               (void *)0,
                                                                               {(struct lock_class_key *)0,
                                                                                {(struct lock_class *)0,
                                                                                 (struct lock_class *)0},
                                                                                (char const   *)0,
                                                                                0,
                                                                                0UL}},
    {(struct list_head *)0, (struct list_head *)0}, {(struct list_head *)0, (struct list_head *)0}};
#line 45 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
static int defon_trig_init(void) 
{ int tmp ;

  {
  {
#line 47
  tmp = led_trigger_register(& defon_led_trigger);
  }
#line 47
  return (tmp);
}
}
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
static void defon_trig_exit(void) 
{ 

  {
  {
#line 52
  led_trigger_unregister(& defon_led_trigger);
  }
#line 53
  return;
}
}
#line 78
extern void ldv_check_final_state(void) ;
#line 84
extern void ldv_initialize(void) ;
#line 87
extern int nondet_int(void) ;
#line 90 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
int LDV_IN_INTERRUPT  ;
#line 93 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_main0_sequence_infinite_withcheck_stateful(void) 
{ struct led_classdev *var_group1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 111
  LDV_IN_INTERRUPT = 1;
#line 120
  ldv_initialize();
#line 126
  tmp = defon_trig_init();
  }
#line 126
  if (tmp != 0) {
#line 127
    goto ldv_final;
  } else {

  }
#line 131
  goto ldv_15079;
  ldv_15078: 
  {
#line 134
  tmp___0 = nondet_int();
  }
#line 136
  if (tmp___0 == 0) {
#line 136
    goto case_0;
  } else {
    {
#line 152
    goto switch_default;
#line 134
    if (0) {
      case_0: /* CIL Label */ 
      {
#line 144
      defon_trig_activate(var_group1);
      }
#line 151
      goto ldv_15076;
      switch_default: /* CIL Label */ ;
#line 152
      goto ldv_15076;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
  ldv_15076: ;
  ldv_15079: 
  {
#line 131
  tmp___1 = nondet_int();
  }
#line 131
  if (tmp___1 != 0) {
#line 132
    goto ldv_15078;
  } else {
#line 134
    goto ldv_15080;
  }
  ldv_15080: ;
  {
#line 164
  defon_trig_exit();
  }
  ldv_final: 
  {
#line 167
  ldv_check_final_state();
  }
#line 170
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  LDV_ERROR: ;
#line 6
  goto LDV_ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 191 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
int ldv_spin  =    0;
#line 195 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_check_alloc_flags(gfp_t flags ) 
{ 

  {
#line 198
  if (ldv_spin != 0) {
#line 198
    if (flags != 32U) {
      {
#line 198
      ldv_blast_assert();
      }
    } else {

    }
  } else {

  }
#line 201
  return;
}
}
#line 201
extern struct page *ldv_some_page(void) ;
#line 204 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
struct page *ldv_check_alloc_flags_and_return_some_page(gfp_t flags ) 
{ struct page *tmp ;

  {
#line 207
  if (ldv_spin != 0) {
#line 207
    if (flags != 32U) {
      {
#line 207
      ldv_blast_assert();
      }
    } else {

    }
  } else {

  }
  {
#line 209
  tmp = ldv_some_page();
  }
#line 209
  return (tmp);
}
}
#line 213 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_check_alloc_nonatomic(void) 
{ 

  {
#line 216
  if (ldv_spin != 0) {
    {
#line 216
    ldv_blast_assert();
    }
  } else {

  }
#line 219
  return;
}
}
#line 220 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_spin_lock(void) 
{ 

  {
#line 223
  ldv_spin = 1;
#line 224
  return;
}
}
#line 227 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void ldv_spin_unlock(void) 
{ 

  {
#line 230
  ldv_spin = 0;
#line 231
  return;
}
}
#line 234 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
int ldv_spin_trylock(void) 
{ int is_lock ;

  {
  {
#line 239
  is_lock = __VERIFIER_nondet_int();
  }
#line 241
  if (is_lock != 0) {
#line 244
    return (0);
  } else {
#line 249
    ldv_spin = 1;
#line 251
    return (1);
  }
}
}
#line 418 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/12459/dscv_tempdir/dscv/ri/43_1a/drivers/leds/ledtrig-default-on.c.p"
void *ldv_kmem_cache_alloc_16(struct kmem_cache *ldv_func_arg1 , gfp_t ldv_func_arg2 ) 
{ 

  {
  {
#line 424
  ldv_check_alloc_flags(ldv_func_arg2);
#line 426
  kmem_cache_alloc(ldv_func_arg1, ldv_func_arg2);
  }
#line 427
  return ((void *)0);
}
}
