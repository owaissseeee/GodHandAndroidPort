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

// Function: func_001582A0
// Address: 0x1582a0 - 0x158328
void func_001582A0_0x1582a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001582A0_0x1582a0");
#endif

    switch (ctx->pc) {
        case 0x158304u: goto label_158304;
        case 0x15830cu: goto label_15830c;
        default: break;
    }

    ctx->pc = 0x1582a0u;

    // 0x1582a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1582a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1582a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1582a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1582ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1582acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582b0: 0x8e020428  lw          $v0, 0x428($s0)
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x1582b4: 0x14450011  bne         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1582B4u;
    {
        const bool branch_taken_0x1582b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1582B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582B4u;
        // 0x1582b8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582b4) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x1582BCu;
    // 0x1582bc: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x1582bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x1582c0: 0x1446000e  bne         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1582C0u;
    {
        const bool branch_taken_0x1582c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1582C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C0u;
        // 0x1582c4: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582c0) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x1582C8u;
    // 0x1582c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C8u;
        // 0x1582cc: 0xc6010440  lwc1        $f1, 0x440($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x1582ECu;
            goto label_1582ec;
        }
    }
    ctx->pc = 0x1582D0u;
    // 0x1582d0: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x1582d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x1582d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1582d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1582d8: 0x0  nop
    ctx->pc = 0x1582d8u;
    // NOP
    // 0x1582dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1582DCu;
    {
        const bool branch_taken_0x1582dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1582dc) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x1582E4u;
    // 0x1582e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1582E4u;
    {
        const bool branch_taken_0x1582e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582e4) {
            ctx->pc = 0x158304u;
            goto label_158304;
        }
    }
    ctx->pc = 0x1582ECu;
label_1582ec:
    // 0x1582ec: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x1582ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1582f0: 0x0  nop
    ctx->pc = 0x1582f0u;
    // NOP
    // 0x1582f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1582F4u;
    {
        const bool branch_taken_0x1582f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1582f4) {
            ctx->pc = 0x158304u;
            goto label_158304;
        }
    }
    ctx->pc = 0x1582FCu;
label_1582fc:
    // 0x1582fc: 0xc055d5a  jal         func_157568
    ctx->pc = 0x1582FCu;
    SET_GPR_U32(ctx, 31, 0x158304u);
    ctx->pc = 0x158300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582FCu;
    // 0x158300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x1582FCu, 0x158304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158304u;
label_158304:
    // 0x158304: 0xc055f06  jal         func_157C18
    ctx->pc = 0x158304u;
    SET_GPR_U32(ctx, 31, 0x15830Cu);
    ctx->pc = 0x158308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158304u;
    // 0x158308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x158304u, 0x15830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15830Cu;
label_15830c:
    // 0x15830c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15830cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158314: 0x3e00008  jr          $ra
    ctx->pc = 0x158314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158314u;
        // 0x158318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15831Cu;
    // 0x15831c: 0x0  nop
    ctx->pc = 0x15831cu;
    // NOP
    // 0x158320: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158324: 0x0  nop
    ctx->pc = 0x158324u;
    // NOP
    ctx->pc = 0x158328u;
}
