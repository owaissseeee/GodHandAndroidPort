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

// Function: cE3_setEnding
// Address: 0x201e80 - 0x201f20
void cE3_setEnding_0x201e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cE3_setEnding_0x201e80");
#endif

    switch (ctx->pc) {
        case 0x201ec8u: goto label_201ec8;
        case 0x201ef0u: goto label_201ef0;
        default: break;
    }

    ctx->pc = 0x201e80u;

    // 0x201e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201e84: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x201e88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x201e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x201e8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x201e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x201e90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x201e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x201e94: 0x24f07a84  addiu       $s0, $a3, 0x7A84
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 31364));
    // 0x201e98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x201e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x201e9c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x201e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x201ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ea8: 0x8ce37a84  lw          $v1, 0x7A84($a3)
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x201eac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x201eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201eb0: 0x8e06fff4  lw          $a2, -0xC($s0)
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A78u));
    // 0x201eb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201eb8: 0xace37a84  sw          $v1, 0x7A84($a3)
    ctx->pc = 0x201eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A84u, _value); } while (0);
    // 0x201ebc: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x201ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x201ec0: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x201EC0u;
    SET_GPR_U32(ctx, 31, 0x201EC8u);
    ctx->pc = 0x201EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EC0u;
    // 0x201ec4: 0xae06fff4  sw          $a2, -0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x201EC0u, 0x201EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EC8u;
label_201ec8:
    // 0x201ec8: 0x8e03fff4  lw          $v1, -0xC($s0)
    ctx->pc = 0x201ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x201ecc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x201eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x201ed0: 0x8e02ffa0  lw          $v0, -0x60($s0)
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
    // 0x201ed4: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x201ed8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x201ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x201edc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x201ee0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x201ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x201ee4: 0xae03fff4  sw          $v1, -0xC($s0)
    ctx->pc = 0x201ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 3));
    // 0x201ee8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x201EE8u;
    SET_GPR_U32(ctx, 31, 0x201EF0u);
    ctx->pc = 0x201EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EE8u;
    // 0x201eec: 0xae02ffa0  sw          $v0, -0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x201EE8u, 0x201EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EF0u;
label_201ef0:
    // 0x201ef0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x201ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x201ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201efc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x201efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f00: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x201f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x201f04: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x201f04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x201f08: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x201f08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x201f0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x201f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201f10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x201f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f18: 0x3e00008  jr          $ra
    ctx->pc = 0x201F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F18u;
        // 0x201f1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F20u;
}
