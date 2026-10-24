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

// Function: func_001B8FA8
// Address: 0x1b8fa8 - 0x1b8ff8
void func_001B8FA8_0x1b8fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8FA8_0x1b8fa8");
#endif

    switch (ctx->pc) {
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fe4u: goto label_1b8fe4;
        default: break;
    }

    ctx->pc = 0x1b8fa8u;

    // 0x1b8fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8fac: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b8facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b8fb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8fb4: 0x8c6260f8  lw          $v0, 0x60F8($v1)
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860F8u));
    // 0x1b8fb8: 0x247060f8  addiu       $s0, $v1, 0x60F8
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24824));
    // 0x1b8fbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8FBCu;
    {
        const bool branch_taken_0x1b8fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FBCu;
        // 0x1b8fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fbc) {
            ctx->pc = 0x1B8FE4u;
            goto label_1b8fe4;
        }
    }
    ctx->pc = 0x1B8FC4u;
    // 0x1b8fc4: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B8FC4u;
    SET_GPR_U32(ctx, 31, 0x1B8FCCu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B8FC4u, 0x1B8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FCCu;
label_1b8fcc:
    // 0x1b8fcc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b8fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b8fd0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b8fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b8fd4: 0x24a58cd0  addiu       $a1, $a1, -0x7330
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937808));
    // 0x1b8fd8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b8fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b8fdc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B8FDCu;
    SET_GPR_U32(ctx, 31, 0x1B8FE4u);
    ctx->pc = 0x1B8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FDCu;
    // 0x1b8fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B8FDCu, 0x1B8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FE4u;
label_1b8fe4:
    // 0x1b8fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8fec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FF0u;
        // 0x1b8ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8FF8u;
}
