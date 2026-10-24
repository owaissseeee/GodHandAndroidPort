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

// Function: func_002BA5E8
// Address: 0x2ba5e8 - 0x2ba648
void func_002BA5E8_0x2ba5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA5E8_0x2ba5e8");
#endif

    switch (ctx->pc) {
        case 0x2ba5e8u: goto label_2ba5e8;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f0u: goto label_2ba5f0;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5f8u: goto label_2ba5f8;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        default: break;
    }

    ctx->pc = 0x2ba5e8u;

label_2ba5e8:
    // 0x2ba5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ba5ec:
    // 0x2ba5ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5f0:
    // 0x2ba5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba5f4:
    // 0x2ba5f4: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x2ba5f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ba5f8:
    // 0x2ba5f8: 0xe4ac0114  swc1        $f12, 0x114($a1)
    ctx->pc = 0x2ba5f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
label_2ba5fc:
    // 0x2ba5fc: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x2ba5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ba600:
    // 0x2ba600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba604:
    // 0x2ba604: 0x0  nop
    ctx->pc = 0x2ba604u;
    // NOP
label_2ba608:
    // 0x2ba608: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2ba60c:
    if (ctx->pc == 0x2BA60Cu) {
        ctx->pc = 0x2BA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA608u;
        // 0x2ba60c: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA610u;
        goto label_2ba610;
    }
    ctx->pc = 0x2BA608u;
    {
        const bool branch_taken_0x2ba608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba608) {
            ctx->pc = 0x2BA60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA608u;
            // 0x2ba60c: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA628u;
            goto label_2ba628;
        }
    }
    ctx->pc = 0x2BA610u;
label_2ba610:
    // 0x2ba610: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ba610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ba614:
    // 0x2ba614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ba618:
    // 0x2ba618: 0x0  nop
    ctx->pc = 0x2ba618u;
    // NOP
label_2ba61c:
    // 0x2ba61c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ba620:
    // 0x2ba620: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x2ba620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
label_2ba624:
    // 0x2ba624: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_2ba628:
    // 0x2ba628: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2ba628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba62c:
    // 0x2ba62c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2ba62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba630:
    // 0x2ba630: 0x60f809  jalr        $v1
label_2ba634:
    if (ctx->pc == 0x2BA634u) {
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA638u;
        goto label_2ba638;
    }
    ctx->pc = 0x2BA630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA638u);
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA630u, 0x2BA638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA638u;
label_2ba638:
    // 0x2ba638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba63c:
    // 0x2ba63c: 0x3e00008  jr          $ra
label_2ba640:
    if (ctx->pc == 0x2BA640u) {
        ctx->pc = 0x2BA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA63Cu;
        // 0x2ba640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA644u;
        goto label_2ba644;
    }
    ctx->pc = 0x2BA63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA63Cu;
        // 0x2ba640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA644u;
label_2ba644:
    // 0x2ba644: 0x0  nop
    ctx->pc = 0x2ba644u;
    // NOP
    ctx->pc = 0x2ba648u;
}
