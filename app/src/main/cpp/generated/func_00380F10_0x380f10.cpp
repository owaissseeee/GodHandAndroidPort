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

// Function: func_00380F10
// Address: 0x380f10 - 0x380f80
void func_00380F10_0x380f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380F10_0x380f10");
#endif

    switch (ctx->pc) {
        case 0x380f38u: goto label_380f38;
        case 0x380f6cu: goto label_380f6c;
        default: break;
    }

    ctx->pc = 0x380f10u;

    // 0x380f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380f14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x380f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x380f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380f20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x380f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f24: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x380f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x380f28: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x380F28u;
    {
        const bool branch_taken_0x380f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F28u;
        // 0x380f2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f28) {
            ctx->pc = 0x380F6Cu;
            goto label_380f6c;
        }
    }
    ctx->pc = 0x380F30u;
    // 0x380f30: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x380F30u;
    SET_GPR_U32(ctx, 31, 0x380F38u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x380F30u, 0x380F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F38u;
label_380f38:
    // 0x380f38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x380f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x380F3Cu;
    {
        const bool branch_taken_0x380f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F3Cu;
        // 0x380f40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f3c) {
            ctx->pc = 0x380F6Cu;
            goto label_380f6c;
        }
    }
    ctx->pc = 0x380F44u;
    // 0x380f44: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x380F44u;
    {
        const bool branch_taken_0x380f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x380F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F44u;
        // 0x380f48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f44) {
            ctx->pc = 0x380F6Cu;
            goto label_380f6c;
        }
    }
    ctx->pc = 0x380F4Cu;
    // 0x380f4c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x380F4Cu;
    {
        const bool branch_taken_0x380f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x380f4c) {
            ctx->pc = 0x380F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380F4Cu;
            // 0x380f50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380F70u;
            goto label_380f70;
        }
    }
    ctx->pc = 0x380F54u;
    // 0x380f54: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x380f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380f58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x380f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x380f5c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x380f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x380f60: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x380f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x380f64: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x380F64u;
    SET_GPR_U32(ctx, 31, 0x380F6Cu);
    ctx->pc = 0x380F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F64u;
    // 0x380f68: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x380F64u, 0x380F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F6Cu;
label_380f6c:
    // 0x380f6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x380f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_380f70:
    // 0x380f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380f78: 0x3e00008  jr          $ra
    ctx->pc = 0x380F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F78u;
        // 0x380f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380F80u;
}
