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

// Function: GetOrInit_D00460D88_2D9EC8
// Address: 0x2d9ec8 - 0x2d9f08
void GetOrInit_D00460D88_2D9EC8_0x2d9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_D00460D88_2D9EC8_0x2d9ec8");
#endif

    switch (ctx->pc) {
        case 0x2d9ef4u: goto label_2d9ef4;
        default: break;
    }

    ctx->pc = 0x2d9ec8u;

    // 0x2d9ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9ecc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2d9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2d9ed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d9ed4: 0x8c620d88  lw          $v0, 0xD88($v1)
    ctx->pc = 0x2d9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D88u));
    // 0x2d9ed8: 0x24700d88  addiu       $s0, $v1, 0xD88
    ctx->pc = 0x2d9ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x2d9edc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9EDCu;
    {
        const bool branch_taken_0x2d9edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EDCu;
        // 0x2d9ee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9edc) {
            ctx->pc = 0x2D9EF4u;
            goto label_2d9ef4;
        }
    }
    ctx->pc = 0x2D9EE4u;
    // 0x2d9ee4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d9ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9eec: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2D9EECu;
    SET_GPR_U32(ctx, 31, 0x2D9EF4u);
    ctx->pc = 0x2D9EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EECu;
    // 0x2d9ef0: 0x24a5d3a0  addiu       $a1, $a1, -0x2C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2D9EECu, 0x2D9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EF4u;
label_2d9ef4:
    // 0x2d9ef4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9efc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F00u;
        // 0x2d9f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F08u;
}
