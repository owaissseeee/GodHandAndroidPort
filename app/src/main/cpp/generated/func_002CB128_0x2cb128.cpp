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

// Function: func_002CB128
// Address: 0x2cb128 - 0x2cb198
void func_002CB128_0x2cb128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CB128_0x2cb128");
#endif

    switch (ctx->pc) {
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb178u: goto label_2cb178;
        default: break;
    }

    ctx->pc = 0x2cb128u;

    // 0x2cb128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb12c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2cb12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2cb130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cb130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cb134: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x2cb138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb13c: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB13Cu;
    {
        const bool branch_taken_0x2cb13c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB13Cu;
        // 0x2cb140: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb13c) {
            ctx->pc = 0x2CB188u;
            goto label_2cb188;
        }
    }
    ctx->pc = 0x2CB144u;
    // 0x2cb144: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2cb148: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB148u;
    {
        const bool branch_taken_0x2cb148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb148) {
            ctx->pc = 0x2CB14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB148u;
            // 0x2cb14c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB18Cu;
            goto label_2cb18c;
        }
    }
    ctx->pc = 0x2CB150u;
    // 0x2cb150: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2cb150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cb154: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB154u;
    {
        const bool branch_taken_0x2cb154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb154) {
            ctx->pc = 0x2CB158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB154u;
            // 0x2cb158: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB18Cu;
            goto label_2cb18c;
        }
    }
    ctx->pc = 0x2CB15Cu;
    // 0x2cb15c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2CB15Cu;
    SET_GPR_U32(ctx, 31, 0x2CB164u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2CB15Cu, 0x2CB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB164u;
label_2cb164:
    // 0x2cb164: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB164u;
    {
        const bool branch_taken_0x2cb164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb164) {
            ctx->pc = 0x2CB168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB164u;
            // 0x2cb168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB18Cu;
            goto label_2cb18c;
        }
    }
    ctx->pc = 0x2CB16Cu;
    // 0x2cb16c: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2cb170:
    // 0x2cb170: 0xc0b22b6  jal         func_2C8AD8
    ctx->pc = 0x2CB170u;
    SET_GPR_U32(ctx, 31, 0x2CB178u);
    ctx->pc = 0x2CB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB170u;
    // 0x2cb174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AD8u, 0x2CB170u, 0x2CB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB178u;
label_2cb178:
    // 0x2cb178: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb17c: 0x0  nop
    ctx->pc = 0x2cb17cu;
    // NOP
    // 0x2cb180: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CB180u;
    {
        const bool branch_taken_0x2cb180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb180) {
            ctx->pc = 0x2CB170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb170;
        }
    }
    ctx->pc = 0x2CB188u;
label_2cb188:
    // 0x2cb188: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cb188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb18c:
    // 0x2cb18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb190: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB190u;
        // 0x2cb194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB198u;
}
