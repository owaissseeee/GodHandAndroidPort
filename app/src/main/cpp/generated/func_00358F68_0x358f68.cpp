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

// Function: func_00358F68
// Address: 0x358f68 - 0x358ff8
void func_00358F68_0x358f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358F68_0x358f68");
#endif

    switch (ctx->pc) {
        case 0x358f84u: goto label_358f84;
        case 0x358fc0u: goto label_358fc0;
        case 0x358fd8u: goto label_358fd8;
        default: break;
    }

    ctx->pc = 0x358f68u;

    // 0x358f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358f74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x358f78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x358f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x358f7c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x358F7Cu;
    SET_GPR_U32(ctx, 31, 0x358F84u);
    ctx->pc = 0x358F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F7Cu;
    // 0x358f80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x358F7Cu, 0x358F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F84u;
label_358f84:
    // 0x358f84: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358F8Cu;
    {
        const bool branch_taken_0x358f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F8Cu;
        // 0x358f90: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f8c) {
            ctx->pc = 0x358FB0u;
            goto label_358fb0;
        }
    }
    ctx->pc = 0x358F94u;
    // 0x358f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358fa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358fa8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x358FA8u;
    ctx->pc = 0x358FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FA8u;
    // 0x358fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358FB0u;
label_358fb0:
    // 0x358fb0: 0x8e301f44  lw          $s0, 0x1F44($s1)
    ctx->pc = 0x358fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8004)));
    // 0x358fb4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x358fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358fb8: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x358FB8u;
    SET_GPR_U32(ctx, 31, 0x358FC0u);
    ctx->pc = 0x358FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FB8u;
    // 0x358fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x358FB8u, 0x358FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FC0u;
label_358fc0:
    // 0x358fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fc8: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x358FC8u;
    {
        const bool branch_taken_0x358fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x358FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FC8u;
        // 0x358fcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358fc8) {
            ctx->pc = 0x358FDCu;
            goto label_358fdc;
        }
    }
    ctx->pc = 0x358FD0u;
    // 0x358fd0: 0xc0d329a  jal         func_34CA68
    ctx->pc = 0x358FD0u;
    SET_GPR_U32(ctx, 31, 0x358FD8u);
    ctx->pc = 0x34CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA68u, 0x358FD0u, 0x358FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FD8u;
label_358fd8:
    // 0x358fd8: 0xae320044  sw          $s2, 0x44($s1)
    ctx->pc = 0x358fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
label_358fdc:
    // 0x358fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358fec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x358FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FF0u;
        // 0x358ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358FF8u;
}
