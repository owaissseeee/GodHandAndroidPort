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

// Function: _InitAlarm
// Address: 0x3b76b8 - 0x3b7708
void ps2__InitAlarm_0x3b76b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitAlarm_0x3b76b8");
#endif

    switch (ctx->pc) {
        case 0x3b76d8u: goto label_3b76d8;
        default: break;
    }

    ctx->pc = 0x3b76b8u;

    // 0x3b76b8: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3b76bc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b76c0: 0x24a23c40  addiu       $v0, $a1, 0x3C40
    ctx->pc = 0x3b76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
    // 0x3b76c4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3b76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3b76c8: 0xac624040  sw          $v0, 0x4040($v1)
    ctx->pc = 0x3b76c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x784040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x784040u, _value); } while (0);
    // 0x3b76cc: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x3b76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3b76d0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x3b76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3b76d4: 0x0  nop
    ctx->pc = 0x3b76d4u;
    // NOP
label_3b76d8:
    // 0x3b76d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3b76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3b76dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3b76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3b76e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3b76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3b76e4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3b76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3b76e8: 0x0  nop
    ctx->pc = 0x3b76e8u;
    // NOP
    // 0x3b76ec: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B76ECu;
    {
        const bool branch_taken_0x3b76ec = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x3b76ec) {
            ctx->pc = 0x3B76D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b76d8;
        }
    }
    ctx->pc = 0x3B76F4u;
    // 0x3b76f4: 0x24a33c40  addiu       $v1, $a1, 0x3C40
    ctx->pc = 0x3b76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
    // 0x3b76f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b76f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B76FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76FCu;
        // 0x3b7700: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B76FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7704u;
    // 0x3b7704: 0x0  nop
    ctx->pc = 0x3b7704u;
    // NOP
    ctx->pc = 0x3b7708u;
}
