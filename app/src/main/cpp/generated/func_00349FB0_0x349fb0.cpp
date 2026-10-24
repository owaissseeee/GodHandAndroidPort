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

// Function: func_00349FB0
// Address: 0x349fb0 - 0x34a038
void func_00349FB0_0x349fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349FB0_0x349fb0");
#endif

    switch (ctx->pc) {
        case 0x349fb0u: goto label_349fb0;
        case 0x349fb4u: goto label_349fb4;
        case 0x349fb8u: goto label_349fb8;
        case 0x349fbcu: goto label_349fbc;
        case 0x349fc0u: goto label_349fc0;
        case 0x349fc4u: goto label_349fc4;
        case 0x349fc8u: goto label_349fc8;
        case 0x349fccu: goto label_349fcc;
        case 0x349fd0u: goto label_349fd0;
        case 0x349fd4u: goto label_349fd4;
        case 0x349fd8u: goto label_349fd8;
        case 0x349fdcu: goto label_349fdc;
        case 0x349fe0u: goto label_349fe0;
        case 0x349fe4u: goto label_349fe4;
        case 0x349fe8u: goto label_349fe8;
        case 0x349fecu: goto label_349fec;
        case 0x349ff0u: goto label_349ff0;
        case 0x349ff4u: goto label_349ff4;
        case 0x349ff8u: goto label_349ff8;
        case 0x349ffcu: goto label_349ffc;
        case 0x34a000u: goto label_34a000;
        case 0x34a004u: goto label_34a004;
        case 0x34a008u: goto label_34a008;
        case 0x34a00cu: goto label_34a00c;
        case 0x34a010u: goto label_34a010;
        case 0x34a014u: goto label_34a014;
        case 0x34a018u: goto label_34a018;
        case 0x34a01cu: goto label_34a01c;
        case 0x34a020u: goto label_34a020;
        case 0x34a024u: goto label_34a024;
        case 0x34a028u: goto label_34a028;
        case 0x34a02cu: goto label_34a02c;
        case 0x34a030u: goto label_34a030;
        case 0x34a034u: goto label_34a034;
        default: break;
    }

    ctx->pc = 0x349fb0u;

label_349fb0:
    // 0x349fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_349fb4:
    // 0x349fb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_349fb8:
    // 0x349fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349fbc:
    // 0x349fbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_349fc0:
    // 0x349fc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x349fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_349fc4:
    // 0x349fc4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_349fc8:
    if (ctx->pc == 0x349FC8u) {
        ctx->pc = 0x349FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FC4u;
        // 0x349fc8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349FCCu;
        goto label_349fcc;
    }
    ctx->pc = 0x349FC4u;
    {
        const bool branch_taken_0x349fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x349FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FC4u;
        // 0x349fc8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349fc4) {
            ctx->pc = 0x349FE8u;
            goto label_349fe8;
        }
    }
    ctx->pc = 0x349FCCu;
label_349fcc:
    // 0x349fcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349fd0:
    // 0x349fd0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x349fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_349fd4:
    // 0x349fd4: 0x60f809  jalr        $v1
label_349fd8:
    if (ctx->pc == 0x349FD8u) {
        ctx->pc = 0x349FDCu;
        goto label_349fdc;
    }
    ctx->pc = 0x349FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x349FDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FD4u, 0x349FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349FDCu;
label_349fdc:
    // 0x349fdc: 0x10000012  b           . + 4 + (0x12 << 2)
label_349fe0:
    if (ctx->pc == 0x349FE0u) {
        ctx->pc = 0x349FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FDCu;
        // 0x349fe0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349FE4u;
        goto label_349fe4;
    }
    ctx->pc = 0x349FDCu;
    {
        const bool branch_taken_0x349fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FDCu;
        // 0x349fe0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349fdc) {
            ctx->pc = 0x34A028u;
            goto label_34a028;
        }
    }
    ctx->pc = 0x349FE4u;
label_349fe4:
    // 0x349fe4: 0x0  nop
    ctx->pc = 0x349fe4u;
    // NOP
label_349fe8:
    // 0x349fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349fec:
    // 0x349fec: 0xc0ceb28  jal         func_33ACA0
label_349ff0:
    if (ctx->pc == 0x349FF0u) {
        ctx->pc = 0x349FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FECu;
        // 0x349ff0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349FF4u;
        goto label_349ff4;
    }
    ctx->pc = 0x349FECu;
    SET_GPR_U32(ctx, 31, 0x349FF4u);
    ctx->pc = 0x349FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FECu;
    // 0x349ff0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x349FECu, 0x349FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FF4u;
label_349ff4:
    // 0x349ff4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x349ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349ff8:
    // 0x349ff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x349ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349ffc:
    // 0x349ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34a000:
    // 0x34a000: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x34a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34a004:
    // 0x34a004: 0x40f809  jalr        $v0
label_34a008:
    if (ctx->pc == 0x34A008u) {
        ctx->pc = 0x34A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A004u;
        // 0x34a008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A00Cu;
        goto label_34a00c;
    }
    ctx->pc = 0x34A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A00Cu);
        ctx->pc = 0x34A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A004u;
        // 0x34a008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A004u, 0x34A00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A00Cu;
label_34a00c:
    // 0x34a00c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34a010:
    // 0x34a010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34a014:
    // 0x34a014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a018:
    // 0x34a018: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x34a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_34a01c:
    // 0x34a01c: 0x40f809  jalr        $v0
label_34a020:
    if (ctx->pc == 0x34A020u) {
        ctx->pc = 0x34A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A01Cu;
        // 0x34a020: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A024u;
        goto label_34a024;
    }
    ctx->pc = 0x34A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A024u);
        ctx->pc = 0x34A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A01Cu;
        // 0x34a020: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A01Cu, 0x34A024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A024u;
label_34a024:
    // 0x34a024: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a028:
    // 0x34a028: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34a02c:
    // 0x34a02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34a030:
    // 0x34a030: 0x3e00008  jr          $ra
label_34a034:
    if (ctx->pc == 0x34A034u) {
        ctx->pc = 0x34A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A030u;
        // 0x34a034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A038u;
        goto label_fallthrough_0x34a030;
    }
    ctx->pc = 0x34A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A030u;
        // 0x34a034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34a030:
    ctx->pc = 0x34A038u;
}
