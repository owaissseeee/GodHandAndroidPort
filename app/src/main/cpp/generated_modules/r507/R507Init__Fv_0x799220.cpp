#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: R507Init__Fv
// Address: 0x799220 - 0x799258
void R507Init__Fv_0x799220(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R507Init__Fv_0x799220");
#endif

    if (__builtin_expect(ctx->pc != 0x799220u, 0)) {
        switch (ctx->pc) {
            case 0x799238u: goto label_799238;
            case 0x799240u: goto label_799240;
            default: break;
        }
    }



    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040190  addiu       $a0, $zero, 0x190
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799238:
    // 0x799238: 0xc1e64a0  jal         func_799280
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799280u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799240:
    // 0x799240: 0xae02a680  sw          $v0, -0x5980($s0)
    ctx->pc = 0x799240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944384), GPR_U32(ctx, 2));
    // 0x799244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79924c: 0x3e00008  jr          $ra
    ctx->pc = 0x79924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79924Cu;
        // 0x799250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79924Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x799254: 0x0  nop
    // NOP
    ctx->pc = 0x799258u;
}
} // namespace gh_r507
