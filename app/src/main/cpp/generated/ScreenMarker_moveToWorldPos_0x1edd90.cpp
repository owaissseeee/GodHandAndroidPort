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

// Function: ScreenMarker_moveToWorldPos
// Address: 0x1edd90 - 0x1ede38
void ScreenMarker_moveToWorldPos_0x1edd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScreenMarker_moveToWorldPos_0x1edd90");
#endif

    switch (ctx->pc) {
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede20u: goto label_1ede20;
        default: break;
    }

    ctx->pc = 0x1edd90u;

    // 0x1edd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1edd94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1edd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1edd98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1edd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1edd9c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1edd9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1edda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1edda4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1edda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda8: 0x8c42aff0  lw          $v0, -0x5010($v0)
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1eddac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1eddacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1eddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1eddb4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EDDB4u;
    {
        const bool branch_taken_0x1eddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDB4u;
        // 0x1eddb8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddb4) {
            ctx->pc = 0x1EDE20u;
            goto label_1ede20;
        }
    }
    ctx->pc = 0x1EDDBCu;
    // 0x1eddbc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1eddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eddc0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eddc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddc8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1eddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddcc: 0xc04e11c  jal         func_138470
    ctx->pc = 0x1EDDCCu;
    SET_GPR_U32(ctx, 31, 0x1EDDD4u);
    ctx->pc = 0x1EDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDCCu;
    // 0x1eddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138470u, 0x1EDDCCu, 0x1EDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDD4u;
label_1eddd4:
    // 0x1eddd4: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDDD4u;
    {
        const bool branch_taken_0x1eddd4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x1EDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDD4u;
        // 0x1eddd8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddd4) {
            ctx->pc = 0x1EDDF0u;
            goto label_1eddf0;
        }
    }
    ctx->pc = 0x1EDDDCu;
    // 0x1edddc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1edddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edde0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1edde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1edde4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1edde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1edde8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1edde8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eddec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eddecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eddf0:
    // 0x1eddf0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1eddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eddf4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1eddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eddf8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1eddf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1eddfc: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1eddfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ede00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ede00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ede04: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1ede04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ede08: 0xc0b59a0  jal         func_2D6680
    ctx->pc = 0x1EDE08u;
    SET_GPR_U32(ctx, 31, 0x1EDE10u);
    ctx->pc = 0x1EDE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE08u;
    // 0x1ede0c: 0x262402cc  addiu       $a0, $s1, 0x2CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6680u, 0x1EDE08u, 0x1EDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE10u;
label_1ede10:
    // 0x1ede10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ede10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ede14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede18: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EDE18u;
    SET_GPR_U32(ctx, 31, 0x1EDE20u);
    ctx->pc = 0x1EDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE18u;
    // 0x1ede1c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1EDE18u, 0x1EDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE20u;
label_1ede20:
    // 0x1ede20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ede20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ede24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ede24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ede28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ede28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ede2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ede2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ede30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE30u;
        // 0x1ede34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDE38u;
}
