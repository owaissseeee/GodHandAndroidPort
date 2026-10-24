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

// Function: func_00338A48
// Address: 0x338a48 - 0x338a90
void func_00338A48_0x338a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338A48_0x338a48");
#endif

    switch (ctx->pc) {
        case 0x338a68u: goto label_338a68;
        case 0x338a74u: goto label_338a74;
        case 0x338a7cu: goto label_338a7c;
        default: break;
    }

    ctx->pc = 0x338a48u;

    // 0x338a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338a4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x338a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a50: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x338a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x338a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x338a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x338a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a5c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x338a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x338a60: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x338A60u;
    SET_GPR_U32(ctx, 31, 0x338A68u);
    ctx->pc = 0x338A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A60u;
    // 0x338a64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x338A60u, 0x338A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A68u;
label_338a68:
    // 0x338a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x338a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a6c: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x338A6Cu;
    SET_GPR_U32(ctx, 31, 0x338A74u);
    ctx->pc = 0x338A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A6Cu;
    // 0x338a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x338A6Cu, 0x338A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A74u;
label_338a74:
    // 0x338a74: 0xc0d02ba  jal         func_340AE8
    ctx->pc = 0x338A74u;
    SET_GPR_U32(ctx, 31, 0x338A7Cu);
    ctx->pc = 0x338A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A74u;
    // 0x338a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AE8u, 0x338A74u, 0x338A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A7Cu;
label_338a7c:
    // 0x338a7c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x338a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338a80: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x338a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x338a84: 0x3e00008  jr          $ra
    ctx->pc = 0x338A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A84u;
        // 0x338a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A8Cu;
    // 0x338a8c: 0x0  nop
    ctx->pc = 0x338a8cu;
    // NOP
    ctx->pc = 0x338a90u;
}
