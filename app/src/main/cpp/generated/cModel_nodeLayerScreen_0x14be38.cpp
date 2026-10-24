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

// Function: cModel_nodeLayerScreen
// Address: 0x14be38 - 0x14bef8
void cModel_nodeLayerScreen_0x14be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_nodeLayerScreen_0x14be38");
#endif

    ctx->pc = 0x14be38u;

    // 0x14be38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14be38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be3c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14be3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be40: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x14be44: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14be48: 0x8d030380  lw          $v1, 0x380($t0)
    ctx->pc = 0x14be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x14be4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x14be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14be50: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14be54: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x14be58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14be58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14be5c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x14BE5Cu;
    {
        const bool branch_taken_0x14be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE5Cu;
        // 0x14be60: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be5c) {
            ctx->pc = 0x14BED0u;
            goto label_14bed0;
        }
    }
    ctx->pc = 0x14BE64u;
    // 0x14be64: 0x90c202b6  lbu         $v0, 0x2B6($a2)
    ctx->pc = 0x14be64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 694)));
    // 0x14be68: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14be6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14be6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14be70: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14be70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14be74: 0x0  nop
    ctx->pc = 0x14be74u;
    // NOP
    // 0x14be78: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14be78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14be7c: 0x90c302b7  lbu         $v1, 0x2B7($a2)
    ctx->pc = 0x14be7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 695)));
    // 0x14be80: 0x90c202bc  lbu         $v0, 0x2BC($a2)
    ctx->pc = 0x14be80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 700)));
    // 0x14be84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14be84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14be88: 0x0  nop
    ctx->pc = 0x14be88u;
    // NOP
    // 0x14be8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14be8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14be90: 0xc4c0024c  lwc1        $f0, 0x24C($a2)
    ctx->pc = 0x14be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14be94: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x14be94u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[3]);
    // 0x14be98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14be9c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14be9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14bea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14bea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bea4: 0x0  nop
    ctx->pc = 0x14bea4u;
    // NOP
    // 0x14bea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14bea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14beac: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14beacu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x14beb0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x14beb0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x14beb4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x14beb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x14beb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14beb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14bebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14bebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bec0: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x14bec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bec4: 0x0  nop
    ctx->pc = 0x14bec4u;
    // NOP
    // 0x14bec8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14BEC8u;
    {
        const bool branch_taken_0x14bec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bec8) {
            ctx->pc = 0x14BECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BEC8u;
            // 0x14becc: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BED0u;
            goto label_14bed0;
        }
    }
    ctx->pc = 0x14BED0u;
label_14bed0:
    // 0x14bed0: 0x8d020380  lw          $v0, 0x380($t0)
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x14bed4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x14bed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14bed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14bedc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BEDCu;
    {
        const bool branch_taken_0x14bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEDCu;
        // 0x14bee0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bedc) {
            ctx->pc = 0x14BEF0u;
            goto label_14bef0;
        }
    }
    ctx->pc = 0x14BEE4u;
    // 0x14bee4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14bee8: 0x8c437aa8  lw          $v1, 0x7AA8($v0)
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
    // 0x14beec: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x14beecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_14bef0:
    // 0x14bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x14BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEF0u;
        // 0x14bef4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BEF8u;
}
