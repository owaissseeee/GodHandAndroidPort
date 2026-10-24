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

// Function: func_00326568
// Address: 0x326568 - 0x3265a8
void func_00326568_0x326568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326568_0x326568");
#endif

    ctx->pc = 0x326568u;

    // 0x326568: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x326568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x32656c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x326574: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x326574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x326578: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x326578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x32657c: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x32657cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x326580: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x326580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x326584: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x326584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x326588: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x326588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x32658c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x32658cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x326590: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x326590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x326594: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x326594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x326598: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x326598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32659c: 0x3e00008  jr          $ra
    ctx->pc = 0x32659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3265A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32659Cu;
        // 0x3265a0: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265A4u;
    // 0x3265a4: 0x0  nop
    ctx->pc = 0x3265a4u;
    // NOP
    ctx->pc = 0x3265a8u;
}
