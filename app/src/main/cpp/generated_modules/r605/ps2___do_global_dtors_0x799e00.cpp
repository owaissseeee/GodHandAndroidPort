#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: __do_global_dtors
// Address: 0x799e00 - 0x799e58
void ps2___do_global_dtors_0x799e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799e00");
#endif

    switch (ctx->pc) {
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        default: break;
    }

    ctx->pc = 0x799e00u;

label_799e00:
    // 0x799e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799e04:
    // 0x799e04: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799e08:
    // 0x799e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799e0c:
    // 0x799e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799e10:
    // 0x799e10: 0x8c82a000  lw          $v0, -0x6000($a0)
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942720)));
label_799e14:
    // 0x799e14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e18:
    // 0x799e18: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799e1c:
    if (ctx->pc == 0x799E1Cu) {
        ctx->pc = 0x799E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E18u;
        // 0x799e1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E20u;
        goto label_799e20;
    }
    ctx->pc = 0x799E18u;
    {
        const bool branch_taken_0x799e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E18u;
        // 0x799e1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e18) {
            ctx->pc = 0x799E44u;
            goto label_799e44;
        }
    }
    ctx->pc = 0x799E20u;
label_799e20:
    // 0x799e20: 0x8e02a000  lw          $v0, -0x6000($s0)
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942720)));
label_799e24:
    // 0x799e24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799e28:
    // 0x799e28: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799e2c:
    // 0x799e2c: 0x60f809  jalr        $v1
label_799e30:
    if (ctx->pc == 0x799E30u) {
        ctx->pc = 0x799E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E2Cu;
        // 0x799e30: 0xae02a000  sw          $v0, -0x6000($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E34u;
        goto label_799e34;
    }
    ctx->pc = 0x799E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799E34u);
        ctx->pc = 0x799E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E2Cu;
        // 0x799e30: 0xae02a000  sw          $v0, -0x6000($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E2Cu, 0x799E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799E34u;
label_799e34:
    // 0x799e34: 0x8e02a000  lw          $v0, -0x6000($s0)
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942720)));
label_799e38:
    // 0x799e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e3c:
    // 0x799e3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799e40:
    if (ctx->pc == 0x799E40u) {
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E44u;
        goto label_799e44;
    }
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e28;
        }
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799e48:
    // 0x799e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799e4c:
    // 0x799e4c: 0x3e00008  jr          $ra
label_799e50:
    if (ctx->pc == 0x799E50u) {
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E54u;
        goto label_799e54;
    }
    ctx->pc = 0x799E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E54u;
label_799e54:
    // 0x799e54: 0x0  nop
    ctx->pc = 0x799e54u;
    // NOP
    ctx->pc = 0x799e58u;
}
} // namespace gh_r605
