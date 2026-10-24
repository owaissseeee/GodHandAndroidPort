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

// Function: func_001415E8
// Address: 0x1415e8 - 0x141620
void func_001415E8_0x1415e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001415E8_0x1415e8");
#endif

    switch (ctx->pc) {
        case 0x1415f8u: goto label_1415f8;
        default: break;
    }

    ctx->pc = 0x1415e8u;

    // 0x1415e8: 0x248422f4  addiu       $a0, $a0, 0x22F4
    ctx->pc = 0x1415e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8948));
    // 0x1415ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1415f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1415f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1415f4: 0x0  nop
    ctx->pc = 0x1415f4u;
    // NOP
label_1415f8:
    // 0x1415f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1415f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1415fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1415FCu;
    {
        const bool branch_taken_0x1415fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415FCu;
        // 0x141600: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415fc) {
            ctx->pc = 0x14160Cu;
            goto label_14160c;
        }
    }
    ctx->pc = 0x141604u;
    // 0x141604: 0xa0450076  sb          $a1, 0x76($v0)
    ctx->pc = 0x141604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 118), (uint8_t)GPR_U32(ctx, 5));
    // 0x141608: 0xa0460075  sb          $a2, 0x75($v0)
    ctx->pc = 0x141608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 117), (uint8_t)GPR_U32(ctx, 6));
label_14160c:
    // 0x14160c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14160Cu;
    {
        const bool branch_taken_0x14160c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x141610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14160Cu;
        // 0x141610: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14160c) {
            ctx->pc = 0x1415F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1415f8;
        }
    }
    ctx->pc = 0x141614u;
    // 0x141614: 0x3e00008  jr          $ra
    ctx->pc = 0x141614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14161Cu;
    // 0x14161c: 0x0  nop
    ctx->pc = 0x14161cu;
    // NOP
    ctx->pc = 0x141620u;
}
