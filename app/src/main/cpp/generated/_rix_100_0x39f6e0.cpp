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

// Function: _rix_100
// Address: 0x39f6e0 - 0x39f780
void _rix_100_0x39f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_100_0x39f6e0");
#endif

    switch (ctx->pc) {
        case 0x39f704u: goto label_39f704;
        default: break;
    }

    ctx->pc = 0x39f6e0u;

    // 0x39f6e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f6e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f6e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f6e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f6ec: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x39f6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f6f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f6f4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f6f8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x39f6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x39f6fc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f700: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f700u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_39f704:
    // 0x39f704: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39f704u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f708: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39f708u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f70c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39f70cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f710: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39f710u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f714: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39f714u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f718: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x39f718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39f71c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x39f71cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x39f720: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x39f720u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x39f724: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x39f724u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x39f728: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f728u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f72c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f72cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f730: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x39f730u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39f734: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x39f734u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f738: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x39f738u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39f73c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x39f73cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f740: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39f740u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39f744: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39f744u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39f748: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f748u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f74c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x39f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x39f750: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x39f750u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x39f754: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x39F754u;
    {
        const bool branch_taken_0x39f754 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F754u;
        // 0x39f758: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f754) {
            ctx->pc = 0x39F704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f704;
        }
    }
    ctx->pc = 0x39F75Cu;
    // 0x39f75c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f760: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39f764: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f768: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x39f768u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f76c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x39F76Cu;
    {
        const bool branch_taken_0x39f76c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F76Cu;
        // 0x39f770: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f76c) {
            ctx->pc = 0x39F704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f704;
        }
    }
    ctx->pc = 0x39F774u;
    // 0x39f774: 0x3e00008  jr          $ra
    ctx->pc = 0x39F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F77Cu;
    // 0x39f77c: 0x0  nop
    ctx->pc = 0x39f77cu;
    // NOP
    ctx->pc = 0x39f780u;
}
