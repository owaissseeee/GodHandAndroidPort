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

// Function: func_003057D0
// Address: 0x3057d0 - 0x305858
void func_003057D0_0x3057d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003057D0_0x3057d0");
#endif

    switch (ctx->pc) {
        case 0x305808u: goto label_305808;
        case 0x30581cu: goto label_30581c;
        case 0x305834u: goto label_305834;
        default: break;
    }

    ctx->pc = 0x3057d0u;

    // 0x3057d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3057d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3057d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3057d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3057d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3057d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3057dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3057dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3057e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3057e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3057e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3057e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3057e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057ec: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x3057ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x3057f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3057f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3057f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3057F4u;
    {
        const bool branch_taken_0x3057f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057F4u;
        // 0x3057f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057f4) {
            ctx->pc = 0x305838u;
            goto label_305838;
        }
    }
    ctx->pc = 0x3057FCu;
    // 0x3057fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3057fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305800: 0xc0c14d6  jal         func_305358
    ctx->pc = 0x305800u;
    SET_GPR_U32(ctx, 31, 0x305808u);
    ctx->pc = 0x305804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305800u;
    // 0x305804: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305358u, 0x305800u, 0x305808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305808u;
label_305808:
    // 0x305808: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30580c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305810: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x305810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x305814: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305814u;
    SET_GPR_U32(ctx, 31, 0x30581Cu);
    ctx->pc = 0x305818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305814u;
    // 0x305818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305814u, 0x30581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30581Cu;
label_30581c:
    // 0x30581c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30581Cu;
    {
        const bool branch_taken_0x30581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30581Cu;
        // 0x305820: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30581c) {
            ctx->pc = 0x305834u;
            goto label_305834;
        }
    }
    ctx->pc = 0x305824u;
    // 0x305824: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x305824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305828: 0x24841dc8  addiu       $a0, $a0, 0x1DC8
    ctx->pc = 0x305828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    // 0x30582c: 0xc0c1abc  jal         func_306AF0
    ctx->pc = 0x30582Cu;
    SET_GPR_U32(ctx, 31, 0x305834u);
    ctx->pc = 0x305830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30582Cu;
    // 0x305830: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306AF0u, 0x30582Cu, 0x305834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305834u;
label_305834:
    // 0x305834: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x305834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_305838:
    // 0x305838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30583c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305840: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x305840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305844: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x305844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x305848: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x305848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30584c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30584cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305850: 0x3e00008  jr          $ra
    ctx->pc = 0x305850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305850u;
        // 0x305854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305858u;
}
