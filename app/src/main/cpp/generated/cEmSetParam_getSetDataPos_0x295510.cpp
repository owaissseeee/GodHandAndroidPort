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

// Function: cEmSetParam_getSetDataPos
// Address: 0x295510 - 0x2955f0
void cEmSetParam_getSetDataPos_0x295510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_getSetDataPos_0x295510");
#endif

    switch (ctx->pc) {
        case 0x295530u: goto label_295530;
        default: break;
    }

    ctx->pc = 0x295510u;

    // 0x295510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295514: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x295514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295518: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29551c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295524: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x295524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x295528: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x295528u;
    SET_GPR_U32(ctx, 31, 0x295530u);
    ctx->pc = 0x29552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295528u;
    // 0x29552c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x295528u, 0x295530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295530u;
label_295530:
    // 0x295530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295534: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x295534u;
    {
        const bool branch_taken_0x295534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295534u;
        // 0x295538: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295534) {
            ctx->pc = 0x2955ACu;
            goto label_2955ac;
        }
    }
    ctx->pc = 0x29553Cu;
    // 0x29553c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x29553cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295540: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x295540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295544: 0x0  nop
    ctx->pc = 0x295544u;
    // NOP
    // 0x295548: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x295548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29554c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x29554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x295550: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x295550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x295554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x295554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295558: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x295558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29555c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x29555cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x295560: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x295560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295564: 0x0  nop
    ctx->pc = 0x295564u;
    // NOP
    // 0x295568: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x295568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29556c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x29556cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295570: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x295570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295578: 0x0  nop
    ctx->pc = 0x295578u;
    // NOP
    // 0x29557c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29557cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295580: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x295584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x295588: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x295588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29558c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x29558cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x295590: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x295590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x295594: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x295594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x295598: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x295598u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x29559c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x29559cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2955a0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2955a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2955a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2955A4u;
    {
        const bool branch_taken_0x2955a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955A4u;
        // 0x2955a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955a4) {
            ctx->pc = 0x2955BCu;
            goto label_2955bc;
        }
    }
    ctx->pc = 0x2955ACu;
label_2955ac:
    // 0x2955ac: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x2955acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x2955b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2955b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2955b4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2955b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2955b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2955bc:
    // 0x2955bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2955bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2955c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2955c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2955c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2955C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2955C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955C4u;
        // 0x2955c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2955C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2955CCu;
    // 0x2955cc: 0x0  nop
    ctx->pc = 0x2955ccu;
    // NOP
    // 0x2955d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2955d4: 0x0  nop
    ctx->pc = 0x2955d4u;
    // NOP
    // 0x2955d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2955d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2955dc: 0x0  nop
    ctx->pc = 0x2955dcu;
    // NOP
    // 0x2955e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2955e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2955e4: 0x0  nop
    ctx->pc = 0x2955e4u;
    // NOP
    // 0x2955e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2955e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2955ec: 0x0  nop
    ctx->pc = 0x2955ecu;
    // NOP
    ctx->pc = 0x2955f0u;
}
