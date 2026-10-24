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

// Function: func_001F5510
// Address: 0x1f5510 - 0x1f55c0
void func_001F5510_0x1f5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F5510_0x1f5510");
#endif

    switch (ctx->pc) {
        case 0x1f553cu: goto label_1f553c;
        case 0x1f5588u: goto label_1f5588;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f55a8u: goto label_1f55a8;
        default: break;
    }

    ctx->pc = 0x1f5510u;

    // 0x1f5510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5514: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f5514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f5518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f551c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f551cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5520: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f5524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f5524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5528: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f552c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5530: 0x264430d0  addiu       $a0, $s2, 0x30D0
    ctx->pc = 0x1f5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12496));
    // 0x1f5534: 0xc0b5974  jal         func_2D65D0
    ctx->pc = 0x1F5534u;
    SET_GPR_U32(ctx, 31, 0x1F553Cu);
    ctx->pc = 0x1F5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5534u;
    // 0x1f5538: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65D0u, 0x1F5534u, 0x1F553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F553Cu;
label_1f553c:
    // 0x1f553c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1f553cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5540: 0x0  nop
    ctx->pc = 0x1f5540u;
    // NOP
    // 0x1f5544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f5544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f5548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f554c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f554cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f5550: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f5550u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5554: 0x0  nop
    ctx->pc = 0x1f5554u;
    // NOP
    // 0x1f5558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f5558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f555c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f555cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1f5560: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f5560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5564: 0x0  nop
    ctx->pc = 0x1f5564u;
    // NOP
    // 0x1f5568: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5568u;
    {
        const bool branch_taken_0x1f5568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5568) {
            ctx->pc = 0x1F556Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5568u;
            // 0x1f556c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5570u;
            goto label_1f5570;
        }
    }
    ctx->pc = 0x1F5570u;
label_1f5570:
    // 0x1f5570: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1f5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5574: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f5574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5578: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f5578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f557c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f557cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f5580: 0xc0b5968  jal         func_2D65A0
    ctx->pc = 0x1F5580u;
    SET_GPR_U32(ctx, 31, 0x1F5588u);
    ctx->pc = 0x1F5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5580u;
    // 0x1f5584: 0x264431c8  addiu       $a0, $s2, 0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65A0u, 0x1F5580u, 0x1F5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5588u;
label_1f5588:
    // 0x1f5588: 0x26442f5c  addiu       $a0, $s2, 0x2F5C
    ctx->pc = 0x1f5588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12124));
    // 0x1f558c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1f558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f5590: 0xc0b5a0e  jal         func_2D6838
    ctx->pc = 0x1F5590u;
    SET_GPR_U32(ctx, 31, 0x1F5598u);
    ctx->pc = 0x1F5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5590u;
    // 0x1f5594: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6838u, 0x1F5590u, 0x1F5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x26442fd8  addiu       $a0, $s2, 0x2FD8
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12248));
    // 0x1f559c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f55a0: 0xc0b5a0e  jal         func_2D6838
    ctx->pc = 0x1F55A0u;
    SET_GPR_U32(ctx, 31, 0x1F55A8u);
    ctx->pc = 0x1F55A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55A0u;
    // 0x1f55a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6838u, 0x1F55A0u, 0x1F55A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55A8u;
label_1f55a8:
    // 0x1f55a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f55a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f55ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f55acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f55b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f55b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f55b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f55b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F55B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55B8u;
        // 0x1f55bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F55B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F55C0u;
}
