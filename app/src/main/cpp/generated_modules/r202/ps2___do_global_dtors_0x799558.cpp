#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r202_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r202
{
// Function: __do_global_dtors
// Address: 0x799558 - 0x7995b0
void ps2___do_global_dtors_0x799558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799558");
#endif

    switch (ctx->pc) {
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        default: break;
    }

    ctx->pc = 0x799558u;

label_799558:
    // 0x799558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79955c:
    // 0x79955c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799560:
    // 0x799560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799564:
    // 0x799564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799568:
    // 0x799568: 0x8c829680  lw          $v0, -0x6980($a0)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940288)));
label_79956c:
    // 0x79956c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799570:
    // 0x799570: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799570) {
            ctx->pc = 0x79959Cu;
            goto label_79959c;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_79957c:
    // 0x79957c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799580:
    // 0x799580: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799584:
    // 0x799584: 0x60f809  jalr        $v1
label_799588:
    if (ctx->pc == 0x799588u) {
        ctx->pc = 0x799588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799584u;
        // 0x799588: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79958Cu;
        goto label_79958c;
    }
    ctx->pc = 0x799584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79958Cu);
        ctx->pc = 0x799588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799584u;
        // 0x799588: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799584u, 0x79958Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79958Cu;
label_79958c:
    // 0x79958c: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799590:
    // 0x799590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799594:
    // 0x799594: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    {
        const bool branch_taken_0x799594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799594) {
            ctx->pc = 0x799580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799580;
        }
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7995a0:
    // 0x7995a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7995a4:
    // 0x7995a4: 0x3e00008  jr          $ra
label_7995a8:
    if (ctx->pc == 0x7995A8u) {
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995ACu;
        goto label_7995ac;
    }
    ctx->pc = 0x7995A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x0  nop
    ctx->pc = 0x7995acu;
    // NOP
    ctx->pc = 0x7995b0u;
}
} // namespace gh_r202
