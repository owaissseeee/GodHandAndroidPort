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

// Function: func_003B06D8
// Address: 0x3b06d8 - 0x3b0740
void func_003B06D8_0x3b06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B06D8_0x3b06d8");
#endif

    switch (ctx->pc) {
        case 0x3b0708u: goto label_3b0708;
        case 0x3b0710u: goto label_3b0710;
        case 0x3b0728u: goto label_3b0728;
        default: break;
    }

    ctx->pc = 0x3b06d8u;

    // 0x3b06d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b06d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b06dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b06dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b06e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b06e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b06e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b06e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b06e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b06ec: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b06ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b06f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b06f4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b06f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b06f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B06F8u;
    {
        const bool branch_taken_0x3b06f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b06f8) {
            ctx->pc = 0x3B0708u;
            goto label_3b0708;
        }
    }
    ctx->pc = 0x3B0700u;
    // 0x3b0700: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0700u;
    SET_GPR_U32(ctx, 31, 0x3B0708u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0700u, 0x3B0708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0708u;
label_3b0708:
    // 0x3b0708: 0xc0ebe7c  jal         func_3AF9F0
    ctx->pc = 0x3B0708u;
    SET_GPR_U32(ctx, 31, 0x3B0710u);
    ctx->pc = 0x3B070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0708u;
    // 0x3b070c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9F0u, 0x3B0708u, 0x3B0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0710u;
label_3b0710:
    // 0x3b0710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0714: 0xf  sync
    ctx->pc = 0x3b0714u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0718: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0718u;
    {
        const bool branch_taken_0x3b0718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0718u;
        // 0x3b071c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0718) {
            ctx->pc = 0x3B072Cu;
            goto label_3b072c;
        }
    }
    ctx->pc = 0x3B0720u;
    // 0x3b0720: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0720u;
    SET_GPR_U32(ctx, 31, 0x3B0728u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0720u, 0x3B0728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0728u;
label_3b0728:
    // 0x3b0728: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b0728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b072c:
    // 0x3b072c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0738: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0738u;
        // 0x3b073c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0740u;
}
