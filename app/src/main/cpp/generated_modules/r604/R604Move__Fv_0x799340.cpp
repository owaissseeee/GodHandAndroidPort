#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: R604Move__Fv
// Address: 0x799340 - 0x7993d0
void R604Move__Fv_0x799340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R604Move__Fv_0x799340");
#endif

    switch (ctx->pc) {
        case 0x79936cu: goto label_79936c;
        case 0x799380u: goto label_799380;
        case 0x7993b8u: goto label_7993b8;
        default: break;
    }

    ctx->pc = 0x799340u;

    // 0x799340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799348: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x79934c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799350: 0x8e027a8c  lw          $v0, 0x7A8C($s0)
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799354: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x799358: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x79935c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79935Cu;
    {
        const bool branch_taken_0x79935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79935c) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x799364u;
    // 0x799364: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x799364u;
    SET_GPR_U32(ctx, 31, 0x79936Cu);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x799364u, 0x79936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799370: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799370) {
            ctx->pc = 0x799374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799370u;
            // 0x799374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x799378u;
    // 0x799378: 0xc1e69dc  jal         func_79A770
    ctx->pc = 0x799378u;
    SET_GPR_U32(ctx, 31, 0x799380u);
    ctx->pc = 0x79A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A770u, 0x799378u, 0x799380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799380u;
    {
        const bool branch_taken_0x799380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799380) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x799388u;
    // 0x799388: 0x8c44b600  lw          $a0, -0x4A00($v0)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948352)));
    // 0x79938c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799390: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799394: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x799394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x799398: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x79939c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79939Cu;
            // 0x7993a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x8e027a8c  lw          $v0, 0x7A8C($s0)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31372)));
    // 0x7993a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7993ac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x7993b0: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0xae027a8c  sw          $v0, 0x7A8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7993b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7993bc:
    // 0x7993bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7993bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7993C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0x0  nop
    ctx->pc = 0x7993ccu;
    // NOP
    ctx->pc = 0x7993d0u;
}
} // namespace gh_r604
