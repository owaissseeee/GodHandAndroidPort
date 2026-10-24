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
// Function: End__7cMcBoot
// Address: 0x7c01c0 - 0x7c0200
void End__7cMcBoot_0x7c01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__7cMcBoot_0x7c01c0");
#endif

    switch (ctx->pc) {
        case 0x7c01e4u: goto label_7c01e4;
        case 0x7c01ecu: goto label_7c01ec;
        default: break;
    }

    ctx->pc = 0x7c01c0u;

    // 0x7c01c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c01c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c01c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c01c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c01cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c01ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c01d0: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x7c01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x7c01d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C01D4u;
    {
        const bool branch_taken_0x7c01d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C01D4u;
        // 0x7c01d8: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c01d4) {
            ctx->pc = 0x7C01E4u;
            goto label_7c01e4;
        }
    }
    ctx->pc = 0x7C01DCu;
    // 0x7c01dc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C01DCu;
    SET_GPR_U32(ctx, 31, 0x7C01E4u);
    ctx->pc = 0x7C01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C01DCu;
    // 0x7c01e0: 0x24844230  addiu       $a0, $a0, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C01DCu, 0x7C01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C01E4u;
label_7c01e4:
    // 0x7c01e4: 0xc1f1cc0  jal         func_7C7300
    ctx->pc = 0x7C01E4u;
    SET_GPR_U32(ctx, 31, 0x7C01ECu);
    ctx->pc = 0x7C01E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C01E4u;
    // 0x7c01e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7300u, 0x7C01E4u, 0x7C01ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C01ECu;
label_7c01ec:
    // 0x7c01ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c01ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c01f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c01f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c01f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C01F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C01F4u;
        // 0x7c01f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C01F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C01FCu;
    // 0x7c01fc: 0x0  nop
    ctx->pc = 0x7c01fcu;
    // NOP
    ctx->pc = 0x7c0200u;
}
} // namespace gh_mcport
