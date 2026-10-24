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

// Function: func_003407A0
// Address: 0x3407a0 - 0x340920
void func_003407A0_0x3407a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003407A0_0x3407a0");
#endif

    ctx->pc = 0x3407a0u;

    // 0x3407a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3407a4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3407a4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3407a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3407ac: 0x3c0d0045  lui         $t5, 0x45
    ctx->pc = 0x3407acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)69 << 16));
    // 0x3407b0: 0x25ad6b18  addiu       $t5, $t5, 0x6B18
    ctx->pc = 0x3407b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 27416));
    // 0x3407b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3407b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3407b8: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x3407b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x3407bc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3407bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3407c0: 0x8f020020  lw          $v0, 0x20($t8)
    ctx->pc = 0x3407c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x3407c4: 0x240bf211  addiu       $t3, $zero, -0xDEF
    ctx->pc = 0x3407c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x3407c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3407c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3407cc: 0x240ff82a  addiu       $t7, $zero, -0x7D6
    ctx->pc = 0x3407ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x3407d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3407d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3407d4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x3407d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3407d8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3407d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3407dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3407dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3407e0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3407e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3407e4: 0x8f020028  lw          $v0, 0x28($t8)
    ctx->pc = 0x3407e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x3407e8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3407e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3407ec: 0x70a82818  mult1       $a1, $a1, $t0
    ctx->pc = 0x3407ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3407f0: 0x8f080008  lw          $t0, 0x8($t8)
    ctx->pc = 0x3407f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x3407f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3407f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3407f8: 0x8f0a0014  lw          $t2, 0x14($t8)
    ctx->pc = 0x3407f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x3407fc: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3407fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x340800: 0x8f0c0024  lw          $t4, 0x24($t8)
    ctx->pc = 0x340800u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x340804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x340804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340808: 0x24020def  addiu       $v0, $zero, 0xDEF
    ctx->pc = 0x340808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x34080c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x34080cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x340810: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x340810u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x340814: 0xa34818  mult        $t1, $a1, $v1
    ctx->pc = 0x340814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x340818: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x340818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34081c: 0x8f10000c  lw          $s0, 0xC($t8)
    ctx->pc = 0x34081cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x340820: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x340820u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x340824: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x340824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340828: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x34082c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x34082cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x340830: 0x240807d6  addiu       $t0, $zero, 0x7D6
    ctx->pc = 0x340830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x340834: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x340834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x340838: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x340838u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x34083c: 0x6b5818  mult        $t3, $v1, $t3
    ctx->pc = 0x34083cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x340840: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x340840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340844: 0x712f7818  mult1       $t7, $t1, $t7
    ctx->pc = 0x340844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x340848: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x340848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x34084c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x34084cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x340850: 0x1506821  addu        $t5, $t2, $s0
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x340854: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x340854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340858: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x340858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34085c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x34085cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x340860: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x340860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x340864: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x340864u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x340868: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x340868u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x34086c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x34086cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x340870: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x340870u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x340874: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x340874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x340878: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x340878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34087c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x34087cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x340880: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x340880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x340884: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x340884u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x340888: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x340888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x34088c: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x34088cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x340890: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340894: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x340894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x340898: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34089c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3408a0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x3408a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x3408a4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3408a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3408a8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3408a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x3408ac: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x3408acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3408b0: 0x8f080014  lw          $t0, 0x14($t8)
    ctx->pc = 0x3408b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x3408b4: 0x144502a  slt         $t2, $t2, $a0
    ctx->pc = 0x3408b4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3408b8: 0x165582a  slt         $t3, $t3, $a1
    ctx->pc = 0x3408b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3408bc: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x3408bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3408c0: 0x288d8000  slti        $t5, $a0, -0x8000
    ctx->pc = 0x3408c0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3408c4: 0x8f090018  lw          $t1, 0x18($t8)
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x3408c8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3408c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3408cc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x3408ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3408d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3408d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3408d4: 0x18d200b  movn        $a0, $t4, $t5
    ctx->pc = 0x3408d4u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 12));
    // 0x3408d8: 0x394a0000  xori        $t2, $t2, 0x0
    ctx->pc = 0x3408d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x3408dc: 0x396b0000  xori        $t3, $t3, 0x0
    ctx->pc = 0x3408dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
    // 0x3408e0: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3408e4: 0x4a200b  movn        $a0, $v0, $t2
    ctx->pc = 0x3408e4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3408e8: 0x6b280b  movn        $a1, $v1, $t3
    ctx->pc = 0x3408e8u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3408ec: 0x109482a  slt         $t1, $t0, $t1
    ctx->pc = 0x3408ecu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3408f0: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3408f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3408f4: 0xaf080014  sw          $t0, 0x14($t8)
    ctx->pc = 0x3408f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 8));
    // 0x3408f8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3408F8u;
    {
        const bool branch_taken_0x3408f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408F8u;
        // 0x3408fc: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408f8) {
            ctx->pc = 0x340904u;
            goto label_340904;
        }
    }
    ctx->pc = 0x340900u;
    // 0x340900: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x340900u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
label_340904:
    // 0x340904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340908: 0x3e00008  jr          $ra
    ctx->pc = 0x340908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340908u;
        // 0x34090c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340910u;
    // 0x340910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340914: 0x0  nop
    ctx->pc = 0x340914u;
    // NOP
    // 0x340918: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x340918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34091c: 0x0  nop
    ctx->pc = 0x34091cu;
    // NOP
    ctx->pc = 0x340920u;
}
