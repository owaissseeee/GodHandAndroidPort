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

// Function: InitStructDefaults_137AA0
// Address: 0x137aa0 - 0x137ae8
void InitStructDefaults_137AA0_0x137aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStructDefaults_137AA0_0x137aa0");
#endif

    switch (ctx->pc) {
        case 0x137ac8u: goto label_137ac8;
        default: break;
    }

    ctx->pc = 0x137aa0u;

    // 0x137aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137aac: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x137aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x137ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ab8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x137ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x137abc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x137ac0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x137AC0u;
    SET_GPR_U32(ctx, 31, 0x137AC8u);
    ctx->pc = 0x137AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AC0u;
    // 0x137ac4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x137AC0u, 0x137AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AC8u;
label_137ac8:
    // 0x137ac8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x137ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x137acc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x137accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x137ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ad8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x137ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x137adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x137AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AE0u;
        // 0x137ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137AE8u;
}
