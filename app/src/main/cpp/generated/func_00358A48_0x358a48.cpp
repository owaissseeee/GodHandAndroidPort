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

// Function: func_00358A48
// Address: 0x358a48 - 0x358aa8
void func_00358A48_0x358a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358A48_0x358a48");
#endif

    switch (ctx->pc) {
        case 0x358a7cu: goto label_358a7c;
        default: break;
    }

    ctx->pc = 0x358a48u;

    // 0x358a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358a4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x358a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x358a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x358a5c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x358a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x358a60: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x358A60u;
    {
        const bool branch_taken_0x358a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x358a60) {
            ctx->pc = 0x358A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358A60u;
            // 0x358a64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358A88u;
            goto label_358a88;
        }
    }
    ctx->pc = 0x358A68u;
    // 0x358a68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x358a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x358a6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x358a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x358a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x358a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a74: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x358A74u;
    SET_GPR_U32(ctx, 31, 0x358A7Cu);
    ctx->pc = 0x358A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A74u;
    // 0x358a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x358A74u, 0x358A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A7Cu;
label_358a7c:
    // 0x358a7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x358A7Cu;
    {
        const bool branch_taken_0x358a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358a7c) {
            ctx->pc = 0x358A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358A7Cu;
            // 0x358a80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358A98u;
            goto label_358a98;
        }
    }
    ctx->pc = 0x358A84u;
    // 0x358a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358a88:
    // 0x358a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a8c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x358a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x358a90: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x358a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x358a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358a98:
    // 0x358a98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x358A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A9Cu;
        // 0x358aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358AA4u;
    // 0x358aa4: 0x0  nop
    ctx->pc = 0x358aa4u;
    // NOP
    ctx->pc = 0x358aa8u;
}
