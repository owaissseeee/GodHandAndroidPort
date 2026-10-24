#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: __do_global_dtors
// Address: 0x79c918 - 0x79c970
void ps2___do_global_dtors_0x79c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79c918");
#endif

    switch (ctx->pc) {
        case 0x79c918u: goto label_79c918;
        case 0x79c91cu: goto label_79c91c;
        case 0x79c920u: goto label_79c920;
        case 0x79c924u: goto label_79c924;
        case 0x79c928u: goto label_79c928;
        case 0x79c92cu: goto label_79c92c;
        case 0x79c930u: goto label_79c930;
        case 0x79c934u: goto label_79c934;
        case 0x79c938u: goto label_79c938;
        case 0x79c93cu: goto label_79c93c;
        case 0x79c940u: goto label_79c940;
        case 0x79c944u: goto label_79c944;
        case 0x79c948u: goto label_79c948;
        case 0x79c94cu: goto label_79c94c;
        case 0x79c950u: goto label_79c950;
        case 0x79c954u: goto label_79c954;
        case 0x79c958u: goto label_79c958;
        case 0x79c95cu: goto label_79c95c;
        case 0x79c960u: goto label_79c960;
        case 0x79c964u: goto label_79c964;
        case 0x79c968u: goto label_79c968;
        case 0x79c96cu: goto label_79c96c;
        default: break;
    }

    ctx->pc = 0x79c918u;

label_79c918:
    // 0x79c918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79c91c:
    // 0x79c91c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79c920:
    // 0x79c920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79c924:
    // 0x79c924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79c928:
    // 0x79c928: 0x8c82ca80  lw          $v0, -0x3580($a0)
    ctx->pc = 0x79c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953600)));
label_79c92c:
    // 0x79c92c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c930:
    // 0x79c930: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79c934:
    if (ctx->pc == 0x79C934u) {
        ctx->pc = 0x79C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C930u;
        // 0x79c934: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C938u;
        goto label_79c938;
    }
    ctx->pc = 0x79C930u;
    {
        const bool branch_taken_0x79c930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C930u;
        // 0x79c934: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c930) {
            ctx->pc = 0x79C95Cu;
            goto label_79c95c;
        }
    }
    ctx->pc = 0x79C938u;
label_79c938:
    // 0x79c938: 0x8e02ca80  lw          $v0, -0x3580($s0)
    ctx->pc = 0x79c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953600)));
label_79c93c:
    // 0x79c93c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79c940:
    // 0x79c940: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79c944:
    // 0x79c944: 0x60f809  jalr        $v1
label_79c948:
    if (ctx->pc == 0x79C948u) {
        ctx->pc = 0x79C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C944u;
        // 0x79c948: 0xae02ca80  sw          $v0, -0x3580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C94Cu;
        goto label_79c94c;
    }
    ctx->pc = 0x79C944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79C94Cu);
        ctx->pc = 0x79C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C944u;
        // 0x79c948: 0xae02ca80  sw          $v0, -0x3580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C944u, 0x79C94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C94Cu;
label_79c94c:
    // 0x79c94c: 0x8e02ca80  lw          $v0, -0x3580($s0)
    ctx->pc = 0x79c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953600)));
label_79c950:
    // 0x79c950: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c954:
    // 0x79c954: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79c958:
    if (ctx->pc == 0x79C958u) {
        ctx->pc = 0x79C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C954u;
        // 0x79c958: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C95Cu;
        goto label_79c95c;
    }
    ctx->pc = 0x79C954u;
    {
        const bool branch_taken_0x79c954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C954u;
        // 0x79c958: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c954) {
            ctx->pc = 0x79C940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c940;
        }
    }
    ctx->pc = 0x79C95Cu;
label_79c95c:
    // 0x79c95c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c960:
    // 0x79c960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c964:
    // 0x79c964: 0x3e00008  jr          $ra
label_79c968:
    if (ctx->pc == 0x79C968u) {
        ctx->pc = 0x79C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C964u;
        // 0x79c968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C96Cu;
        goto label_79c96c;
    }
    ctx->pc = 0x79C964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C964u;
        // 0x79c968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C96Cu;
label_79c96c:
    // 0x79c96c: 0x0  nop
    ctx->pc = 0x79c96cu;
    // NOP
    ctx->pc = 0x79c970u;
}
} // namespace gh_r020
