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

// Function: func_001B0B20
// Address: 0x1b0b20 - 0x1b0b70
void func_001B0B20_0x1b0b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0B20_0x1b0b20");
#endif

    switch (ctx->pc) {
        case 0x1b0b44u: goto label_1b0b44;
        case 0x1b0b5cu: goto label_1b0b5c;
        default: break;
    }

    ctx->pc = 0x1b0b20u;

    // 0x1b0b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0b24: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b0b28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0b2c: 0x8c626048  lw          $v0, 0x6048($v1)
    ctx->pc = 0x1b0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786048u));
    // 0x1b0b30: 0x24706048  addiu       $s0, $v1, 0x6048
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24648));
    // 0x1b0b34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0B34u;
    {
        const bool branch_taken_0x1b0b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B34u;
        // 0x1b0b38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b34) {
            ctx->pc = 0x1B0B5Cu;
            goto label_1b0b5c;
        }
    }
    ctx->pc = 0x1B0B3Cu;
    // 0x1b0b3c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B44u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B0B3Cu, 0x1B0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B44u;
label_1b0b44:
    // 0x1b0b44: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b0b48: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b0b4c: 0x24a58210  addiu       $a1, $a1, -0x7DF0
    ctx->pc = 0x1b0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935056));
    // 0x1b0b50: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b0b54: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B0B54u;
    SET_GPR_U32(ctx, 31, 0x1B0B5Cu);
    ctx->pc = 0x1B0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B54u;
    // 0x1b0b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B0B54u, 0x1B0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B5Cu;
label_1b0b5c:
    // 0x1b0b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B68u;
        // 0x1b0b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0B70u;
}
