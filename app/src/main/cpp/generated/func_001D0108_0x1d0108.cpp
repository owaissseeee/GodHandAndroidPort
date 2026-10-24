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

// Function: func_001D0108
// Address: 0x1d0108 - 0x1d0140
void func_001D0108_0x1d0108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0108_0x1d0108");
#endif

    ctx->pc = 0x1d0108u;

    // 0x1d0108: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x1d0108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x1d010c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0110: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d0110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d0114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d011c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d0120: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0124: 0xa08502f5  sb          $a1, 0x2F5($a0)
    ctx->pc = 0x1d0124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0128: 0xe480024c  swc1        $f0, 0x24C($a0)
    ctx->pc = 0x1d0128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x1d012c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x1d012cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
    // 0x1d0130: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1d0130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0134: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1d0134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0138: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0138u;
        // 0x1d013c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0140u;
}
