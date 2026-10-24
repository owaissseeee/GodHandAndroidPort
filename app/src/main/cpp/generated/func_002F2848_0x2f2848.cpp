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

// Function: func_002F2848
// Address: 0x2f2848 - 0x2f2898
void func_002F2848_0x2f2848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2848_0x2f2848");
#endif

    switch (ctx->pc) {
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2884u: goto label_2f2884;
        default: break;
    }

    ctx->pc = 0x2f2848u;

    // 0x2f2848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f284c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f2850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f2854: 0x8c6264a8  lw          $v0, 0x64A8($v1)
    ctx->pc = 0x2f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7864A8u));
    // 0x2f2858: 0x247064a8  addiu       $s0, $v1, 0x64A8
    ctx->pc = 0x2f2858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25768));
    // 0x2f285c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F285Cu;
    {
        const bool branch_taken_0x2f285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F285Cu;
        // 0x2f2860: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f285c) {
            ctx->pc = 0x2F2884u;
            goto label_2f2884;
        }
    }
    ctx->pc = 0x2F2864u;
    // 0x2f2864: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F2864u;
    SET_GPR_U32(ctx, 31, 0x2F286Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F2864u, 0x2F286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F286Cu;
label_2f286c:
    // 0x2f286c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f286cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f2870: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f2870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f2874: 0x24a5eec8  addiu       $a1, $a1, -0x1138
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    // 0x2f2878: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f287c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F287Cu;
    SET_GPR_U32(ctx, 31, 0x2F2884u);
    ctx->pc = 0x2F2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F287Cu;
    // 0x2f2880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F287Cu, 0x2F2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2884u;
label_2f2884:
    // 0x2f2884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f2884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f2888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f288c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f288cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2890: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2890u;
        // 0x2f2894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2898u;
}
