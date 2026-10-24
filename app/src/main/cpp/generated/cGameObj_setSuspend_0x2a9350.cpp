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

// Function: cGameObj_setSuspend
// Address: 0x2a9350 - 0x2a93a8
void cGameObj_setSuspend_0x2a9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_setSuspend_0x2a9350");
#endif

    ctx->pc = 0x2a9350u;

    // 0x2a9350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9354: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9354u;
    {
        const bool branch_taken_0x2a9354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9354) {
            ctx->pc = 0x2A9358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9354u;
            // 0x2a9358: 0x8c830250  lw          $v1, 0x250($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A936Cu;
            goto label_2a936c;
        }
    }
    ctx->pc = 0x2A935Cu;
    // 0x2a935c: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2a935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2a9360: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a9360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a9364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9364u;
    {
        const bool branch_taken_0x2a9364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9364u;
        // 0x2a9368: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9364) {
            ctx->pc = 0x2A937Cu;
            goto label_2a937c;
        }
    }
    ctx->pc = 0x2A936Cu;
label_2a936c:
    // 0x2a936c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9370: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2a9370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2a9374: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a9374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a9378: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x2a9378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_2a937c:
    // 0x2a937c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9380: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9380u;
    {
        const bool branch_taken_0x2a9380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9380u;
        // 0x2a9384: 0x8c8205a0  lw          $v0, 0x5A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9380) {
            ctx->pc = 0x2A9394u;
            goto label_2a9394;
        }
    }
    ctx->pc = 0x2A9388u;
    // 0x2a9388: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2a9388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a938c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A938Cu;
        // 0x2a9390: 0xac8205a0  sw          $v0, 0x5A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9394u;
label_2a9394:
    // 0x2a9394: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2a9394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2a9398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a939c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A939Cu;
        // 0x2a93a0: 0xac8205a0  sw          $v0, 0x5A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A93A4u;
    // 0x2a93a4: 0x0  nop
    ctx->pc = 0x2a93a4u;
    // NOP
    ctx->pc = 0x2a93a8u;
}
