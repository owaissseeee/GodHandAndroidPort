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

// Function: __fixdfdi
// Address: 0x3b86d0 - 0x3b8730
void ps2___fixdfdi_0x3b86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixdfdi_0x3b86d0");
#endif

    switch (ctx->pc) {
        case 0x3b86f0u: goto label_3b86f0;
        case 0x3b8700u: goto label_3b8700;
        case 0x3b8708u: goto label_3b8708;
        case 0x3b8718u: goto label_3b8718;
        default: break;
    }

    ctx->pc = 0x3b86d0u;

    // 0x3b86d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b86d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b86d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b86d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b86d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b86dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b86dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b86e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b86e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b86e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b86e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b86e8: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3B86E8u;
    SET_GPR_U32(ctx, 31, 0x3B86F0u);
    ctx->pc = 0x3B86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86E8u;
    // 0x3b86ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B86E8u, 0x3B86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86F0u;
label_3b86f0:
    // 0x3b86f0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B86F0u;
    {
        const bool branch_taken_0x3b86f0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86F0u;
        // 0x3b86f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86f0) {
            ctx->pc = 0x3B8710u;
            goto label_3b8710;
        }
    }
    ctx->pc = 0x3B86F8u;
    // 0x3b86f8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3B86F8u;
    SET_GPR_U32(ctx, 31, 0x3B8700u);
    ctx->pc = 0x3B86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86F8u;
    // 0x3b86fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3B86F8u, 0x3B8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8700u;
label_3b8700:
    // 0x3b8700: 0xc0ee1cc  jal         func_3B8730
    ctx->pc = 0x3B8700u;
    SET_GPR_U32(ctx, 31, 0x3B8708u);
    ctx->pc = 0x3B8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8700u;
    // 0x3b8704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8730u, 0x3B8700u, 0x3B8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8708u;
label_3b8708:
    // 0x3b8708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8708u;
    {
        const bool branch_taken_0x3b8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8708u;
        // 0x3b870c: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8708) {
            ctx->pc = 0x3B8718u;
            goto label_3b8718;
        }
    }
    ctx->pc = 0x3B8710u;
label_3b8710:
    // 0x3b8710: 0xc0ee1cc  jal         func_3B8730
    ctx->pc = 0x3B8710u;
    SET_GPR_U32(ctx, 31, 0x3B8718u);
    ctx->pc = 0x3B8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8710u;
    // 0x3b8714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8730u, 0x3B8710u, 0x3B8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8718u;
label_3b8718:
    // 0x3b8718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b871c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b871cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b8720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8724: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8724u;
        // 0x3b8728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B872Cu;
    // 0x3b872c: 0x0  nop
    ctx->pc = 0x3b872cu;
    // NOP
    ctx->pc = 0x3b8730u;
}
