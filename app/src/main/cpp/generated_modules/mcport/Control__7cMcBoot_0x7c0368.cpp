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
// Function: Control__7cMcBoot
// Address: 0x7c0368 - 0x7c0418
void Control__7cMcBoot_0x7c0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Control__7cMcBoot_0x7c0368");
#endif

    switch (ctx->pc) {
        case 0x7c03c0u: goto label_7c03c0;
        case 0x7c03d0u: goto label_7c03d0;
        case 0x7c03e0u: goto label_7c03e0;
        case 0x7c03f0u: goto label_7c03f0;
        case 0x7c03f8u: goto label_7c03f8;
        default: break;
    }

    ctx->pc = 0x7c0368u;

    // 0x7c0368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c0368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c036c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c0374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c0378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c0378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c037c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x7c037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x7c0380: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C0380u;
    {
        const bool branch_taken_0x7c0380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0380u;
        // 0x7c0384: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0380) {
            ctx->pc = 0x7C03C8u;
            goto label_7c03c8;
        }
    }
    ctx->pc = 0x7C0388u;
    // 0x7c0388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0388u;
    {
        const bool branch_taken_0x7c0388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0388u;
        // 0x7c038c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0388) {
            ctx->pc = 0x7C03A0u;
            goto label_7c03a0;
        }
    }
    ctx->pc = 0x7C0390u;
    // 0x7c0390: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C0390u;
    {
        const bool branch_taken_0x7c0390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0390) {
            ctx->pc = 0x7C03B8u;
            goto label_7c03b8;
        }
    }
    ctx->pc = 0x7C0398u;
    // 0x7c0398: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7C0398u;
    {
        const bool branch_taken_0x7c0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c0398) {
            ctx->pc = 0x7C03F0u;
            goto label_7c03f0;
        }
    }
    ctx->pc = 0x7C03A0u;
label_7c03a0:
    // 0x7c03a0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C03A0u;
    {
        const bool branch_taken_0x7c03a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C03A0u;
        // 0x7c03a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c03a0) {
            ctx->pc = 0x7C03D8u;
            goto label_7c03d8;
        }
    }
    ctx->pc = 0x7C03A8u;
    // 0x7c03a8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C03A8u;
    {
        const bool branch_taken_0x7c03a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c03a8) {
            ctx->pc = 0x7C03E8u;
            goto label_7c03e8;
        }
    }
    ctx->pc = 0x7C03B0u;
    // 0x7c03b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C03B0u;
    {
        const bool branch_taken_0x7c03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c03b0) {
            ctx->pc = 0x7C03F0u;
            goto label_7c03f0;
        }
    }
    ctx->pc = 0x7C03B8u;
label_7c03b8:
    // 0x7c03b8: 0xc1f0106  jal         func_7C0418
    ctx->pc = 0x7C03B8u;
    SET_GPR_U32(ctx, 31, 0x7C03C0u);
    ctx->pc = 0x7C03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C03B8u;
    // 0x7c03bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0418u, 0x7C03B8u, 0x7C03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C03C0u;
label_7c03c0:
    // 0x7c03c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C03C0u;
    {
        const bool branch_taken_0x7c03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c03c0) {
            ctx->pc = 0x7C03F0u;
            goto label_7c03f0;
        }
    }
    ctx->pc = 0x7C03C8u;
label_7c03c8:
    // 0x7c03c8: 0xc1f0194  jal         func_7C0650
    ctx->pc = 0x7C03C8u;
    SET_GPR_U32(ctx, 31, 0x7C03D0u);
    ctx->pc = 0x7C03CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C03C8u;
    // 0x7c03cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0650u, 0x7C03C8u, 0x7C03D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C03D0u;
label_7c03d0:
    // 0x7c03d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C03D0u;
    {
        const bool branch_taken_0x7c03d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c03d0) {
            ctx->pc = 0x7C03F0u;
            goto label_7c03f0;
        }
    }
    ctx->pc = 0x7C03D8u;
label_7c03d8:
    // 0x7c03d8: 0xc1f01ec  jal         func_7C07B0
    ctx->pc = 0x7C03D8u;
    SET_GPR_U32(ctx, 31, 0x7C03E0u);
    ctx->pc = 0x7C03DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C03D8u;
    // 0x7c03dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C07B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C07B0u, 0x7C03D8u, 0x7C03E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C03E0u;
label_7c03e0:
    // 0x7c03e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C03E0u;
    {
        const bool branch_taken_0x7c03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c03e0) {
            ctx->pc = 0x7C03F0u;
            goto label_7c03f0;
        }
    }
    ctx->pc = 0x7C03E8u;
label_7c03e8:
    // 0x7c03e8: 0xc1f0316  jal         func_7C0C58
    ctx->pc = 0x7C03E8u;
    SET_GPR_U32(ctx, 31, 0x7C03F0u);
    ctx->pc = 0x7C03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C03E8u;
    // 0x7c03ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0C58u, 0x7C03E8u, 0x7C03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C03F0u;
label_7c03f0:
    // 0x7c03f0: 0xc1f1cd2  jal         func_7C7348
    ctx->pc = 0x7C03F0u;
    SET_GPR_U32(ctx, 31, 0x7C03F8u);
    ctx->pc = 0x7C03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C03F0u;
    // 0x7c03f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7348u, 0x7C03F0u, 0x7C03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C03F8u;
label_7c03f8:
    // 0x7c03f8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x7c03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x7c03fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c03fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c0400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c0404: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x7c0404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x7c0408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c0408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c040c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C040Cu;
        // 0x7c0410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C040Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0414u;
    // 0x7c0414: 0x0  nop
    ctx->pc = 0x7c0414u;
    // NOP
    ctx->pc = 0x7c0418u;
}
} // namespace gh_mcport
