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

// Function: GetObjSingleton_191A60
// Address: 0x191a60 - 0x191ab0
void GetObjSingleton_191A60_0x191a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSingleton_191A60_0x191a60");
#endif

    switch (ctx->pc) {
        case 0x191a84u: goto label_191a84;
        case 0x191a9cu: goto label_191a9c;
        default: break;
    }

    ctx->pc = 0x191a60u;

    // 0x191a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191a64: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x191a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191a6c: 0x8c625be8  lw          $v0, 0x5BE8($v1)
    ctx->pc = 0x191a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BE8u));
    // 0x191a70: 0x24705be8  addiu       $s0, $v1, 0x5BE8
    ctx->pc = 0x191a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23528));
    // 0x191a74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191A74u;
    {
        const bool branch_taken_0x191a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A74u;
        // 0x191a78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a74) {
            ctx->pc = 0x191A9Cu;
            goto label_191a9c;
        }
    }
    ctx->pc = 0x191A7Cu;
    // 0x191a7c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x191A7Cu;
    SET_GPR_U32(ctx, 31, 0x191A84u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x191A7Cu, 0x191A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A84u;
label_191a84:
    // 0x191a84: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x191a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x191a88: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x191a8c: 0x24a54008  addiu       $a1, $a1, 0x4008
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16392));
    // 0x191a90: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x191a94: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x191A94u;
    SET_GPR_U32(ctx, 31, 0x191A9Cu);
    ctx->pc = 0x191A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A94u;
    // 0x191a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x191A94u, 0x191A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A9Cu;
label_191a9c:
    // 0x191a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x191a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191aa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x191AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA8u;
        // 0x191aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191AB0u;
}
