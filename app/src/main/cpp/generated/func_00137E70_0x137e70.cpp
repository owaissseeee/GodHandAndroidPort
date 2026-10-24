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

// Function: func_00137E70
// Address: 0x137e70 - 0x137f38
void func_00137E70_0x137e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00137E70_0x137e70");
#endif

    switch (ctx->pc) {
        case 0x137ec0u: goto label_137ec0;
        case 0x137ed0u: goto label_137ed0;
        case 0x137ee0u: goto label_137ee0;
        case 0x137eecu: goto label_137eec;
        case 0x137ef4u: goto label_137ef4;
        default: break;
    }

    ctx->pc = 0x137e70u;

    // 0x137e70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137e74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x137e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x137e78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x137e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x137e7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x137e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x137e84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x137e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e88: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x137e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x137e8c: 0x8c920030  lw          $s2, 0x30($a0)
    ctx->pc = 0x137e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x137e90: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x137e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x137e94: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x137e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137e9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137ea0: 0x2443d880  addiu       $v1, $v0, -0x2780
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x137ea4: 0xc440d880  lwc1        $f0, -0x2780($v0)
    ctx->pc = 0x137ea4u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ea8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x137ea8u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137eac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137eb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x137eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137eb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x137eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x137eb8: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x137EB8u;
    SET_GPR_U32(ctx, 31, 0x137EC0u);
    ctx->pc = 0x137EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EB8u;
    // 0x137ebc: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x137EB8u, 0x137EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EC0u;
label_137ec0:
    // 0x137ec0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137ec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x137ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ec8: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x137EC8u;
    SET_GPR_U32(ctx, 31, 0x137ED0u);
    ctx->pc = 0x137ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EC8u;
    // 0x137ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x137EC8u, 0x137ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ED0u;
label_137ed0:
    // 0x137ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ed4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137ed8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x137ED8u;
    SET_GPR_U32(ctx, 31, 0x137EE0u);
    ctx->pc = 0x137EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137ED8u;
    // 0x137edc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x137ED8u, 0x137EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EE0u;
label_137ee0:
    // 0x137ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ee4: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x137EE4u;
    SET_GPR_U32(ctx, 31, 0x137EECu);
    ctx->pc = 0x137EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EE4u;
    // 0x137ee8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x137EE4u, 0x137EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EECu;
label_137eec:
    // 0x137eec: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x137EECu;
    SET_GPR_U32(ctx, 31, 0x137EF4u);
    ctx->pc = 0x137EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EECu;
    // 0x137ef0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x137EECu, 0x137EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EF4u;
label_137ef4:
    // 0x137ef4: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x137ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137ef8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137efc: 0x0  nop
    ctx->pc = 0x137efcu;
    // NOP
    // 0x137f00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x137F00u;
    {
        const bool branch_taken_0x137f00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F00u;
        // 0x137f04: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f00) {
            ctx->pc = 0x137F1Cu;
            goto label_137f1c;
        }
    }
    ctx->pc = 0x137F08u;
    // 0x137f08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x137f0c: 0x0  nop
    ctx->pc = 0x137f0cu;
    // NOP
    // 0x137f10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x137f10u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x137f14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137F14u;
    {
        const bool branch_taken_0x137f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F14u;
        // 0x137f18: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f14) {
            ctx->pc = 0x137F24u;
            goto label_137f24;
        }
    }
    ctx->pc = 0x137F1Cu;
label_137f1c:
    // 0x137f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137f20: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x137f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137f24:
    // 0x137f24: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x137f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x137f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x137F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F2Cu;
        // 0x137f30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F34u;
    // 0x137f34: 0x0  nop
    ctx->pc = 0x137f34u;
    // NOP
    ctx->pc = 0x137f38u;
}
