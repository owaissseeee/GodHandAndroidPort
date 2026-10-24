#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: __do_global_dtors
// Address: 0x799cf0 - 0x799d48
void ps2___do_global_dtors_0x799cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799cf0");
#endif

    switch (ctx->pc) {
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d10u: goto label_799d10;
        case 0x799d14u: goto label_799d14;
        case 0x799d18u: goto label_799d18;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d20u: goto label_799d20;
        case 0x799d24u: goto label_799d24;
        case 0x799d28u: goto label_799d28;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d30u: goto label_799d30;
        case 0x799d34u: goto label_799d34;
        case 0x799d38u: goto label_799d38;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d40u: goto label_799d40;
        case 0x799d44u: goto label_799d44;
        default: break;
    }

    ctx->pc = 0x799cf0u;

label_799cf0:
    // 0x799cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799cf4:
    // 0x799cf4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799cf8:
    // 0x799cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799cfc:
    // 0x799cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799d00:
    // 0x799d00: 0x8c829e80  lw          $v0, -0x6180($a0)
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942336)));
label_799d04:
    // 0x799d04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799d08:
    // 0x799d08: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799d0c:
    if (ctx->pc == 0x799D0Cu) {
        ctx->pc = 0x799D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D08u;
        // 0x799d0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D10u;
        goto label_799d10;
    }
    ctx->pc = 0x799D08u;
    {
        const bool branch_taken_0x799d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D08u;
        // 0x799d0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d08) {
            ctx->pc = 0x799D34u;
            goto label_799d34;
        }
    }
    ctx->pc = 0x799D10u;
label_799d10:
    // 0x799d10: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
label_799d14:
    // 0x799d14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799d18:
    // 0x799d18: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799d1c:
    // 0x799d1c: 0x60f809  jalr        $v1
label_799d20:
    if (ctx->pc == 0x799D20u) {
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0xae029e80  sw          $v0, -0x6180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D24u;
        goto label_799d24;
    }
    ctx->pc = 0x799D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799D24u);
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0xae029e80  sw          $v0, -0x6180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D1Cu, 0x799D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799D24u;
label_799d24:
    // 0x799d24: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
label_799d28:
    // 0x799d28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799d2c:
    // 0x799d2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799d30:
    if (ctx->pc == 0x799D30u) {
        ctx->pc = 0x799D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D2Cu;
        // 0x799d30: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D34u;
        goto label_799d34;
    }
    ctx->pc = 0x799D2Cu;
    {
        const bool branch_taken_0x799d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D2Cu;
        // 0x799d30: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d2c) {
            ctx->pc = 0x799D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d18;
        }
    }
    ctx->pc = 0x799D34u;
label_799d34:
    // 0x799d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799d38:
    // 0x799d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799d3c:
    // 0x799d3c: 0x3e00008  jr          $ra
label_799d40:
    if (ctx->pc == 0x799D40u) {
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D44u;
        goto label_799d44;
    }
    ctx->pc = 0x799D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0x0  nop
    ctx->pc = 0x799d44u;
    // NOP
    ctx->pc = 0x799d48u;
}
} // namespace gh_r503
