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

// Function: Obj0000_Set_D_003EE340_Args_0_1_35F958
// Address: 0x35f958 - 0x35f970
void Obj0000_Set_D_003EE340_Args_0_1_35F958_0x35f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EE340_Args_0_1_35F958_0x35f958");
#endif

    ctx->pc = 0x35f958u;

    // 0x35f958: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35f958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35f95c: 0x2442e340  addiu       $v0, $v0, -0x1CC0
    ctx->pc = 0x35f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959936));
    // 0x35f960: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x35f960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3EE344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE344u, _value); } while (0);
    // 0x35f964: 0x3e00008  jr          $ra
    ctx->pc = 0x35F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F964u;
        // 0x35f968: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F96Cu;
    // 0x35f96c: 0x0  nop
    ctx->pc = 0x35f96cu;
    // NOP
    ctx->pc = 0x35f970u;
}
