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

// Function: func_00350418
// Address: 0x350418 - 0x3504a0
void func_00350418_0x350418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350418_0x350418");
#endif

    switch (ctx->pc) {
        case 0x350450u: goto label_350450;
        case 0x350464u: goto label_350464;
        default: break;
    }

    ctx->pc = 0x350418u;

    // 0x350418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35041c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x350420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x350428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35042c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350430: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x350430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x350434: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x350434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350438: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x350438u;
    {
        const bool branch_taken_0x350438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350438u;
        // 0x35043c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350438) {
            ctx->pc = 0x350470u;
            goto label_350470;
        }
    }
    ctx->pc = 0x350440u;
    // 0x350440: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x350440u;
    {
        const bool branch_taken_0x350440 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x350444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350440u;
        // 0x350444: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350440) {
            ctx->pc = 0x350470u;
            goto label_350470;
        }
    }
    ctx->pc = 0x350448u;
    // 0x350448: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x350448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35044c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x35044cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_350450:
    // 0x350450: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x350450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x350454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x350458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35045c: 0xc0db114  jal         func_36C450
    ctx->pc = 0x35045Cu;
    SET_GPR_U32(ctx, 31, 0x350464u);
    ctx->pc = 0x350460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35045Cu;
    // 0x350460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C450u, 0x35045Cu, 0x350464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350464u;
label_350464:
    // 0x350464: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x350464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x350468: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x350468u;
    {
        const bool branch_taken_0x350468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350468) {
            ctx->pc = 0x35046Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350468u;
            // 0x35046c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350450;
        }
    }
    ctx->pc = 0x350470u;
label_350470:
    // 0x350470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350478: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35047c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35047cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350484: 0x3e00008  jr          $ra
    ctx->pc = 0x350484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350484u;
        // 0x350488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35048Cu;
    // 0x35048c: 0x0  nop
    ctx->pc = 0x35048cu;
    // NOP
    // 0x350490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350494: 0x0  nop
    ctx->pc = 0x350494u;
    // NOP
    // 0x350498: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x350498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35049c: 0x0  nop
    ctx->pc = 0x35049cu;
    // NOP
    ctx->pc = 0x3504a0u;
}
