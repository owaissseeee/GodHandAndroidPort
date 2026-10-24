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

// Function: AlarmHandler
// Address: 0x3b7708 - 0x3b7768
void AlarmHandler_0x3b7708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AlarmHandler_0x3b7708");
#endif

    switch (ctx->pc) {
        case 0x3b7708u: goto label_3b7708;
        case 0x3b770cu: goto label_3b770c;
        case 0x3b7710u: goto label_3b7710;
        case 0x3b7714u: goto label_3b7714;
        case 0x3b7718u: goto label_3b7718;
        case 0x3b771cu: goto label_3b771c;
        case 0x3b7720u: goto label_3b7720;
        case 0x3b7724u: goto label_3b7724;
        case 0x3b7728u: goto label_3b7728;
        case 0x3b772cu: goto label_3b772c;
        case 0x3b7730u: goto label_3b7730;
        case 0x3b7734u: goto label_3b7734;
        case 0x3b7738u: goto label_3b7738;
        case 0x3b773cu: goto label_3b773c;
        case 0x3b7740u: goto label_3b7740;
        case 0x3b7744u: goto label_3b7744;
        case 0x3b7748u: goto label_3b7748;
        case 0x3b774cu: goto label_3b774c;
        case 0x3b7750u: goto label_3b7750;
        case 0x3b7754u: goto label_3b7754;
        case 0x3b7758u: goto label_3b7758;
        case 0x3b775cu: goto label_3b775c;
        case 0x3b7760u: goto label_3b7760;
        case 0x3b7764u: goto label_3b7764;
        default: break;
    }

    ctx->pc = 0x3b7708u;

label_3b7708:
    // 0x3b7708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b770c:
    // 0x3b770c: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x3b770cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_3b7710:
    // 0x3b7710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b7714:
    // 0x3b7714: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3b7714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b7718:
    // 0x3b7718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b771c:
    // 0x3b771c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3b771cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3b7720:
    // 0x3b7720: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3b7724:
    // 0x3b7724: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7728:
    // 0x3b7728: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x3b7728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b772c:
    // 0x3b772c: 0x40f809  jalr        $v0
label_3b7730:
    if (ctx->pc == 0x3B7730u) {
        ctx->pc = 0x3B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B772Cu;
        // 0x3b7730: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7734u;
        goto label_3b7734;
    }
    ctx->pc = 0x3B772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B7734u);
        ctx->pc = 0x3B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B772Cu;
        // 0x3b7730: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B772Cu, 0x3B7734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7734u;
label_3b7734:
    // 0x3b7734: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3b7738:
    if (ctx->pc == 0x3B7738u) {
        ctx->pc = 0x3B7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7734u;
        // 0x3b7738: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B773Cu;
        goto label_3b773c;
    }
    ctx->pc = 0x3B7734u;
    {
        const bool branch_taken_0x3b7734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7734u;
        // 0x3b7738: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7734) {
            ctx->pc = 0x3B7758u;
            goto label_3b7758;
        }
    }
    ctx->pc = 0x3B773Cu;
label_3b773c:
    // 0x3b773c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b773cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
label_3b7740:
    // 0x3b7740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b7744:
    // 0x3b7744: 0x8c644040  lw          $a0, 0x4040($v1)
    ctx->pc = 0x3b7744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
label_3b7748:
    // 0x3b7748: 0xac704040  sw          $s0, 0x4040($v1)
    ctx->pc = 0x3b7748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16448), GPR_U32(ctx, 16));
label_3b774c:
    // 0x3b774c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3b774cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3b7750:
    // 0x3b7750: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b7750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3b7754:
    // 0x3b7754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7758:
    // 0x3b7758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b775c:
    // 0x3b775c: 0x3e00008  jr          $ra
label_3b7760:
    if (ctx->pc == 0x3B7760u) {
        ctx->pc = 0x3B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B775Cu;
        // 0x3b7760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7764u;
        goto label_3b7764;
    }
    ctx->pc = 0x3B775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B775Cu;
        // 0x3b7760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7764u;
label_3b7764:
    // 0x3b7764: 0x0  nop
    ctx->pc = 0x3b7764u;
    // NOP
    ctx->pc = 0x3b7768u;
}
