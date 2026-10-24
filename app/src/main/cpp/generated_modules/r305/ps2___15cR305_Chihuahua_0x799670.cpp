#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: __15cR305_Chihuahua
// Address: 0x799670 - 0x7996a0
void ps2___15cR305_Chihuahua_0x799670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___15cR305_Chihuahua_0x799670");
#endif

    ctx->pc = 0x799670u;

    // 0x799670: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x799670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x799674: 0xf8800020  sqc2        $vf0, 0x20($a0)
    ctx->pc = 0x799674u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799678: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x799678u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79967c: 0xf8800040  sqc2        $vf0, 0x40($a0)
    ctx->pc = 0x79967cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799680: 0xf8800050  sqc2        $vf0, 0x50($a0)
    ctx->pc = 0x799680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799684: 0xf8800070  sqc2        $vf0, 0x70($a0)
    ctx->pc = 0x799684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799688: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x79968cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x799690: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x799690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x799694: 0x3e00008  jr          $ra
    ctx->pc = 0x799694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799694u;
        // 0x799698: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79969Cu;
    // 0x79969c: 0x0  nop
    ctx->pc = 0x79969cu;
    // NOP
    ctx->pc = 0x7996a0u;
}
} // namespace gh_r305
