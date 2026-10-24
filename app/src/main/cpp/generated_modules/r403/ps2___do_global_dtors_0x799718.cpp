#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r403_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r403
{
// Function: __do_global_dtors
// Address: 0x799718 - 0x799770
void ps2___do_global_dtors_0x799718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799718");
#endif

    switch (ctx->pc) {
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
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        default: break;
    }

    ctx->pc = 0x799718u;

label_799718:
    // 0x799718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79971c:
    // 0x79971c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799720:
    // 0x799720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799724:
    // 0x799724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799728:
    // 0x799728: 0x8c829880  lw          $v0, -0x6780($a0)
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940800)));
label_79972c:
    // 0x79972c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799730:
    // 0x799730: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799734:
    if (ctx->pc == 0x799734u) {
        ctx->pc = 0x799734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799730u;
        // 0x799734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799738u;
        goto label_799738;
    }
    ctx->pc = 0x799730u;
    {
        const bool branch_taken_0x799730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799730u;
        // 0x799734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799730) {
            ctx->pc = 0x79975Cu;
            goto label_79975c;
        }
    }
    ctx->pc = 0x799738u;
label_799738:
    // 0x799738: 0x8e029880  lw          $v0, -0x6780($s0)
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940800)));
label_79973c:
    // 0x79973c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799740:
    // 0x799740: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799744:
    // 0x799744: 0x60f809  jalr        $v1
label_799748:
    if (ctx->pc == 0x799748u) {
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0xae029880  sw          $v0, -0x6780($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79974Cu;
        goto label_79974c;
    }
    ctx->pc = 0x799744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79974Cu);
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0xae029880  sw          $v0, -0x6780($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x8e029880  lw          $v0, -0x6780($s0)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940800)));
label_799750:
    // 0x799750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799754:
    // 0x799754: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799758:
    if (ctx->pc == 0x799758u) {
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79975Cu;
        goto label_79975c;
    }
    ctx->pc = 0x799754u;
    {
        const bool branch_taken_0x799754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799754) {
            ctx->pc = 0x799740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799740;
        }
    }
    ctx->pc = 0x79975Cu;
label_79975c:
    // 0x79975c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799760:
    // 0x799760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799764:
    // 0x799764: 0x3e00008  jr          $ra
label_799768:
    if (ctx->pc == 0x799768u) {
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79976Cu;
        goto label_79976c;
    }
    ctx->pc = 0x799764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x0  nop
    ctx->pc = 0x79976cu;
    // NOP
    ctx->pc = 0x799770u;
}
} // namespace gh_r403
