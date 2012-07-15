/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 52 "include/asm-generic/int-ll64.h"
typedef unsigned long long u64;
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
#line 31 "include/media/rc-map.h"
struct rc_map_table {
   u32 scancode ;
   u32 keycode ;
};
#line 36 "include/media/rc-map.h"
struct rc_map {
   struct rc_map_table *scan ;
   unsigned int size ;
   unsigned int len ;
   unsigned int alloc ;
   u64 rc_type ;
   char const   *name ;
   spinlock_t lock ;
};
#line 46 "include/media/rc-map.h"
struct rc_map_list {
   struct list_head list ;
   struct rc_map map ;
};
#line 270 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/elf.h"
struct task_struct;
#line 73 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
struct __anonstruct_220 {
   int  : 0 ;
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
#line 53 "include/media/rc-map.h"
extern int rc_map_register(struct rc_map_list *map ) ;
#line 54
extern void rc_map_unregister(struct rc_map_list *map ) ;
#line 67 "include/linux/module.h"
int init_module(void) ;
#line 68
void cleanup_module(void) ;
#line 16 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static struct rc_map_table it913x_v1_rc[52]  = 
#line 16 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
  {      {(u32 )6411777, (u32 )393}, 
        {(u32 )6411778, (u32 )4}, 
        {(u32 )6411779, (u32 )116}, 
        {(u32 )6411780, (u32 )2}, 
        {(u32 )6411781, (u32 )6}, 
        {(u32 )6411782, (u32 )7}, 
        {(u32 )6411783, (u32 )403}, 
        {(u32 )6411784, (u32 )3}, 
        {(u32 )6411785, (u32 )402}, 
        {(u32 )6411786, (u32 )10}, 
        {(u32 )6411787, (u32 )372}, 
        {(u32 )6411788, (u32 )8}, 
        {(u32 )6411789, (u32 )9}, 
        {(u32 )6411790, (u32 )115}, 
        {(u32 )6411791, (u32 )5}, 
        {(u32 )6411792, (u32 )1}, 
        {(u32 )6411793, (u32 )11}, 
        {(u32 )6411794, (u32 )352}, 
        {(u32 )6411795, (u32 )114}, 
        {(u32 )6411796, (u32 )167}, 
        {(u32 )6411797, (u32 )128}, 
        {(u32 )6411798, (u32 )207}, 
        {(u32 )6411799, (u32 )113}, 
        {(u32 )6411800, (u32 )103}, 
        {(u32 )6411801, (u32 )108}, 
        {(u32 )6411802, (u32 )105}, 
        {(u32 )6411803, (u32 )106}, 
        {(u32 )6411804, (u32 )398}, 
        {(u32 )6411805, (u32 )399}, 
        {(u32 )6411806, (u32 )400}, 
        {(u32 )6411807, (u32 )401}, 
        {(u32 )6411843, (u32 )356}, 
        {(u32 )8421133, (u32 )11}, 
        {(u32 )8421124, (u32 )2}, 
        {(u32 )8421125, (u32 )3}, 
        {(u32 )8421126, (u32 )4}, 
        {(u32 )8421127, (u32 )5}, 
        {(u32 )8421128, (u32 )6}, 
        {(u32 )8421129, (u32 )7}, 
        {(u32 )8421130, (u32 )8}, 
        {(u32 )8421147, (u32 )9}, 
        {(u32 )8421151, (u32 )10}, 
        {(u32 )8421138, (u32 )116}, 
        {(u32 )8421121, (u32 )439}, 
        {(u32 )8421145, (u32 )119}, 
        {(u32 )8421150, (u32 )115}, 
        {(u32 )8421123, (u32 )114}, 
        {(u32 )8421146, (u32 )402}, 
        {(u32 )8421122, (u32 )403}, 
        {(u32 )8421132, (u32 )372}, 
        {(u32 )8421120, (u32 )167}, 
        {(u32 )8421134, (u32 )128}};
#line 73 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static struct rc_map_list it913x_v1_map  =    {{(struct list_head *)0, (struct list_head *)0}, {it913x_v1_rc, (unsigned int )(sizeof(it913x_v1_rc) / sizeof(it913x_v1_rc[0]) + sizeof(struct __anonstruct_220 )),
                                                     0U, 0U, (u64 )(1 << 1), "rc-it913x-v1",
                                                     {{{{{0U}}, 0U, 0U, (void *)0}}}}};
#line 82
static int init_rc_it913x_v1_map(void)  __attribute__((__section__(".init.text"),
__no_instrument_function__)) ;
#line 82 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static int init_rc_it913x_v1_map(void) 
{ int tmp ;

  {
  {
#line 84
  tmp = rc_map_register(& it913x_v1_map);
  }
#line 84
  return (tmp);
}
}
#line 87
static void exit_rc_it913x_v1_map(void)  __attribute__((__section__(".exit.text"),
__no_instrument_function__)) ;
#line 87 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static void exit_rc_it913x_v1_map(void) 
{ 

  {
  {
#line 89
  rc_map_unregister(& it913x_v1_map);
  }
#line 90
  return;
}
}
#line 92 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
int init_module(void) 
{ int tmp ;

  {
  {
#line 92
  tmp = init_rc_it913x_v1_map();
  }
#line 92
  return (tmp);
}
}
#line 93 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
void cleanup_module(void) 
{ 

  {
  {
#line 93
  exit_rc_it913x_v1_map();
  }
#line 93
  return;
}
}
#line 95 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static char const   __mod_license95[12]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 95
  {      (char const   )'l',      (char const   )'i',      (char const   )'c',      (char const   )'e', 
        (char const   )'n',      (char const   )'s',      (char const   )'e',      (char const   )'=', 
        (char const   )'G',      (char const   )'P',      (char const   )'L',      (char const   )'\000'};
#line 96 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
static char const   __mod_author96[44]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 96
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'M', 
        (char const   )'a',      (char const   )'l',      (char const   )'c',      (char const   )'o', 
        (char const   )'l',      (char const   )'m',      (char const   )' ',      (char const   )'P', 
        (char const   )'r',      (char const   )'i',      (char const   )'e',      (char const   )'s', 
        (char const   )'t',      (char const   )'l',      (char const   )'e',      (char const   )'y', 
        (char const   )' ',      (char const   )'t',      (char const   )'v',      (char const   )'b', 
        (char const   )'o',      (char const   )'x',      (char const   )'s',      (char const   )'p', 
        (char const   )'y',      (char const   )'@',      (char const   )'g',      (char const   )'m', 
        (char const   )'a',      (char const   )'i',      (char const   )'l',      (char const   )'.', 
        (char const   )'c',      (char const   )'o',      (char const   )'m',      (char const   )'\000'};
#line 114
void ldv_check_final_state(void) ;
#line 120
extern void ldv_initialize(void) ;
#line 123
extern int nondet_int(void) ;
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
int LDV_IN_INTERRUPT  ;
#line 129 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
void ldv_main0_sequence_infinite_withcheck_stateful(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 141
  LDV_IN_INTERRUPT = 1;
#line 150
  ldv_initialize();
#line 156
  tmp = init_rc_it913x_v1_map();
  }
#line 156
  if (tmp) {
#line 157
    goto ldv_final;
  } else {

  }
  {
#line 159
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 159
    tmp___1 = nondet_int();
    }
#line 159
    if (tmp___1) {

    } else {
#line 159
      goto while_break;
    }
    {
#line 162
    tmp___0 = nondet_int();
    }
    {
#line 164
    goto switch_default;
#line 162
    if (0) {
      switch_default: /* CIL Label */ 
#line 164
      goto switch_break;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 176
  exit_rc_it913x_v1_map();
  }
  ldv_final: 
  {
#line 179
  ldv_check_final_state();
  }
#line 182
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  LDV_ERROR: 
#line 6
  goto LDV_ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int ldv_mutex  =    1;
#line 22 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 103 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 114 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 153 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 191 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12903/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-it913x-v1.c.common.c"
long __builtin_expect(long val , long res ) 
{ 

  {
#line 192
  return (val);
}
}
