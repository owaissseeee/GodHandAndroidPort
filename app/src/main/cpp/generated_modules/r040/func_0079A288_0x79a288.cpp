#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079A288
// Address: 0x79a288 - 0x79a2b8
void func_0079A288_0x79a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A288_0x79a288");
#endif

    switch (ctx->pc) {
        case 0x79a29cu: goto label_79a29c;
        default: break;
    }

    ctx->pc = 0x79a288u;

    // 0x79a288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a28c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a294: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x79A294u;
    SET_GPR_U32(ctx, 31, 0x79A29Cu);
    ctx->pc = 0x79A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A294u;
    // 0x79a298: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79A294u, 0x79A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A29Cu;
label_79a29c:
    // 0x79a29c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a2a4: 0xc4417a14  lwc1        $f1, 0x7A14($v0)
    ctx->pc = 0x79a2a4u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a2a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79a2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x79a2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x79A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2B4u;
    // 0x79a2b4: 0x0  nop
    ctx->pc = 0x79a2b4u;
    // NOP
    ctx->pc = 0x79a2b8u;
}
} // namespace gh_r040
