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

// Function: GetOrInit_460D50_2A9D60
// Address: 0x2a9d60 - 0x2a9da0
void GetOrInit_460D50_2A9D60_0x2a9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D50_2A9D60_0x2a9d60");
#endif

    switch (ctx->pc) {
        case 0x2a9d8cu: goto label_2a9d8c;
        default: break;
    }

    ctx->pc = 0x2a9d60u;

    // 0x2a9d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9d64: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a9d68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9d6c: 0x8c620d50  lw          $v0, 0xD50($v1)
    ctx->pc = 0x2a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D50u));
    // 0x2a9d70: 0x24700d50  addiu       $s0, $v1, 0xD50
    ctx->pc = 0x2a9d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3408));
    // 0x2a9d74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9D74u;
    {
        const bool branch_taken_0x2a9d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D74u;
        // 0x2a9d78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d74) {
            ctx->pc = 0x2A9D8Cu;
            goto label_2a9d8c;
        }
    }
    ctx->pc = 0x2A9D7Cu;
    // 0x2a9d7c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a9d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a9d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d84: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2A9D84u;
    SET_GPR_U32(ctx, 31, 0x2A9D8Cu);
    ctx->pc = 0x2A9D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D84u;
    // 0x2a9d88: 0x24a5af10  addiu       $a1, $a1, -0x50F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2A9D84u, 0x2A9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D8Cu;
label_2a9d8c:
    // 0x2a9d8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9d94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D98u;
        // 0x2a9d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DA0u;
}
