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

// Function: func_002BA650
// Address: 0x2ba650 - 0x2ba6b0
void func_002BA650_0x2ba650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA650_0x2ba650");
#endif

    switch (ctx->pc) {
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        default: break;
    }

    ctx->pc = 0x2ba650u;

label_2ba650:
    // 0x2ba650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ba654:
    // 0x2ba654: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba658:
    // 0x2ba658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba65c:
    // 0x2ba65c: 0xe4ac0110  swc1        $f12, 0x110($a1)
    ctx->pc = 0x2ba65cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
label_2ba660:
    // 0x2ba660: 0xc4a00114  lwc1        $f0, 0x114($a1)
    ctx->pc = 0x2ba660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ba664:
    // 0x2ba664: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ba664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ba668:
    // 0x2ba668: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2ba668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba66c:
    // 0x2ba66c: 0x0  nop
    ctx->pc = 0x2ba66cu;
    // NOP
label_2ba670:
    // 0x2ba670: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2ba674:
    if (ctx->pc == 0x2BA674u) {
        ctx->pc = 0x2BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA670u;
        // 0x2ba674: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA678u;
        goto label_2ba678;
    }
    ctx->pc = 0x2BA670u;
    {
        const bool branch_taken_0x2ba670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba670) {
            ctx->pc = 0x2BA674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA670u;
            // 0x2ba674: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA690u;
            goto label_2ba690;
        }
    }
    ctx->pc = 0x2BA678u;
label_2ba678:
    // 0x2ba678: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ba678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ba67c:
    // 0x2ba67c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ba680:
    // 0x2ba680: 0x0  nop
    ctx->pc = 0x2ba680u;
    // NOP
label_2ba684:
    // 0x2ba684: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2ba684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2ba688:
    // 0x2ba688: 0xe4a00114  swc1        $f0, 0x114($a1)
    ctx->pc = 0x2ba688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
label_2ba68c:
    // 0x2ba68c: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2ba68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_2ba690:
    // 0x2ba690: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2ba690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba694:
    // 0x2ba694: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2ba694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba698:
    // 0x2ba698: 0x60f809  jalr        $v1
label_2ba69c:
    if (ctx->pc == 0x2BA69Cu) {
        ctx->pc = 0x2BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA698u;
        // 0x2ba69c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6A0u;
        goto label_2ba6a0;
    }
    ctx->pc = 0x2BA698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA6A0u);
        ctx->pc = 0x2BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA698u;
        // 0x2ba69c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA698u, 0x2BA6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA6A0u;
label_2ba6a0:
    // 0x2ba6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba6a4:
    // 0x2ba6a4: 0x3e00008  jr          $ra
label_2ba6a8:
    if (ctx->pc == 0x2BA6A8u) {
        ctx->pc = 0x2BA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6A4u;
        // 0x2ba6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6ACu;
        goto label_2ba6ac;
    }
    ctx->pc = 0x2BA6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6A4u;
        // 0x2ba6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA6ACu;
label_2ba6ac:
    // 0x2ba6ac: 0x0  nop
    ctx->pc = 0x2ba6acu;
    // NOP
    ctx->pc = 0x2ba6b0u;
}
