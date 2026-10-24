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

// Function: func_002E3480
// Address: 0x2e3480 - 0x2e3500
void func_002E3480_0x2e3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E3480_0x2e3480");
#endif

    switch (ctx->pc) {
        case 0x2e3494u: goto label_2e3494;
        default: break;
    }

    ctx->pc = 0x2e3480u;

    // 0x2e3480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e348c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2E348Cu;
    SET_GPR_U32(ctx, 31, 0x2E3494u);
    ctx->pc = 0x2E3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E348Cu;
    // 0x2e3490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2E348Cu, 0x2E3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3494u;
label_2e3494:
    // 0x2e3494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e349c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2e349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2e34a0: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x2e34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x2e34a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e34a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34a8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2e34a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2e34ac: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2e34acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2e34b0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2e34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x2e34b4: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2e34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x2e34b8: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2e34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2e34bc: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x2e34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x2e34c0: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x2e34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x2e34c4: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x2e34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x2e34c8: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2e34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x2e34cc: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x2e34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x2e34d0: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2e34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2e34d4: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x2e34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x2e34d8: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x2e34d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x2e34dc: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x2e34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x2e34e0: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x2e34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x2e34e4: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x2e34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x2e34e8: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x2e34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x2e34ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e34ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e34f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e34f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e34f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34F4u;
        // 0x2e34f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E34F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E34FCu;
    // 0x2e34fc: 0x0  nop
    ctx->pc = 0x2e34fcu;
    // NOP
    ctx->pc = 0x2e3500u;
}
