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

// Function: func_0032DD70
// Address: 0x32dd70 - 0x32ddf8
void func_0032DD70_0x32dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DD70_0x32dd70");
#endif

    switch (ctx->pc) {
        case 0x32dd9cu: goto label_32dd9c;
        default: break;
    }

    ctx->pc = 0x32dd70u;

    // 0x32dd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32dd74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32dd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dd78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32dd7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32dd84: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x32dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd88: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x32dd88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32dd8c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x32DD8Cu;
    {
        const bool branch_taken_0x32dd8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32dd8c) {
            ctx->pc = 0x32DD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DD8Cu;
            // 0x32dd90: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DDD0u;
            goto label_32ddd0;
        }
    }
    ctx->pc = 0x32DD94u;
    // 0x32dd94: 0xc0cb8e8  jal         func_32E3A0
    ctx->pc = 0x32DD94u;
    SET_GPR_U32(ctx, 31, 0x32DD9Cu);
    ctx->pc = 0x32E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E3A0u, 0x32DD94u, 0x32DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD9Cu;
label_32dd9c:
    // 0x32dd9c: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x32dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32dda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32dda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32dda8: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x32dda8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x32ddac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ddb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ddb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ddb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ddb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32ddb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32ddbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ddbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ddc0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x32ddc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x32ddc4: 0x80ca320  j           func_328C80
    ctx->pc = 0x32DDC4u;
    ctx->pc = 0x32DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DDC4u;
    // 0x32ddc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x32DDC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DDCCu;
    // 0x32ddcc: 0x0  nop
    ctx->pc = 0x32ddccu;
    // NOP
label_32ddd0:
    // 0x32ddd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ddd4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x32ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32ddd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32ddd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dde0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32dde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32dde4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32dde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32dde8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x32dde8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x32ddec: 0x80ca320  j           func_328C80
    ctx->pc = 0x32DDECu;
    ctx->pc = 0x32DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DDECu;
    // 0x32ddf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x32DDECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DDF4u;
    // 0x32ddf4: 0x0  nop
    ctx->pc = 0x32ddf4u;
    // NOP
    ctx->pc = 0x32ddf8u;
}
