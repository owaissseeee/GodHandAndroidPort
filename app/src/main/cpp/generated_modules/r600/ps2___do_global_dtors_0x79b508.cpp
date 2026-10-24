#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: __do_global_dtors
// Address: 0x79b508 - 0x79b560
void ps2___do_global_dtors_0x79b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b508");
#endif

    switch (ctx->pc) {
        case 0x79b508u: goto label_79b508;
        case 0x79b50cu: goto label_79b50c;
        case 0x79b510u: goto label_79b510;
        case 0x79b514u: goto label_79b514;
        case 0x79b518u: goto label_79b518;
        case 0x79b51cu: goto label_79b51c;
        case 0x79b520u: goto label_79b520;
        case 0x79b524u: goto label_79b524;
        case 0x79b528u: goto label_79b528;
        case 0x79b52cu: goto label_79b52c;
        case 0x79b530u: goto label_79b530;
        case 0x79b534u: goto label_79b534;
        case 0x79b538u: goto label_79b538;
        case 0x79b53cu: goto label_79b53c;
        case 0x79b540u: goto label_79b540;
        case 0x79b544u: goto label_79b544;
        case 0x79b548u: goto label_79b548;
        case 0x79b54cu: goto label_79b54c;
        case 0x79b550u: goto label_79b550;
        case 0x79b554u: goto label_79b554;
        case 0x79b558u: goto label_79b558;
        case 0x79b55cu: goto label_79b55c;
        default: break;
    }

    ctx->pc = 0x79b508u;

label_79b508:
    // 0x79b508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b50c:
    // 0x79b50c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b510:
    // 0x79b510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b514:
    // 0x79b514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b518:
    // 0x79b518: 0x8c82b700  lw          $v0, -0x4900($a0)
    ctx->pc = 0x79b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948608)));
label_79b51c:
    // 0x79b51c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b520:
    // 0x79b520: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b524:
    if (ctx->pc == 0x79B524u) {
        ctx->pc = 0x79B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B520u;
        // 0x79b524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B528u;
        goto label_79b528;
    }
    ctx->pc = 0x79B520u;
    {
        const bool branch_taken_0x79b520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B520u;
        // 0x79b524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b520) {
            ctx->pc = 0x79B54Cu;
            goto label_79b54c;
        }
    }
    ctx->pc = 0x79B528u;
label_79b528:
    // 0x79b528: 0x8e02b700  lw          $v0, -0x4900($s0)
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948608)));
label_79b52c:
    // 0x79b52c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b530:
    // 0x79b530: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b534:
    // 0x79b534: 0x60f809  jalr        $v1
label_79b538:
    if (ctx->pc == 0x79B538u) {
        ctx->pc = 0x79B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B534u;
        // 0x79b538: 0xae02b700  sw          $v0, -0x4900($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294948608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B53Cu;
        goto label_79b53c;
    }
    ctx->pc = 0x79B534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B53Cu);
        ctx->pc = 0x79B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B534u;
        // 0x79b538: 0xae02b700  sw          $v0, -0x4900($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294948608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B534u, 0x79B53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B53Cu;
label_79b53c:
    // 0x79b53c: 0x8e02b700  lw          $v0, -0x4900($s0)
    ctx->pc = 0x79b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948608)));
label_79b540:
    // 0x79b540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b544:
    // 0x79b544: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b548:
    if (ctx->pc == 0x79B548u) {
        ctx->pc = 0x79B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B544u;
        // 0x79b548: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B54Cu;
        goto label_79b54c;
    }
    ctx->pc = 0x79B544u;
    {
        const bool branch_taken_0x79b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B544u;
        // 0x79b548: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b544) {
            ctx->pc = 0x79B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B54Cu;
label_79b54c:
    // 0x79b54c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b550:
    // 0x79b550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b554:
    // 0x79b554: 0x3e00008  jr          $ra
label_79b558:
    if (ctx->pc == 0x79B558u) {
        ctx->pc = 0x79B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B554u;
        // 0x79b558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B55Cu;
        goto label_79b55c;
    }
    ctx->pc = 0x79B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B554u;
        // 0x79b558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B55Cu;
label_79b55c:
    // 0x79b55c: 0x0  nop
    ctx->pc = 0x79b55cu;
    // NOP
    ctx->pc = 0x79b560u;
}
} // namespace gh_r600
