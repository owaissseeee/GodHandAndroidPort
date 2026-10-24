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

// Function: func_00325360
// Address: 0x325360 - 0x3253c0
void func_00325360_0x325360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325360_0x325360");
#endif

    switch (ctx->pc) {
        case 0x325384u: goto label_325384;
        case 0x3253a4u: goto label_3253a4;
        default: break;
    }

    ctx->pc = 0x325360u;

    // 0x325360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325364: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32536c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x32536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x325370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x325370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325374: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x325374u;
    {
        const bool branch_taken_0x325374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325374u;
        // 0x325378: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325374) {
            ctx->pc = 0x3253A8u;
            goto label_3253a8;
        }
    }
    ctx->pc = 0x32537Cu;
    // 0x32537c: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x32537Cu;
    SET_GPR_U32(ctx, 31, 0x325384u);
    ctx->pc = 0x325380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32537Cu;
    // 0x325380: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x32537Cu, 0x325384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325384u;
label_325384:
    // 0x325384: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x325384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325388: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x325388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32538c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32538Cu;
    {
        const bool branch_taken_0x32538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32538Cu;
        // 0x325390: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32538c) {
            ctx->pc = 0x3253A8u;
            goto label_3253a8;
        }
    }
    ctx->pc = 0x325394u;
    // 0x325394: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325394u;
    {
        const bool branch_taken_0x325394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x325394) {
            ctx->pc = 0x325398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325394u;
            // 0x325398: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3253ACu;
            goto label_3253ac;
        }
    }
    ctx->pc = 0x32539Cu;
    // 0x32539c: 0xc0ebf04  jal         func_3AFC10
    ctx->pc = 0x32539Cu;
    SET_GPR_U32(ctx, 31, 0x3253A4u);
    ctx->pc = 0x3253A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32539Cu;
    // 0x3253a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFC10u, 0x32539Cu, 0x3253A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253A4u;
label_3253a4:
    // 0x3253a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3253a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3253a8:
    // 0x3253a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3253a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3253ac:
    // 0x3253ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3253acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3253b0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3253b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3253b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3253b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3253b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3253B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3253BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253B8u;
        // 0x3253bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3253B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3253C0u;
}
