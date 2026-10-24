#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: __do_global_dtors
// Address: 0x7996f0 - 0x799748
void ps2___do_global_dtors_0x7996f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7996f0");
#endif

    switch (ctx->pc) {
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        default: break;
    }

    ctx->pc = 0x7996f0u;

label_7996f0:
    // 0x7996f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7996f4:
    // 0x7996f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7996f8:
    // 0x7996f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7996f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7996fc:
    // 0x7996fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7996fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799700:
    // 0x799700: 0x8c829900  lw          $v0, -0x6700($a0)
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940928)));
label_799704:
    // 0x799704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799708:
    // 0x799708: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79970c:
    if (ctx->pc == 0x79970Cu) {
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799710u;
        goto label_799710;
    }
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x799734u;
            goto label_799734;
        }
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x8e029900  lw          $v0, -0x6700($s0)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940928)));
label_799714:
    // 0x799714: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799718:
    // 0x799718: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79971c:
    // 0x79971c: 0x60f809  jalr        $v1
label_799720:
    if (ctx->pc == 0x799720u) {
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0xae029900  sw          $v0, -0x6700($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799724u;
        goto label_799724;
    }
    ctx->pc = 0x79971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799724u);
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0xae029900  sw          $v0, -0x6700($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79971Cu, 0x799724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799724u;
label_799724:
    // 0x799724: 0x8e029900  lw          $v0, -0x6700($s0)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940928)));
label_799728:
    // 0x799728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79972c:
    // 0x79972c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799730:
    if (ctx->pc == 0x799730u) {
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799734u;
        goto label_799734;
    }
    ctx->pc = 0x79972Cu;
    {
        const bool branch_taken_0x79972c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79972c) {
            ctx->pc = 0x799718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799718;
        }
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799738:
    // 0x799738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79973c:
    // 0x79973c: 0x3e00008  jr          $ra
label_799740:
    if (ctx->pc == 0x799740u) {
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799744u;
        goto label_799744;
    }
    ctx->pc = 0x79973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x0  nop
    ctx->pc = 0x799744u;
    // NOP
    ctx->pc = 0x799748u;
}
} // namespace gh_r509
