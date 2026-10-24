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

// Function: cSceAtManager_initFreeList
// Address: 0x2c3000 - 0x2c3040
void cSceAtManager_initFreeList_0x2c3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_initFreeList_0x2c3000");
#endif

    switch (ctx->pc) {
        case 0x2c3020u: goto label_2c3020;
        default: break;
    }

    ctx->pc = 0x2c3000u;

    // 0x2c3000: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3004: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2c3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c3008: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c300c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C300Cu;
    {
        const bool branch_taken_0x2c300c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2C3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C300Cu;
        // 0x2c3010: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c300c) {
            ctx->pc = 0x2C3038u;
            goto label_2c3038;
        }
    }
    ctx->pc = 0x2C3014u;
    // 0x2c3014: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x2c3014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x2c3018: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2c301c: 0x0  nop
    ctx->pc = 0x2c301cu;
    // NOP
label_2c3020:
    // 0x2c3020: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x2c3020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2c3024: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c3028: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c3028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c302c: 0x0  nop
    ctx->pc = 0x2c302cu;
    // NOP
    // 0x2c3030: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C3020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3020;
        }
    }
    ctx->pc = 0x2C3038u;
label_2c3038:
    // 0x2c3038: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3040u;
}
