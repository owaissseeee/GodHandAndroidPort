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
// Function: __eh_rtime_match
// Address: 0x7cb7a0 - 0x7cb7e8
void ps2___eh_rtime_match_0x7cb7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_rtime_match_0x7cb7a0");
#endif

    switch (ctx->pc) {
        case 0x7cb7a0u: goto label_7cb7a0;
        case 0x7cb7a4u: goto label_7cb7a4;
        case 0x7cb7a8u: goto label_7cb7a8;
        case 0x7cb7acu: goto label_7cb7ac;
        case 0x7cb7b0u: goto label_7cb7b0;
        case 0x7cb7b4u: goto label_7cb7b4;
        case 0x7cb7b8u: goto label_7cb7b8;
        case 0x7cb7bcu: goto label_7cb7bc;
        case 0x7cb7c0u: goto label_7cb7c0;
        case 0x7cb7c4u: goto label_7cb7c4;
        case 0x7cb7c8u: goto label_7cb7c8;
        case 0x7cb7ccu: goto label_7cb7cc;
        case 0x7cb7d0u: goto label_7cb7d0;
        case 0x7cb7d4u: goto label_7cb7d4;
        case 0x7cb7d8u: goto label_7cb7d8;
        case 0x7cb7dcu: goto label_7cb7dc;
        case 0x7cb7e0u: goto label_7cb7e0;
        case 0x7cb7e4u: goto label_7cb7e4;
        default: break;
    }

    ctx->pc = 0x7cb7a0u;

label_7cb7a0:
    // 0x7cb7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7cb7a4:
    // 0x7cb7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7cb7a8:
    // 0x7cb7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cb7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7cb7ac:
    // 0x7cb7ac: 0xc1f2d0c  jal         func_7CB430
label_7cb7b0:
    if (ctx->pc == 0x7CB7B0u) {
        ctx->pc = 0x7CB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7ACu;
        // 0x7cb7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7B4u;
        goto label_7cb7b4;
    }
    ctx->pc = 0x7CB7ACu;
    SET_GPR_U32(ctx, 31, 0x7CB7B4u);
    ctx->pc = 0x7CB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB7ACu;
    // 0x7cb7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CB7ACu, 0x7CB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB7B4u;
label_7cb7b4:
    // 0x7cb7b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x7cb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7cb7b8:
    // 0x7cb7b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7cb7bc:
    // 0x7cb7bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_7cb7c0:
    if (ctx->pc == 0x7CB7C0u) {
        ctx->pc = 0x7CB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7BCu;
        // 0x7cb7c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7C4u;
        goto label_7cb7c4;
    }
    ctx->pc = 0x7CB7BCu;
    {
        const bool branch_taken_0x7cb7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7BCu;
        // 0x7cb7c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb7bc) {
            ctx->pc = 0x7CB7CCu;
            goto label_7cb7cc;
        }
    }
    ctx->pc = 0x7CB7C4u;
label_7cb7c4:
    // 0x7cb7c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_7cb7c8:
    if (ctx->pc == 0x7CB7C8u) {
        ctx->pc = 0x7CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7C4u;
        // 0x7cb7c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7CCu;
        goto label_7cb7cc;
    }
    ctx->pc = 0x7CB7C4u;
    {
        const bool branch_taken_0x7cb7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7C4u;
        // 0x7cb7c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb7c4) {
            ctx->pc = 0x7CB7D8u;
            goto label_7cb7d8;
        }
    }
    ctx->pc = 0x7CB7CCu;
label_7cb7cc:
    // 0x7cb7cc: 0x40f809  jalr        $v0
label_7cb7d0:
    if (ctx->pc == 0x7CB7D0u) {
        ctx->pc = 0x7CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7CCu;
        // 0x7cb7d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7D4u;
        goto label_7cb7d4;
    }
    ctx->pc = 0x7CB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB7D4u);
        ctx->pc = 0x7CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7CCu;
        // 0x7cb7d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB7CCu, 0x7CB7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB7D4u;
label_7cb7d4:
    // 0x7cb7d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7cb7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7cb7d8:
    // 0x7cb7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7cb7dc:
    // 0x7cb7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cb7e0:
    // 0x7cb7e0: 0x3e00008  jr          $ra
label_7cb7e4:
    if (ctx->pc == 0x7CB7E4u) {
        ctx->pc = 0x7CB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7E0u;
        // 0x7cb7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7E8u;
        goto label_fallthrough_0x7cb7e0;
    }
    ctx->pc = 0x7CB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB7E0u;
        // 0x7cb7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7cb7e0:
    ctx->pc = 0x7CB7E8u;
}
} // namespace gh_mcport
