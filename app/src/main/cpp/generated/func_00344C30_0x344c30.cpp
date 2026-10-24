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

// Function: func_00344C30
// Address: 0x344c30 - 0x344c98
void func_00344C30_0x344c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344C30_0x344c30");
#endif

    switch (ctx->pc) {
        case 0x344c84u: goto label_344c84;
        default: break;
    }

    ctx->pc = 0x344c30u;

    // 0x344c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344c34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x344c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344c3c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x344c3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x344c40: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x344C40u;
    {
        const bool branch_taken_0x344c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C40u;
        // 0x344c44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c40) {
            ctx->pc = 0x344C88u;
            goto label_344c88;
        }
    }
    ctx->pc = 0x344C48u;
    // 0x344c48: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x344C48u;
    {
        const bool branch_taken_0x344c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x344c48) {
            ctx->pc = 0x344C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344C48u;
            // 0x344c4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344C60u;
            goto label_344c60;
        }
    }
    ctx->pc = 0x344C50u;
    // 0x344c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344c54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x344C54u;
    {
        const bool branch_taken_0x344c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C54u;
        // 0x344c58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c54) {
            ctx->pc = 0x344C70u;
            goto label_344c70;
        }
    }
    ctx->pc = 0x344C5Cu;
    // 0x344c5c: 0x0  nop
    ctx->pc = 0x344c5cu;
    // NOP
label_344c60:
    // 0x344c60: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x344C60u;
    {
        const bool branch_taken_0x344c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C60u;
        // 0x344c64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c60) {
            ctx->pc = 0x344C88u;
            goto label_344c88;
        }
    }
    ctx->pc = 0x344C68u;
    // 0x344c68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x344c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x344c6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x344c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_344c70:
    // 0x344c70: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344C70u;
    {
        const bool branch_taken_0x344c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C70u;
        // 0x344c74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c70) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344C78u;
    // 0x344c78: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344c7c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x344C7Cu;
    SET_GPR_U32(ctx, 31, 0x344C84u);
    ctx->pc = 0x344C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C7Cu;
    // 0x344c80: 0x24847890  addiu       $a0, $a0, 0x7890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x344C7Cu, 0x344C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C84u;
label_344c84:
    // 0x344c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344c88:
    // 0x344c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344c8c:
    // 0x344c8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x344c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344c90: 0x3e00008  jr          $ra
    ctx->pc = 0x344C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C90u;
        // 0x344c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C98u;
}
