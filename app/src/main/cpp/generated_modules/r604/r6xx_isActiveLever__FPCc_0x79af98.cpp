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
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79af98 - 0x79b018
void r6xx_isActiveLever__FPCc_0x79af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79af98");
#endif

    switch (ctx->pc) {
        case 0x79afc0u: goto label_79afc0;
        case 0x79aff0u: goto label_79aff0;
        case 0x79b000u: goto label_79b000;
        default: break;
    }

    ctx->pc = 0x79af98u;

    // 0x79af98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79af9c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79afa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79afa4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79afa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79afa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79afacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79afb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AFB0u;
    {
        const bool branch_taken_0x79afb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB0u;
        // 0x79afb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afb0) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AFB8u;
    // 0x79afb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79afb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afbc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79afbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79afc0:
    // 0x79afc0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79afc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79afc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79afc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79afcc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79afd0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79afd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79afd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AFD4u;
    {
        const bool branch_taken_0x79afd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFD4u;
        // 0x79afd8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afd4) {
            ctx->pc = 0x79AFE8u;
            goto label_79afe8;
        }
    }
    ctx->pc = 0x79AFDCu;
    // 0x79afdc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79afe0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AFE0u;
    {
        const bool branch_taken_0x79afe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79afe0) {
            ctx->pc = 0x79AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AFE0u;
            // 0x79afe4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afc0;
        }
    }
    ctx->pc = 0x79AFE8u;
label_79afe8:
    // 0x79afe8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AFE8u;
    SET_GPR_U32(ctx, 31, 0x79AFF0u);
    ctx->pc = 0x79AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFE8u;
    // 0x79afec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AFE8u, 0x79AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF0u;
label_79aff0:
    // 0x79aff0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AFF0u;
    {
        const bool branch_taken_0x79aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aff0) {
            ctx->pc = 0x79AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AFF0u;
            // 0x79aff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B008u;
            goto label_79b008;
        }
    }
    ctx->pc = 0x79AFF8u;
    // 0x79aff8: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79AFF8u;
    SET_GPR_U32(ctx, 31, 0x79B000u);
    ctx->pc = 0x79AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFF8u;
    // 0x79affc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79AFF8u, 0x79B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B000u;
label_79b000:
    // 0x79b000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B000u;
    {
        const bool branch_taken_0x79b000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B000u;
        // 0x79b004: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b000) {
            ctx->pc = 0x79B00Cu;
            goto label_79b00c;
        }
    }
    ctx->pc = 0x79B008u;
label_79b008:
    // 0x79b008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b00c:
    // 0x79b00c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B00Cu;
        // 0x79b010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B014u;
    // 0x79b014: 0x0  nop
    ctx->pc = 0x79b014u;
    // NOP
    ctx->pc = 0x79b018u;
}
} // namespace gh_r604
