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

// Function: func_00134430
// Address: 0x134430 - 0x134458
void func_00134430_0x134430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134430_0x134430");
#endif

    ctx->pc = 0x134430u;

    // 0x134430: 0xf8800020  sqc2        $vf0, 0x20($a0)
    ctx->pc = 0x134430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134434: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x134434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134438: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x134438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x13443c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13443cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134440: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x134440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x134444: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x134444u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x134448: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x134448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13444c: 0x3e00008  jr          $ra
    ctx->pc = 0x13444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13444Cu;
        // 0x134450: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134454u;
    // 0x134454: 0x0  nop
    ctx->pc = 0x134454u;
    // NOP
    ctx->pc = 0x134458u;
}
