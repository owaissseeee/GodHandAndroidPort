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

// Function: func_001DBEB0
// Address: 0x1dbeb0 - 0x1dbf18
void func_001DBEB0_0x1dbeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DBEB0_0x1dbeb0");
#endif

    switch (ctx->pc) {
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbef8u: goto label_1dbef8;
        default: break;
    }

    ctx->pc = 0x1dbeb0u;

    // 0x1dbeb0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1dbeb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbeb4: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x1dbeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1dbeb8: 0x24e52e68  addiu       $a1, $a3, 0x2E68
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 11880));
    // 0x1dbebc: 0x0  nop
    ctx->pc = 0x1dbebcu;
    // NOP
label_1dbec0:
    // 0x1dbec0: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x1dbec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1dbec4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1dbec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dbec8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1dbecc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1dbed0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1dbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1dbed4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1dbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x1dbed8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1dbedc: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x1dbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1dbee0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1dbee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1dbee4: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DBEE4u;
    {
        const bool branch_taken_0x1dbee4 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1DBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEE4u;
        // 0x1dbee8: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbee4) {
            ctx->pc = 0x1DBEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbec0;
        }
    }
    ctx->pc = 0x1DBEECu;
    // 0x1dbeec: 0x24e43014  addiu       $a0, $a3, 0x3014
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12308));
    // 0x1dbef0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbef4: 0x0  nop
    ctx->pc = 0x1dbef4u;
    // NOP
label_1dbef8:
    // 0x1dbef8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1dbefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dbf00: 0x0  nop
    ctx->pc = 0x1dbf00u;
    // NOP
    // 0x1dbf04: 0x0  nop
    ctx->pc = 0x1dbf04u;
    // NOP
    // 0x1dbf08: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DBF08u;
    {
        const bool branch_taken_0x1dbf08 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1DBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF08u;
        // 0x1dbf0c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf08) {
            ctx->pc = 0x1DBEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbef8;
        }
    }
    ctx->pc = 0x1DBF10u;
    // 0x1dbf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBF18u;
}
