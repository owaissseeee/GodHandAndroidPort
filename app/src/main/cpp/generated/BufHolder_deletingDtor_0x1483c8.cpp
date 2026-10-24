#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BufHolder_deletingDtor
// Address: 0x1483c8 - 0x148420
void BufHolder_deletingDtor_0x1483c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BufHolder_deletingDtor_0x1483c8");
#endif

    switch (ctx->pc) {
        case 0x1483f4u: goto label_1483f4;
        case 0x148408u: goto label_148408;
        default: break;
    }

    ctx->pc = 0x1483c8u;

    // 0x1483c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1483cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1483ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1483d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1483d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1483d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1483d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1483d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1483dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1483dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483e0: 0x8e050408  lw          $a1, 0x408($s0)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x1483e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1483E4u;
    {
        const bool branch_taken_0x1483e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483E4u;
        // 0x1483e8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483e4) {
            ctx->pc = 0x1483F8u;
            goto label_1483f8;
        }
    }
    ctx->pc = 0x1483ECu;
    // 0x1483ec: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1483ECu;
    SET_GPR_U32(ctx, 31, 0x1483F4u);
    ctx->pc = 0x1483F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483ECu;
    // 0x1483f0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1483ECu, 0x1483F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483F4u;
label_1483f4:
    // 0x1483f4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1483f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1483f8:
    // 0x1483f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1483F8u;
    {
        const bool branch_taken_0x1483f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1483f8) {
            ctx->pc = 0x1483FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1483F8u;
            // 0x1483fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14840Cu;
            goto label_14840c;
        }
    }
    ctx->pc = 0x148400u;
    // 0x148400: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x148400u;
    SET_GPR_U32(ctx, 31, 0x148408u);
    ctx->pc = 0x148404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148400u;
    // 0x148404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x148400u, 0x148408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148408u;
label_148408:
    // 0x148408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x148408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14840c:
    // 0x14840c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148414: 0x3e00008  jr          $ra
    ctx->pc = 0x148414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148414u;
        // 0x148418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14841Cu;
    // 0x14841c: 0x0  nop
    ctx->pc = 0x14841cu;
    // NOP
    ctx->pc = 0x148420u;
}
