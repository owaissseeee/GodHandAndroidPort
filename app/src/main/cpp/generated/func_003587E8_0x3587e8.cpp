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

// Function: func_003587E8
// Address: 0x3587e8 - 0x358888
void func_003587E8_0x3587e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003587E8_0x3587e8");
#endif

    switch (ctx->pc) {
        case 0x3587fcu: goto label_3587fc;
        case 0x358828u: goto label_358828;
        case 0x358830u: goto label_358830;
        case 0x358838u: goto label_358838;
        case 0x358840u: goto label_358840;
        case 0x358850u: goto label_358850;
        default: break;
    }

    ctx->pc = 0x3587e8u;

    // 0x3587e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3587e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3587ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3587ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3587f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3587f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3587f4: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x3587F4u;
    SET_GPR_U32(ctx, 31, 0x3587FCu);
    ctx->pc = 0x3587F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587F4u;
    // 0x3587f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x3587F4u, 0x3587FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587FCu;
label_3587fc:
    // 0x3587fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3587FCu;
    {
        const bool branch_taken_0x3587fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587FCu;
        // 0x358800: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587fc) {
            ctx->pc = 0x358820u;
            goto label_358820;
        }
    }
    ctx->pc = 0x358804u;
    // 0x358804: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35880c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358810: 0x34a50131  ori         $a1, $a1, 0x131
    ctx->pc = 0x358810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
    // 0x358814: 0x80d375c  j           func_34DD70
    ctx->pc = 0x358814u;
    ctx->pc = 0x358818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358814u;
    // 0x358818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358814u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35881Cu;
    // 0x35881c: 0x0  nop
    ctx->pc = 0x35881cu;
    // NOP
label_358820:
    // 0x358820: 0xc0d6270  jal         func_3589C0
    ctx->pc = 0x358820u;
    SET_GPR_U32(ctx, 31, 0x358828u);
    ctx->pc = 0x358824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358820u;
    // 0x358824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3589C0u, 0x358820u, 0x358828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358828u;
label_358828:
    // 0x358828: 0xc0d3426  jal         func_34D098
    ctx->pc = 0x358828u;
    SET_GPR_U32(ctx, 31, 0x358830u);
    ctx->pc = 0x35882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358828u;
    // 0x35882c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D098u, 0x358828u, 0x358830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358830u;
label_358830:
    // 0x358830: 0xc0d2f56  jal         func_34BD58
    ctx->pc = 0x358830u;
    SET_GPR_U32(ctx, 31, 0x358838u);
    ctx->pc = 0x358834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358830u;
    // 0x358834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD58u, 0x358830u, 0x358838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358838u;
label_358838:
    // 0x358838: 0xc0d6222  jal         func_358888
    ctx->pc = 0x358838u;
    SET_GPR_U32(ctx, 31, 0x358840u);
    ctx->pc = 0x35883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358838u;
    // 0x35883c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358888u, 0x358838u, 0x358840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358840u;
label_358840:
    // 0x358840: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x358840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x358844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358848: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x358848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35884c: 0x2443e2c4  addiu       $v1, $v0, -0x1D3C
    ctx->pc = 0x35884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
label_358850:
    // 0x358850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358854: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x358854u;
    {
        const bool branch_taken_0x358854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x358854) {
            ctx->pc = 0x358858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358854u;
            // 0x358858: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35885Cu;
            goto label_35885c;
        }
    }
    ctx->pc = 0x35885Cu;
label_35885c:
    // 0x35885c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x358860: 0x0  nop
    ctx->pc = 0x358860u;
    // NOP
    // 0x358864: 0x0  nop
    ctx->pc = 0x358864u;
    // NOP
    // 0x358868: 0x0  nop
    ctx->pc = 0x358868u;
    // NOP
    // 0x35886c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35886Cu;
    {
        const bool branch_taken_0x35886c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x358870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35886Cu;
        // 0x358870: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35886c) {
            ctx->pc = 0x358850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358850;
        }
    }
    ctx->pc = 0x358874u;
    // 0x358874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358878: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x358878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35887c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35887cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358880: 0x3e00008  jr          $ra
    ctx->pc = 0x358880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358880u;
        // 0x358884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358888u;
}
