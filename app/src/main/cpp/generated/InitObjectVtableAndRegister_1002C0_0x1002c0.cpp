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

// Function: InitObjectVtableAndRegister_1002C0
// Address: 0x1002c0 - 0x100318
void InitObjectVtableAndRegister_1002C0_0x1002c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectVtableAndRegister_1002C0_0x1002c0");
#endif

    switch (ctx->pc) {
        case 0x1002f4u: goto label_1002f4;
        case 0x100300u: goto label_100300;
        default: break;
    }

    ctx->pc = 0x1002c0u;

    // 0x1002c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1002c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1002c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1002c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1002c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1002c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1002cc: 0x2442b598  addiu       $v0, $v0, -0x4A68
    ctx->pc = 0x1002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948248));
    // 0x1002d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1002d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1002d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1002d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1002dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1002dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1002e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1002e4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1002e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1002e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ec: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x1002ECu;
    SET_GPR_U32(ctx, 31, 0x1002F4u);
    ctx->pc = 0x1002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ECu;
    // 0x1002f0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x1002ECu, 0x1002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002F4u;
label_1002f4:
    // 0x1002f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f8: 0xc0a9cf2  jal         func_2A73C8
    ctx->pc = 0x1002F8u;
    SET_GPR_U32(ctx, 31, 0x100300u);
    ctx->pc = 0x1002FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002F8u;
    // 0x1002fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73C8u, 0x1002F8u, 0x100300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100300u;
label_100300:
    // 0x100300: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10030c: 0x3e00008  jr          $ra
    ctx->pc = 0x10030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10030Cu;
        // 0x100310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100314u;
    // 0x100314: 0x0  nop
    ctx->pc = 0x100314u;
    // NOP
    ctx->pc = 0x100318u;
}
