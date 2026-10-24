#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: __do_global_dtors
// Address: 0x799820 - 0x799878
void ps2___do_global_dtors_0x799820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799820");
#endif

    switch (ctx->pc) {
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        default: break;
    }

    ctx->pc = 0x799820u;

label_799820:
    // 0x799820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799824:
    // 0x799824: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799828:
    // 0x799828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79982c:
    // 0x79982c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799830:
    // 0x799830: 0x8c829980  lw          $v0, -0x6680($a0)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941056)));
label_799834:
    // 0x799834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799838:
    // 0x799838: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79983c:
    if (ctx->pc == 0x79983Cu) {
        ctx->pc = 0x79983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799838u;
        // 0x79983c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799840u;
        goto label_799840;
    }
    ctx->pc = 0x799838u;
    {
        const bool branch_taken_0x799838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799838u;
        // 0x79983c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799838) {
            ctx->pc = 0x799864u;
            goto label_799864;
        }
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x8e029980  lw          $v0, -0x6680($s0)
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941056)));
label_799844:
    // 0x799844: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799848:
    // 0x799848: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79984c:
    // 0x79984c: 0x60f809  jalr        $v1
label_799850:
    if (ctx->pc == 0x799850u) {
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0xae029980  sw          $v0, -0x6680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799854u;
        goto label_799854;
    }
    ctx->pc = 0x79984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799854u);
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0xae029980  sw          $v0, -0x6680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79984Cu, 0x799854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799854u;
label_799854:
    // 0x799854: 0x8e029980  lw          $v0, -0x6680($s0)
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941056)));
label_799858:
    // 0x799858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79985c:
    // 0x79985c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799860:
    if (ctx->pc == 0x799860u) {
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799864u;
        goto label_799864;
    }
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x799848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799848;
        }
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799868:
    // 0x799868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79986c:
    // 0x79986c: 0x3e00008  jr          $ra
label_799870:
    if (ctx->pc == 0x799870u) {
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799874u;
        goto label_799874;
    }
    ctx->pc = 0x79986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0x0  nop
    ctx->pc = 0x799874u;
    // NOP
    ctx->pc = 0x799878u;
}
} // namespace gh_r104
