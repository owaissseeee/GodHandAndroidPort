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

// Function: cSceAtManager_getNextUnit
// Address: 0x2c30c8 - 0x2c3118
void cSceAtManager_getNextUnit_0x2c30c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_getNextUnit_0x2c30c8");
#endif

    switch (ctx->pc) {
        case 0x2c30f0u: goto label_2c30f0;
        default: break;
    }

    ctx->pc = 0x2c30c8u;

    // 0x2c30c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c30cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c30ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c30d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c30d4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C30D4u;
    {
        const bool branch_taken_0x2c30d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30D4u;
        // 0x2c30d8: 0x3c047fff  lui         $a0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30d4) {
            ctx->pc = 0x2C310Cu;
            goto label_2c310c;
        }
    }
    ctx->pc = 0x2C30DCu;
    // 0x2c30dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c30e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c30e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2c30e4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2c30e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c30e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c30ec: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x2c30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_2c30f0:
    // 0x2c30f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C30F0u;
    {
        const bool branch_taken_0x2c30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30F0u;
        // 0x2c30f4: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30f0) {
            ctx->pc = 0x2C3100u;
            goto label_2c3100;
        }
    }
    ctx->pc = 0x2C30F8u;
    // 0x2c30f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C30F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30F8u;
        // 0x2c30fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C30F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3100u;
label_2c3100:
    // 0x2c3100: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c3100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c3104: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3104u;
    {
        const bool branch_taken_0x2c3104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3104u;
        // 0x2c3108: 0xa61024  and         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3104) {
            ctx->pc = 0x2C30F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c30f0;
        }
    }
    ctx->pc = 0x2C310Cu;
label_2c310c:
    // 0x2c310c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C310Cu;
        // 0x2c3110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C310Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3114u;
    // 0x2c3114: 0x0  nop
    ctx->pc = 0x2c3114u;
    // NOP
    ctx->pc = 0x2c3118u;
}
