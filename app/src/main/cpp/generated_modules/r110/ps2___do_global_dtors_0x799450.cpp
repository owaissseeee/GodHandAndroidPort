#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r110_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r110
{
// Function: __do_global_dtors
// Address: 0x799450 - 0x7994a8
void ps2___do_global_dtors_0x799450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799450");
#endif

    switch (ctx->pc) {
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
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        default: break;
    }

    ctx->pc = 0x799450u;

label_799450:
    // 0x799450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799454:
    // 0x799454: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799458:
    // 0x799458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79945c:
    // 0x79945c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799460:
    // 0x799460: 0x8c829600  lw          $v0, -0x6A00($a0)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940160)));
label_799464:
    // 0x799464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799468:
    // 0x799468: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79946c:
    if (ctx->pc == 0x79946Cu) {
        ctx->pc = 0x79946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799468u;
        // 0x79946c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799470u;
        goto label_799470;
    }
    ctx->pc = 0x799468u;
    {
        const bool branch_taken_0x799468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799468u;
        // 0x79946c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799468) {
            ctx->pc = 0x799494u;
            goto label_799494;
        }
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x8e029600  lw          $v0, -0x6A00($s0)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940160)));
label_799474:
    // 0x799474: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799478:
    // 0x799478: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79947c:
    // 0x79947c: 0x60f809  jalr        $v1
label_799480:
    if (ctx->pc == 0x799480u) {
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0xae029600  sw          $v0, -0x6A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799484u;
        goto label_799484;
    }
    ctx->pc = 0x79947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799484u);
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0xae029600  sw          $v0, -0x6A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8e029600  lw          $v0, -0x6A00($s0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940160)));
label_799488:
    // 0x799488: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79948c:
    // 0x79948c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799490:
    if (ctx->pc == 0x799490u) {
        ctx->pc = 0x799490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79948Cu;
        // 0x799490: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799494u;
        goto label_799494;
    }
    ctx->pc = 0x79948Cu;
    {
        const bool branch_taken_0x79948c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79948Cu;
        // 0x799490: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79948c) {
            ctx->pc = 0x799478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799478;
        }
    }
    ctx->pc = 0x799494u;
label_799494:
    // 0x799494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799498:
    // 0x799498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79949c:
    // 0x79949c: 0x3e00008  jr          $ra
label_7994a0:
    if (ctx->pc == 0x7994A0u) {
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A4u;
        goto label_7994a4;
    }
    ctx->pc = 0x79949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x0  nop
    ctx->pc = 0x7994a4u;
    // NOP
    ctx->pc = 0x7994a8u;
}
} // namespace gh_r110
