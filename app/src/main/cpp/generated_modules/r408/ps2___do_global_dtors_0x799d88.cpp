#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: __do_global_dtors
// Address: 0x799d88 - 0x799de0
void ps2___do_global_dtors_0x799d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799d88");
#endif

    switch (ctx->pc) {
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        default: break;
    }

    ctx->pc = 0x799d88u;

label_799d88:
    // 0x799d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799d8c:
    // 0x799d8c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799d90:
    // 0x799d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799d94:
    // 0x799d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799d98:
    // 0x799d98: 0x8c829f90  lw          $v0, -0x6070($a0)
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942608)));
label_799d9c:
    // 0x799d9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799da0:
    // 0x799da0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799da4:
    if (ctx->pc == 0x799DA4u) {
        ctx->pc = 0x799DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA0u;
        // 0x799da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DA8u;
        goto label_799da8;
    }
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA0u;
        // 0x799da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DCCu;
            goto label_799dcc;
        }
    }
    ctx->pc = 0x799DA8u;
label_799da8:
    // 0x799da8: 0x8e029f90  lw          $v0, -0x6070($s0)
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942608)));
label_799dac:
    // 0x799dac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799db0:
    // 0x799db0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799db4:
    // 0x799db4: 0x60f809  jalr        $v1
label_799db8:
    if (ctx->pc == 0x799DB8u) {
        ctx->pc = 0x799DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB4u;
        // 0x799db8: 0xae029f90  sw          $v0, -0x6070($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DBCu;
        goto label_799dbc;
    }
    ctx->pc = 0x799DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799DBCu);
        ctx->pc = 0x799DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB4u;
        // 0x799db8: 0xae029f90  sw          $v0, -0x6070($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DB4u, 0x799DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799DBCu;
label_799dbc:
    // 0x799dbc: 0x8e029f90  lw          $v0, -0x6070($s0)
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942608)));
label_799dc0:
    // 0x799dc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799dc4:
    // 0x799dc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799dc8:
    if (ctx->pc == 0x799DC8u) {
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DCCu;
        goto label_799dcc;
    }
    ctx->pc = 0x799DC4u;
    {
        const bool branch_taken_0x799dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc4) {
            ctx->pc = 0x799DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db0;
        }
    }
    ctx->pc = 0x799DCCu;
label_799dcc:
    // 0x799dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799dd0:
    // 0x799dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799dd4:
    // 0x799dd4: 0x3e00008  jr          $ra
label_799dd8:
    if (ctx->pc == 0x799DD8u) {
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DDCu;
        goto label_799ddc;
    }
    ctx->pc = 0x799DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x0  nop
    ctx->pc = 0x799ddcu;
    // NOP
    ctx->pc = 0x799de0u;
}
} // namespace gh_r408
