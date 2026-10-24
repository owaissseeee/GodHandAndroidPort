#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: R508Init__Fv
// Address: 0x799220 - 0x799260
void R508Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R508Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799240u: goto label_799240;
        case 0x79924cu: goto label_79924c;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0xc1e64a2  jal         func_799288
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799288u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0xae029900  sw          $v0, -0x6700($s0)
    ctx->pc = 0x799240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
    // 0x799244: 0xc1e64b4  jal         func_7992D0
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7992D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7992D0u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79924cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799254: 0x3e00008  jr          $ra
    ctx->pc = 0x799254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799254u;
        // 0x799258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79925Cu;
    // 0x79925c: 0x0  nop
    ctx->pc = 0x79925cu;
    // NOP
    ctx->pc = 0x799260u;
}
} // namespace gh_r508
