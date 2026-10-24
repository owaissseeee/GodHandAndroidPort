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

// Function: cCoreSave_stageInit
// Address: 0x1f9b10 - 0x1f9b88
void cCoreSave_stageInit_0x1f9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_stageInit_0x1f9b10");
#endif

    switch (ctx->pc) {
        case 0x1f9b24u: goto label_1f9b24;
        case 0x1f9b2cu: goto label_1f9b2c;
        case 0x1f9b34u: goto label_1f9b34;
        case 0x1f9b3cu: goto label_1f9b3c;
        case 0x1f9b4cu: goto label_1f9b4c;
        case 0x1f9b68u: goto label_1f9b68;
        case 0x1f9b74u: goto label_1f9b74;
        default: break;
    }

    ctx->pc = 0x1f9b10u;

    // 0x1f9b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f9b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f9b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9b1c: 0xc07ef74  jal         func_1FBDD0
    ctx->pc = 0x1F9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B24u);
    ctx->pc = 0x1F9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B1Cu;
    // 0x1f9b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBDD0u, 0x1F9B1Cu, 0x1F9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B24u;
label_1f9b24:
    // 0x1f9b24: 0xc07efae  jal         func_1FBEB8
    ctx->pc = 0x1F9B24u;
    SET_GPR_U32(ctx, 31, 0x1F9B2Cu);
    ctx->pc = 0x1F9B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B24u;
    // 0x1f9b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEB8u, 0x1F9B24u, 0x1F9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B2Cu;
label_1f9b2c:
    // 0x1f9b2c: 0xc07efd8  jal         func_1FBF60
    ctx->pc = 0x1F9B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B34u);
    ctx->pc = 0x1F9B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B2Cu;
    // 0x1f9b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF60u, 0x1F9B2Cu, 0x1F9B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B34u;
label_1f9b34:
    // 0x1f9b34: 0xc07ebea  jal         func_1FAFA8
    ctx->pc = 0x1F9B34u;
    SET_GPR_U32(ctx, 31, 0x1F9B3Cu);
    ctx->pc = 0x1F9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B34u;
    // 0x1f9b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFA8u, 0x1F9B34u, 0x1F9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B3Cu;
label_1f9b3c:
    // 0x1f9b3c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1f9b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b44: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x1F9B44u;
    SET_GPR_U32(ctx, 31, 0x1F9B4Cu);
    ctx->pc = 0x1F9B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B44u;
    // 0x1f9b48: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D48u, 0x1F9B44u, 0x1F9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B4Cu;
label_1f9b4c:
    // 0x1f9b4c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f9b50: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9b54: 0x94627a50  lhu         $v0, 0x7A50($v1)
    ctx->pc = 0x1f9b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1f9b58: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9B58u;
    {
        const bool branch_taken_0x1f9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f9b58) {
            ctx->pc = 0x1F9B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9B58u;
            // 0x1f9b5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9B78u;
            goto label_1f9b78;
        }
    }
    ctx->pc = 0x1F9B60u;
    // 0x1f9b60: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x1F9B60u;
    SET_GPR_U32(ctx, 31, 0x1F9B68u);
    ctx->pc = 0x1F9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B60u;
    // 0x1f9b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x1F9B60u, 0x1F9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B68u;
label_1f9b68:
    // 0x1f9b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b6c: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x1F9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B74u);
    ctx->pc = 0x1F9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B6Cu;
    // 0x1f9b70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x1F9B6Cu, 0x1F9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B74u;
label_1f9b74:
    // 0x1f9b74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9b78:
    // 0x1f9b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B7Cu;
        // 0x1f9b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B84u;
    // 0x1f9b84: 0x0  nop
    ctx->pc = 0x1f9b84u;
    // NOP
    ctx->pc = 0x1f9b88u;
}
