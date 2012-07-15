/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 45 "include/asm-generic/int-ll64.h"
typedef short s16;
#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 14 "include/asm-generic/posix_types.h"
typedef long __kernel_long_t;
#line 15 "include/asm-generic/posix_types.h"
typedef unsigned long __kernel_ulong_t;
#line 75 "include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
#line 76 "include/asm-generic/posix_types.h"
typedef __kernel_long_t __kernel_ssize_t;
#line 27 "include/linux/types.h"
typedef unsigned short umode_t;
#line 63 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 68 "include/linux/types.h"
typedef __kernel_ssize_t ssize_t;
#line 92 "include/linux/types.h"
typedef unsigned char u_char;
#line 219 "include/linux/types.h"
struct __anonstruct_atomic_t_7 {
   int counter ;
};
#line 219 "include/linux/types.h"
typedef struct __anonstruct_atomic_t_7 atomic_t;
#line 229 "include/linux/types.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/thread_info.h"
struct task_struct;
#line 20
struct task_struct;
#line 7 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/processor.h"
struct task_struct;
#line 52 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt_types.h"
struct task_struct;
#line 329
struct arch_spinlock;
#line 329
struct arch_spinlock;
#line 139 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/ptrace.h"
struct task_struct;
#line 8 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/current.h"
struct task_struct;
#line 14 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u16 __ticket_t;
#line 15 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u32 __ticketpair_t;
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct __raw_tickets {
   __ticket_t head ;
   __ticket_t tail ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
union __anonunion____missing_field_name_36 {
   __ticketpair_t head_tail ;
   struct __raw_tickets tickets ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct arch_spinlock {
   union __anonunion____missing_field_name_36 __annonCompField17 ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef struct arch_spinlock arch_spinlock_t;
#line 12 "include/linux/lockdep.h"
struct task_struct;
#line 20 "include/linux/spinlock_types.h"
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
};
#line 64 "include/linux/spinlock_types.h"
union __anonunion____missing_field_name_39 {
   struct raw_spinlock rlock ;
};
#line 64 "include/linux/spinlock_types.h"
struct spinlock {
   union __anonunion____missing_field_name_39 __annonCompField19 ;
};
#line 64 "include/linux/spinlock_types.h"
typedef struct spinlock spinlock_t;
#line 55 "include/linux/wait.h"
struct task_struct;
#line 48 "include/linux/mutex.h"
struct mutex {
   atomic_t count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct task_struct *owner ;
   char const   *name ;
   void *magic ;
};
#line 18 "include/linux/capability.h"
struct task_struct;
#line 413 "include/linux/fs.h"
struct kobject;
#line 413
struct kobject;
#line 270 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/elf.h"
struct task_struct;
#line 20 "include/linux/kobject_ns.h"
struct sock;
#line 20
struct sock;
#line 21
struct kobject;
#line 27
enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE = 0,
    KOBJ_NS_TYPE_NET = 1,
    KOBJ_NS_TYPES = 2
} ;
#line 40 "include/linux/kobject_ns.h"
struct kobj_ns_type_operations {
   enum kobj_ns_type type ;
   void *(*grab_current_ns)(void) ;
   void const   *(*netlink_ns)(struct sock *sk ) ;
   void const   *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
#line 22 "include/linux/sysfs.h"
struct kobject;
#line 24
enum kobj_ns_type;
#line 26 "include/linux/sysfs.h"
struct attribute {
   char const   *name ;
   umode_t mode ;
};
#line 56 "include/linux/sysfs.h"
struct attribute_group {
   char const   *name ;
   umode_t (*is_visible)(struct kobject * , struct attribute * , int  ) ;
   struct attribute **attrs ;
};
#line 112 "include/linux/sysfs.h"
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const   * , size_t  ) ;
   void const   *(*namespace)(struct kobject * , struct attribute  const  * ) ;
};
#line 118
struct sysfs_dirent;
#line 118
struct sysfs_dirent;
#line 22 "include/linux/kref.h"
struct kref {
   atomic_t refcount ;
};
#line 60 "include/linux/kobject.h"
struct kset;
#line 60
struct kobj_type;
#line 60 "include/linux/kobject.h"
struct kobject {
   char const   *name ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   struct kref kref ;
   unsigned int state_initialized : 1 ;
   unsigned int state_in_sysfs : 1 ;
   unsigned int state_add_uevent_sent : 1 ;
   unsigned int state_remove_uevent_sent : 1 ;
   unsigned int uevent_suppress : 1 ;
};
#line 108 "include/linux/kobject.h"
struct kobj_type {
   void (*release)(struct kobject *kobj ) ;
   struct sysfs_ops  const  *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations  const  *(*child_ns_type)(struct kobject *kobj ) ;
   void const   *(*namespace)(struct kobject *kobj ) ;
};
#line 116 "include/linux/kobject.h"
struct kobj_uevent_env {
   char *envp[32] ;
   int envp_idx ;
   char buf[2048] ;
   int buflen ;
};
#line 123 "include/linux/kobject.h"
struct kset_uevent_ops {
   int (* const  filter)(struct kset *kset , struct kobject *kobj ) ;
   char const   *(* const  name)(struct kset *kset , struct kobject *kobj ) ;
   int (* const  uevent)(struct kset *kset , struct kobject *kobj , struct kobj_uevent_env *env ) ;
};
#line 130 "include/linux/kobject.h"
struct kobj_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct kobject *kobj , struct kobj_attribute *attr , char *buf ) ;
   ssize_t (*store)(struct kobject *kobj , struct kobj_attribute *attr , char const   *buf ,
                    size_t count ) ;
};
#line 140
struct sock;
#line 159 "include/linux/kobject.h"
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops  const  *uevent_ops ;
};
#line 39 "include/linux/moduleparam.h"
struct kernel_param;
#line 39
struct kernel_param;
#line 41 "include/linux/moduleparam.h"
struct kernel_param_ops {
   int (*set)(char const   *val , struct kernel_param  const  *kp ) ;
   int (*get)(char *buffer , struct kernel_param  const  *kp ) ;
   void (*free)(void *arg ) ;
};
#line 50
struct kparam_string;
#line 50
struct kparam_array;
#line 50 "include/linux/moduleparam.h"
union __anonunion____missing_field_name_216 {
   void *arg ;
   struct kparam_string  const  *str ;
   struct kparam_array  const  *arr ;
};
#line 50 "include/linux/moduleparam.h"
struct kernel_param {
   char const   *name ;
   struct kernel_param_ops  const  *ops ;
   u16 perm ;
   s16 level ;
   union __anonunion____missing_field_name_216 __annonCompField35 ;
};
#line 63 "include/linux/moduleparam.h"
struct kparam_string {
   unsigned int maxlen ;
   char *string ;
};
#line 69 "include/linux/moduleparam.h"
struct kparam_array {
   unsigned int max ;
   unsigned int elemsize ;
   unsigned int *num ;
   struct kernel_param_ops  const  *ops ;
   void *elem ;
};
#line 8 "include/linux/debug_locks.h"
struct task_struct;
#line 48
struct task_struct;
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
enum var_type_t {
    VAR_NUM = 0,
    VAR_TIME = 1,
    VAR_STRING = 2,
    VAR_PROC = 3
} ;
#line 35
enum var_id_t {
    VERSION = 0,
    SYNTH = 1,
    SILENT = 2,
    SYNTH_DIRECT = 3,
    KEYMAP = 4,
    CHARS = 5,
    PUNC_SOME = 6,
    PUNC_MOST = 7,
    PUNC_ALL = 8,
    DELIM = 9,
    REPEATS = 10,
    EXNUMBER = 11,
    DELAY = 12,
    TRIGGER = 13,
    JIFFY = 14,
    FULL = 15,
    BLEEP_TIME = 16,
    CURSOR_TIME = 17,
    BELL_POS = 18,
    SAY_CONTROL = 19,
    SAY_WORD_CTL = 20,
    NO_INTERRUPT = 21,
    KEY_ECHO = 22,
    SPELL_DELAY = 23,
    PUNC_LEVEL = 24,
    READING_PUNC = 25,
    ATTRIB_BLEEP = 26,
    BLEEPS = 27,
    RATE = 28,
    PITCH = 29,
    VOL = 30,
    TONE = 31,
    PUNCT = 32,
    VOICE = 33,
    FREQUENCY = 34,
    LANG = 35,
    DIRECT = 36,
    CAPS_START = 37,
    CAPS_STOP = 38,
    CHARTAB = 39,
    MAXVARS = 40
} ;
#line 102 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct st_var_header {
   char *name ;
   enum var_id_t var_id ;
   enum var_type_t var_type ;
   void *p_val ;
   void *data ;
};
#line 110 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct num_var_t {
   char *synth_fmt ;
   int default_val ;
   int low ;
   int high ;
   short offset ;
   short multiplier ;
   char *out_str ;
   int value ;
};
#line 125 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct string_var_t {
   char *default_val ;
};
#line 129 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
union __anonunion_u_231 {
   struct num_var_t n ;
   struct string_var_t s ;
};
#line 129 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct var_t {
   enum var_id_t var_id ;
   union __anonunion_u_231 u ;
};
#line 143 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct synth_indexing {
   char *command ;
   unsigned char lowindex ;
   unsigned char highindex ;
   unsigned char currindex ;
};
#line 150 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_types.h"
struct spk_synth {
   char const   *name ;
   char const   *version ;
   char const   *long_name ;
   char const   *init ;
   char procspeech ;
   char clear ;
   int delay ;
   int trigger ;
   int jiffies ;
   int full ;
   int ser ;
   short flags ;
   short startup ;
   int const   checkval ;
   struct var_t *vars ;
   int *default_pitch ;
   int *default_vol ;
   int (*probe)(struct spk_synth *synth ) ;
   void (*release)(void) ;
   char const   *(*synth_immediate)(struct spk_synth *synth , char const   *buff ) ;
   void (*catch_up)(struct spk_synth *synth ) ;
   void (*flush)(struct spk_synth *synth ) ;
   int (*is_alive)(struct spk_synth *synth ) ;
   int (*synth_adjust)(struct st_var_header *var ) ;
   void (*read_buff_add)(u_char  ) ;
   unsigned char (*get_index)(void) ;
   struct synth_indexing indexing ;
   int alive ;
   struct attribute_group attributes ;
};
#line 1 "<compiler builtins>"
long __builtin_expect(long val , long res ) ;
#line 152 "include/linux/mutex.h"
void mutex_lock(struct mutex *lock ) ;
#line 153
int __attribute__((__warn_unused_result__))  mutex_lock_interruptible(struct mutex *lock ) ;
#line 154
int __attribute__((__warn_unused_result__))  mutex_lock_killable(struct mutex *lock ) ;
#line 168
int mutex_trylock(struct mutex *lock ) ;
#line 169
void mutex_unlock(struct mutex *lock ) ;
#line 170
int atomic_dec_and_mutex_lock(atomic_t *cnt , struct mutex *lock ) ;
#line 346 "include/linux/moduleparam.h"
extern struct kernel_param_ops param_ops_short ;
#line 356
extern struct kernel_param_ops param_ops_int ;
#line 67 "include/linux/module.h"
int init_module(void) ;
#line 68
void cleanup_module(void) ;
#line 53 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/drivers/staging/speakup/spk_priv.h"
extern void spk_serial_release(void) ;
#line 59
extern ssize_t spk_var_show(struct kobject *kobj , struct kobj_attribute *attr , char *buf ) ;
#line 61
extern ssize_t spk_var_store(struct kobject *kobj , struct kobj_attribute *attr ,
                             char const   *buf , size_t count ) ;
#line 64
extern int serial_synth_probe(struct spk_synth *synth ) ;
#line 65
extern char const   *spk_synth_immediate(struct spk_synth *synth , char const   *buff ) ;
#line 66
extern void spk_do_catch_up(struct spk_synth *synth ) ;
#line 67
extern void spk_synth_flush(struct spk_synth *synth ) ;
#line 69
extern int spk_synth_is_alive_restart(struct spk_synth *synth ) ;
#line 73
extern int synth_add(struct spk_synth *in_synth ) ;
#line 74
extern void synth_remove(struct spk_synth *in_synth ) ;
#line 33 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct var_t vars[8]  = 
#line 33 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
  {      {(enum var_id_t )37, {.s = {(char *)"\00512P"}}}, 
        {(enum var_id_t )38, {.s = {(char *)"\0058P"}}}, 
        {(enum var_id_t )28, {{(char *)"\005%dE", 8, 1, 16, (short)0, (short)0, (char *)((void *)0),
                            0}}}, 
        {(enum var_id_t )29, {{(char *)"\005%dP", 8, 0, 16, (short)0, (short)0, (char *)((void *)0),
                            0}}}, 
        {(enum var_id_t )30, {{(char *)"\005%dV", 8, 0, 16, (short)0, (short)0, (char *)((void *)0),
                            0}}}, 
        {(enum var_id_t )31, {{(char *)"\005%dT", 8, 0, 16, (short)0, (short)0, (char *)((void *)0),
                            0}}}, 
        {(enum var_id_t )36, {{(char *)((void *)0), 0, 0, 1, (short)0, (short)0, (char *)((void *)0),
                            0}}}, 
        {(enum var_id_t )40, {{(char *)0, 0, 0, 0, (short)0, (short)0, (char *)0, 0}}}};
#line 47 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute caps_start_attribute  =    {{"caps_start", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 49 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute caps_stop_attribute  =    {{"caps_stop", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 51 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute pitch_attribute  =    {{"pitch", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 53 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute rate_attribute  =    {{"rate", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 55 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute tone_attribute  =    {{"tone", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 57 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute vol_attribute  =    {{"vol", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 60 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute delay_time_attribute  =    {{"delay_time", (umode_t )33188}, & spk_var_show, & spk_var_store};
#line 62 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute direct_attribute  =    {{"direct", (umode_t )33206}, & spk_var_show, & spk_var_store};
#line 64 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute full_time_attribute  =    {{"full_time", (umode_t )33188}, & spk_var_show, & spk_var_store};
#line 66 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute jiffy_delta_attribute  =    {{"jiffy_delta", (umode_t )33188}, & spk_var_show, & spk_var_store};
#line 68 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kobj_attribute trigger_time_attribute  =    {{"trigger_time", (umode_t )33188}, & spk_var_show, & spk_var_store};
#line 75 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct attribute *synth_attrs[12]  = 
#line 75
  {      & caps_start_attribute.attr,      & caps_stop_attribute.attr,      & pitch_attribute.attr,      & rate_attribute.attr, 
        & tone_attribute.attr,      & vol_attribute.attr,      & delay_time_attribute.attr,      & direct_attribute.attr, 
        & full_time_attribute.attr,      & jiffy_delta_attribute.attr,      & trigger_time_attribute.attr,      (struct attribute *)((void *)0)};
#line 90 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct spk_synth synth_bns  = 
#line 90
     {"bns", "2.11", "Braille \'N Speak", "\005Z\005C", (char )'\r', (char)24, 500,
    50, 50, 40000, 0, (short)0, (short)1, (int const   )20030716, vars, (int *)0,
    (int *)0, & serial_synth_probe, & spk_serial_release, & spk_synth_immediate, & spk_do_catch_up,
    & spk_synth_flush, & spk_synth_is_alive_restart, (int (*)(struct st_var_header *var ))((void *)0),
    (void (*)(u_char  ))((void *)0), (unsigned char (*)(void))((void *)0), {(char *)((void *)0),
                                                                            (unsigned char)0,
                                                                            (unsigned char)0,
                                                                            (unsigned char)0},
    0, {"bns", (umode_t (*)(struct kobject * , struct attribute * , int  ))0, synth_attrs}};
#line 125 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __param_str_ser[4]  = {      (char const   )'s',      (char const   )'e',      (char const   )'r',      (char const   )'\000'};
#line 125 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kernel_param  const  __param_ser  __attribute__((__used__, __unused__,
__section__("__param"), __aligned__(sizeof(void *))))  =    {__param_str_ser, (struct kernel_param_ops  const  *)(& param_ops_int), (u16 )292,
    (s16 )0, {(void *)(& synth_bns.ser)}};
#line 125 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_sertype125[17]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 125
  {      (char const   )'p',      (char const   )'a',      (char const   )'r',      (char const   )'m', 
        (char const   )'t',      (char const   )'y',      (char const   )'p',      (char const   )'e', 
        (char const   )'=',      (char const   )'s',      (char const   )'e',      (char const   )'r', 
        (char const   )':',      (char const   )'i',      (char const   )'n',      (char const   )'t', 
        (char const   )'\000'};
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __param_str_start[6]  = {      (char const   )'s',      (char const   )'t',      (char const   )'a',      (char const   )'r', 
        (char const   )'t',      (char const   )'\000'};
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static struct kernel_param  const  __param_start  __attribute__((__used__, __unused__,
__section__("__param"), __aligned__(sizeof(void *))))  =    {__param_str_start, (struct kernel_param_ops  const  *)(& param_ops_short), (u16 )292,
    (s16 )0, {(void *)(& synth_bns.startup)}};
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_starttype126[21]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 126
  {      (char const   )'p',      (char const   )'a',      (char const   )'r',      (char const   )'m', 
        (char const   )'t',      (char const   )'y',      (char const   )'p',      (char const   )'e', 
        (char const   )'=',      (char const   )'s',      (char const   )'t',      (char const   )'a', 
        (char const   )'r',      (char const   )'t',      (char const   )':',      (char const   )'s', 
        (char const   )'h',      (char const   )'o',      (char const   )'r',      (char const   )'t', 
        (char const   )'\000'};
#line 128 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_ser128[60]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 128
  {      (char const   )'p',      (char const   )'a',      (char const   )'r',      (char const   )'m', 
        (char const   )'=',      (char const   )'s',      (char const   )'e',      (char const   )'r', 
        (char const   )':',      (char const   )'S',      (char const   )'e',      (char const   )'t', 
        (char const   )' ',      (char const   )'t',      (char const   )'h',      (char const   )'e', 
        (char const   )' ',      (char const   )'s',      (char const   )'e',      (char const   )'r', 
        (char const   )'i',      (char const   )'a',      (char const   )'l',      (char const   )' ', 
        (char const   )'p',      (char const   )'o',      (char const   )'r',      (char const   )'t', 
        (char const   )' ',      (char const   )'f',      (char const   )'o',      (char const   )'r', 
        (char const   )' ',      (char const   )'t',      (char const   )'h',      (char const   )'e', 
        (char const   )' ',      (char const   )'s',      (char const   )'y',      (char const   )'n', 
        (char const   )'t',      (char const   )'h',      (char const   )'e',      (char const   )'s', 
        (char const   )'i',      (char const   )'z',      (char const   )'e',      (char const   )'r', 
        (char const   )' ',      (char const   )'(',      (char const   )'0',      (char const   )'-', 
        (char const   )'b',      (char const   )'a',      (char const   )'s',      (char const   )'e', 
        (char const   )'d',      (char const   )')',      (char const   )'.',      (char const   )'\000'};
#line 129 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_start129[52]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 129
  {      (char const   )'p',      (char const   )'a',      (char const   )'r',      (char const   )'m', 
        (char const   )'=',      (char const   )'s',      (char const   )'t',      (char const   )'a', 
        (char const   )'r',      (char const   )'t',      (char const   )':',      (char const   )'S', 
        (char const   )'t',      (char const   )'a',      (char const   )'r',      (char const   )'t', 
        (char const   )' ',      (char const   )'t',      (char const   )'h',      (char const   )'e', 
        (char const   )' ',      (char const   )'s',      (char const   )'y',      (char const   )'n', 
        (char const   )'t',      (char const   )'h',      (char const   )'e',      (char const   )'s', 
        (char const   )'i',      (char const   )'z',      (char const   )'e',      (char const   )'r', 
        (char const   )' ',      (char const   )'o',      (char const   )'n',      (char const   )'c', 
        (char const   )'e',      (char const   )' ',      (char const   )'i',      (char const   )'t', 
        (char const   )' ',      (char const   )'i',      (char const   )'s',      (char const   )' ', 
        (char const   )'l',      (char const   )'o',      (char const   )'a',      (char const   )'d', 
        (char const   )'e',      (char const   )'d',      (char const   )'.',      (char const   )'\000'};
#line 131
static int bns_init(void)  __attribute__((__section__(".init.text"), __no_instrument_function__)) ;
#line 131 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static int bns_init(void) 
{ int tmp ;

  {
  {
#line 133
  tmp = synth_add(& synth_bns);
  }
#line 133
  return (tmp);
}
}
#line 136
static void bns_exit(void)  __attribute__((__section__(".exit.text"), __no_instrument_function__)) ;
#line 136 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static void bns_exit(void) 
{ 

  {
  {
#line 138
  synth_remove(& synth_bns);
  }
#line 139
  return;
}
}
#line 141 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
int init_module(void) 
{ int tmp ;

  {
  {
#line 141
  tmp = bns_init();
  }
#line 141
  return (tmp);
}
}
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
void cleanup_module(void) 
{ 

  {
  {
#line 142
  bns_exit();
  }
#line 142
  return;
}
}
#line 143 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_author143[41]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 143
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'K', 
        (char const   )'i',      (char const   )'r',      (char const   )'k',      (char const   )' ', 
        (char const   )'R',      (char const   )'e',      (char const   )'i',      (char const   )'s', 
        (char const   )'e',      (char const   )'r',      (char const   )' ',      (char const   )'<', 
        (char const   )'k',      (char const   )'i',      (char const   )'r',      (char const   )'k', 
        (char const   )'@',      (char const   )'b',      (char const   )'r',      (char const   )'a', 
        (char const   )'i',      (char const   )'l',      (char const   )'l',      (char const   )'e', 
        (char const   )'.',      (char const   )'u',      (char const   )'w',      (char const   )'o', 
        (char const   )'.',      (char const   )'c',      (char const   )'a',      (char const   )'>', 
        (char const   )'\000'};
#line 144 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_author144[22]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 144
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'D', 
        (char const   )'a',      (char const   )'v',      (char const   )'i',      (char const   )'d', 
        (char const   )' ',      (char const   )'B',      (char const   )'o',      (char const   )'r', 
        (char const   )'o',      (char const   )'w',      (char const   )'s',      (char const   )'k', 
        (char const   )'i',      (char const   )'\000'};
#line 145 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_description145[62]  __attribute__((__used__, __unused__,
__section__(".modinfo"), __aligned__(1)))  = 
#line 145
  {      (char const   )'d',      (char const   )'e',      (char const   )'s',      (char const   )'c', 
        (char const   )'r',      (char const   )'i',      (char const   )'p',      (char const   )'t', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'=', 
        (char const   )'S',      (char const   )'p',      (char const   )'e',      (char const   )'a', 
        (char const   )'k',      (char const   )'u',      (char const   )'p',      (char const   )' ', 
        (char const   )'s',      (char const   )'u',      (char const   )'p',      (char const   )'p', 
        (char const   )'o',      (char const   )'r',      (char const   )'t',      (char const   )' ', 
        (char const   )'f',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'B',      (char const   )'r',      (char const   )'a',      (char const   )'i', 
        (char const   )'l',      (char const   )'l',      (char const   )'e',      (char const   )' ', 
        (char const   )'\'',      (char const   )'n',      (char const   )' ',      (char const   )'S', 
        (char const   )'p',      (char const   )'e',      (char const   )'a',      (char const   )'k', 
        (char const   )' ',      (char const   )'s',      (char const   )'y',      (char const   )'n', 
        (char const   )'t',      (char const   )'h',      (char const   )'e',      (char const   )'s', 
        (char const   )'i',      (char const   )'z',      (char const   )'e',      (char const   )'r', 
        (char const   )'s',      (char const   )'\000'};
#line 146 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_license146[12]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 146
  {      (char const   )'l',      (char const   )'i',      (char const   )'c',      (char const   )'e', 
        (char const   )'n',      (char const   )'s',      (char const   )'e',      (char const   )'=', 
        (char const   )'G',      (char const   )'P',      (char const   )'L',      (char const   )'\000'};
#line 147 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
static char const   __mod_version147[13]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 147
  {      (char const   )'v',      (char const   )'e',      (char const   )'r',      (char const   )'s', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'=', 
        (char const   )'2',      (char const   )'.',      (char const   )'1',      (char const   )'1', 
        (char const   )'\000'};
#line 166
void ldv_check_final_state(void) ;
#line 172
extern void ldv_initialize(void) ;
#line 175
extern int nondet_int(void) ;
#line 178 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
int LDV_IN_INTERRUPT  ;
#line 181 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
void ldv_main0_sequence_infinite_withcheck_stateful(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 193
  LDV_IN_INTERRUPT = 1;
#line 202
  ldv_initialize();
#line 212
  tmp = bns_init();
  }
#line 212
  if (tmp) {
#line 213
    goto ldv_final;
  } else {

  }
  {
#line 215
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 215
    tmp___1 = nondet_int();
    }
#line 215
    if (tmp___1) {

    } else {
#line 215
      goto while_break;
    }
    {
#line 218
    tmp___0 = nondet_int();
    }
    {
#line 220
    goto switch_default;
#line 218
    if (0) {
      switch_default: /* CIL Label */ 
#line 220
      goto switch_break;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 236
  bns_exit();
  }
  ldv_final: 
  {
#line 239
  ldv_check_final_state();
  }
#line 242
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  LDV_ERROR: 
#line 6
  goto LDV_ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int ldv_mutex  =    1;
#line 22 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int __attribute__((__warn_unused_result__))  mutex_lock_interruptible(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 29
  if (ldv_mutex == 1) {

  } else {
    {
#line 29
    ldv_blast_assert();
    }
  }
  {
#line 32
  nondetermined = __VERIFIER_nondet_int();
  }
#line 35
  if (nondetermined) {
#line 38
    ldv_mutex = 2;
#line 40
    return (0);
  } else {
#line 45
    return (-4);
  }
}
}
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int __attribute__((__warn_unused_result__))  mutex_lock_killable(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 57
  if (ldv_mutex == 1) {

  } else {
    {
#line 57
    ldv_blast_assert();
    }
  }
  {
#line 60
  nondetermined = __VERIFIER_nondet_int();
  }
#line 63
  if (nondetermined) {
#line 66
    ldv_mutex = 2;
#line 68
    return (0);
  } else {
#line 73
    return (-4);
  }
}
}
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int atomic_dec_and_mutex_lock(atomic_t *cnt , struct mutex *lock ) 
{ int atomic_value_after_dec ;

  {
#line 83
  if (ldv_mutex == 1) {

  } else {
    {
#line 83
    ldv_blast_assert();
    }
  }
  {
#line 86
  atomic_value_after_dec = __VERIFIER_nondet_int();
  }
#line 89
  if (atomic_value_after_dec == 0) {
#line 92
    ldv_mutex = 2;
#line 94
    return (1);
  } else {

  }
#line 98
  return (0);
}
}
#line 103 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void mutex_lock(struct mutex *lock ) 
{ 

  {
#line 108
  if (ldv_mutex == 1) {

  } else {
    {
#line 108
    ldv_blast_assert();
    }
  }
#line 110
  ldv_mutex = 2;
#line 111
  return;
}
}
#line 114 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int mutex_trylock(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 121
  if (ldv_mutex == 1) {

  } else {
    {
#line 121
    ldv_blast_assert();
    }
  }
  {
#line 124
  nondetermined = __VERIFIER_nondet_int();
  }
#line 127
  if (nondetermined) {
#line 130
    ldv_mutex = 2;
#line 132
    return (1);
  } else {
#line 137
    return (0);
  }
}
}
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void mutex_unlock(struct mutex *lock ) 
{ 

  {
#line 147
  if (ldv_mutex == 2) {

  } else {
    {
#line 147
    ldv_blast_assert();
    }
  }
#line 149
  ldv_mutex = 1;
#line 150
  return;
}
}
#line 153 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void ldv_check_final_state(void) 
{ 

  {
#line 156
  if (ldv_mutex == 1) {

  } else {
    {
#line 156
    ldv_blast_assert();
    }
  }
#line 157
  return;
}
}
#line 251 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/1169/dscv_tempdir/dscv/ri/32_1/drivers/staging/speakup/speakup_bns.c.common.c"
long __builtin_expect(long val , long res ) 
{ 

  {
#line 252
  return (val);
}
}
