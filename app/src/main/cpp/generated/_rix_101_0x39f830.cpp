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

// Function: _rix_101
// Address: 0x39f830 - 0x39f910
void _rix_101_0x39f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_101_0x39f830");
#endif

    switch (ctx->pc) {
        case 0x39f874u: goto label_39f874;
        default: break;
    }

    ctx->pc = 0x39f830u;

    // 0x39f830: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f830u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f834: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f838: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f83c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39f83cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f840: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f840u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f844: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f848: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f848u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f84c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f84cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f850: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x39f850u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f854: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x39f854u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f858: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f858u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f85c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x39f85cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f860: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x39f860u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39f864: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f864u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f868: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f86c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x39F86Cu;
    {
        const bool branch_taken_0x39f86c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F86Cu;
        // 0x39f870: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f86c) {
            ctx->pc = 0x39F8ECu;
            goto label_39f8ec;
        }
    }
    ctx->pc = 0x39F874u;
label_39f874:
    // 0x39f874: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f878: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39f878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f87c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39f87cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f880: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39f880u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f884: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39f884u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f888: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39f888u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f88c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f88cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f890: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39f890u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f894: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x39f894u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39f898: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x39f898u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x39f89c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x39f89cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f8a0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x39f8a0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x39f8a4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x39f8a4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39f8a8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x39f8a8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39f8ac: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x39f8acu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x39f8b0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x39f8b0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x39f8b4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x39f8b4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39f8b8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x39f8b8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x39f8bc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x39f8bcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x39f8c0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x39f8c0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x39f8c4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x39f8c4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39f8c8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x39f8c8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f8cc: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x39f8ccu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x39f8d0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x39f8d0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x39f8d4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x39f8d4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x39f8d8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x39f8d8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f8dc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39f8e0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39f8e4: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x39F8E4u;
    {
        const bool branch_taken_0x39f8e4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8E4u;
        // 0x39f8e8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8e4) {
            ctx->pc = 0x39F874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f874;
        }
    }
    ctx->pc = 0x39F8ECu;
label_39f8ec:
    // 0x39f8ec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f8f0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39f8f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f8f8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39f8f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f8fc: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x39F8FCu;
    {
        const bool branch_taken_0x39f8fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8FCu;
        // 0x39f900: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8fc) {
            ctx->pc = 0x39F874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f874;
        }
    }
    ctx->pc = 0x39F904u;
    // 0x39f904: 0x3e00008  jr          $ra
    ctx->pc = 0x39F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F90Cu;
    // 0x39f90c: 0x0  nop
    ctx->pc = 0x39f90cu;
    // NOP
    ctx->pc = 0x39f910u;
}
