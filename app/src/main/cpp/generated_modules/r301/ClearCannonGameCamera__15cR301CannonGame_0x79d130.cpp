#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ClearCannonGameCamera__15cR301CannonGame
// Address: 0x79d130 - 0x79d158
void ClearCannonGameCamera__15cR301CannonGame_0x79d130(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearCannonGameCamera__15cR301CannonGame_0x79d130");
#endif

    if (__builtin_expect(ctx->pc != 0x79d130u, 0)) {
        switch (ctx->pc) {
            case 0x79d148u: goto label_79d148;
            default: break;
        }
    }



    // 0x79d130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79d134: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x79d138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d13c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d140: 0xc04e350  jal         func_138D40
    SET_GPR_U32(ctx, 31, 0x79D148u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D140u;
    // 0x79d144: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCamManager_setPlCamera_0x138d40, 0x138D40u, 0x79D148u)) {
        return;
    }
label_79d148:
    // 0x79d148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d14c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D14Cu;
        // 0x79d150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79d154: 0x0  nop
    // NOP
    ctx->pc = 0x79d158u;
}
} // namespace gh_r301
