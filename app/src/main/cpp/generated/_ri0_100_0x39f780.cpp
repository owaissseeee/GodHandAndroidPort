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

// Function: _ri0_100
// Address: 0x39f780 - 0x39f830
void _ri0_100_0x39f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_100_0x39f780");
#endif

    switch (ctx->pc) {
        case 0x39f7a0u: goto label_39f7a0;
        case 0x39f7a8u: goto label_39f7a8;
        default: break;
    }

    ctx->pc = 0x39f780u;

    // 0x39f780: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f780u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f784: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f788: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f78c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x39f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f790: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f790u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f794: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x39f794u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f798: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39f798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39f79c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f79cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_39f7a0:
    // 0x39f7a0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f7a4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f7a8:
    // 0x39f7a8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f7a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f7ac: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f7acu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f7b0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f7b0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f7b4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f7b4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f7b8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39f7b8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f7bc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f7bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f7c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x39f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39f7c4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x39f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x39f7c8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x39f7c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39f7cc: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x39f7ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f7d0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x39f7d0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f7d4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x39f7d4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x39f7d8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x39f7d8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x39f7dc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39f7dcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f7e0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39f7e4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x39F7E4u;
    {
        const bool branch_taken_0x39f7e4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7E4u;
        // 0x39f7e8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7e4) {
            ctx->pc = 0x39F7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f7a8;
        }
    }
    ctx->pc = 0x39F7ECu;
    // 0x39f7ec: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39f7f0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f7f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f7f8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39f7f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f7fc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x39F7FCu;
    {
        const bool branch_taken_0x39f7fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7FCu;
        // 0x39f800: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7fc) {
            ctx->pc = 0x39F7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f7a8;
        }
    }
    ctx->pc = 0x39F804u;
    // 0x39f804: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f804u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f808: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f80c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f810: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39f810u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39f814: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39f814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39f818: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f81c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x39F81Cu;
    {
        const bool branch_taken_0x39f81c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F81Cu;
        // 0x39f820: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f81c) {
            ctx->pc = 0x39F7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f7a0;
        }
    }
    ctx->pc = 0x39F824u;
    // 0x39f824: 0x3e00008  jr          $ra
    ctx->pc = 0x39F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F82Cu;
    // 0x39f82c: 0x0  nop
    ctx->pc = 0x39f82cu;
    // NOP
    ctx->pc = 0x39f830u;
}
