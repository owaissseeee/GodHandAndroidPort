#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: __do_global_dtors
// Address: 0x799f48 - 0x799fa0
void ps2___do_global_dtors_0x799f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799f48");
#endif

    switch (ctx->pc) {
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        default: break;
    }

    ctx->pc = 0x799f48u;

label_799f48:
    // 0x799f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799f4c:
    // 0x799f4c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799f50:
    // 0x799f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799f54:
    // 0x799f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799f58:
    // 0x799f58: 0x8c82a180  lw          $v0, -0x5E80($a0)
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943104)));
label_799f5c:
    // 0x799f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799f60:
    // 0x799f60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799f64:
    if (ctx->pc == 0x799F64u) {
        ctx->pc = 0x799F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F60u;
        // 0x799f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F68u;
        goto label_799f68;
    }
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F60u;
        // 0x799f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F8Cu;
            goto label_799f8c;
        }
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x8e02a180  lw          $v0, -0x5E80($s0)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943104)));
label_799f6c:
    // 0x799f6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799f70:
    // 0x799f70: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799f74:
    // 0x799f74: 0x60f809  jalr        $v1
label_799f78:
    if (ctx->pc == 0x799F78u) {
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0xae02a180  sw          $v0, -0x5E80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F7Cu;
        goto label_799f7c;
    }
    ctx->pc = 0x799F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799F7Cu);
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0xae02a180  sw          $v0, -0x5E80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F74u, 0x799F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799F7Cu;
label_799f7c:
    // 0x799f7c: 0x8e02a180  lw          $v0, -0x5E80($s0)
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943104)));
label_799f80:
    // 0x799f80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799f84:
    // 0x799f84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799f88:
    if (ctx->pc == 0x799F88u) {
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F8Cu;
        goto label_799f8c;
    }
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F8Cu;
label_799f8c:
    // 0x799f8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799f90:
    // 0x799f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799f94:
    // 0x799f94: 0x3e00008  jr          $ra
label_799f98:
    if (ctx->pc == 0x799F98u) {
        ctx->pc = 0x799F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F94u;
        // 0x799f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F9Cu;
        goto label_799f9c;
    }
    ctx->pc = 0x799F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F94u;
        // 0x799f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x0  nop
    ctx->pc = 0x799f9cu;
    // NOP
    ctx->pc = 0x799fa0u;
}
} // namespace gh_r603
