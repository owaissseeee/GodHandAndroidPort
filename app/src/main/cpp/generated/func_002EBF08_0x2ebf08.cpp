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

// Function: func_002EBF08
// Address: 0x2ebf08 - 0x2ebf70
void func_002EBF08_0x2ebf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EBF08_0x2ebf08");
#endif

    switch (ctx->pc) {
        case 0x2ebf1cu: goto label_2ebf1c;
        default: break;
    }

    ctx->pc = 0x2ebf08u;

    // 0x2ebf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebf0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ebf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ebf10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebf14: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2EBF14u;
    SET_GPR_U32(ctx, 31, 0x2EBF1Cu);
    ctx->pc = 0x2EBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF14u;
    // 0x2ebf18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2EBF14u, 0x2EBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF1Cu;
label_2ebf1c:
    // 0x2ebf1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ebf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ebf20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebf24: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ebf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ebf28: 0x2463e8c8  addiu       $v1, $v1, -0x1738
    ctx->pc = 0x2ebf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961352));
    // 0x2ebf2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ebf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf30: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ebf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2ebf34: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ebf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2ebf38: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2ebf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x2ebf3c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2ebf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x2ebf40: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2ebf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2ebf44: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2ebf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2ebf48: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x2ebf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x2ebf4c: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x2ebf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x2ebf50: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x2ebf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x2ebf54: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2ebf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x2ebf58: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x2ebf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x2ebf5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ebf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF64u;
        // 0x2ebf68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF6Cu;
    // 0x2ebf6c: 0x0  nop
    ctx->pc = 0x2ebf6cu;
    // NOP
    ctx->pc = 0x2ebf70u;
}
