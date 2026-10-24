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

// Function: cSceAtManager_getCenterPos
// Address: 0x2c2a48 - 0x2c2a98
void cSceAtManager_getCenterPos_0x2c2a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_getCenterPos_0x2c2a48");
#endif

    switch (ctx->pc) {
        case 0x2c2a6cu: goto label_2c2a6c;
        case 0x2c2a7cu: goto label_2c2a7c;
        default: break;
    }

    ctx->pc = 0x2c2a48u;

    // 0x2c2a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2a4c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c2a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c2a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2a58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2a5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2A5Cu;
    {
        const bool branch_taken_0x2c2a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A5Cu;
        // 0x2c2a60: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a5c) {
            ctx->pc = 0x2C2A7Cu;
            goto label_2c2a7c;
        }
    }
    ctx->pc = 0x2C2A64u;
    // 0x2c2a64: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C2A64u;
    SET_GPR_U32(ctx, 31, 0x2C2A6Cu);
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C2A64u, 0x2C2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A6Cu;
label_2c2a6c:
    // 0x2c2a6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2A6Cu;
    {
        const bool branch_taken_0x2c2a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A6Cu;
        // 0x2c2a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a6c) {
            ctx->pc = 0x2C2A7Cu;
            goto label_2c2a7c;
        }
    }
    ctx->pc = 0x2C2A74u;
    // 0x2c2a74: 0xc0b039e  jal         func_2C0E78
    ctx->pc = 0x2C2A74u;
    SET_GPR_U32(ctx, 31, 0x2C2A7Cu);
    ctx->pc = 0x2C2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A74u;
    // 0x2c2a78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E78u, 0x2C2A74u, 0x2C2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A7Cu;
label_2c2a7c:
    // 0x2c2a7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2a84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A84u;
        // 0x2c2a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2A8Cu;
    // 0x2c2a8c: 0x0  nop
    ctx->pc = 0x2c2a8cu;
    // NOP
    // 0x2c2a90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2a94: 0x0  nop
    ctx->pc = 0x2c2a94u;
    // NOP
    ctx->pc = 0x2c2a98u;
}
