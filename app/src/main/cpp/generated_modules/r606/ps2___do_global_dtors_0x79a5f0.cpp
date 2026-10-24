#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: __do_global_dtors
// Address: 0x79a5f0 - 0x79a648
void ps2___do_global_dtors_0x79a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a5f0");
#endif

    switch (ctx->pc) {
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a630u: goto label_79a630;
        case 0x79a634u: goto label_79a634;
        case 0x79a638u: goto label_79a638;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a640u: goto label_79a640;
        case 0x79a644u: goto label_79a644;
        default: break;
    }

    ctx->pc = 0x79a5f0u;

label_79a5f0:
    // 0x79a5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a5f4:
    // 0x79a5f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a5f8:
    // 0x79a5f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a5fc:
    // 0x79a5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a600:
    // 0x79a600: 0x8c82a800  lw          $v0, -0x5800($a0)
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944768)));
label_79a604:
    // 0x79a604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a608:
    // 0x79a608: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a60c:
    if (ctx->pc == 0x79A60Cu) {
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A610u;
        goto label_79a610;
    }
    ctx->pc = 0x79A608u;
    {
        const bool branch_taken_0x79a608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a608) {
            ctx->pc = 0x79A634u;
            goto label_79a634;
        }
    }
    ctx->pc = 0x79A610u;
label_79a610:
    // 0x79a610: 0x8e02a800  lw          $v0, -0x5800($s0)
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944768)));
label_79a614:
    // 0x79a614: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a618:
    // 0x79a618: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a61c:
    // 0x79a61c: 0x60f809  jalr        $v1
label_79a620:
    if (ctx->pc == 0x79A620u) {
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0xae02a800  sw          $v0, -0x5800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A624u;
        goto label_79a624;
    }
    ctx->pc = 0x79A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A624u);
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0xae02a800  sw          $v0, -0x5800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A61Cu, 0x79A624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A624u;
label_79a624:
    // 0x79a624: 0x8e02a800  lw          $v0, -0x5800($s0)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944768)));
label_79a628:
    // 0x79a628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a62c:
    // 0x79a62c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a630:
    if (ctx->pc == 0x79A630u) {
        ctx->pc = 0x79A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A62Cu;
        // 0x79a630: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A634u;
        goto label_79a634;
    }
    ctx->pc = 0x79A62Cu;
    {
        const bool branch_taken_0x79a62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A62Cu;
        // 0x79a630: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a62c) {
            ctx->pc = 0x79A618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a618;
        }
    }
    ctx->pc = 0x79A634u;
label_79a634:
    // 0x79a634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a638:
    // 0x79a638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a63c:
    // 0x79a63c: 0x3e00008  jr          $ra
label_79a640:
    if (ctx->pc == 0x79A640u) {
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A644u;
        goto label_79a644;
    }
    ctx->pc = 0x79A63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A644u;
label_79a644:
    // 0x79a644: 0x0  nop
    ctx->pc = 0x79a644u;
    // NOP
    ctx->pc = 0x79a648u;
}
} // namespace gh_r606
