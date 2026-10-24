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

// Function: _rix_110
// Address: 0x39f9f8 - 0x39fad0
void _rix_110_0x39f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_110_0x39f9f8");
#endif

    switch (ctx->pc) {
        case 0x39fa24u: goto label_39fa24;
        default: break;
    }

    ctx->pc = 0x39f9f8u;

    // 0x39f9f8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f9f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f9fc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39fa00: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39fa04: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x39fa04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39fa08: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39fa08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39fa0c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39fa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39fa10: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39fa10u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39fa14: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39fa14u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39fa18: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39fa18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fa1c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x39fa1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x39fa20: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39fa20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39fa24:
    // 0x39fa24: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39fa24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39fa28: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39fa28u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39fa2c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39fa2cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fa30: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39fa30u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39fa34: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x39fa34u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x39fa38: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39fa38u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39fa3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39fa3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39fa40: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39fa40u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39fa44: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39fa44u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fa48: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x39fa48u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x39fa4c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x39fa4cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39fa50: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x39fa50u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39fa54: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x39fa54u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x39fa58: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x39fa58u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x39fa5c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x39fa5cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x39fa60: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x39fa60u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x39fa64: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x39fa64u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x39fa68: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x39fa68u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x39fa6c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x39fa6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39fa70: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x39fa70u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x39fa74: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x39fa74u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x39fa78: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x39fa78u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x39fa7c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x39fa7cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39fa80: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x39fa80u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39fa84: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x39fa84u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x39fa88: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x39fa88u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x39fa8c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x39fa8cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x39fa90: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x39fa90u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39fa94: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39fa98: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39fa9c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x39fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x39faa0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x39faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x39faa4: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x39FAA4u;
    {
        const bool branch_taken_0x39faa4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAA4u;
        // 0x39faa8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39faa4) {
            ctx->pc = 0x39FA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39FAACu;
    // 0x39faac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39fab0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39fab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39fab4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39fab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39fab8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x39fab8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39fabc: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x39FABCu;
    {
        const bool branch_taken_0x39fabc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FABCu;
        // 0x39fac0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fabc) {
            ctx->pc = 0x39FA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fa24;
        }
    }
    ctx->pc = 0x39FAC4u;
    // 0x39fac4: 0x3e00008  jr          $ra
    ctx->pc = 0x39FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FACCu;
    // 0x39facc: 0x0  nop
    ctx->pc = 0x39faccu;
    // NOP
    ctx->pc = 0x39fad0u;
}
