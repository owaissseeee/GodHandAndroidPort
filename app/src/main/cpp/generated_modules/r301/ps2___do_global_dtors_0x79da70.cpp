#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __do_global_dtors
// Address: 0x79da70 - 0x79dac8
void ps2___do_global_dtors_0x79da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79da70");
#endif

    switch (ctx->pc) {
        case 0x79da70u: goto label_79da70;
        case 0x79da74u: goto label_79da74;
        case 0x79da78u: goto label_79da78;
        case 0x79da7cu: goto label_79da7c;
        case 0x79da80u: goto label_79da80;
        case 0x79da84u: goto label_79da84;
        case 0x79da88u: goto label_79da88;
        case 0x79da8cu: goto label_79da8c;
        case 0x79da90u: goto label_79da90;
        case 0x79da94u: goto label_79da94;
        case 0x79da98u: goto label_79da98;
        case 0x79da9cu: goto label_79da9c;
        case 0x79daa0u: goto label_79daa0;
        case 0x79daa4u: goto label_79daa4;
        case 0x79daa8u: goto label_79daa8;
        case 0x79daacu: goto label_79daac;
        case 0x79dab0u: goto label_79dab0;
        case 0x79dab4u: goto label_79dab4;
        case 0x79dab8u: goto label_79dab8;
        case 0x79dabcu: goto label_79dabc;
        case 0x79dac0u: goto label_79dac0;
        case 0x79dac4u: goto label_79dac4;
        default: break;
    }

    ctx->pc = 0x79da70u;

label_79da70:
    // 0x79da70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79da74:
    // 0x79da74: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79da74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79da78:
    // 0x79da78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79da7c:
    // 0x79da7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79da80:
    // 0x79da80: 0x8c82dca8  lw          $v0, -0x2358($a0)
    ctx->pc = 0x79da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958248)));
label_79da84:
    // 0x79da84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79da84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79da88:
    // 0x79da88: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79da8c:
    if (ctx->pc == 0x79DA8Cu) {
        ctx->pc = 0x79DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA88u;
        // 0x79da8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DA90u;
        goto label_79da90;
    }
    ctx->pc = 0x79DA88u;
    {
        const bool branch_taken_0x79da88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA88u;
        // 0x79da8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79da88) {
            ctx->pc = 0x79DAB4u;
            goto label_79dab4;
        }
    }
    ctx->pc = 0x79DA90u;
label_79da90:
    // 0x79da90: 0x8e02dca8  lw          $v0, -0x2358($s0)
    ctx->pc = 0x79da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958248)));
label_79da94:
    // 0x79da94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79da98:
    // 0x79da98: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79da9c:
    // 0x79da9c: 0x60f809  jalr        $v1
label_79daa0:
    if (ctx->pc == 0x79DAA0u) {
        ctx->pc = 0x79DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA9Cu;
        // 0x79daa0: 0xae02dca8  sw          $v0, -0x2358($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294958248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DAA4u;
        goto label_79daa4;
    }
    ctx->pc = 0x79DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79DAA4u);
        ctx->pc = 0x79DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DA9Cu;
        // 0x79daa0: 0xae02dca8  sw          $v0, -0x2358($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294958248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DA9Cu, 0x79DAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79DAA4u;
label_79daa4:
    // 0x79daa4: 0x8e02dca8  lw          $v0, -0x2358($s0)
    ctx->pc = 0x79daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958248)));
label_79daa8:
    // 0x79daa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79daac:
    // 0x79daac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79dab0:
    if (ctx->pc == 0x79DAB0u) {
        ctx->pc = 0x79DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAACu;
        // 0x79dab0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DAB4u;
        goto label_79dab4;
    }
    ctx->pc = 0x79DAACu;
    {
        const bool branch_taken_0x79daac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAACu;
        // 0x79dab0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79daac) {
            ctx->pc = 0x79DA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79da98;
        }
    }
    ctx->pc = 0x79DAB4u;
label_79dab4:
    // 0x79dab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79dab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79dab8:
    // 0x79dab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79dab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79dabc:
    // 0x79dabc: 0x3e00008  jr          $ra
label_79dac0:
    if (ctx->pc == 0x79DAC0u) {
        ctx->pc = 0x79DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DABCu;
        // 0x79dac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DAC4u;
        goto label_79dac4;
    }
    ctx->pc = 0x79DABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DABCu;
        // 0x79dac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DAC4u;
label_79dac4:
    // 0x79dac4: 0x0  nop
    ctx->pc = 0x79dac4u;
    // NOP
    ctx->pc = 0x79dac8u;
}
} // namespace gh_r301
