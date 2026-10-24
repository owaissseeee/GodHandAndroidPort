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

// Function: func_001F55C0
// Address: 0x1f55c0 - 0x1f5650
void func_001F55C0_0x1f55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F55C0_0x1f55c0");
#endif

    switch (ctx->pc) {
        case 0x1f55ecu: goto label_1f55ec;
        case 0x1f55fcu: goto label_1f55fc;
        case 0x1f5638u: goto label_1f5638;
        default: break;
    }

    ctx->pc = 0x1f55c0u;

    // 0x1f55c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f55c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f55c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f55c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f55cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f55ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f55d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f55d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f55d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f55d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f55dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f55e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55e4: 0xc0b5974  jal         func_2D65D0
    ctx->pc = 0x1F55E4u;
    SET_GPR_U32(ctx, 31, 0x1F55ECu);
    ctx->pc = 0x1F55E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55E4u;
    // 0x1f55e8: 0x260430d0  addiu       $a0, $s0, 0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65D0u, 0x1F55E4u, 0x1F55ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55ECu;
label_1f55ec:
    // 0x1f55ec: 0x261031c8  addiu       $s0, $s0, 0x31C8
    ctx->pc = 0x1f55ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12744));
    // 0x1f55f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55f4: 0xc0b5974  jal         func_2D65D0
    ctx->pc = 0x1F55F4u;
    SET_GPR_U32(ctx, 31, 0x1F55FCu);
    ctx->pc = 0x1F55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55F4u;
    // 0x1f55f8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65D0u, 0x1F55F4u, 0x1F55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55FCu;
label_1f55fc:
    // 0x1f55fc: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1f55fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f5600: 0x0  nop
    ctx->pc = 0x1f5600u;
    // NOP
    // 0x1f5604: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f5604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f5608: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1f5608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f560c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1f560cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5610: 0x0  nop
    ctx->pc = 0x1f5610u;
    // NOP
    // 0x1f5614: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f5614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5618: 0x0  nop
    ctx->pc = 0x1f5618u;
    // NOP
    // 0x1f561c: 0x0  nop
    ctx->pc = 0x1f561cu;
    // NOP
    // 0x1f5620: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f5620u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1f5624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f5624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f5628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f562c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f562cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f5630: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1F5630u;
    SET_GPR_U32(ctx, 31, 0x1F5638u);
    ctx->pc = 0x1F5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5630u;
    // 0x1f5634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1F5630u, 0x1F5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5638u;
label_1f5638:
    // 0x1f5638: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f5638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f563c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f563cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5648: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5648u;
        // 0x1f564c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5650u;
}
