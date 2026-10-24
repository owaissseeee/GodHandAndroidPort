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

// Function: Obj0000_Set_D_003D9F6C_D_003D9F70_334230
// Address: 0x334230 - 0x334248
void Obj0000_Set_D_003D9F6C_D_003D9F70_334230_0x334230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003D9F6C_D_003D9F70_334230_0x334230");
#endif

    ctx->pc = 0x334230u;

    // 0x334230: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x334230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x334234: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x334234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x334238: 0xac449f6c  sw          $a0, -0x6094($v0)
    ctx->pc = 0x334238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3D9F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D9F6Cu, _value); } while (0);
    // 0x33423c: 0x3e00008  jr          $ra
    ctx->pc = 0x33423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33423Cu;
        // 0x334240: 0xac659f70  sw          $a1, -0x6090($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334244u;
    // 0x334244: 0x0  nop
    ctx->pc = 0x334244u;
    // NOP
    ctx->pc = 0x334248u;
}
