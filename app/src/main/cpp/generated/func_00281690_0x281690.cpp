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

// Function: func_00281690
// Address: 0x281690 - 0x2816e0
void func_00281690_0x281690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281690_0x281690");
#endif

    switch (ctx->pc) {
        case 0x2816b8u: goto label_2816b8;
        case 0x2816c0u: goto label_2816c0;
        case 0x2816ccu: goto label_2816cc;
        default: break;
    }

    ctx->pc = 0x281690u;

    // 0x281690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281694: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x281698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28169c: 0x24428788  addiu       $v0, $v0, -0x7878
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936456));
    // 0x2816a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2816a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2816a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2816a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2816a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2816ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2816acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816b0: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x2816B0u;
    SET_GPR_U32(ctx, 31, 0x2816B8u);
    ctx->pc = 0x2816B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816B0u;
    // 0x2816b4: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x2816B0u, 0x2816B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816B8u;
label_2816b8:
    // 0x2816b8: 0xc0a0650  jal         func_281940
    ctx->pc = 0x2816B8u;
    SET_GPR_U32(ctx, 31, 0x2816C0u);
    ctx->pc = 0x2816BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816B8u;
    // 0x2816bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281940u, 0x2816B8u, 0x2816C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816C0u;
label_2816c0:
    // 0x2816c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2816c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816c4: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x2816C4u;
    SET_GPR_U32(ctx, 31, 0x2816CCu);
    ctx->pc = 0x2816C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816C4u;
    // 0x2816c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x2816C4u, 0x2816CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816CCu;
label_2816cc:
    // 0x2816cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2816ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2816d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2816d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2816d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2816d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2816d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2816D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D8u;
        // 0x2816dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2816E0u;
}
