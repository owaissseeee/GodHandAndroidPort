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

// Function: func_002DD6C0
// Address: 0x2dd6c0 - 0x2dd7b0
void func_002DD6C0_0x2dd6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD6C0_0x2dd6c0");
#endif

    switch (ctx->pc) {
        case 0x2dd6d8u: goto label_2dd6d8;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd718u: goto label_2dd718;
        case 0x2dd788u: goto label_2dd788;
        case 0x2dd798u: goto label_2dd798;
        default: break;
    }

    ctx->pc = 0x2dd6c0u;

    // 0x2dd6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd6c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd6d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD6D0u;
    SET_GPR_U32(ctx, 31, 0x2DD6D8u);
    ctx->pc = 0x2DD6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6D0u;
    // 0x2dd6d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD6D0u, 0x2DD6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6D8u;
label_2dd6d8:
    // 0x2dd6d8: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DD6D8u;
    {
        const bool branch_taken_0x2dd6d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6D8u;
        // 0x2dd6dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6d8) {
            ctx->pc = 0x2DD798u;
            goto label_2dd798;
        }
    }
    ctx->pc = 0x2DD6E0u;
    // 0x2dd6e0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd6e4: 0x5840002d  blezl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DD6E4u;
    {
        const bool branch_taken_0x2dd6e4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd6e4) {
            ctx->pc = 0x2DD6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD6E4u;
            // 0x2dd6e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD79Cu;
            goto label_2dd79c;
        }
    }
    ctx->pc = 0x2DD6ECu;
    // 0x2dd6ec: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD6ECu;
    SET_GPR_U32(ctx, 31, 0x2DD6F4u);
    ctx->pc = 0x2DD6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6ECu;
    // 0x2dd6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD6ECu, 0x2DD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6F4u;
label_2dd6f4:
    // 0x2dd6f4: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DD6F4u;
    {
        const bool branch_taken_0x2dd6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6f4) {
            ctx->pc = 0x2DD6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD6F4u;
            // 0x2dd6f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD79Cu;
            goto label_2dd79c;
        }
    }
    ctx->pc = 0x2DD6FCu;
    // 0x2dd6fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd700: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd704: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd704u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd708: 0x5c600024  bgtzl       $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DD708u;
    {
        const bool branch_taken_0x2dd708 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd708) {
            ctx->pc = 0x2DD70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD708u;
            // 0x2dd70c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD79Cu;
            goto label_2dd79c;
        }
    }
    ctx->pc = 0x2DD710u;
    // 0x2dd710: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD710u;
    SET_GPR_U32(ctx, 31, 0x2DD718u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD710u, 0x2DD718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD718u;
label_2dd718:
    // 0x2dd718: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DD718u;
    {
        const bool branch_taken_0x2dd718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd718) {
            ctx->pc = 0x2DD71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD718u;
            // 0x2dd71c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD79Cu;
            goto label_2dd79c;
        }
    }
    ctx->pc = 0x2DD720u;
    // 0x2dd720: 0xc6020770  lwc1        $f2, 0x770($s0)
    ctx->pc = 0x2dd720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd728: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd72c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dd72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd730: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dd730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd734: 0x0  nop
    ctx->pc = 0x2dd734u;
    // NOP
    // 0x2dd738: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD738u;
    {
        const bool branch_taken_0x2dd738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD738u;
        // 0x2dd73c: 0xe601054c  swc1        $f1, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd738) {
            ctx->pc = 0x2DD75Cu;
            goto label_2dd75c;
        }
    }
    ctx->pc = 0x2DD740u;
    // 0x2dd740: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2dd740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2dd744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd748: 0x0  nop
    ctx->pc = 0x2dd748u;
    // NOP
    // 0x2dd74c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2dd74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd750: 0x0  nop
    ctx->pc = 0x2dd750u;
    // NOP
    // 0x2dd754: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD754u;
    {
        const bool branch_taken_0x2dd754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd754) {
            ctx->pc = 0x2DD758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD754u;
            // 0x2dd758: 0xe6000770  swc1        $f0, 0x770($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1904), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD75Cu;
            goto label_2dd75c;
        }
    }
    ctx->pc = 0x2DD75Cu;
label_2dd75c:
    // 0x2dd75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd760: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2dd760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2dd764: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd768: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd76c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd770: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd77c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd77cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd780: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD780u;
    SET_GPR_U32(ctx, 31, 0x2DD788u);
    ctx->pc = 0x2DD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD780u;
    // 0x2dd784: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD780u, 0x2DD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD788u;
label_2dd788:
    // 0x2dd788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd78c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd790: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD790u;
    SET_GPR_U32(ctx, 31, 0x2DD798u);
    ctx->pc = 0x2DD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD790u;
    // 0x2dd794: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD790u, 0x2DD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD798u;
label_2dd798:
    // 0x2dd798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd79c:
    // 0x2dd79c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A4u;
        // 0x2dd7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD7ACu;
    // 0x2dd7ac: 0x0  nop
    ctx->pc = 0x2dd7acu;
    // NOP
    ctx->pc = 0x2dd7b0u;
}
