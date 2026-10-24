#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r703_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r703
{
// Function: __do_global_dtors
// Address: 0x799530 - 0x799588
void ps2___do_global_dtors_0x799530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799530");
#endif

    switch (ctx->pc) {
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
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
        default: break;
    }

    ctx->pc = 0x799530u;

label_799530:
    // 0x799530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799534:
    // 0x799534: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799538:
    // 0x799538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79953c:
    // 0x79953c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799540:
    // 0x799540: 0x8c829680  lw          $v0, -0x6980($a0)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940288)));
label_799544:
    // 0x799544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799548:
    // 0x799548: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79954c:
    if (ctx->pc == 0x79954Cu) {
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799550u;
        goto label_799550;
    }
    ctx->pc = 0x799548u;
    {
        const bool branch_taken_0x799548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799548) {
            ctx->pc = 0x799574u;
            goto label_799574;
        }
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799554:
    // 0x799554: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799558:
    // 0x799558: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79955c:
    // 0x79955c: 0x60f809  jalr        $v1
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799564u);
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799568:
    // 0x799568: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79956c:
    // 0x79956c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799570:
    if (ctx->pc == 0x799570u) {
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799574u;
        goto label_799574;
    }
    ctx->pc = 0x79956Cu;
    {
        const bool branch_taken_0x79956c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79956c) {
            ctx->pc = 0x799558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799558;
        }
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799578:
    // 0x799578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79957c:
    // 0x79957c: 0x3e00008  jr          $ra
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x0  nop
    ctx->pc = 0x799584u;
    // NOP
    ctx->pc = 0x799588u;
}
} // namespace gh_r703
