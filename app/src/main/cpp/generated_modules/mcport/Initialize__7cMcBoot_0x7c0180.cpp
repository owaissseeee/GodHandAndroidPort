#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Initialize__7cMcBoot
// Address: 0x7c0180 - 0x7c01c0
void Initialize__7cMcBoot_0x7c0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7cMcBoot_0x7c0180");
#endif

    switch (ctx->pc) {
        case 0x7c0194u: goto label_7c0194;
        case 0x7c01acu: goto label_7c01ac;
        default: break;
    }

    ctx->pc = 0x7c0180u;

    // 0x7c0180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c0184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c0184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c0188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c0188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c018c: 0xc1f1c9a  jal         func_7C7268
    ctx->pc = 0x7C018Cu;
    SET_GPR_U32(ctx, 31, 0x7C0194u);
    ctx->pc = 0x7C0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C018Cu;
    // 0x7c0190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7268u, 0x7C018Cu, 0x7C0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0194u;
label_7c0194:
    // 0x7c0194: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c0194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c0198: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x7c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x7c019c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c01a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c01a4: 0xc1f0080  jal         func_7C0200
    ctx->pc = 0x7C01A4u;
    SET_GPR_U32(ctx, 31, 0x7C01ACu);
    ctx->pc = 0x7C01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C01A4u;
    // 0x7c01a8: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0200u, 0x7C01A4u, 0x7C01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C01ACu;
label_7c01ac:
    // 0x7c01ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c01acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c01b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c01b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C01B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C01B4u;
        // 0x7c01b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C01B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C01BCu;
    // 0x7c01bc: 0x0  nop
    ctx->pc = 0x7c01bcu;
    // NOP
    ctx->pc = 0x7c01c0u;
}
} // namespace gh_mcport
