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

// Function: cSceAtUnit_SetEnable
// Address: 0x2c0de8 - 0x2c0e20
void cSceAtUnit_SetEnable_0x2c0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_SetEnable_0x2c0de8");
#endif

    switch (ctx->pc) {
        case 0x2c0e14u: goto label_2c0e14;
        default: break;
    }

    ctx->pc = 0x2c0de8u;

    // 0x2c0de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c0decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0df4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c0df8: 0x90a30034  lbu         $v1, 0x34($a1)
    ctx->pc = 0x2c0df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2c0dfc: 0x90a40035  lbu         $a0, 0x35($a1)
    ctx->pc = 0x2c0dfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
    // 0x2c0e00: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c0e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c0e04: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E04u;
    {
        const bool branch_taken_0x2c0e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E04u;
        // 0x2c0e08: 0xa0a30034  sb          $v1, 0x34($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e04) {
            ctx->pc = 0x2C0E14u;
            goto label_2c0e14;
        }
    }
    ctx->pc = 0x2C0E0Cu;
    // 0x2c0e0c: 0xc0b0388  jal         func_2C0E20
    ctx->pc = 0x2C0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2C0E14u);
    ctx->pc = 0x2C0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0E0Cu;
    // 0x2c0e10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E20u, 0x2C0E0Cu, 0x2C0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E14u;
label_2c0e14:
    // 0x2c0e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E18u;
        // 0x2c0e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E20u;
}
