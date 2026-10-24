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

// Function: func_002DD600
// Address: 0x2dd600 - 0x2dd6c0
void func_002DD600_0x2dd600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD600_0x2dd600");
#endif

    switch (ctx->pc) {
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd658u: goto label_2dd658;
        case 0x2dd698u: goto label_2dd698;
        case 0x2dd6a8u: goto label_2dd6a8;
        default: break;
    }

    ctx->pc = 0x2dd600u;

    // 0x2dd600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd604: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd610: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD610u;
    SET_GPR_U32(ctx, 31, 0x2DD618u);
    ctx->pc = 0x2DD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD610u;
    // 0x2dd614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD610u, 0x2DD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD618u;
label_2dd618:
    // 0x2dd618: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DD618u;
    {
        const bool branch_taken_0x2dd618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD618u;
        // 0x2dd61c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd618) {
            ctx->pc = 0x2DD6A8u;
            goto label_2dd6a8;
        }
    }
    ctx->pc = 0x2DD620u;
    // 0x2dd620: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dd624: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DD624u;
    {
        const bool branch_taken_0x2dd624 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd624) {
            ctx->pc = 0x2DD628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD624u;
            // 0x2dd628: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD6ACu;
            goto label_2dd6ac;
        }
    }
    ctx->pc = 0x2DD62Cu;
    // 0x2dd62c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD62Cu;
    SET_GPR_U32(ctx, 31, 0x2DD634u);
    ctx->pc = 0x2DD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD62Cu;
    // 0x2dd630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD62Cu, 0x2DD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD634u;
label_2dd634:
    // 0x2dd634: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DD634u;
    {
        const bool branch_taken_0x2dd634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd634) {
            ctx->pc = 0x2DD638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD634u;
            // 0x2dd638: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD6ACu;
            goto label_2dd6ac;
        }
    }
    ctx->pc = 0x2DD63Cu;
    // 0x2dd63c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd640: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd644: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd648: 0x5c600018  bgtzl       $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD648u;
    {
        const bool branch_taken_0x2dd648 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd648) {
            ctx->pc = 0x2DD64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD648u;
            // 0x2dd64c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD6ACu;
            goto label_2dd6ac;
        }
    }
    ctx->pc = 0x2DD650u;
    // 0x2dd650: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD650u;
    SET_GPR_U32(ctx, 31, 0x2DD658u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD650u, 0x2DD658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD658u;
label_2dd658:
    // 0x2dd658: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD658u;
    {
        const bool branch_taken_0x2dd658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd658) {
            ctx->pc = 0x2DD65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD658u;
            // 0x2dd65c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD6ACu;
            goto label_2dd6ac;
        }
    }
    ctx->pc = 0x2DD660u;
    // 0x2dd660: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2dd660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2dd664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd66c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2dd66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2dd670: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dd670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd674: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dd674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd678: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dd678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2dd67c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2dd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2dd680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd688: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2dd688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x2dd68c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dd68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd690: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2DD690u;
    SET_GPR_U32(ctx, 31, 0x2DD698u);
    ctx->pc = 0x2DD694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD690u;
    // 0x2dd694: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2DD690u, 0x2DD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD698u;
label_2dd698:
    // 0x2dd698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6a0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD6A0u;
    SET_GPR_U32(ctx, 31, 0x2DD6A8u);
    ctx->pc = 0x2DD6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6A0u;
    // 0x2dd6a4: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD6A0u, 0x2DD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6A8u;
label_2dd6a8:
    // 0x2dd6a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd6ac:
    // 0x2dd6ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6B4u;
        // 0x2dd6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD6BCu;
    // 0x2dd6bc: 0x0  nop
    ctx->pc = 0x2dd6bcu;
    // NOP
    ctx->pc = 0x2dd6c0u;
}
