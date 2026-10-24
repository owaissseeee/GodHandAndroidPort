#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00280AF8
// Address: 0x280af8 - 0x280b58
void func_00280AF8_0x280af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280AF8_0x280af8");
#endif

    switch (ctx->pc) {
        case 0x280b24u: goto label_280b24;
        default: break;
    }

    ctx->pc = 0x280af8u;

    // 0x280af8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x280af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x280afc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280b00: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x280b04: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x280b08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280b10: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x280b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x280b14: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x280B14u;
    {
        const bool branch_taken_0x280b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B14u;
        // 0x280b18: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b14) {
            ctx->pc = 0x280B40u;
            goto label_280b40;
        }
    }
    ctx->pc = 0x280B1Cu;
    // 0x280b1c: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x280B1Cu;
    SET_GPR_U32(ctx, 31, 0x280B24u);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x280B1Cu, 0x280B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B24u;
label_280b24:
    // 0x280b24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x280B24u;
    {
        const bool branch_taken_0x280b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280b24) {
            ctx->pc = 0x280B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B24u;
            // 0x280b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B44u;
            goto label_280b44;
        }
    }
    ctx->pc = 0x280B2Cu;
    // 0x280b2c: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x280b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x280b30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x280b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x280b34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x280b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x280b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280B38u;
    {
        const bool branch_taken_0x280b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B38u;
        // 0x280b3c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b38) {
            ctx->pc = 0x280B44u;
            goto label_280b44;
        }
    }
    ctx->pc = 0x280B40u;
label_280b40:
    // 0x280b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280b44:
    // 0x280b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x280b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x280B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B4Cu;
        // 0x280b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B54u;
    // 0x280b54: 0x0  nop
    ctx->pc = 0x280b54u;
    // NOP
    ctx->pc = 0x280b58u;
}
