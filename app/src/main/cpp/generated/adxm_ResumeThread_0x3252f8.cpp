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

// Function: adxm_ResumeThread
// Address: 0x3252f8 - 0x325360
void adxm_ResumeThread_0x3252f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adxm_ResumeThread_0x3252f8");
#endif

    switch (ctx->pc) {
        case 0x32531cu: goto label_32531c;
        case 0x325340u: goto label_325340;
        default: break;
    }

    ctx->pc = 0x3252f8u;

    // 0x3252f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3252f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3252fc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3252fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325304: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x325304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x325308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x325308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32530c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x32530Cu;
    {
        const bool branch_taken_0x32530c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32530Cu;
        // 0x325310: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32530c) {
            ctx->pc = 0x325344u;
            goto label_325344;
        }
    }
    ctx->pc = 0x325314u;
    // 0x325314: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x325314u;
    SET_GPR_U32(ctx, 31, 0x32531Cu);
    ctx->pc = 0x325318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325314u;
    // 0x325318: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x325314u, 0x32531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32531Cu;
label_32531c:
    // 0x32531c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x325320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325324: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x325324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x325328: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325328u;
    {
        const bool branch_taken_0x325328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325328u;
        // 0x32532c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325328) {
            ctx->pc = 0x325338u;
            goto label_325338;
        }
    }
    ctx->pc = 0x325330u;
    // 0x325330: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x325330u;
    {
        const bool branch_taken_0x325330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x325334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325330u;
        // 0x325334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325330) {
            ctx->pc = 0x325348u;
            goto label_325348;
        }
    }
    ctx->pc = 0x325338u;
label_325338:
    // 0x325338: 0xc0ebf0c  jal         func_3AFC30
    ctx->pc = 0x325338u;
    SET_GPR_U32(ctx, 31, 0x325340u);
    ctx->pc = 0x3AFC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFC30u, 0x325338u, 0x325340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325340u;
label_325340:
    // 0x325340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x325340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325344:
    // 0x325344: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x325344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325348:
    // 0x325348: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32534c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x32534cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325354: 0x3e00008  jr          $ra
    ctx->pc = 0x325354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325354u;
        // 0x325358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32535Cu;
    // 0x32535c: 0x0  nop
    ctx->pc = 0x32535cu;
    // NOP
    ctx->pc = 0x325360u;
}
