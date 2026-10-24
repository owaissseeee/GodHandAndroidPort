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

// Function: func_00305A18
// Address: 0x305a18 - 0x305a38
void func_00305A18_0x305a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305A18_0x305a18");
#endif

    ctx->pc = 0x305a18u;

    // 0x305a18: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x305a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x305a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x305a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305a24: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x305a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x305a28: 0xac820424  sw          $v0, 0x424($a0)
    ctx->pc = 0x305a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 2));
    // 0x305a2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x305a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a30: 0x3e00008  jr          $ra
    ctx->pc = 0x305A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A30u;
        // 0x305a34: 0xe4800420  swc1        $f0, 0x420($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305A38u;
}
