#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: func_00799B10
// Address: 0x799b10 - 0x799b80
void func_00799B10_0x799b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B10_0x799b10");
#endif

    switch (ctx->pc) {
        case 0x799b38u: goto label_799b38;
        case 0x799b44u: goto label_799b44;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b60u: goto label_799b60;
        case 0x799b6cu: goto label_799b6c;
        default: break;
    }

    ctx->pc = 0x799b10u;

    // 0x799b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799b18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799b24: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x799b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799b28: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799b28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B44u;
            goto label_799b44;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x0  nop
    ctx->pc = 0x799b34u;
    // NOP
label_799b38:
    // 0x799b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b3c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x799B44u;
    SET_GPR_U32(ctx, 31, 0x799B4Cu);
    ctx->pc = 0x799B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B44u;
    // 0x799b48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x799B44u, 0x799B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799B4Cu;
    {
        const bool branch_taken_0x799b4c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b4c) {
            ctx->pc = 0x799B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b38;
        }
    }
    ctx->pc = 0x799B54u;
    // 0x799b54: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x799b58: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799b64: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799B64u;
    SET_GPR_U32(ctx, 31, 0x799B6Cu);
    ctx->pc = 0x799B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B64u;
    // 0x799b68: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799B64u, 0x799B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799b78: 0x3e00008  jr          $ra
    ctx->pc = 0x799B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B80u;
}
} // namespace gh_r602
