#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r401_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r401
{
// Function: __do_global_dtors
// Address: 0x799550 - 0x7995a8
void ps2___do_global_dtors_0x799550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799550");
#endif

    switch (ctx->pc) {
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
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
        default: break;
    }

    ctx->pc = 0x799550u;

label_799550:
    // 0x799550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799554:
    // 0x799554: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799558:
    // 0x799558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79955c:
    // 0x79955c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799560:
    // 0x799560: 0x8c829680  lw          $v0, -0x6980($a0)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940288)));
label_799564:
    // 0x799564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799568:
    // 0x799568: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79956c:
    if (ctx->pc == 0x79956Cu) {
        ctx->pc = 0x79956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799568u;
        // 0x79956c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799570u;
        goto label_799570;
    }
    ctx->pc = 0x799568u;
    {
        const bool branch_taken_0x799568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799568u;
        // 0x79956c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799568) {
            ctx->pc = 0x799594u;
            goto label_799594;
        }
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799574:
    // 0x799574: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799578:
    // 0x799578: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79957c:
    // 0x79957c: 0x60f809  jalr        $v1
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799584u);
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799588:
    // 0x799588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79958c:
    // 0x79958c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799590:
    if (ctx->pc == 0x799590u) {
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799594u;
        goto label_799594;
    }
    ctx->pc = 0x79958Cu;
    {
        const bool branch_taken_0x79958c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79958c) {
            ctx->pc = 0x799578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799578;
        }
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799598:
    // 0x799598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79959c:
    // 0x79959c: 0x3e00008  jr          $ra
label_7995a0:
    if (ctx->pc == 0x7995A0u) {
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A4u;
        goto label_7995a4;
    }
    ctx->pc = 0x79959Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79959Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995A4u;
label_7995a4:
    // 0x7995a4: 0x0  nop
    ctx->pc = 0x7995a4u;
    // NOP
    ctx->pc = 0x7995a8u;
}
} // namespace gh_r401
