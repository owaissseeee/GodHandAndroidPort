#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: End__7cMcSave
// Address: 0x7c3a60 - 0x7c3ae8
void End__7cMcSave_0x7c3a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__7cMcSave_0x7c3a60");
#endif

    switch (ctx->pc) {
        case 0x7c3a88u: goto label_7c3a88;
        case 0x7c3aa0u: goto label_7c3aa0;
        case 0x7c3ab8u: goto label_7c3ab8;
        case 0x7c3accu: goto label_7c3acc;
        case 0x7c3ad4u: goto label_7c3ad4;
        default: break;
    }

    ctx->pc = 0x7c3a60u;

    // 0x7c3a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3a64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c3a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c3a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3a70: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x7c3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x7c3a74: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3A74u;
    {
        const bool branch_taken_0x7c3a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3a74) {
            ctx->pc = 0x7C3A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3A74u;
            // 0x7c3a78: 0x8e0500f8  lw          $a1, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3A8Cu;
            goto label_7c3a8c;
        }
    }
    ctx->pc = 0x7C3A7Cu;
    // 0x7c3a7c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7c3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7c3a80: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C3A80u;
    SET_GPR_U32(ctx, 31, 0x7C3A88u);
    ctx->pc = 0x7C3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3A80u;
    // 0x7c3a84: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C3A80u, 0x7C3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3A88u;
label_7c3a88:
    // 0x7c3a88: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x7c3a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_7c3a8c:
    // 0x7c3a8c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3A8Cu;
    {
        const bool branch_taken_0x7c3a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3a8c) {
            ctx->pc = 0x7C3A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3A8Cu;
            // 0x7c3a90: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3AA4u;
            goto label_7c3aa4;
        }
    }
    ctx->pc = 0x7C3A94u;
    // 0x7c3a94: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7c3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7c3a98: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C3A98u;
    SET_GPR_U32(ctx, 31, 0x7C3AA0u);
    ctx->pc = 0x7C3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3A98u;
    // 0x7c3a9c: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C3A98u, 0x7C3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3AA0u;
label_7c3aa0:
    // 0x7c3aa0: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x7c3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_7c3aa4:
    // 0x7c3aa4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3AA4u;
    {
        const bool branch_taken_0x7c3aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3aa4) {
            ctx->pc = 0x7C3AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3AA4u;
            // 0x7c3aa8: 0x8e050100  lw          $a1, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3ABCu;
            goto label_7c3abc;
        }
    }
    ctx->pc = 0x7C3AACu;
    // 0x7c3aac: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7c3ab0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C3AB0u;
    SET_GPR_U32(ctx, 31, 0x7C3AB8u);
    ctx->pc = 0x7C3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3AB0u;
    // 0x7c3ab4: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C3AB0u, 0x7C3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3AB8u;
label_7c3ab8:
    // 0x7c3ab8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x7c3ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_7c3abc:
    // 0x7c3abc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C3ABCu;
    {
        const bool branch_taken_0x7c3abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3ABCu;
        // 0x7c3ac0: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3abc) {
            ctx->pc = 0x7C3ACCu;
            goto label_7c3acc;
        }
    }
    ctx->pc = 0x7C3AC4u;
    // 0x7c3ac4: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C3AC4u;
    SET_GPR_U32(ctx, 31, 0x7C3ACCu);
    ctx->pc = 0x7C3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3AC4u;
    // 0x7c3ac8: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C3AC4u, 0x7C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3ACCu;
label_7c3acc:
    // 0x7c3acc: 0xc1f1cc0  jal         func_7C7300
    ctx->pc = 0x7C3ACCu;
    SET_GPR_U32(ctx, 31, 0x7C3AD4u);
    ctx->pc = 0x7C3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3ACCu;
    // 0x7c3ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7300u, 0x7C3ACCu, 0x7C3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3AD4u;
label_7c3ad4:
    // 0x7c3ad4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c3ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3adc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3ADCu;
        // 0x7c3ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3AE4u;
    // 0x7c3ae4: 0x0  nop
    ctx->pc = 0x7c3ae4u;
    // NOP
    ctx->pc = 0x7c3ae8u;
}
} // namespace gh_mcport
