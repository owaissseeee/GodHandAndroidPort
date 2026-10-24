#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: __do_global_dtors
// Address: 0x79a8f0 - 0x79a948
void ps2___do_global_dtors_0x79a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a8f0");
#endif

    switch (ctx->pc) {
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        default: break;
    }

    ctx->pc = 0x79a8f0u;

label_79a8f0:
    // 0x79a8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a8f4:
    // 0x79a8f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a8f8:
    // 0x79a8f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a8fc:
    // 0x79a8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a900:
    // 0x79a900: 0x8c82ab00  lw          $v0, -0x5500($a0)
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945536)));
label_79a904:
    // 0x79a904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a908:
    // 0x79a908: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a90c:
    if (ctx->pc == 0x79A90Cu) {
        ctx->pc = 0x79A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A908u;
        // 0x79a90c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A910u;
        goto label_79a910;
    }
    ctx->pc = 0x79A908u;
    {
        const bool branch_taken_0x79a908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A908u;
        // 0x79a90c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a908) {
            ctx->pc = 0x79A934u;
            goto label_79a934;
        }
    }
    ctx->pc = 0x79A910u;
label_79a910:
    // 0x79a910: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
label_79a914:
    // 0x79a914: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a918:
    // 0x79a918: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a91c:
    // 0x79a91c: 0x60f809  jalr        $v1
label_79a920:
    if (ctx->pc == 0x79A920u) {
        ctx->pc = 0x79A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A91Cu;
        // 0x79a920: 0xae02ab00  sw          $v0, -0x5500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A924u;
        goto label_79a924;
    }
    ctx->pc = 0x79A91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A924u);
        ctx->pc = 0x79A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A91Cu;
        // 0x79a920: 0xae02ab00  sw          $v0, -0x5500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A91Cu, 0x79A924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A924u;
label_79a924:
    // 0x79a924: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
label_79a928:
    // 0x79a928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a92c:
    // 0x79a92c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a930:
    if (ctx->pc == 0x79A930u) {
        ctx->pc = 0x79A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A92Cu;
        // 0x79a930: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A934u;
        goto label_79a934;
    }
    ctx->pc = 0x79A92Cu;
    {
        const bool branch_taken_0x79a92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A92Cu;
        // 0x79a930: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a92c) {
            ctx->pc = 0x79A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a918;
        }
    }
    ctx->pc = 0x79A934u;
label_79a934:
    // 0x79a934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a938:
    // 0x79a938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a93c:
    // 0x79a93c: 0x3e00008  jr          $ra
label_79a940:
    if (ctx->pc == 0x79A940u) {
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A944u;
        goto label_79a944;
    }
    ctx->pc = 0x79A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A944u;
label_79a944:
    // 0x79a944: 0x0  nop
    ctx->pc = 0x79a944u;
    // NOP
    ctx->pc = 0x79a948u;
}
} // namespace gh_r304
