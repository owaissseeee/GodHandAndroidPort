#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: __do_global_dtors
// Address: 0x799458 - 0x7994b0
void ps2___do_global_dtors_0x799458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799458");
#endif

    switch (ctx->pc) {
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
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        default: break;
    }

    ctx->pc = 0x799458u;

label_799458:
    // 0x799458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79945c:
    // 0x79945c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799460:
    // 0x799460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799464:
    // 0x799464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799468:
    // 0x799468: 0x8c829680  lw          $v0, -0x6980($a0)
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940288)));
label_79946c:
    // 0x79946c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799470:
    // 0x799470: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799474:
    if (ctx->pc == 0x799474u) {
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799478u;
        goto label_799478;
    }
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x79949Cu;
            goto label_79949c;
        }
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_79947c:
    // 0x79947c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799480:
    // 0x799480: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799484:
    // 0x799484: 0x60f809  jalr        $v1
label_799488:
    if (ctx->pc == 0x799488u) {
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79948Cu;
        goto label_79948c;
    }
    ctx->pc = 0x799484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79948Cu);
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0xae029680  sw          $v0, -0x6980($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x8e029680  lw          $v0, -0x6980($s0)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940288)));
label_799490:
    // 0x799490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799494:
    // 0x799494: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799494) {
            ctx->pc = 0x799480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799480;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7994a0:
    // 0x7994a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7994a4:
    // 0x7994a4: 0x3e00008  jr          $ra
label_7994a8:
    if (ctx->pc == 0x7994A8u) {
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ACu;
        goto label_7994ac;
    }
    ctx->pc = 0x7994A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0x0  nop
    ctx->pc = 0x7994acu;
    // NOP
    ctx->pc = 0x7994b0u;
}
} // namespace gh_r400
