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

// Function: InitObjStateFlags_12CD70
// Address: 0x12cd70 - 0x12cd90
void InitObjStateFlags_12CD70_0x12cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjStateFlags_12CD70_0x12cd70");
#endif

    ctx->pc = 0x12cd70u;

    // 0x12cd70: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x12cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x12cd74: 0xe48c0670  swc1        $f12, 0x670($a0)
    ctx->pc = 0x12cd74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1648), bits); }
    // 0x12cd78: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x12cd78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cd7c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x12cd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cd80: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x12cd80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x12CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD84u;
        // 0x12cd88: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CD8Cu;
    // 0x12cd8c: 0x0  nop
    ctx->pc = 0x12cd8cu;
    // NOP
    ctx->pc = 0x12cd90u;
}
