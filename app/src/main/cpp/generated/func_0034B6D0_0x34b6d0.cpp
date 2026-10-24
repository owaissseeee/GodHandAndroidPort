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

// Function: func_0034B6D0
// Address: 0x34b6d0 - 0x34b728
void func_0034B6D0_0x34b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B6D0_0x34b6d0");
#endif

    switch (ctx->pc) {
        case 0x34b6d0u: goto label_34b6d0;
        case 0x34b6d4u: goto label_34b6d4;
        case 0x34b6d8u: goto label_34b6d8;
        case 0x34b6dcu: goto label_34b6dc;
        case 0x34b6e0u: goto label_34b6e0;
        case 0x34b6e4u: goto label_34b6e4;
        case 0x34b6e8u: goto label_34b6e8;
        case 0x34b6ecu: goto label_34b6ec;
        case 0x34b6f0u: goto label_34b6f0;
        case 0x34b6f4u: goto label_34b6f4;
        case 0x34b6f8u: goto label_34b6f8;
        case 0x34b6fcu: goto label_34b6fc;
        case 0x34b700u: goto label_34b700;
        case 0x34b704u: goto label_34b704;
        case 0x34b708u: goto label_34b708;
        case 0x34b70cu: goto label_34b70c;
        case 0x34b710u: goto label_34b710;
        case 0x34b714u: goto label_34b714;
        case 0x34b718u: goto label_34b718;
        case 0x34b71cu: goto label_34b71c;
        case 0x34b720u: goto label_34b720;
        case 0x34b724u: goto label_34b724;
        default: break;
    }

    ctx->pc = 0x34b6d0u;

label_34b6d0:
    // 0x34b6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34b6d4:
    // 0x34b6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34b6d8:
    // 0x34b6d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34b6dc:
    // 0x34b6dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34b6e0:
    // 0x34b6e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34b6e4:
    // 0x34b6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34b6e8:
    // 0x34b6e8: 0xc0d6872  jal         func_35A1C8
label_34b6ec:
    if (ctx->pc == 0x34B6ECu) {
        ctx->pc = 0x34B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6E8u;
        // 0x34b6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6F0u;
        goto label_34b6f0;
    }
    ctx->pc = 0x34B6E8u;
    SET_GPR_U32(ctx, 31, 0x34B6F0u);
    ctx->pc = 0x34B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6E8u;
    // 0x34b6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B6E8u, 0x34B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6F0u;
label_34b6f0:
    // 0x34b6f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_34b6f4:
    if (ctx->pc == 0x34B6F4u) {
        ctx->pc = 0x34B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6F0u;
        // 0x34b6f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6F8u;
        goto label_34b6f8;
    }
    ctx->pc = 0x34B6F0u;
    {
        const bool branch_taken_0x34b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b6f0) {
            ctx->pc = 0x34B6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B6F0u;
            // 0x34b6f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B714u;
            goto label_34b714;
        }
    }
    ctx->pc = 0x34B6F8u;
label_34b6f8:
    // 0x34b6f8: 0x8e022114  lw          $v0, 0x2114($s0)
    ctx->pc = 0x34b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_34b6fc:
    // 0x34b6fc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x34b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_34b700:
    // 0x34b700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34b704:
    if (ctx->pc == 0x34B704u) {
        ctx->pc = 0x34B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B700u;
        // 0x34b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B708u;
        goto label_34b708;
    }
    ctx->pc = 0x34B700u;
    {
        const bool branch_taken_0x34b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B700u;
        // 0x34b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b700) {
            ctx->pc = 0x34B710u;
            goto label_34b710;
        }
    }
    ctx->pc = 0x34B708u;
label_34b708:
    // 0x34b708: 0x40f809  jalr        $v0
label_34b70c:
    if (ctx->pc == 0x34B70Cu) {
        ctx->pc = 0x34B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B708u;
        // 0x34b70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B710u;
        goto label_34b710;
    }
    ctx->pc = 0x34B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34B710u);
        ctx->pc = 0x34B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B708u;
        // 0x34b70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B708u, 0x34B710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B710u;
label_34b710:
    // 0x34b710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b714:
    // 0x34b714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34b718:
    // 0x34b718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b71c:
    // 0x34b71c: 0x3e00008  jr          $ra
label_34b720:
    if (ctx->pc == 0x34B720u) {
        ctx->pc = 0x34B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B71Cu;
        // 0x34b720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B724u;
        goto label_34b724;
    }
    ctx->pc = 0x34B71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B71Cu;
        // 0x34b720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B724u;
label_34b724:
    // 0x34b724: 0x0  nop
    ctx->pc = 0x34b724u;
    // NOP
    ctx->pc = 0x34b728u;
}
