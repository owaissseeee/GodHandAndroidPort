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

// Function: func_0034F718
// Address: 0x34f718 - 0x34f7a0
void func_0034F718_0x34f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F718_0x34f718");
#endif

    switch (ctx->pc) {
        case 0x34f738u: goto label_34f738;
        case 0x34f74cu: goto label_34f74c;
        case 0x34f760u: goto label_34f760;
        default: break;
    }

    ctx->pc = 0x34f718u;

    // 0x34f718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f71c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f72c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34f730: 0xc0d3de8  jal         func_34F7A0
    ctx->pc = 0x34F730u;
    SET_GPR_U32(ctx, 31, 0x34F738u);
    ctx->pc = 0x34F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F730u;
    // 0x34f734: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F7A0u, 0x34F730u, 0x34F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F738u;
label_34f738:
    // 0x34f738: 0x10520013  beq         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x34F738u;
    {
        const bool branch_taken_0x34f738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x34F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F738u;
        // 0x34f73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f738) {
            ctx->pc = 0x34F788u;
            goto label_34f788;
        }
    }
    ctx->pc = 0x34F740u;
    // 0x34f740: 0x8e301f84  lw          $s0, 0x1F84($s1)
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8068)));
    // 0x34f744: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34F744u;
    SET_GPR_U32(ctx, 31, 0x34F74Cu);
    ctx->pc = 0x34F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F744u;
    // 0x34f748: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34F744u, 0x34F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F74Cu;
label_34f74c:
    // 0x34f74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f750: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x34F750u;
    {
        const bool branch_taken_0x34f750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x34F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F750u;
        // 0x34f754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f750) {
            ctx->pc = 0x34F788u;
            goto label_34f788;
        }
    }
    ctx->pc = 0x34F758u;
    // 0x34f758: 0xc0d3e34  jal         func_34F8D0
    ctx->pc = 0x34F758u;
    SET_GPR_U32(ctx, 31, 0x34F760u);
    ctx->pc = 0x34F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F8D0u, 0x34F758u, 0x34F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F760u;
label_34f760:
    // 0x34f760: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34F760u;
    {
        const bool branch_taken_0x34f760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F760u;
        // 0x34f764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f760) {
            ctx->pc = 0x34F788u;
            goto label_34f788;
        }
    }
    ctx->pc = 0x34F768u;
    // 0x34f768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f778: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f77c: 0x80d3e0c  j           func_34F830
    ctx->pc = 0x34F77Cu;
    ctx->pc = 0x34F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F77Cu;
    // 0x34f780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F830u, 0x34F77Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34F784u;
    // 0x34f784: 0x0  nop
    ctx->pc = 0x34f784u;
    // NOP
label_34f788:
    // 0x34f788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f798: 0x3e00008  jr          $ra
    ctx->pc = 0x34F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F798u;
        // 0x34f79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F7A0u;
}
