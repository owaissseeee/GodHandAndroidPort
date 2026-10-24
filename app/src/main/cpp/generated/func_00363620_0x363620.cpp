#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00363620
// Address: 0x363620 - 0x365d18
void func_00363620_0x363620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00363620_0x363620");
#endif

    ctx->pc = 0x363620u;

    // 0x363620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x363620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x363624: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x363624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363628: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x363628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x36362c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x36362cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36363c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x363640: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x363640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x363644: 0x346800ff  ori         $t0, $v1, 0xFF
    ctx->pc = 0x363644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x363648: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x363648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x36364c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x36364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x363650: 0x7063cb89  pcpyld      $t9, $v1, $v1
    ctx->pc = 0x363650u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x363654: 0x721084c9  pxor        $s0, $s0, $s0
    ctx->pc = 0x363654u;
    SET_GPR_VEC(ctx, 16, PS2_PXOR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x363658: 0xcc800100  pref        0x00, 0x100($a0)
    ctx->pc = 0x363658u;
    // PREF instruction (ignored)
    // 0x36365c: 0xcc800140  pref        0x00, 0x140($a0)
    ctx->pc = 0x36365cu;
    // PREF instruction (ignored)
    // 0x363660: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x363660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x363664: 0x546821  addu        $t5, $v0, $s4
    ctx->pc = 0x363664u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x363668: 0x248e0100  addiu       $t6, $a0, 0x100
    ctx->pc = 0x363668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x36366c: 0xcc800000  pref        0x00, 0x0($a0)
    ctx->pc = 0x36366cu;
    // PREF instruction (ignored)
    // 0x363670: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x363670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x363674: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x363674u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x363678: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x363678u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36367c: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x36367cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x363680: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x363680u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x363684: 0x90880100  lbu         $t0, 0x100($a0)
    ctx->pc = 0x363684u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x363688: 0x90850140  lbu         $a1, 0x140($a0)
    ctx->pc = 0x363688u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x36368c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36368cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363690: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363690u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363694: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363694u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363698: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363698u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x36369c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x36369cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3636a0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3636a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3636a4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3636a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3636a8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3636a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3636ac: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3636acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3636b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3636b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3636b4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3636b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3636b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3636b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3636bc: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3636bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3636c0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3636c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3636c4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3636c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3636c8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3636c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3636cc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3636ccu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3636d0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3636d0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3636d4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3636d4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3636d8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3636d8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3636dc: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x3636dcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3636e0: 0x90880101  lbu         $t0, 0x101($a0)
    ctx->pc = 0x3636e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 257)));
    // 0x3636e4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3636e4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3636e8: 0x90850141  lbu         $a1, 0x141($a0)
    ctx->pc = 0x3636e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 321)));
    // 0x3636ec: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3636ecu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3636f0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3636f0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3636f4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3636f4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3636f8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3636f8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3636fc: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x3636fcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x363700: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x363700u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x363704: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363704u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363708: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x363708u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x36370c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36370cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363710: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363710u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363714: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363714u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363718: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363718u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36371c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36371cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363720: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363720u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363724: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363724u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363728: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36372c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36372cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363730: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363730u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363734: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363734u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363738: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36373c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x36373cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363740: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363744: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363748: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36374c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x36374cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363750: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363750u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363754: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363754u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363758: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363758u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36375c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x36375cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363760: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363760u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363764: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363764u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363768: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363768u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36376c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36376cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363770: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363770u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363774: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363774u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363778: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363778u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36377c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x36377cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363780: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363780u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363784: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363784u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363788: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363788u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x36378c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x36378cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363790: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363790u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363794: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x363794u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x363798: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363798u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x36379c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x36379cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3637a0: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x3637a0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x3637a4: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x3637a4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3637a8: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x3637a8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3637ac: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x3637acu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x3637b0: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x3637b0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3637b4: 0x90880102  lbu         $t0, 0x102($a0)
    ctx->pc = 0x3637b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 258)));
    // 0x3637b8: 0x90850142  lbu         $a1, 0x142($a0)
    ctx->pc = 0x3637b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 322)));
    // 0x3637bc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3637bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3637c0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3637c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3637c4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3637c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3637c8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3637c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3637cc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3637ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3637d0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3637d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3637d4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3637d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3637d8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3637d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3637dc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3637dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3637e0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3637e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3637e4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3637e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3637e8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3637e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3637ec: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3637ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3637f0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3637f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3637f4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3637f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3637f8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3637f8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3637fc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3637fcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363800: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363800u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363804: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363804u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363808: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363808u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36380c: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x36380cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x363810: 0x90880103  lbu         $t0, 0x103($a0)
    ctx->pc = 0x363810u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 259)));
    // 0x363814: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363814u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363818: 0x90850143  lbu         $a1, 0x143($a0)
    ctx->pc = 0x363818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 323)));
    // 0x36381c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36381cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363820: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363820u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363824: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363824u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363828: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363828u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36382c: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x36382cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x363830: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x363830u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x363834: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363834u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363838: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x363838u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x36383c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36383cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363840: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363840u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363844: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363848: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363848u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36384c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36384cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363850: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363850u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363854: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363854u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363858: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36385c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363860: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363864: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363864u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363868: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36386c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x36386cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363870: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363874: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363878: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36387c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x36387cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363880: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363880u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363884: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363884u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363888: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363888u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36388c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x36388cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363890: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363890u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363894: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363894u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363898: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363898u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36389c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36389cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3638a0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3638a0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3638a4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3638a4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3638a8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3638a8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3638ac: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3638acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3638b0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3638b0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3638b4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3638b4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3638b8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3638b8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3638bc: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3638bcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3638c0: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3638c0u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3638c4: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x3638c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x3638c8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3638c8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3638cc: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3638ccu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3638d0: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x3638d0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x3638d4: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x3638d4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3638d8: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x3638d8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3638dc: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x3638dcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x3638e0: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x3638e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3638e4: 0x90880104  lbu         $t0, 0x104($a0)
    ctx->pc = 0x3638e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x3638e8: 0x90850144  lbu         $a1, 0x144($a0)
    ctx->pc = 0x3638e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x3638ec: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3638ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3638f0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3638f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3638f4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3638f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3638f8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3638f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3638fc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3638fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363900: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363904: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363908: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36390c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36390cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363910: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363914: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363918: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36391c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x36391cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363920: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363924: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363928: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363928u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36392c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36392cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363930: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363930u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363934: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363934u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363938: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363938u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36393c: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x36393cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x363940: 0x90880105  lbu         $t0, 0x105($a0)
    ctx->pc = 0x363940u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 261)));
    // 0x363944: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363944u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363948: 0x90850145  lbu         $a1, 0x145($a0)
    ctx->pc = 0x363948u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 325)));
    // 0x36394c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36394cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363950: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363950u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363954: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363954u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363958: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363958u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36395c: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x36395cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x363960: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x363960u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x363964: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363964u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363968: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x363968u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x36396c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36396cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363970: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363970u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363974: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363974u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363978: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363978u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36397c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36397cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363980: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363984: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363984u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363988: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36398c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36398cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363990: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363994: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363998: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36399c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x36399cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3639a0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3639a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3639a4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3639a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3639a8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3639a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3639ac: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3639acu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3639b0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3639b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3639b4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3639b4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3639b8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3639b8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3639bc: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3639bcu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3639c0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3639c0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3639c4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3639c4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3639c8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3639c8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3639cc: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3639ccu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3639d0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3639d0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3639d4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3639d4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3639d8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3639d8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3639dc: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3639dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3639e0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3639e0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3639e4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3639e4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3639e8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3639e8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3639ec: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3639ecu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3639f0: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3639f0u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3639f4: 0x7c450020  sq          $a1, 0x20($v0)
    ctx->pc = 0x3639f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 5));
    // 0x3639f8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3639f8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3639fc: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3639fcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x363a00: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x363a00u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x363a04: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x363a04u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x363a08: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x363a08u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x363a0c: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x363a0cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x363a10: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x363a10u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x363a14: 0x90880106  lbu         $t0, 0x106($a0)
    ctx->pc = 0x363a14u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 262)));
    // 0x363a18: 0x90850146  lbu         $a1, 0x146($a0)
    ctx->pc = 0x363a18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 326)));
    // 0x363a1c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363a20: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363a20u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363a24: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363a24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363a28: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363a28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363a2c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363a30: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363a34: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363a38: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363a38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363a3c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363a40: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363a44: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363a48: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363a4c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363a50: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363a54: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363a58: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363a58u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363a5c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363a5cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363a60: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363a60u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363a64: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363a64u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363a68: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363a68u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363a6c: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x363a6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x363a70: 0x90880107  lbu         $t0, 0x107($a0)
    ctx->pc = 0x363a70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 263)));
    // 0x363a74: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363a74u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363a78: 0x90850147  lbu         $a1, 0x147($a0)
    ctx->pc = 0x363a78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x363a7c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363a7cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363a80: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363a80u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363a84: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363a84u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363a88: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363a88u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363a8c: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x363a8cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x363a90: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x363a90u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x363a94: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363a94u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363a98: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x363a98u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x363a9c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363aa0: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363aa0u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363aa4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363aa4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363aa8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363aac: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363aacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363ab0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363ab4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363ab8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363abc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363ac0: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363ac4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363ac8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363acc: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363ad0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363ad4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363ad8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363adc: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363adcu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363ae0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363ae0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363ae4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363ae4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363ae8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363ae8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363aec: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x363aecu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363af0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363af0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363af4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363af4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363af8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363af8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363afc: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363afcu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363b00: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363b00u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363b04: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363b04u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363b08: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363b08u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363b0c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x363b0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363b10: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363b10u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363b14: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363b14u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363b18: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363b18u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x363b1c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x363b1cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363b20: 0x7c450030  sq          $a1, 0x30($v0)
    ctx->pc = 0x363b20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 5));
    // 0x363b24: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363b24u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363b28: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363b28u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x363b2c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x363b2cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x363b30: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x363b30u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x363b34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x363b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x363b38: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x363b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x363b3c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x363b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x363b40: 0xcc800020  pref        0x00, 0x20($a0)
    ctx->pc = 0x363b40u;
    // PREF instruction (ignored)
    // 0x363b44: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x363b44u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x363b48: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x363b48u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363b4c: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x363b4cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x363b50: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x363b50u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x363b54: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x363b54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x363b58: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x363b58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x363b5c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363b60: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363b60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363b64: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363b64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363b68: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363b6c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363b70: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363b74: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363b74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363b78: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363b78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363b7c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363b80: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363b84: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363b88: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363b8c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363b90: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363b94: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363b98: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363b98u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363b9c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363b9cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363ba0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363ba0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363ba4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363ba4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363ba8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363ba8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363bac: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x363bacu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x363bb0: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x363bb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x363bb4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363bb4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363bb8: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x363bb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x363bbc: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363bbcu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363bc0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363bc0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363bc4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363bc4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363bc8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363bc8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363bcc: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x363bccu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x363bd0: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x363bd0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x363bd4: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363bd4u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363bd8: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x363bd8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x363bdc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363be0: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363be0u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363be4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363be4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363be8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363be8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363bec: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363bf0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363bf4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363bf8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363bfc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363c00: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363c04: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363c08: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363c0c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363c10: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363c14: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363c18: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363c1c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363c1cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363c20: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363c20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363c24: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363c24u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363c28: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363c28u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363c2c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x363c2cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363c30: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363c30u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363c34: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363c34u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363c38: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363c38u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363c3c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363c3cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363c40: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363c40u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363c44: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363c44u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363c48: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363c48u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363c4c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x363c4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363c50: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363c50u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363c54: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363c54u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363c58: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363c58u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x363c5c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x363c5cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363c60: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363c60u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363c64: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x363c64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x363c68: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363c68u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x363c6c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x363c6cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x363c70: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x363c70u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x363c74: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x363c74u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x363c78: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x363c78u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x363c7c: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x363c7cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x363c80: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x363c80u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x363c84: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x363c84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x363c88: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x363c88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x363c8c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363c8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363c90: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363c90u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363c94: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363c98: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363c98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363c9c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363ca0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363ca4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363ca8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363cac: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363cb0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363cb4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363cb8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363cbc: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363cc0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363cc4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363cc8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363cc8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363ccc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363cccu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363cd0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363cd0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363cd4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363cd4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363cd8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363cd8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363cdc: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x363cdcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x363ce0: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x363ce0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x363ce4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363ce4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363ce8: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x363ce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x363cec: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363cecu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363cf0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363cf0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363cf4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363cf4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363cf8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363cf8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363cfc: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x363cfcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x363d00: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x363d00u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x363d04: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363d04u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363d08: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x363d08u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x363d0c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363d10: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363d10u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363d14: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363d14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363d18: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363d18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363d1c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363d20: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363d20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363d24: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363d24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363d28: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363d2c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363d30: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363d34: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363d34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363d38: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363d3c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363d40: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363d44: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363d48: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363d4c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363d4cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363d50: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363d50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363d54: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363d54u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363d58: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363d58u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363d5c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x363d5cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363d60: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363d60u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363d64: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363d64u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363d68: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363d68u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363d6c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363d6cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363d70: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363d70u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363d74: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363d74u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363d78: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363d78u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363d7c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x363d7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363d80: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363d80u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363d84: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363d84u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363d88: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363d88u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x363d8c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x363d8cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363d90: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363d90u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363d94: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x363d94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x363d98: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363d98u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x363d9c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x363d9cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x363da0: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x363da0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x363da4: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x363da4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x363da8: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x363da8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x363dac: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x363dacu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x363db0: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x363db0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x363db4: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x363db4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x363db8: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x363db8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x363dbc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363dc0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363dc4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363dc8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363dcc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363dccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363dd0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363dd4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363dd8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363ddc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363de0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363de4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363de4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363de8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363de8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363dec: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363df0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363df4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363df8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363df8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363dfc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363dfcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363e00: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363e00u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363e04: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363e04u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363e08: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363e08u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363e0c: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x363e0cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x363e10: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x363e10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x363e14: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363e14u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363e18: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x363e18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x363e1c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363e1cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363e20: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363e20u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363e24: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363e24u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363e28: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363e28u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363e2c: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x363e2cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x363e30: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x363e30u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x363e34: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363e34u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363e38: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x363e38u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x363e3c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363e3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363e40: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363e40u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363e44: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363e44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363e48: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363e48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363e4c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363e50: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363e50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363e54: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363e58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363e5c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363e60: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363e64: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363e64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363e68: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363e6c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363e70: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363e74: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363e78: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363e7c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363e7cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363e80: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363e80u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363e84: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363e84u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363e88: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363e88u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363e8c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x363e8cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363e90: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363e90u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363e94: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363e94u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363e98: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363e98u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363e9c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363e9cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363ea0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363ea0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363ea4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363ea4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363ea8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363ea8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363eac: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x363eacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363eb0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363eb0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363eb4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363eb4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363eb8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363eb8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x363ebc: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x363ebcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363ec0: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363ec0u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363ec4: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x363ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x363ec8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363ec8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x363ecc: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x363eccu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x363ed0: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x363ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x363ed4: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x363ed4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x363ed8: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x363ed8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x363edc: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x363edcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x363ee0: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x363ee0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x363ee4: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x363ee4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x363ee8: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x363ee8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x363eec: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363eecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363ef0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363ef4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363ef8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363efc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363efcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363f00: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363f04: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363f04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363f08: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363f08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363f0c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363f10: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363f14: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363f14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363f18: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363f1c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363f20: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363f24: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363f28: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363f28u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363f2c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363f2cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363f30: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363f30u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363f34: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363f34u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363f38: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363f38u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363f3c: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x363f3cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x363f40: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x363f40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x363f44: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x363f44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x363f48: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363f48u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363f4c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363f4cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363f50: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363f50u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363f54: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363f54u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363f58: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363f58u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363f5c: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x363f5cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x363f60: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x363f60u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x363f64: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x363f64u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363f68: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x363f68u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x363f6c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x363f6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x363f70: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x363f70u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363f74: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x363f74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x363f78: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x363f78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363f7c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x363f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x363f80: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x363f80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x363f84: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x363f84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x363f88: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x363f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x363f8c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x363f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x363f90: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x363f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x363f94: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x363f94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x363f98: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x363f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x363f9c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x363f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x363fa0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x363fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x363fa4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x363fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x363fa8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x363fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x363fac: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x363facu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x363fb0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x363fb0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x363fb4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x363fb4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x363fb8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x363fb8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x363fbc: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x363fbcu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x363fc0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x363fc0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x363fc4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x363fc4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x363fc8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x363fc8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x363fcc: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x363fccu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x363fd0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x363fd0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x363fd4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x363fd4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x363fd8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x363fd8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x363fdc: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x363fdcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x363fe0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x363fe0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x363fe4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x363fe4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x363fe8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x363fe8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x363fec: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x363fecu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x363ff0: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x363ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x363ff4: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x363ff4u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x363ff8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x363ff8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x363ffc: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x363ffcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364000: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x364000u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x364004: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x364004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x364008: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x364008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x36400c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x36400cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x364010: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x364010u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x364014: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x364014u;
    // PREF instruction (ignored)
    // 0x364018: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x364018u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x36401c: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x36401cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364020: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x364020u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x364024: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x364024u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x364028: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x364028u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x36402c: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x36402cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x364030: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364030u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364034: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364038: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364038u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36403c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36403cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364040: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364040u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364044: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364048: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364048u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36404c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36404cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364050: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364054: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364058: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36405c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36405cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364060: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364064: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364068: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36406c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x36406cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364070: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364070u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364074: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364074u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364078: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364078u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36407c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36407cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364080: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x364080u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x364084: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x364084u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x364088: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364088u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36408c: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x36408cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x364090: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364090u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364094: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364094u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364098: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364098u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36409c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36409cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3640a0: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x3640a0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3640a4: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x3640a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3640a8: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3640a8u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3640ac: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x3640acu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x3640b0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3640b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3640b4: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3640b4u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3640b8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3640b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3640bc: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3640bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3640c0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3640c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3640c4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3640c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3640c8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3640c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3640cc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3640ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3640d0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3640d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3640d4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3640d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3640d8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3640d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3640dc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3640dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3640e0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3640e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3640e4: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3640e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3640e8: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3640e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3640ec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3640ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3640f0: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3640f0u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3640f4: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3640f4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3640f8: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3640f8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3640fc: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3640fcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364100: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364100u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364104: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364104u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364108: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364108u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36410c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36410cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364110: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364110u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364114: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364114u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364118: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364118u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36411c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36411cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364120: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364120u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364124: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364124u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364128: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364128u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36412c: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x36412cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364130: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364130u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364134: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364134u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364138: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x364138u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x36413c: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x36413cu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364140: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364140u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364144: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x364144u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x364148: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x364148u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x36414c: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x36414cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x364150: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x364150u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x364154: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x364154u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x364158: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x364158u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x36415c: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x36415cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x364160: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364160u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364164: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364164u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364168: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364168u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36416c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36416cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364170: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364170u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364174: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364178: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364178u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36417c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36417cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364180: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364184: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364188: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36418c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36418cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364190: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364194: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364198: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36419c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x36419cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3641a0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3641a0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3641a4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3641a4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3641a8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3641a8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3641ac: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3641acu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3641b0: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x3641b0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x3641b4: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x3641b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x3641b8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3641b8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3641bc: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x3641bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x3641c0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3641c0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3641c4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3641c4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3641c8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3641c8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3641cc: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3641ccu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3641d0: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x3641d0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3641d4: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x3641d4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3641d8: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3641d8u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3641dc: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x3641dcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x3641e0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3641e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3641e4: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3641e4u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3641e8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3641e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3641ec: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3641ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3641f0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3641f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3641f4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3641f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3641f8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3641f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3641fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3641fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364200: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364204: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364208: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364208u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36420c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36420cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364210: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364214: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364218: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36421c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36421cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364220: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364220u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364224: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364224u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364228: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364228u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x36422c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x36422cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364230: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364230u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364234: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364234u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364238: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364238u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36423c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36423cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364240: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364240u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364244: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364244u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364248: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364248u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36424c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36424cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364250: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364250u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364254: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364254u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364258: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364258u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36425c: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x36425cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364260: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364260u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364264: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364264u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364268: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x364268u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x36426c: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x36426cu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364270: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364270u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364274: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x364274u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x364278: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x364278u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x36427c: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x36427cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x364280: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x364280u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x364284: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x364284u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x364288: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x364288u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x36428c: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x36428cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x364290: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364290u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364294: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364294u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364298: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364298u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36429c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3642a0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3642a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3642a4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3642a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3642a8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3642ac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3642acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3642b0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3642b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3642b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3642b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3642b8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3642b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3642bc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3642bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3642c0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3642c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3642c4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3642c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3642c8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3642c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3642cc: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3642ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3642d0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3642d0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3642d4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3642d4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3642d8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3642d8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3642dc: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3642dcu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3642e0: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x3642e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3642e4: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x3642e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x3642e8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3642e8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3642ec: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x3642ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x3642f0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3642f0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3642f4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3642f4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3642f8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3642f8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3642fc: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3642fcu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364300: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x364300u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x364304: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x364304u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x364308: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364308u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36430c: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x36430cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x364310: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364310u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364314: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364314u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364318: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364318u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36431c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36431cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364320: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364324: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364324u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364328: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364328u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36432c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36432cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364330: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364334: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364338: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364338u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36433c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36433cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364340: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364344: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364348: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36434c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364350: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364350u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364354: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364354u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364358: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364358u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x36435c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x36435cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364360: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364360u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364364: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364364u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364368: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364368u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36436c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36436cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364370: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364370u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364374: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364374u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364378: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364378u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36437c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36437cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364380: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364380u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364384: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364384u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364388: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364388u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36438c: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x36438cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364390: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364390u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364394: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364394u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364398: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x364398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x36439c: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x36439cu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3643a0: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3643a0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3643a4: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x3643a4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x3643a8: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x3643a8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x3643ac: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x3643acu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3643b0: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x3643b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x3643b4: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x3643b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3643b8: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x3643b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x3643bc: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x3643bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x3643c0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3643c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3643c4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3643c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3643c8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3643c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3643cc: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3643ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3643d0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3643d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3643d4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3643d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3643d8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3643d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3643dc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3643dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3643e0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3643e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3643e4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3643e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3643e8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3643e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3643ec: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3643ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3643f0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3643f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3643f4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3643f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3643f8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3643f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3643fc: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3643fcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364400: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364400u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364404: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364404u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364408: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364408u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36440c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36440cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364410: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x364410u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x364414: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x364414u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x364418: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x364418u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x36441c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36441cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364420: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364420u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364424: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364424u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364428: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364428u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36442c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36442cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364430: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x364430u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x364434: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x364434u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x364438: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364438u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36443c: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x36443cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x364440: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364440u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364444: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364444u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364448: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364448u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36444c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36444cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364450: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364454: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364454u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364458: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364458u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36445c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36445cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364460: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364464: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364468: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364468u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36446c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36446cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364470: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364474: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364478: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36447c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364480: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364480u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364484: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364484u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364488: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364488u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x36448c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x36448cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364490: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364490u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364494: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364494u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364498: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364498u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36449c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36449cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3644a0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3644a0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3644a4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3644a4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3644a8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3644a8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3644ac: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3644acu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3644b0: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3644b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3644b4: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3644b4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3644b8: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3644b8u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3644bc: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3644bcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3644c0: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3644c0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3644c4: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x3644c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x3644c8: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3644c8u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3644cc: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3644ccu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3644d0: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3644d0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3644d4: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x3644d4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x3644d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3644d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3644dc: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x3644e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3644e4: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x3644e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x3644e8: 0xcc800060  pref        0x00, 0x60($a0)
    ctx->pc = 0x3644e8u;
    // PREF instruction (ignored)
    // 0x3644ec: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x3644ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3644f0: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x3644f0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3644f4: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x3644f4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3644f8: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x3644f8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3644fc: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x3644fcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x364500: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x364500u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x364504: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364508: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364508u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36450c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36450cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364510: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364514: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364514u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364518: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x36451c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x36451cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364520: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364520u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364524: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364528: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36452c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x36452cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364530: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364534: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364538: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36453c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364540: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364540u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364544: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364544u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364548: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364548u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36454c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x36454cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364550: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364550u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364554: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x364554u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x364558: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x364558u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x36455c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36455cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364560: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x364560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x364564: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364564u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364568: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364568u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36456c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36456cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364570: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364570u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364574: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x364574u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x364578: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x364578u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x36457c: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x36457cu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364580: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x364580u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x364584: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364584u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364588: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364588u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x36458c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x36458cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364590: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364590u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364594: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364594u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364598: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364598u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36459c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36459cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3645a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3645a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3645a4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3645a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3645a8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3645a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3645ac: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3645acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3645b0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3645b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3645b4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3645b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3645b8: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3645b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3645bc: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3645bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3645c0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3645c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3645c4: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3645c4u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3645c8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3645c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3645cc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3645ccu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3645d0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3645d0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3645d4: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3645d4u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3645d8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3645d8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3645dc: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3645dcu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3645e0: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3645e0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3645e4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3645e4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3645e8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3645e8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3645ec: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3645ecu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3645f0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3645f0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3645f4: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3645f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3645f8: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3645f8u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3645fc: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3645fcu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364600: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364600u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364604: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364604u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364608: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364608u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x36460c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x36460cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x364610: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364610u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364614: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364614u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364618: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x364618u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x36461c: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x36461cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x364620: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x364620u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x364624: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x364624u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x364628: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x364628u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x36462c: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x36462cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x364630: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x364630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x364634: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364634u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364638: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364638u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36463c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36463cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364640: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364644: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364644u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364648: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x36464c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x36464cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364650: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364650u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364654: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364658: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36465c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x36465cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364660: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364664: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364668: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36466c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364670: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364670u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364674: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364674u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364678: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364678u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36467c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x36467cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364680: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364680u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364684: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x364684u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x364688: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x364688u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x36468c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36468cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364690: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x364690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x364694: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364694u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364698: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364698u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36469c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36469cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3646a0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3646a0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3646a4: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x3646a4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3646a8: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x3646a8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3646ac: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3646acu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3646b0: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x3646b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x3646b4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3646b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3646b8: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3646b8u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3646bc: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3646bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3646c0: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3646c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3646c4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3646c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3646c8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3646c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3646cc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3646ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3646d0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3646d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3646d4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3646d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3646d8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3646d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3646dc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3646dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3646e0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3646e4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3646e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3646e8: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3646e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3646ec: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3646ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3646f0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3646f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3646f4: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3646f4u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3646f8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3646f8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3646fc: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3646fcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364700: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364700u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364704: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364704u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364708: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364708u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36470c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36470cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364710: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364710u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364714: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364714u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364718: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364718u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36471c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36471cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364720: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364720u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364724: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364724u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364728: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364728u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x36472c: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x36472cu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364730: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364730u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364734: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364734u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364738: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364738u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x36473c: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x36473cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x364740: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364740u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364744: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364744u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364748: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x364748u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x36474c: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x36474cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x364750: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x364750u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x364754: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x364754u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x364758: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x364758u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36475c: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x36475cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x364760: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x364760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x364764: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364764u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364768: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364768u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36476c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36476cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364770: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364774: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364774u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364778: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x36477c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x36477cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364780: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364780u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364784: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364788: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36478c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x36478cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364790: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364794: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364798: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36479c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3647a0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3647a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3647a4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3647a4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3647a8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3647a8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3647ac: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3647acu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3647b0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3647b0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3647b4: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x3647b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3647b8: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x3647b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x3647bc: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3647bcu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3647c0: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x3647c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x3647c4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3647c4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3647c8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3647c8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3647cc: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3647ccu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3647d0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3647d0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3647d4: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x3647d4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3647d8: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x3647d8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3647dc: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3647dcu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3647e0: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x3647e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x3647e4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3647e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3647e8: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3647e8u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3647ec: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3647ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3647f0: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3647f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3647f4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3647f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3647f8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3647f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3647fc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3647fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364800: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364804: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364808: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36480c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x36480cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364810: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364814: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364818: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36481c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x36481cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364820: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364824: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364824u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364828: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364828u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36482c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36482cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364830: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364830u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364834: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364834u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364838: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364838u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36483c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36483cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364840: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364840u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364844: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364844u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364848: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364848u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36484c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36484cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364850: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364850u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364854: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364854u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364858: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364858u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x36485c: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x36485cu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364860: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364860u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364864: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364864u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364868: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364868u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x36486c: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x36486cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x364870: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364870u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364874: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364874u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364878: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x364878u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x36487c: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x36487cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x364880: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x364880u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x364884: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x364884u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x364888: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x364888u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x36488c: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x36488cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x364890: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x364890u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x364894: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364894u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364898: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364898u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36489c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36489cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3648a0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3648a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3648a4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3648a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3648a8: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3648ac: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3648b0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3648b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3648b4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3648b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3648b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3648b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3648bc: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3648bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3648c0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3648c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3648c4: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3648c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3648c8: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3648c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3648cc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3648ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3648d0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3648d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3648d4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3648d4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3648d8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3648d8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3648dc: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3648dcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3648e0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3648e0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3648e4: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x3648e4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3648e8: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x3648e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x3648ec: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x3648ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x3648f0: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3648f0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3648f4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3648f4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3648f8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3648f8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3648fc: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3648fcu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364900: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364900u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364904: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x364904u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x364908: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x364908u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x36490c: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x36490cu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364910: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x364910u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x364914: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364914u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364918: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364918u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x36491c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x36491cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364920: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364920u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364924: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364928: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364928u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36492c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36492cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364930: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364934: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364938: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36493c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x36493cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364940: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364944: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364948: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36494c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x36494cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364950: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364954: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364954u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364958: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364958u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36495c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36495cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364960: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364960u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364964: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364964u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364968: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364968u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36496c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36496cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364970: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364970u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364974: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364974u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364978: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364978u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36497c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36497cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364980: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364980u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364984: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364984u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364988: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364988u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x36498c: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x36498cu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364990: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364990u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364994: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364994u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364998: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x364998u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x36499c: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x36499cu;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3649a0: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3649a0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3649a4: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3649a4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3649a8: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x3649a8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x3649ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3649acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3649b0: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x3649b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x3649b4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3649b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3649b8: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x3649b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x3649bc: 0xcc800080  pref        0x00, 0x80($a0)
    ctx->pc = 0x3649bcu;
    // PREF instruction (ignored)
    // 0x3649c0: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x3649c0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3649c4: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x3649c4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3649c8: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x3649c8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3649cc: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x3649ccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3649d0: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x3649d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3649d4: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x3649d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x3649d8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3649d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3649dc: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3649dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3649e0: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3649e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3649e4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3649e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3649e8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3649e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3649ec: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3649ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3649f0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3649f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3649f4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3649f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3649f8: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3649f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3649fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3649fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364a00: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364a04: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364a08: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364a0c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364a10: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364a14: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364a14u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364a18: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364a18u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364a1c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364a1cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364a20: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364a20u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364a24: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364a24u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364a28: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x364a28u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x364a2c: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x364a2cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x364a30: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364a30u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364a34: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x364a34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x364a38: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364a38u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364a3c: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364a3cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364a40: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364a40u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364a44: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364a44u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364a48: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x364a48u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x364a4c: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x364a4cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x364a50: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364a50u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364a54: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x364a54u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x364a58: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364a58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364a5c: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364a5cu;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364a60: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364a60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364a64: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364a64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364a68: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364a68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364a6c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364a70: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364a70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364a74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364a78: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364a7c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364a80: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364a80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364a84: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364a88: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364a8c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364a90: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364a94: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364a98: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364a98u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364a9c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364a9cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364aa0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364aa0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364aa4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364aa4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364aa8: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364aa8u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364aac: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364aacu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364ab0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364ab0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364ab4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364ab4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364ab8: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364ab8u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364abc: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364abcu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364ac0: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364ac0u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364ac4: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364ac4u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364ac8: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364ac8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364acc: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364accu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364ad0: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364ad0u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364ad4: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364ad4u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364ad8: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364ad8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364adc: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364adcu;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364ae0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x364ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x364ae4: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364ae4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364ae8: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364ae8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364aec: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x364aecu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x364af0: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x364af0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x364af4: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x364af4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x364af8: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x364af8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x364afc: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x364afcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x364b00: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x364b00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x364b04: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x364b04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x364b08: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364b08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364b0c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364b10: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364b10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364b14: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364b14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364b18: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364b18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364b1c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364b20: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364b20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364b24: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364b24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364b28: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364b2c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364b30: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364b30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364b34: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364b38: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364b3c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364b40: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364b44: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364b44u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364b48: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364b48u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364b4c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364b4cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364b50: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364b50u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364b54: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364b54u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364b58: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x364b58u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x364b5c: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x364b5cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x364b60: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364b60u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364b64: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x364b64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x364b68: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364b68u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364b6c: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364b6cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364b70: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364b70u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364b74: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364b74u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364b78: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x364b78u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x364b7c: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x364b7cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x364b80: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364b80u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364b84: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x364b84u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x364b88: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364b88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364b8c: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364b8cu;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364b90: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364b90u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364b94: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364b94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364b98: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364b98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364b9c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364ba0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364ba4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364ba8: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364bac: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364bb0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364bb4: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364bb8: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364bbc: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364bc0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364bc4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364bc8: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364bc8u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364bcc: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364bccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364bd0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364bd0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364bd4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364bd4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364bd8: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364bd8u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364bdc: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364bdcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364be0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364be0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364be4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364be4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364be8: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364be8u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364bec: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364becu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364bf0: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364bf0u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364bf4: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364bf4u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364bf8: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364bf8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364bfc: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364bfcu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364c00: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364c00u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364c04: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364c04u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364c08: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364c08u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364c0c: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364c0cu;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364c10: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x364c10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x364c14: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364c14u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364c18: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364c18u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364c1c: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x364c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x364c20: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x364c20u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x364c24: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x364c24u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x364c28: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x364c28u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x364c2c: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x364c2cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x364c30: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x364c30u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x364c34: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x364c34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x364c38: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364c38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364c3c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364c40: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364c40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364c44: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364c44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364c48: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364c48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364c4c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364c50: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364c50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364c54: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364c54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364c58: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364c5c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364c60: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364c64: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364c68: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364c6c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364c70: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364c74: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364c74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364c78: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364c78u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364c7c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364c7cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364c80: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364c80u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364c84: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364c84u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364c88: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x364c88u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x364c8c: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x364c8cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x364c90: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364c90u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364c94: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x364c94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x364c98: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364c98u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364c9c: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364c9cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364ca0: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364ca0u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364ca4: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364ca4u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364ca8: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x364ca8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x364cac: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x364cacu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x364cb0: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364cb0u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364cb4: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x364cb4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x364cb8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364cb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364cbc: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364cbcu;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364cc0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364cc4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364cc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364cc8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364ccc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364cccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364cd0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364cd4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364cd8: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364cdc: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364ce0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364ce4: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364ce8: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364cec: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364cf0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364cf4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364cf8: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364cf8u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364cfc: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364cfcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364d00: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364d00u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364d04: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364d04u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364d08: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364d08u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364d0c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364d0cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364d10: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364d10u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364d14: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364d14u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364d18: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364d18u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364d1c: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364d1cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364d20: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364d20u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364d24: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364d24u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364d28: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364d28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364d2c: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364d2cu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364d30: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364d30u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364d34: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364d34u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364d38: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364d38u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364d3c: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364d3cu;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364d40: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x364d40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x364d44: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364d44u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364d48: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364d48u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364d4c: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x364d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x364d50: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x364d50u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x364d54: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x364d54u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x364d58: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x364d58u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x364d5c: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x364d5cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x364d60: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x364d60u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x364d64: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x364d64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x364d68: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364d68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364d6c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364d70: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364d74: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364d74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364d78: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364d7c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364d80: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364d80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364d84: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364d84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364d88: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364d8c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364d90: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364d90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364d94: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364d98: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364d9c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364da0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364da4: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364da4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364da8: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364da8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364dac: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364dacu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364db0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364db0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364db4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364db4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364db8: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x364db8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x364dbc: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x364dbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x364dc0: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x364dc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x364dc4: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364dc4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364dc8: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364dc8u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364dcc: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364dccu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364dd0: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364dd0u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364dd4: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364dd4u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364dd8: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x364dd8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x364ddc: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x364ddcu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x364de0: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364de0u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364de4: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x364de4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x364de8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364de8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364dec: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364decu;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364df0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364df0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364df4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364df4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364df8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364df8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364dfc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364e00: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364e00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364e04: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364e08: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364e0c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364e10: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364e10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364e14: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364e18: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364e1c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364e20: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364e24: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364e28: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364e28u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364e2c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364e2cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364e30: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364e30u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364e34: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364e34u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364e38: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364e38u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364e3c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364e3cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364e40: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364e40u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364e44: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364e44u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364e48: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364e48u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364e4c: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364e4cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364e50: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364e50u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364e54: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364e54u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364e58: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364e58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364e5c: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364e5cu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364e60: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364e60u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364e64: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364e64u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364e68: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364e68u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364e6c: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x364e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x364e70: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364e70u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364e74: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364e74u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364e78: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364e78u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364e7c: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x364e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x364e80: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x364e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x364e84: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x364e84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x364e88: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x364e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x364e8c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x364e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x364e90: 0xcc8000a0  pref        0x00, 0xA0($a0)
    ctx->pc = 0x364e90u;
    // PREF instruction (ignored)
    // 0x364e94: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x364e94u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x364e98: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x364e98u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364e9c: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x364e9cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x364ea0: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x364ea0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x364ea4: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x364ea4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x364ea8: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x364ea8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x364eac: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364eacu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364eb0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364eb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364eb4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364eb8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364ebc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364ec0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364ec4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364ec8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364ecc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364ed0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364ed4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364ed8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364edc: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364ee0: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364ee4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364ee8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364ee8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364eec: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364eecu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364ef0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364ef0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364ef4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364ef4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364ef8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364ef8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364efc: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x364efcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x364f00: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x364f00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x364f04: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364f04u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364f08: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x364f08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x364f0c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364f0cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364f10: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364f10u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364f14: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364f14u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364f18: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364f18u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364f1c: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x364f1cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x364f20: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x364f20u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x364f24: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x364f24u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364f28: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x364f28u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x364f2c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364f30: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x364f30u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364f34: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364f34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364f38: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364f38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364f3c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364f40: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364f40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364f44: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364f44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364f48: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x364f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x364f4c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x364f50: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x364f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x364f54: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364f54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364f58: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x364f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364f5c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364f60: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x364f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364f64: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x364f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x364f68: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x364f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x364f6c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x364f6cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x364f70: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x364f70u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364f74: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x364f74u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x364f78: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x364f78u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x364f7c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x364f7cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x364f80: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x364f80u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x364f84: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x364f84u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x364f88: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x364f88u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x364f8c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x364f8cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x364f90: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x364f90u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x364f94: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x364f94u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x364f98: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x364f98u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x364f9c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x364f9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x364fa0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x364fa0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x364fa4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x364fa4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x364fa8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x364fa8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x364fac: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x364facu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x364fb0: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x364fb0u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x364fb4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x364fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x364fb8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x364fb8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x364fbc: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x364fbcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x364fc0: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x364fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x364fc4: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x364fc4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x364fc8: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x364fc8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x364fcc: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x364fccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x364fd0: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x364fd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x364fd4: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x364fd4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x364fd8: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x364fd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x364fdc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x364fdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x364fe0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x364fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364fe4: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x364fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x364fe8: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x364fe8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x364fec: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x364fecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364ff0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x364ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x364ff4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x364ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x364ff8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x364ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x364ffc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x364ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365000: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365000u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365004: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365008: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36500c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x36500cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365010: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365014: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365018: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365018u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36501c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36501cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365020: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365020u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365024: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365024u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365028: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365028u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36502c: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x36502cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x365030: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x365030u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x365034: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365034u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365038: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x365038u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x36503c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36503cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365040: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365040u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365044: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365044u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365048: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365048u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36504c: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x36504cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x365050: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x365050u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x365054: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365054u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365058: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x365058u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x36505c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36505cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365060: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365060u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365064: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365064u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365068: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365068u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36506c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36506cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365070: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365074: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365074u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365078: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36507c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36507cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365080: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365084: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365084u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365088: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36508c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x36508cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365090: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365094: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365098: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36509c: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x36509cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3650a0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3650a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3650a4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3650a4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3650a8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3650a8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3650ac: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3650acu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3650b0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3650b0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3650b4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3650b4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3650b8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3650b8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3650bc: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3650bcu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3650c0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3650c0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3650c4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3650c4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3650c8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3650c8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3650cc: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3650ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3650d0: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3650d0u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3650d4: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3650d4u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3650d8: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3650d8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3650dc: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3650dcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3650e0: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3650e0u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3650e4: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x3650e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x3650e8: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3650e8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3650ec: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3650ecu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3650f0: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x3650f0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x3650f4: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x3650f4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3650f8: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x3650f8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3650fc: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x3650fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x365100: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x365100u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x365104: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x365104u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x365108: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x365108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x36510c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36510cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365110: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365110u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365114: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365118: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x36511c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x36511cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365120: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365124: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365124u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365128: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365128u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36512c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36512cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365130: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365134: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365134u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365138: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36513c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x36513cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365140: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365144: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365148: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365148u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36514c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36514cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365150: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365150u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365154: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365154u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365158: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365158u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36515c: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x36515cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x365160: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x365160u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x365164: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365164u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365168: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x365168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x36516c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36516cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365170: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365170u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365174: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365174u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365178: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365178u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36517c: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x36517cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x365180: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x365180u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x365184: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365184u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365188: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x365188u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x36518c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36518cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365190: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365190u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365194: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365198: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365198u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36519c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36519cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3651a0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3651a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3651a4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3651a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3651a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3651a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3651ac: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3651acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3651b0: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3651b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3651b4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3651b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3651b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3651b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3651bc: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3651bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3651c0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3651c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3651c4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3651c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3651c8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3651c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3651cc: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3651ccu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3651d0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3651d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3651d4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3651d4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3651d8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3651d8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3651dc: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3651dcu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3651e0: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3651e0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3651e4: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3651e4u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3651e8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3651e8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3651ec: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3651ecu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3651f0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3651f0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3651f4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3651f4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3651f8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3651f8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3651fc: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3651fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365200: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365200u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365204: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365204u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365208: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365208u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x36520c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x36520cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365210: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365210u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365214: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x365214u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x365218: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365218u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x36521c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x36521cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365220: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x365220u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x365224: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x365224u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x365228: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x365228u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x36522c: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x36522cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x365230: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x365230u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x365234: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x365234u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x365238: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x365238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x36523c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x36523cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365240: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365240u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365244: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365248: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x36524c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x36524cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365250: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365254: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365254u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365258: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365258u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36525c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x36525cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365260: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365264: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365268: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x36526c: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x36526cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365270: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365274: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365278: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365278u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36527c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36527cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365280: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365280u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365284: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365284u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365288: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365288u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36528c: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x36528cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x365290: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x365290u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x365294: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x365294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x365298: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365298u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36529c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36529cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3652a0: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3652a0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3652a4: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3652a4u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3652a8: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3652a8u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3652ac: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x3652acu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3652b0: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x3652b0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3652b4: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3652b4u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3652b8: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x3652b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x3652bc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3652bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3652c0: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3652c0u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3652c4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3652c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3652c8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3652c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3652cc: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3652ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3652d0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3652d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3652d4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3652d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3652d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3652dc: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3652dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3652e0: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3652e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3652e4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3652e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3652e8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3652e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3652ec: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3652ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3652f0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3652f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3652f4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3652f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3652f8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3652f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3652fc: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3652fcu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365300: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365300u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365304: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365304u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365308: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365308u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36530c: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x36530cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365310: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365310u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365314: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365314u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365318: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365318u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36531c: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x36531cu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365320: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365320u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365324: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365324u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365328: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365328u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x36532c: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x36532cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365330: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365330u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365334: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365334u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365338: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365338u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x36533c: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x36533cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365340: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x365340u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x365344: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365344u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365348: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365348u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x36534c: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x36534cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365350: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x365350u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x365354: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x365354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x365358: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x365358u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x36535c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x36535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x365360: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x365360u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x365364: 0xcc8000c0  pref        0x00, 0xC0($a0)
    ctx->pc = 0x365364u;
    // PREF instruction (ignored)
    // 0x365368: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x365368u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x36536c: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x36536cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365370: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x365370u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x365374: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x365374u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x365378: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x365378u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x36537c: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x36537cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x365380: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365380u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365384: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365384u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365388: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365388u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36538c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36538cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365390: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365390u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365394: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365398: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365398u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36539c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36539cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3653a0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3653a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3653a4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3653a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3653a8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3653a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3653ac: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3653acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3653b0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3653b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3653b4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3653b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3653b8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3653b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3653bc: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3653bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3653c0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3653c0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3653c4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3653c4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3653c8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3653c8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3653cc: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3653ccu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3653d0: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x3653d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3653d4: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x3653d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x3653d8: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3653d8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3653dc: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x3653dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x3653e0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3653e0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3653e4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3653e4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3653e8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3653e8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3653ec: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3653ecu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3653f0: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x3653f0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3653f4: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x3653f4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3653f8: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3653f8u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3653fc: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x3653fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x365400: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365400u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365404: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365404u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365408: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365408u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36540c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36540cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365410: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365414: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365414u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365418: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365418u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36541c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36541cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365420: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365424: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365428: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365428u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36542c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36542cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365430: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365434: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365438: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36543c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365440: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365440u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365444: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365444u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365448: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365448u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x36544c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x36544cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365450: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365450u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365454: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365454u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365458: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365458u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36545c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36545cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365460: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365460u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365464: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365464u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365468: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365468u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36546c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36546cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365470: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365470u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365474: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365474u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365478: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365478u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36547c: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x36547cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365480: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365480u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365484: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365484u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365488: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x365488u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x36548c: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x36548cu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365490: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365490u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365494: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x365494u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x365498: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x365498u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x36549c: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x36549cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3654a0: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x3654a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x3654a4: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x3654a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3654a8: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x3654a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3654ac: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x3654acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x3654b0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3654b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3654b4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3654b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3654b8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3654b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3654bc: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3654bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3654c0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3654c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3654c4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3654c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3654c8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3654c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3654cc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3654ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3654d0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3654d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3654d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3654d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3654d8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3654d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3654dc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3654dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3654e0: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3654e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3654e4: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3654e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3654e8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3654e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3654ec: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3654ecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3654f0: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3654f0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3654f4: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3654f4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3654f8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3654f8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3654fc: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3654fcu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365500: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x365500u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x365504: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x365504u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x365508: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365508u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36550c: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x36550cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x365510: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365510u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365514: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365514u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365518: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365518u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36551c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36551cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365520: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x365520u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x365524: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x365524u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x365528: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365528u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36552c: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x36552cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x365530: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365530u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365534: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365534u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365538: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365538u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36553c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36553cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365540: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365544: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365544u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365548: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365548u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36554c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36554cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365550: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365554: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365558: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365558u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36555c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36555cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365560: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365564: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365568: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36556c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365570: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365570u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365574: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365574u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365578: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365578u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x36557c: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x36557cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365580: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365580u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365584: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365584u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365588: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365588u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x36558c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36558cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365590: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365590u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365594: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365594u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365598: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365598u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36559c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36559cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3655a0: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3655a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3655a4: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3655a4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3655a8: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3655a8u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3655ac: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3655acu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3655b0: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3655b0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3655b4: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3655b4u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3655b8: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x3655b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x3655bc: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3655bcu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3655c0: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3655c0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3655c4: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x3655c4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x3655c8: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x3655c8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3655cc: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x3655ccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3655d0: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x3655d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x3655d4: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x3655d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3655d8: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x3655d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x3655dc: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x3655dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x3655e0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3655e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3655e4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3655e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3655e8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3655e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3655ec: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3655ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3655f0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3655f4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3655f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3655f8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3655f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3655fc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3655fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365600: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365604: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365608: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36560c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36560cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365610: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365614: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365618: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36561c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x36561cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365620: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365620u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365624: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365624u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365628: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365628u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36562c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36562cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365630: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x365630u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x365634: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x365634u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x365638: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365638u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x36563c: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x36563cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x365640: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365640u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365644: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365644u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365648: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365648u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36564c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36564cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365650: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x365650u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x365654: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x365654u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x365658: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365658u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36565c: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x36565cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x365660: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365660u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365664: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365664u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365668: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365668u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36566c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36566cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365670: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365674: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365674u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365678: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365678u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x36567c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x36567cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365680: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365684: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365688: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365688u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x36568c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36568cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365690: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365694: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365698: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36569c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3656a0: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3656a0u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3656a4: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3656a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3656a8: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3656a8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3656ac: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3656acu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3656b0: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3656b0u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3656b4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3656b4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3656b8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3656b8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3656bc: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3656bcu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3656c0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3656c0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3656c4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3656c4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3656c8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3656c8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3656cc: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3656ccu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3656d0: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x3656d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3656d4: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x3656d4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x3656d8: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x3656d8u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3656dc: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x3656dcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x3656e0: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x3656e0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x3656e4: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x3656e4u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x3656e8: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x3656e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x3656ec: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x3656ecu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3656f0: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x3656f0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x3656f4: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x3656f4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x3656f8: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x3656f8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x3656fc: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x3656fcu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x365700: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x365700u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x365704: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x365704u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x365708: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x365708u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x36570c: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x36570cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x365710: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365710u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365714: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365714u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365718: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365718u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x36571c: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x36571cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365720: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365720u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365724: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365728: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365728u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x36572c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x36572cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365730: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365734: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365738: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36573c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x36573cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365740: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365744: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365748: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36574c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x36574cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365750: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365750u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365754: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365754u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365758: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365758u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36575c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36575cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365760: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x365760u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x365764: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x365764u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x365768: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x365768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x36576c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x36576cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365770: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365770u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365774: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365774u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365778: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365778u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x36577c: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x36577cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365780: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x365780u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x365784: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x365784u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x365788: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365788u;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36578c: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x36578cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x365790: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365790u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365794: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365794u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365798: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365798u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36579c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36579cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3657a0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3657a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3657a4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3657a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3657a8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3657a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3657ac: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3657acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3657b0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3657b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3657b4: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3657b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3657b8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3657b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3657bc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3657bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3657c0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x3657c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3657c4: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3657c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3657c8: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3657c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3657cc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3657ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3657d0: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x3657d0u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x3657d4: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3657d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3657d8: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3657d8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3657dc: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3657dcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3657e0: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x3657e0u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x3657e4: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3657e4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3657e8: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3657e8u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3657ec: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3657ecu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3657f0: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3657f0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3657f4: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3657f4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3657f8: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3657f8u;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3657fc: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3657fcu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365800: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365800u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365804: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365804u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365808: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365808u;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x36580c: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x36580cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365810: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365810u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365814: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x365814u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x365818: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365818u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x36581c: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x36581cu;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365820: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365820u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365824: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x365824u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x365828: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x365828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x36582c: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x36582cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x365830: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x365830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x365834: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x365834u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x365838: 0xcc8000e0  pref        0x00, 0xE0($a0)
    ctx->pc = 0x365838u;
    // PREF instruction (ignored)
    // 0x36583c: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x36583cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x365840: 0x908b0000  lbu         $t3, 0x0($a0)
    ctx->pc = 0x365840u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365844: 0x908a0011  lbu         $t2, 0x11($a0)
    ctx->pc = 0x365844u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x365848: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x365848u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36584c: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x36584cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x365850: 0x91c50040  lbu         $a1, 0x40($t6)
    ctx->pc = 0x365850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x365854: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365854u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365858: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365858u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36585c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36585cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365860: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365864: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365864u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365868: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x36586c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x36586cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365870: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365870u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365874: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365878: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36587c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x36587cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365880: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365884: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365888: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x36588c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x36588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365890: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365890u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365894: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365894u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365898: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365898u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x36589c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x36589cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3658a0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3658a0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3658a4: 0x90890012  lbu         $t1, 0x12($a0)
    ctx->pc = 0x3658a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3658a8: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x3658a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x3658ac: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3658acu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3658b0: 0x91c50041  lbu         $a1, 0x41($t6)
    ctx->pc = 0x3658b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 65)));
    // 0x3658b4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3658b4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3658b8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3658b8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3658bc: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3658bcu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3658c0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3658c0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3658c4: 0x908c0003  lbu         $t4, 0x3($a0)
    ctx->pc = 0x3658c4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3658c8: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x3658c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3658cc: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3658ccu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3658d0: 0x908a0013  lbu         $t2, 0x13($a0)
    ctx->pc = 0x3658d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x3658d4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x3658d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x3658d8: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x3658d8u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x3658dc: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3658dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3658e0: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x3658e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3658e4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x3658e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3658e8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3658ec: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3658ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3658f0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3658f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3658f4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3658f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3658f8: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3658f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3658fc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x3658fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365900: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365904: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365908: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36590c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x36590cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365910: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365914: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365914u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365918: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365918u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36591c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x36591cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365920: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365920u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365924: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365924u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365928: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365928u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x36592c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x36592cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365930: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365930u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365934: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365934u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365938: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365938u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x36593c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x36593cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365940: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365940u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365944: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365944u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365948: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365948u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x36594c: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x36594cu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365950: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365950u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365954: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365954u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365958: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365958u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x36595c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x36595cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x365960: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365960u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365964: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365964u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365968: 0x7da50000  sq          $a1, 0x0($t5)
    ctx->pc = 0x365968u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 5));
    // 0x36596c: 0x908c0005  lbu         $t4, 0x5($a0)
    ctx->pc = 0x36596cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x365970: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x365970u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x365974: 0x908a0015  lbu         $t2, 0x15($a0)
    ctx->pc = 0x365974u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x365978: 0x90890014  lbu         $t1, 0x14($a0)
    ctx->pc = 0x365978u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x36597c: 0x91c80002  lbu         $t0, 0x2($t6)
    ctx->pc = 0x36597cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x365980: 0x91c50042  lbu         $a1, 0x42($t6)
    ctx->pc = 0x365980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 66)));
    // 0x365984: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365984u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365988: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365988u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x36598c: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x36598cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365990: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365990u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365994: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365998: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x36599c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x36599cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3659a0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3659a4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3659a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3659a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3659a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3659ac: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x3659acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3659b0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x3659b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3659b4: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x3659b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3659b8: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x3659b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3659bc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3659bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3659c0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x3659c0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3659c4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x3659c4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x3659c8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x3659c8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x3659cc: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x3659ccu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x3659d0: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x3659d0u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x3659d4: 0x90890016  lbu         $t1, 0x16($a0)
    ctx->pc = 0x3659d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x3659d8: 0x91c80003  lbu         $t0, 0x3($t6)
    ctx->pc = 0x3659d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x3659dc: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x3659dcu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3659e0: 0x91c50043  lbu         $a1, 0x43($t6)
    ctx->pc = 0x3659e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 67)));
    // 0x3659e4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x3659e4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x3659e8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x3659e8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x3659ec: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x3659ecu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x3659f0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x3659f0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x3659f4: 0x908c0007  lbu         $t4, 0x7($a0)
    ctx->pc = 0x3659f4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3659f8: 0x908b0006  lbu         $t3, 0x6($a0)
    ctx->pc = 0x3659f8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3659fc: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x3659fcu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365a00: 0x908a0017  lbu         $t2, 0x17($a0)
    ctx->pc = 0x365a00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x365a04: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365a08: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365a08u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365a0c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365a10: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365a10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365a14: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365a14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365a18: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365a18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365a1c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365a20: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365a24: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365a28: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365a2c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365a30: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365a34: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365a38: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365a3c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365a40: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365a44: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365a44u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365a48: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365a48u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365a4c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365a4cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365a50: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365a50u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365a54: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365a54u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365a58: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365a58u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365a5c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365a5cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365a60: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365a60u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365a64: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365a64u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365a68: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365a68u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365a6c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365a6cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365a70: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365a70u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365a74: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365a74u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365a78: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365a78u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365a7c: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365a7cu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365a80: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365a80u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365a84: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365a84u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365a88: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365a88u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365a8c: 0x7cc50010  sq          $a1, 0x10($a2)
    ctx->pc = 0x365a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 5));
    // 0x365a90: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365a90u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365a94: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365a94u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365a98: 0x7da50010  sq          $a1, 0x10($t5)
    ctx->pc = 0x365a98u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 5));
    // 0x365a9c: 0x908c0009  lbu         $t4, 0x9($a0)
    ctx->pc = 0x365a9cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x365aa0: 0x908b0008  lbu         $t3, 0x8($a0)
    ctx->pc = 0x365aa0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x365aa4: 0x908a0019  lbu         $t2, 0x19($a0)
    ctx->pc = 0x365aa4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x365aa8: 0x90890018  lbu         $t1, 0x18($a0)
    ctx->pc = 0x365aa8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x365aac: 0x91c80004  lbu         $t0, 0x4($t6)
    ctx->pc = 0x365aacu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x365ab0: 0x91c50044  lbu         $a1, 0x44($t6)
    ctx->pc = 0x365ab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x365ab4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365ab8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365abc: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365abcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365ac0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365ac4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365ac8: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365acc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365accu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365ad0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365ad4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365ad8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365adc: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365adcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365ae0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365ae4: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365ae8: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365aec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365af0: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365af0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365af4: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365af4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365af8: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365af8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365afc: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365afcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365b00: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365b00u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365b04: 0x9089001a  lbu         $t1, 0x1A($a0)
    ctx->pc = 0x365b04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x365b08: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x365b08u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x365b0c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365b0cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365b10: 0x91c50045  lbu         $a1, 0x45($t6)
    ctx->pc = 0x365b10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 69)));
    // 0x365b14: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365b14u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365b18: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365b18u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365b1c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365b1cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365b20: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365b20u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365b24: 0x908c000b  lbu         $t4, 0xB($a0)
    ctx->pc = 0x365b24u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x365b28: 0x908b000a  lbu         $t3, 0xA($a0)
    ctx->pc = 0x365b28u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x365b2c: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365b2cu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365b30: 0x908a001b  lbu         $t2, 0x1B($a0)
    ctx->pc = 0x365b30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x365b34: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365b34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365b38: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365b38u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365b3c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365b40: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365b40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365b44: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365b44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365b48: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365b4c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365b50: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365b54: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365b58: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365b5c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365b60: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365b64: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365b64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365b68: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365b6c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365b70: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365b74: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365b74u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365b78: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365b78u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365b7c: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365b7cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365b80: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365b80u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365b84: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365b84u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365b88: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365b88u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365b8c: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365b8cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365b90: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365b90u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365b94: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365b94u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365b98: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365b98u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365b9c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365b9cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365ba0: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365ba0u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365ba4: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365ba4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365ba8: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365ba8u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365bac: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365bacu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365bb0: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365bb0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365bb4: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365bb4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365bb8: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365bb8u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365bbc: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x365bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x365bc0: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365bc0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365bc4: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365bc4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365bc8: 0x7da50020  sq          $a1, 0x20($t5)
    ctx->pc = 0x365bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 5));
    // 0x365bcc: 0x908c000d  lbu         $t4, 0xD($a0)
    ctx->pc = 0x365bccu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x365bd0: 0x908b000c  lbu         $t3, 0xC($a0)
    ctx->pc = 0x365bd0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x365bd4: 0x908a001d  lbu         $t2, 0x1D($a0)
    ctx->pc = 0x365bd4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x365bd8: 0x9089001c  lbu         $t1, 0x1C($a0)
    ctx->pc = 0x365bd8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x365bdc: 0x91c80006  lbu         $t0, 0x6($t6)
    ctx->pc = 0x365bdcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x365be0: 0x91c50046  lbu         $a1, 0x46($t6)
    ctx->pc = 0x365be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 70)));
    // 0x365be4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365be4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365be8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365be8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365bec: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365becu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365bf0: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365bf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365bf4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365bf8: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365bfc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365c00: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365c00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365c04: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365c08: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365c0c: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365c10: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365c14: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365c18: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365c1c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365c20: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365c20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365c24: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365c24u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365c28: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365c28u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365c2c: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365c2cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365c30: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365c30u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365c34: 0x9089001e  lbu         $t1, 0x1E($a0)
    ctx->pc = 0x365c34u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x365c38: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x365c38u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x365c3c: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365c3cu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365c40: 0x91c50047  lbu         $a1, 0x47($t6)
    ctx->pc = 0x365c40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 71)));
    // 0x365c44: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365c44u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365c48: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365c48u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365c4c: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365c4cu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365c50: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365c50u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365c54: 0x908c000f  lbu         $t4, 0xF($a0)
    ctx->pc = 0x365c54u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x365c58: 0x908b000e  lbu         $t3, 0xE($a0)
    ctx->pc = 0x365c58u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x365c5c: 0x7159c1e8  pminh       $t8, $t2, $t9
    ctx->pc = 0x365c5cu;
    SET_GPR_VEC(ctx, 24, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365c60: 0x908a001f  lbu         $t2, 0x1F($a0)
    ctx->pc = 0x365c60u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x365c64: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x365c64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x365c68: 0x72517d08  paddsh      $t7, $s2, $s1
    ctx->pc = 0x365c68u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365c6c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x365c6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365c70: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x365c70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x365c74: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x365c74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x365c78: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x365c78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x365c7c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x365c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x365c80: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x365c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x365c84: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x365c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x365c88: 0xdd930000  ld          $s3, 0x0($t4)
    ctx->pc = 0x365c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x365c8c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x365c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x365c90: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x365c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x365c94: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x365c94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x365c98: 0xdd720000  ld          $s2, 0x0($t3)
    ctx->pc = 0x365c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x365c9c: 0xdd510000  ld          $s1, 0x0($t2)
    ctx->pc = 0x365c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x365ca0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x365ca4: 0x700f79b7  psrah       $t7, $t7, 6
    ctx->pc = 0x365ca4u;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi16(GPR_VEC(ctx, 15), 6));
    // 0x365ca8: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x365ca8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x365cac: 0xdd0c0800  ld          $t4, 0x800($t0)
    ctx->pc = 0x365cacu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 2048)));
    // 0x365cb0: 0xdcab1000  ld          $t3, 0x1000($a1)
    ctx->pc = 0x365cb0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 4096)));
    // 0x365cb4: 0x71f079c8  pmaxh       $t7, $t7, $s0
    ctx->pc = 0x365cb4u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 16)));
    // 0x365cb8: 0x72725389  pcpyld      $t2, $s3, $s2
    ctx->pc = 0x365cb8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 18)));
    // 0x365cbc: 0x72299389  pcpyld      $s2, $s1, $t1
    ctx->pc = 0x365cbcu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 9)));
    // 0x365cc0: 0x718b6508  paddsh      $t4, $t4, $t3
    ctx->pc = 0x365cc0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x365cc4: 0x718c8b89  pcpyld      $s1, $t4, $t4
    ctx->pc = 0x365cc4u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x365cc8: 0x71516508  paddsh      $t4, $t2, $s1
    ctx->pc = 0x365cc8u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x365ccc: 0x700c59b7  psrah       $t3, $t4, 6
    ctx->pc = 0x365cccu;
    SET_GPR_VEC(ctx, 11, _mm_srai_epi16(GPR_VEC(ctx, 12), 6));
    // 0x365cd0: 0x72514508  paddsh      $t0, $s2, $s1
    ctx->pc = 0x365cd0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 18), GPR_VEC(ctx, 17)));
    // 0x365cd4: 0x717051c8  pmaxh       $t2, $t3, $s0
    ctx->pc = 0x365cd4u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 16)));
    // 0x365cd8: 0x700841b7  psrah       $t0, $t0, 6
    ctx->pc = 0x365cd8u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi16(GPR_VEC(ctx, 8), 6));
    // 0x365cdc: 0x715929e8  pminh       $a1, $t2, $t9
    ctx->pc = 0x365cdcu;
    SET_GPR_VEC(ctx, 5, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x365ce0: 0x711041c8  pmaxh       $t0, $t0, $s0
    ctx->pc = 0x365ce0u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 16)));
    // 0x365ce4: 0x70b82ec8  ppacb       $a1, $a1, $t8
    ctx->pc = 0x365ce4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 5), GPR_VEC(ctx, 24)));
    // 0x365ce8: 0x71f979e8  pminh       $t7, $t7, $t9
    ctx->pc = 0x365ce8u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x365cec: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x365cecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x365cf0: 0x711941e8  pminh       $t0, $t0, $t9
    ctx->pc = 0x365cf0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x365cf4: 0x710f2ec8  ppacb       $a1, $t0, $t7
    ctx->pc = 0x365cf4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 8), GPR_VEC(ctx, 15)));
    // 0x365cf8: 0x7da50030  sq          $a1, 0x30($t5)
    ctx->pc = 0x365cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 5));
    // 0x365cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365d08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365d0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x365d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365d10: 0x3e00008  jr          $ra
    ctx->pc = 0x365D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D10u;
        // 0x365d14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365D18u;
}
