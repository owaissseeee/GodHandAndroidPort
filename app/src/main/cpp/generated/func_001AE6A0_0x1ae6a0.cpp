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

// Function: func_001AE6A0
// Address: 0x1ae6a0 - 0x1ae700
void func_001AE6A0_0x1ae6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE6A0_0x1ae6a0");
#endif

    switch (ctx->pc) {
        case 0x1ae6bcu: goto label_1ae6bc;
        default: break;
    }

    ctx->pc = 0x1ae6a0u;

    // 0x1ae6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae6a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ae6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ae6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae6b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ae6b4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1AE6B4u;
    SET_GPR_U32(ctx, 31, 0x1AE6BCu);
    ctx->pc = 0x1AE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6B4u;
    // 0x1ae6b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1AE6B4u, 0x1AE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6BCu;
label_1ae6bc:
    // 0x1ae6bc: 0x28440006  slti        $a0, $v0, 0x6
    ctx->pc = 0x1ae6bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ae6c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae6c4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1ae6c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1ae6c8: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x1ae6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae6cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ae6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae6d4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x1ae6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1ae6d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ae6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae6dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae6e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ae6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ae6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6ECu;
        // 0x1ae6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE6F4u;
    // 0x1ae6f4: 0x0  nop
    ctx->pc = 0x1ae6f4u;
    // NOP
    // 0x1ae6f8: 0x0  nop
    ctx->pc = 0x1ae6f8u;
    // NOP
    // 0x1ae6fc: 0x0  nop
    ctx->pc = 0x1ae6fcu;
    // NOP
    ctx->pc = 0x1ae700u;
}
