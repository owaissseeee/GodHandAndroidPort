#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r043_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r043
{
// Function: __do_global_dtors
// Address: 0x7993b0 - 0x799408
void ps2___do_global_dtors_0x7993b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7993b0");
#endif

    switch (ctx->pc) {
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        default: break;
    }

    ctx->pc = 0x7993b0u;

label_7993b0:
    // 0x7993b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7993b4:
    // 0x7993b4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7993b8:
    // 0x7993b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7993b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7993bc:
    // 0x7993bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7993bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7993c0:
    // 0x7993c0: 0x8c829500  lw          $v0, -0x6B00($a0)
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939904)));
label_7993c4:
    // 0x7993c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7993c8:
    // 0x7993c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7993cc:
    if (ctx->pc == 0x7993CCu) {
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D0u;
        goto label_7993d0;
    }
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993F4u;
            goto label_7993f4;
        }
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x8e029500  lw          $v0, -0x6B00($s0)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939904)));
label_7993d4:
    // 0x7993d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7993d8:
    // 0x7993d8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7993dc:
    // 0x7993dc: 0x60f809  jalr        $v1
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0xae029500  sw          $v0, -0x6B00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7993E4u);
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0xae029500  sw          $v0, -0x6B00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x8e029500  lw          $v0, -0x6B00($s0)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939904)));
label_7993e8:
    // 0x7993e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7993ec:
    // 0x7993ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7993f0:
    if (ctx->pc == 0x7993F0u) {
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F4u;
        goto label_7993f4;
    }
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x7993D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d8;
        }
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7993f8:
    // 0x7993f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7993fc:
    // 0x7993fc: 0x3e00008  jr          $ra
label_799400:
    if (ctx->pc == 0x799400u) {
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799404u;
        goto label_799404;
    }
    ctx->pc = 0x7993FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x0  nop
    ctx->pc = 0x799404u;
    // NOP
    ctx->pc = 0x799408u;
}
} // namespace gh_r043
