#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: __do_global_dtors
// Address: 0x799af8 - 0x799b50
void ps2___do_global_dtors_0x799af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799af8");
#endif

    switch (ctx->pc) {
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        default: break;
    }

    ctx->pc = 0x799af8u;

label_799af8:
    // 0x799af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799afc:
    // 0x799afc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799b00:
    // 0x799b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799b04:
    // 0x799b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799b08:
    // 0x799b08: 0x8c829c80  lw          $v0, -0x6380($a0)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941824)));
label_799b0c:
    // 0x799b0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799b10:
    // 0x799b10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799b14:
    if (ctx->pc == 0x799B14u) {
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B18u;
        goto label_799b18;
    }
    ctx->pc = 0x799B10u;
    {
        const bool branch_taken_0x799b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b10) {
            ctx->pc = 0x799B3Cu;
            goto label_799b3c;
        }
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x8e029c80  lw          $v0, -0x6380($s0)
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941824)));
label_799b1c:
    // 0x799b1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799b20:
    // 0x799b20: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799b24:
    // 0x799b24: 0x60f809  jalr        $v1
label_799b28:
    if (ctx->pc == 0x799B28u) {
        ctx->pc = 0x799B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B24u;
        // 0x799b28: 0xae029c80  sw          $v0, -0x6380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B2Cu;
        goto label_799b2c;
    }
    ctx->pc = 0x799B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799B2Cu);
        ctx->pc = 0x799B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B24u;
        // 0x799b28: 0xae029c80  sw          $v0, -0x6380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B24u, 0x799B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799B2Cu;
label_799b2c:
    // 0x799b2c: 0x8e029c80  lw          $v0, -0x6380($s0)
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941824)));
label_799b30:
    // 0x799b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799b34:
    // 0x799b34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799b38:
    if (ctx->pc == 0x799B38u) {
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B3Cu;
        goto label_799b3c;
    }
    ctx->pc = 0x799B34u;
    {
        const bool branch_taken_0x799b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b34) {
            ctx->pc = 0x799B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b20;
        }
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799b40:
    // 0x799b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799b44:
    // 0x799b44: 0x3e00008  jr          $ra
label_799b48:
    if (ctx->pc == 0x799B48u) {
        ctx->pc = 0x799B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B44u;
        // 0x799b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B4Cu;
        goto label_799b4c;
    }
    ctx->pc = 0x799B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B44u;
        // 0x799b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x0  nop
    ctx->pc = 0x799b4cu;
    // NOP
    ctx->pc = 0x799b50u;
}
} // namespace gh_r007
