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

// Function: cSceAtUnit_SetDisable
// Address: 0x2c0e28 - 0x2c0e60
void cSceAtUnit_SetDisable_0x2c0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_SetDisable_0x2c0e28");
#endif

    switch (ctx->pc) {
        case 0x2c0e54u: goto label_2c0e54;
        default: break;
    }

    ctx->pc = 0x2c0e28u;

    // 0x2c0e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0e2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c0e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0e34: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c0e38: 0x90a30034  lbu         $v1, 0x34($a1)
    ctx->pc = 0x2c0e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2c0e3c: 0x90a40035  lbu         $a0, 0x35($a1)
    ctx->pc = 0x2c0e3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
    // 0x2c0e40: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2c0e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2c0e44: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E44u;
    {
        const bool branch_taken_0x2c0e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E44u;
        // 0x2c0e48: 0xa0a30034  sb          $v1, 0x34($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e44) {
            ctx->pc = 0x2C0E54u;
            goto label_2c0e54;
        }
    }
    ctx->pc = 0x2C0E4Cu;
    // 0x2c0e4c: 0xc0b0398  jal         func_2C0E60
    ctx->pc = 0x2C0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2C0E54u);
    ctx->pc = 0x2C0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0E4Cu;
    // 0x2c0e50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E60u, 0x2C0E4Cu, 0x2C0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E54u;
label_2c0e54:
    // 0x2c0e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E58u;
        // 0x2c0e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E60u;
}
