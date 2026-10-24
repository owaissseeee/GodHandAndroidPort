#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getPassFrame__C9cEventEnv
// Address: 0x7ae938 - 0x7ae958
void getPassFrame__C9cEventEnv_0x7ae938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPassFrame__C9cEventEnv_0x7ae938");
#endif

    ctx->pc = 0x7ae938u;

    // 0x7ae938: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x7ae938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7ae93c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7ae93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7ae940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7ae940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7ae944: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x7ae944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ae948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ae948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ae94c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7ae94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ae950: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE950u;
        // 0x7ae954: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE958u;
}
} // namespace gh_event
