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

// Function: func_00347A40
// Address: 0x347a40 - 0x347aa8
void func_00347A40_0x347a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347A40_0x347a40");
#endif

    switch (ctx->pc) {
        case 0x347a54u: goto label_347a54;
        case 0x347a88u: goto label_347a88;
        case 0x347a90u: goto label_347a90;
        default: break;
    }

    ctx->pc = 0x347a40u;

    // 0x347a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347a48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x347a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347a4c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347A4Cu;
    SET_GPR_U32(ctx, 31, 0x347A54u);
    ctx->pc = 0x347A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A4Cu;
    // 0x347a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347A4Cu, 0x347A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A54u;
label_347a54:
    // 0x347a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a5c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x347A5Cu;
    {
        const bool branch_taken_0x347a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A5Cu;
        // 0x347a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a5c) {
            ctx->pc = 0x347A80u;
            goto label_347a80;
        }
    }
    ctx->pc = 0x347A64u;
    // 0x347a64: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347a6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347a70: 0x24848fd8  addiu       $a0, $a0, -0x7028
    ctx->pc = 0x347a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938584));
    // 0x347a74: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347A74u;
    ctx->pc = 0x347A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A74u;
    // 0x347a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347A74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347A7Cu;
    // 0x347a7c: 0x0  nop
    ctx->pc = 0x347a7cu;
    // NOP
label_347a80:
    // 0x347a80: 0xc0d1e42  jal         func_347908
    ctx->pc = 0x347A80u;
    SET_GPR_U32(ctx, 31, 0x347A88u);
    ctx->pc = 0x347908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347908u, 0x347A80u, 0x347A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A88u;
label_347a88:
    // 0x347a88: 0xc0d1eaa  jal         func_347AA8
    ctx->pc = 0x347A88u;
    SET_GPR_U32(ctx, 31, 0x347A90u);
    ctx->pc = 0x347A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A88u;
    // 0x347a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347AA8u, 0x347A88u, 0x347A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A90u;
label_347a90:
    // 0x347a90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x347a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347a94: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x347a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x347a98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x347AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AA0u;
        // 0x347aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347AA8u;
}
