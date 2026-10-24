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

// Function: func_0017FAF8
// Address: 0x17faf8 - 0x17fb48
void func_0017FAF8_0x17faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FAF8_0x17faf8");
#endif

    switch (ctx->pc) {
        case 0x17fb1cu: goto label_17fb1c;
        case 0x17fb34u: goto label_17fb34;
        default: break;
    }

    ctx->pc = 0x17faf8u;

    // 0x17faf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fafc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17fb00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17fb04: 0x8c625a38  lw          $v0, 0x5A38($v1)
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A38u));
    // 0x17fb08: 0x24705a38  addiu       $s0, $v1, 0x5A38
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23096));
    // 0x17fb0c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FB0Cu;
    {
        const bool branch_taken_0x17fb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB0Cu;
        // 0x17fb10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb0c) {
            ctx->pc = 0x17FB34u;
            goto label_17fb34;
        }
    }
    ctx->pc = 0x17FB14u;
    // 0x17fb14: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x17FB14u;
    SET_GPR_U32(ctx, 31, 0x17FB1Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x17FB14u, 0x17FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB1Cu;
label_17fb1c:
    // 0x17fb1c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17fb20: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17fb24: 0x24a52548  addiu       $a1, $a1, 0x2548
    ctx->pc = 0x17fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9544));
    // 0x17fb28: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x17fb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17fb2c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17FB2Cu;
    SET_GPR_U32(ctx, 31, 0x17FB34u);
    ctx->pc = 0x17FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB2Cu;
    // 0x17fb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17FB2Cu, 0x17FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB34u;
label_17fb34:
    // 0x17fb34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB40u;
        // 0x17fb44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB48u;
}
