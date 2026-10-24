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

// Function: cCoreSave_setReelSlot
// Address: 0x1fc170 - 0x1fc198
void cCoreSave_setReelSlot_0x1fc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setReelSlot_0x1fc170");
#endif

    ctx->pc = 0x1fc170u;

    // 0x1fc170: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc174: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC174u;
    {
        const bool branch_taken_0x1fc174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC174u;
        // 0x1fc178: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc174) {
            ctx->pc = 0x1FC18Cu;
            goto label_1fc18c;
        }
    }
    ctx->pc = 0x1FC17Cu;
    // 0x1fc17c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1fc17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc180: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC180u;
    {
        const bool branch_taken_0x1fc180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC180u;
        // 0x1fc184: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc180) {
            ctx->pc = 0x1FC18Cu;
            goto label_1fc18c;
        }
    }
    ctx->pc = 0x1FC188u;
    // 0x1fc188: 0xa0460098  sb          $a2, 0x98($v0)
    ctx->pc = 0x1fc188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 6));
label_1fc18c:
    // 0x1fc18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC194u;
    // 0x1fc194: 0x0  nop
    ctx->pc = 0x1fc194u;
    // NOP
    ctx->pc = 0x1fc198u;
}
