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

// Function: func_00350C78
// Address: 0x350c78 - 0x350d08
void func_00350C78_0x350c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350C78_0x350c78");
#endif

    switch (ctx->pc) {
        case 0x350c98u: goto label_350c98;
        case 0x350cb0u: goto label_350cb0;
        case 0x350cd0u: goto label_350cd0;
        case 0x350cecu: goto label_350cec;
        default: break;
    }

    ctx->pc = 0x350c78u;

    // 0x350c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350c7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350c80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x350c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x350c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x350c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x350c8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x350c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c90: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x350c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x350c94: 0x0  nop
    ctx->pc = 0x350c94u;
    // NOP
label_350c98:
    // 0x350c98: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x350C98u;
    {
        const bool branch_taken_0x350c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C98u;
        // 0x350c9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c98) {
            ctx->pc = 0x350CE4u;
            goto label_350ce4;
        }
    }
    ctx->pc = 0x350CA0u;
    // 0x350ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ca4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x350ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x350ca8: 0xc0d4342  jal         func_350D08
    ctx->pc = 0x350CA8u;
    SET_GPR_U32(ctx, 31, 0x350CB0u);
    ctx->pc = 0x350CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CA8u;
    // 0x350cac: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D08u, 0x350CA8u, 0x350CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CB0u;
label_350cb0:
    // 0x350cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x350cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cb8: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x350CB8u;
    {
        const bool branch_taken_0x350cb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x350CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CB8u;
        // 0x350cbc: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350cb8) {
            ctx->pc = 0x350CE4u;
            goto label_350ce4;
        }
    }
    ctx->pc = 0x350CC0u;
    // 0x350cc0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x350cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350cc4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x350cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x350cc8: 0xc0d452e  jal         func_3514B8
    ctx->pc = 0x350CC8u;
    SET_GPR_U32(ctx, 31, 0x350CD0u);
    ctx->pc = 0x350CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CC8u;
    // 0x350ccc: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3514B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3514B8u, 0x350CC8u, 0x350CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CD0u;
label_350cd0:
    // 0x350cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x350cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cd4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350CD4u;
    {
        const bool branch_taken_0x350cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x350CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CD4u;
        // 0x350cd8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350cd4) {
            ctx->pc = 0x350CE4u;
            goto label_350ce4;
        }
    }
    ctx->pc = 0x350CDCu;
    // 0x350cdc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x350CDCu;
    {
        const bool branch_taken_0x350cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350cdc) {
            ctx->pc = 0x350CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350CDCu;
            // 0x350ce0: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350c98;
        }
    }
    ctx->pc = 0x350CE4u;
label_350ce4:
    // 0x350ce4: 0xc0d517e  jal         func_3545F8
    ctx->pc = 0x350CE4u;
    SET_GPR_U32(ctx, 31, 0x350CECu);
    ctx->pc = 0x350CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CE4u;
    // 0x350ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3545F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3545F8u, 0x350CE4u, 0x350CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CECu;
label_350cec:
    // 0x350cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x350cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x350cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350cf4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x350cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x350CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CFCu;
        // 0x350d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D04u;
    // 0x350d04: 0x0  nop
    ctx->pc = 0x350d04u;
    // NOP
    ctx->pc = 0x350d08u;
}
