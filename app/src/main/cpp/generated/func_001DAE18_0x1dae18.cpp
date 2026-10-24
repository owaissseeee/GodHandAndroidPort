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

// Function: func_001DAE18
// Address: 0x1dae18 - 0x1daec0
void func_001DAE18_0x1dae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DAE18_0x1dae18");
#endif

    switch (ctx->pc) {
        case 0x1dae3cu: goto label_1dae3c;
        case 0x1dae48u: goto label_1dae48;
        default: break;
    }

    ctx->pc = 0x1dae18u;

    // 0x1dae18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dae1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dae24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dae2c: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1dae2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1dae30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dae34: 0xc077bd2  jal         func_1DEF48
    ctx->pc = 0x1DAE34u;
    SET_GPR_U32(ctx, 31, 0x1DAE3Cu);
    ctx->pc = 0x1DAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE34u;
    // 0x1dae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF48u, 0x1DAE34u, 0x1DAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE3Cu;
label_1dae3c:
    // 0x1dae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae40: 0xc077bf2  jal         func_1DEFC8
    ctx->pc = 0x1DAE40u;
    SET_GPR_U32(ctx, 31, 0x1DAE48u);
    ctx->pc = 0x1DAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE40u;
    // 0x1dae44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEFC8u, 0x1DAE40u, 0x1DAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE48u;
label_1dae48:
    // 0x1dae48: 0x8e253004  lw          $a1, 0x3004($s1)
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1dae4c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1dae50: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1dae54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dae58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dae5c: 0x8c650604  lw          $a1, 0x604($v1)
    ctx->pc = 0x1dae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dae60: 0x8c830604  lw          $v1, 0x604($a0)
    ctx->pc = 0x1dae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1dae64: 0xc5280a  movz        $a1, $a2, $a1
    ctx->pc = 0x1dae64u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x1dae68: 0xc3180a  movz        $v1, $a2, $v1
    ctx->pc = 0x1dae68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1dae6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1dae6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dae70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAE70u;
    {
        const bool branch_taken_0x1dae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE70u;
        // 0x1dae74: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae70) {
            ctx->pc = 0x1DAE8Cu;
            goto label_1dae8c;
        }
    }
    ctx->pc = 0x1DAE78u;
    // 0x1dae78: 0x92223044  lbu         $v0, 0x3044($s1)
    ctx->pc = 0x1dae78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12356)));
    // 0x1dae7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAE7Cu;
    {
        const bool branch_taken_0x1dae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE7Cu;
        // 0x1dae80: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae7c) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAE84u;
    // 0x1dae84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAE84u;
    {
        const bool branch_taken_0x1dae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE84u;
        // 0x1dae88: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae84) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAE8Cu;
label_1dae8c:
    // 0x1dae8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAE8Cu;
    {
        const bool branch_taken_0x1dae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE8Cu;
        // 0x1dae90: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae8c) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAE94u;
    // 0x1dae94: 0x92223044  lbu         $v0, 0x3044($s1)
    ctx->pc = 0x1dae94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12356)));
    // 0x1dae98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DAE98u;
    {
        const bool branch_taken_0x1dae98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE98u;
        // 0x1dae9c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae98) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAEA0u;
    // 0x1daea0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1daea4:
    // 0x1daea4: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1daea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1daea8: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1daea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1daeac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1daeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1daeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEB8u;
        // 0x1daebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAEC0u;
}
