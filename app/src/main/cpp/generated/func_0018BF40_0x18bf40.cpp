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

// Function: func_0018BF40
// Address: 0x18bf40 - 0x18bfa0
void func_0018BF40_0x18bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018BF40_0x18bf40");
#endif

    switch (ctx->pc) {
        case 0x18bf74u: goto label_18bf74;
        case 0x18bf88u: goto label_18bf88;
        case 0x18bf90u: goto label_18bf90;
        default: break;
    }

    ctx->pc = 0x18bf40u;

    // 0x18bf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bf44: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18bf48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bf4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf54: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18bf58: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18bf5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18bf60: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18bf64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BF64u;
    {
        const bool branch_taken_0x18bf64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF64u;
        // 0x18bf68: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf64) {
            ctx->pc = 0x18BF74u;
            goto label_18bf74;
        }
    }
    ctx->pc = 0x18BF6Cu;
    // 0x18bf6c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18BF6Cu;
    SET_GPR_U32(ctx, 31, 0x18BF74u);
    ctx->pc = 0x18BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF6Cu;
    // 0x18bf70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18BF6Cu, 0x18BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF74u;
label_18bf74:
    // 0x18bf74: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18bf78: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x18bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x18bf7c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x18bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x18bf80: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x18BF80u;
    SET_GPR_U32(ctx, 31, 0x18BF88u);
    ctx->pc = 0x18BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF80u;
    // 0x18bf84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x18BF80u, 0x18BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF88u;
label_18bf88:
    // 0x18bf88: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x18BF88u;
    SET_GPR_U32(ctx, 31, 0x18BF90u);
    ctx->pc = 0x18BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF88u;
    // 0x18bf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x18BF88u, 0x18BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF90u;
label_18bf90:
    // 0x18bf90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bf98: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF98u;
        // 0x18bf9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BFA0u;
}
