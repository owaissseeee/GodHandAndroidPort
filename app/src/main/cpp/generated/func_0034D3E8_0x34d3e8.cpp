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

// Function: func_0034D3E8
// Address: 0x34d3e8 - 0x34d450
void func_0034D3E8_0x34d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034D3E8_0x34d3e8");
#endif

    switch (ctx->pc) {
        case 0x34d404u: goto label_34d404;
        case 0x34d418u: goto label_34d418;
        case 0x34d420u: goto label_34d420;
        default: break;
    }

    ctx->pc = 0x34d3e8u;

    // 0x34d3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d3f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34d3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d3fc: 0xc0d3514  jal         func_34D450
    ctx->pc = 0x34D3FCu;
    SET_GPR_U32(ctx, 31, 0x34D404u);
    ctx->pc = 0x34D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D3FCu;
    // 0x34d400: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D450u, 0x34D3FCu, 0x34D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D404u;
label_34d404:
    // 0x34d404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d408: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34D408u;
    {
        const bool branch_taken_0x34d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D408u;
        // 0x34d40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d408) {
            ctx->pc = 0x34D438u;
            goto label_34d438;
        }
    }
    ctx->pc = 0x34D410u;
    // 0x34d410: 0xc0d34c6  jal         func_34D318
    ctx->pc = 0x34D410u;
    SET_GPR_U32(ctx, 31, 0x34D418u);
    ctx->pc = 0x34D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D318u, 0x34D410u, 0x34D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D418u;
label_34d418:
    // 0x34d418: 0xc0d3528  jal         func_34D4A0
    ctx->pc = 0x34D418u;
    SET_GPR_U32(ctx, 31, 0x34D420u);
    ctx->pc = 0x34D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D418u;
    // 0x34d41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D4A0u, 0x34D418u, 0x34D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D420u;
label_34d420:
    // 0x34d420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d430: 0x80d36b0  j           func_34DAC0
    ctx->pc = 0x34D430u;
    ctx->pc = 0x34D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D430u;
    // 0x34d434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DAC0u, 0x34D430u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34D438u;
label_34d438:
    // 0x34d438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d43c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d444: 0x3e00008  jr          $ra
    ctx->pc = 0x34D444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D444u;
        // 0x34d448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D44Cu;
    // 0x34d44c: 0x0  nop
    ctx->pc = 0x34d44cu;
    // NOP
    ctx->pc = 0x34d450u;
}
