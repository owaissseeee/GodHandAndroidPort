#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: litodp
// Address: 0x79c7e0 - 0x79c898
void litodp_0x79c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x79c7e0");
#endif

    switch (ctx->pc) {
        case 0x79c860u: goto label_79c860;
        case 0x79c88cu: goto label_79c88c;
        default: break;
    }

    ctx->pc = 0x79c7e0u;

    // 0x79c7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c7e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c7e8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x79c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x79c7ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79c7f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79c7f4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C7F4u;
    {
        const bool branch_taken_0x79c7f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7F4u;
        // 0x79c7f8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c7f4) {
            ctx->pc = 0x79C808u;
            goto label_79c808;
        }
    }
    ctx->pc = 0x79C7FCu;
    // 0x79c7fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c800: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79C800u;
    {
        const bool branch_taken_0x79c800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C800u;
        // 0x79c804: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c800) {
            ctx->pc = 0x79C884u;
            goto label_79c884;
        }
    }
    ctx->pc = 0x79C808u;
label_79c808:
    // 0x79c808: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x79c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79c80c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79C80Cu;
    {
        const bool branch_taken_0x79c80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C80Cu;
        // 0x79c810: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c80c) {
            ctx->pc = 0x79C838u;
            goto label_79c838;
        }
    }
    ctx->pc = 0x79C814u;
    // 0x79c814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79c814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79c818: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C818u;
    {
        const bool branch_taken_0x79c818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C818u;
        // 0x79c81c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c818) {
            ctx->pc = 0x79C830u;
            goto label_79c830;
        }
    }
    ctx->pc = 0x79C820u;
    // 0x79c820: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x79c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x79c824: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x79c824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x79c828: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79C828u;
    {
        const bool branch_taken_0x79c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C828u;
        // 0x79c82c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c828) {
            ctx->pc = 0x79C890u;
            goto label_79c890;
        }
    }
    ctx->pc = 0x79C830u;
label_79c830:
    // 0x79c830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C830u;
    {
        const bool branch_taken_0x79c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C830u;
        // 0x79c834: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c830) {
            ctx->pc = 0x79C83Cu;
            goto label_79c83c;
        }
    }
    ctx->pc = 0x79C838u;
label_79c838:
    // 0x79c838: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x79c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_79c83c:
    // 0x79c83c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x79c83cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c840: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c844: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79c848: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79c848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79c84c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79C84Cu;
    {
        const bool branch_taken_0x79c84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C84Cu;
        // 0x79c850: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c84c) {
            ctx->pc = 0x79C884u;
            goto label_79c884;
        }
    }
    ctx->pc = 0x79C854u;
    // 0x79c854: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79c854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c858: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x79c858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x79c85c: 0x0  nop
    ctx->pc = 0x79c85cu;
    // NOP
label_79c860:
    // 0x79c860: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x79c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x79c864: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79c868: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x79c868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c86c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x79c86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c870: 0x0  nop
    ctx->pc = 0x79c870u;
    // NOP
    // 0x79c874: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C874u;
    {
        const bool branch_taken_0x79c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c874) {
            ctx->pc = 0x79C860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c860;
        }
    }
    ctx->pc = 0x79C87Cu;
    // 0x79c87c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x79c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x79c880: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x79c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_79c884:
    // 0x79c884: 0xc1e6f66  jal         func_79BD98
    ctx->pc = 0x79C884u;
    SET_GPR_U32(ctx, 31, 0x79C88Cu);
    ctx->pc = 0x79C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C884u;
    // 0x79c888: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD98u, 0x79C884u, 0x79C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C88Cu;
label_79c88c:
    // 0x79c88c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79c890:
    // 0x79c890: 0x3e00008  jr          $ra
    ctx->pc = 0x79C890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C890u;
        // 0x79c894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C898u;
}
} // namespace gh_r022
