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

// Function: func_0027E638
// Address: 0x27e638 - 0x27e6b8
void func_0027E638_0x27e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E638_0x27e638");
#endif

    switch (ctx->pc) {
        case 0x27e654u: goto label_27e654;
        case 0x27e668u: goto label_27e668;
        case 0x27e680u: goto label_27e680;
        case 0x27e6a4u: goto label_27e6a4;
        default: break;
    }

    ctx->pc = 0x27e638u;

    // 0x27e638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27e640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27e644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e64c: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x27E64Cu;
    SET_GPR_U32(ctx, 31, 0x27E654u);
    ctx->pc = 0x27E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E64Cu;
    // 0x27e650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x27E64Cu, 0x27E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E654u;
label_27e654:
    // 0x27e654: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27e658: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27e658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27e65c: 0x24a582c8  addiu       $a1, $a1, -0x7D38
    ctx->pc = 0x27e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935240));
    // 0x27e660: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x27E660u;
    SET_GPR_U32(ctx, 31, 0x27E668u);
    ctx->pc = 0x27E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E660u;
    // 0x27e664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x27E660u, 0x27E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E668u;
label_27e668:
    // 0x27e668: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27e66c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x27e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27e670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e674: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
    // 0x27e678: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x27E678u;
    SET_GPR_U32(ctx, 31, 0x27E680u);
    ctx->pc = 0x27E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E678u;
    // 0x27e67c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x27E678u, 0x27E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E680u;
label_27e680:
    // 0x27e680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E680u;
    {
        const bool branch_taken_0x27e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E680u;
        // 0x27e684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e680) {
            ctx->pc = 0x27E690u;
            goto label_27e690;
        }
    }
    ctx->pc = 0x27E688u;
    // 0x27e688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E688u;
    {
        const bool branch_taken_0x27e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E688u;
        // 0x27e68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e688) {
            ctx->pc = 0x27E6A4u;
            goto label_27e6a4;
        }
    }
    ctx->pc = 0x27E690u;
label_27e690:
    // 0x27e690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e694: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27e698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e69c: 0xc0525ce  jal         func_149738
    ctx->pc = 0x27E69Cu;
    SET_GPR_U32(ctx, 31, 0x27E6A4u);
    ctx->pc = 0x27E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E69Cu;
    // 0x27e6a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x27E69Cu, 0x27E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6A4u;
label_27e6a4:
    // 0x27e6a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27e6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x27E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6B0u;
        // 0x27e6b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E6B8u;
}
