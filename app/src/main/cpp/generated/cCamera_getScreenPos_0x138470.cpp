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

// Function: cCamera_getScreenPos
// Address: 0x138470 - 0x138528
void cCamera_getScreenPos_0x138470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_getScreenPos_0x138470");
#endif

    switch (ctx->pc) {
        case 0x13848cu: goto label_13848c;
        default: break;
    }

    ctx->pc = 0x138470u;

    // 0x138470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138474: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x138474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x138478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13847c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x138480: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x138480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138484: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x138484u;
    SET_GPR_U32(ctx, 31, 0x13848Cu);
    ctx->pc = 0x138488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138484u;
    // 0x138488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x138484u, 0x13848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13848Cu;
label_13848c:
    // 0x13848c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x13848cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x138490: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x138490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x138494: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x138494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x138498: 0x8ca3118c  lw          $v1, 0x118C($a1)
    ctx->pc = 0x138498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x13849c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x13849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1384a0: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1384a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1384a4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1384a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1384a8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1384ac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1384acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1384b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1384b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1384b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1384b8: 0x0  nop
    ctx->pc = 0x1384b8u;
    // NOP
    // 0x1384bc: 0x0  nop
    ctx->pc = 0x1384bcu;
    // NOP
    // 0x1384c0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1384c0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x1384c4: 0x0  nop
    ctx->pc = 0x1384c4u;
    // NOP
    // 0x1384c8: 0x0  nop
    ctx->pc = 0x1384c8u;
    // NOP
    // 0x1384cc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1384ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x1384d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1384d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1384d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1384d8: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x1384d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x1384dc: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x1384e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1384e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1384e4: 0x0  nop
    ctx->pc = 0x1384e4u;
    // NOP
    // 0x1384e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1384e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1384ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1384ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1384f0: 0x0  nop
    ctx->pc = 0x1384f0u;
    // NOP
    // 0x1384f4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1384f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1384f8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1384f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1384fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1384fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x138500: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x138500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x138504: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x138504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x138508: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x138508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13850c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13850cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138510: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x138510u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13851c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138520: 0x3e00008  jr          $ra
    ctx->pc = 0x138520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138520u;
        // 0x138524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138528u;
}
