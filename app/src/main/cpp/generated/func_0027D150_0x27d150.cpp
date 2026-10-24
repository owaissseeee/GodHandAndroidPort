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

// Function: func_0027D150
// Address: 0x27d150 - 0x27d1d0
void func_0027D150_0x27d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D150_0x27d150");
#endif

    switch (ctx->pc) {
        case 0x27d16cu: goto label_27d16c;
        case 0x27d180u: goto label_27d180;
        case 0x27d198u: goto label_27d198;
        case 0x27d1bcu: goto label_27d1bc;
        default: break;
    }

    ctx->pc = 0x27d150u;

    // 0x27d150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27d15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d164: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x27D164u;
    SET_GPR_U32(ctx, 31, 0x27D16Cu);
    ctx->pc = 0x27D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D164u;
    // 0x27d168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x27D164u, 0x27D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D16Cu;
label_27d16c:
    // 0x27d16c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x27d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27d170: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27d174: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x27d178: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x27D178u;
    SET_GPR_U32(ctx, 31, 0x27D180u);
    ctx->pc = 0x27D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D178u;
    // 0x27d17c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x27D178u, 0x27D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D180u;
label_27d180:
    // 0x27d180: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27d184: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27d188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d18c: 0x24a58188  addiu       $a1, $a1, -0x7E78
    ctx->pc = 0x27d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    // 0x27d190: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x27D190u;
    SET_GPR_U32(ctx, 31, 0x27D198u);
    ctx->pc = 0x27D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D190u;
    // 0x27d194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x27D190u, 0x27D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D198u;
label_27d198:
    // 0x27d198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D198u;
    {
        const bool branch_taken_0x27d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D198u;
        // 0x27d19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d198) {
            ctx->pc = 0x27D1A8u;
            goto label_27d1a8;
        }
    }
    ctx->pc = 0x27D1A0u;
    // 0x27d1a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D1A0u;
    {
        const bool branch_taken_0x27d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1A0u;
        // 0x27d1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1a0) {
            ctx->pc = 0x27D1BCu;
            goto label_27d1bc;
        }
    }
    ctx->pc = 0x27D1A8u;
label_27d1a8:
    // 0x27d1a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d1ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27d1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d1b4: 0xc0525ce  jal         func_149738
    ctx->pc = 0x27D1B4u;
    SET_GPR_U32(ctx, 31, 0x27D1BCu);
    ctx->pc = 0x27D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1B4u;
    // 0x27d1b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x27D1B4u, 0x27D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1BCu;
label_27d1bc:
    // 0x27d1bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27d1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1C8u;
        // 0x27d1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D1D0u;
}
