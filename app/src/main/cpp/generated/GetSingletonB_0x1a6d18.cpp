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

// Function: GetSingletonB
// Address: 0x1a6d18 - 0x1a6d68
void GetSingletonB_0x1a6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingletonB_0x1a6d18");
#endif

    switch (ctx->pc) {
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d54u: goto label_1a6d54;
        default: break;
    }

    ctx->pc = 0x1a6d18u;

    // 0x1a6d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6d1c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a6d20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a6d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6d24: 0x8c625f88  lw          $v0, 0x5F88($v1)
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F88u));
    // 0x1a6d28: 0x24705f88  addiu       $s0, $v1, 0x5F88
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24456));
    // 0x1a6d2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6D2Cu;
    {
        const bool branch_taken_0x1a6d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D2Cu;
        // 0x1a6d30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d2c) {
            ctx->pc = 0x1A6D54u;
            goto label_1a6d54;
        }
    }
    ctx->pc = 0x1A6D34u;
    // 0x1a6d34: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A6D34u;
    SET_GPR_U32(ctx, 31, 0x1A6D3Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A6D34u, 0x1A6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D3Cu;
label_1a6d3c:
    // 0x1a6d3c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a6d40: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a6d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a6d44: 0x24a574b0  addiu       $a1, $a1, 0x74B0
    ctx->pc = 0x1a6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
    // 0x1a6d48: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a6d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a6d4c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D54u);
    ctx->pc = 0x1A6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D4Cu;
    // 0x1a6d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A6D4Cu, 0x1A6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D54u;
label_1a6d54:
    // 0x1a6d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a6d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D68u;
}
