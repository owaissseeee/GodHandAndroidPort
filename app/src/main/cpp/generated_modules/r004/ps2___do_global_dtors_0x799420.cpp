#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r004_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r004
{
// Function: __do_global_dtors
// Address: 0x799420 - 0x799478
void ps2___do_global_dtors_0x799420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799420");
#endif

    switch (ctx->pc) {
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        default: break;
    }

    ctx->pc = 0x799420u;

label_799420:
    // 0x799420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799424:
    // 0x799424: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799428:
    // 0x799428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79942c:
    // 0x79942c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799430:
    // 0x799430: 0x8c829600  lw          $v0, -0x6A00($a0)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940160)));
label_799434:
    // 0x799434: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799438:
    // 0x799438: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79943c:
    if (ctx->pc == 0x79943Cu) {
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799440u;
        goto label_799440;
    }
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799464u;
            goto label_799464;
        }
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x8e029600  lw          $v0, -0x6A00($s0)
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940160)));
label_799444:
    // 0x799444: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799448:
    // 0x799448: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79944c:
    // 0x79944c: 0x60f809  jalr        $v1
label_799450:
    if (ctx->pc == 0x799450u) {
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0xae029600  sw          $v0, -0x6A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799454u;
        goto label_799454;
    }
    ctx->pc = 0x79944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799454u);
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0xae029600  sw          $v0, -0x6A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x8e029600  lw          $v0, -0x6A00($s0)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940160)));
label_799458:
    // 0x799458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79945c:
    // 0x79945c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x799448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799448;
        }
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799468:
    // 0x799468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79946c:
    // 0x79946c: 0x3e00008  jr          $ra
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x0  nop
    ctx->pc = 0x799474u;
    // NOP
    ctx->pc = 0x799478u;
}
} // namespace gh_r004
