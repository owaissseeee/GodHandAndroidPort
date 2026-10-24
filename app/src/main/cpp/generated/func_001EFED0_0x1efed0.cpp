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

// Function: func_001EFED0
// Address: 0x1efed0 - 0x1efff8
void func_001EFED0_0x1efed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EFED0_0x1efed0");
#endif

    switch (ctx->pc) {
        case 0x1eff38u: goto label_1eff38;
        case 0x1eff64u: goto label_1eff64;
        case 0x1eff80u: goto label_1eff80;
        case 0x1eff98u: goto label_1eff98;
        case 0x1effb0u: goto label_1effb0;
        case 0x1effccu: goto label_1effcc;
        default: break;
    }

    ctx->pc = 0x1efed0u;

    // 0x1efed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1efed4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1efed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1efed8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1efed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1efedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efee0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1efee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1efee4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1efee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efee8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1efee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1efeec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efef4: 0x8e230bc8  lw          $v1, 0xBC8($s1)
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
    // 0x1efef8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1efef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1efefc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EFEFCu;
    {
        const bool branch_taken_0x1efefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEFCu;
        // 0x1eff00: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efefc) {
            ctx->pc = 0x1EFFD8u;
            goto label_1effd8;
        }
    }
    ctx->pc = 0x1EFF04u;
    // 0x1eff04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1eff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eff08: 0x26330bb0  addiu       $s3, $s1, 0xBB0
    ctx->pc = 0x1eff08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2992));
    // 0x1eff0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1eff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1eff10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eff14: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EFF14u;
    {
        const bool branch_taken_0x1eff14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF14u;
        // 0x1eff18: 0x24050057  addiu       $a1, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff14) {
            ctx->pc = 0x1EFFCCu;
            goto label_1effcc;
        }
    }
    ctx->pc = 0x1EFF1Cu;
    // 0x1eff1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eff20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eff20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eff24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eff28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eff2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff30: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1EFF30u;
    SET_GPR_U32(ctx, 31, 0x1EFF38u);
    ctx->pc = 0x1EFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF30u;
    // 0x1eff34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1EFF30u, 0x1EFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF38u;
label_1eff38:
    // 0x1eff38: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1eff38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eff3c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eff40: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1eff44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1eff44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff48: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1eff48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1eff4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eff50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff54: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x1eff54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1eff58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eff58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff5c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EFF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFF64u);
    ctx->pc = 0x1EFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF5Cu;
    // 0x1eff60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EFF5Cu, 0x1EFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF64u;
label_1eff64:
    // 0x1eff64: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x1eff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x1eff68: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1eff68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eff6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eff70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff78: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EFF78u;
    SET_GPR_U32(ctx, 31, 0x1EFF80u);
    ctx->pc = 0x1EFF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF78u;
    // 0x1eff7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EFF78u, 0x1EFF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF80u;
label_1eff80:
    // 0x1eff80: 0x8e230bc8  lw          $v1, 0xBC8($s1)
    ctx->pc = 0x1eff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
    // 0x1eff84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eff84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eff88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eff8c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1eff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1eff90: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x1EFF90u;
    SET_GPR_U32(ctx, 31, 0x1EFF98u);
    ctx->pc = 0x1EFF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF90u;
    // 0x1eff94: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x1EFF90u, 0x1EFF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF98u;
label_1eff98:
    // 0x1eff98: 0x8e220bc8  lw          $v0, 0xBC8($s1)
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
    // 0x1eff9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1effa4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1effa8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1EFFA8u;
    SET_GPR_U32(ctx, 31, 0x1EFFB0u);
    ctx->pc = 0x1EFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFA8u;
    // 0x1effac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1EFFA8u, 0x1EFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFB0u;
label_1effb0:
    // 0x1effb0: 0x8e220bc8  lw          $v0, 0xBC8($s1)
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
    // 0x1effb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1effb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1effb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1effbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1effbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1effc0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1effc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1effc4: 0xc07f5c6  jal         func_1FD718
    ctx->pc = 0x1EFFC4u;
    SET_GPR_U32(ctx, 31, 0x1EFFCCu);
    ctx->pc = 0x1EFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFC4u;
    // 0x1effc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x1EFFC4u, 0x1EFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFCCu;
label_1effcc:
    // 0x1effcc: 0x8e220bc8  lw          $v0, 0xBC8($s1)
    ctx->pc = 0x1effccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
    // 0x1effd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1effd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1effd4: 0xae220bc8  sw          $v0, 0xBC8($s1)
    ctx->pc = 0x1effd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3016), GPR_U32(ctx, 2));
label_1effd8:
    // 0x1effd8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1effd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1effdc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1effdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1effe0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1effe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1effe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1effe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1effe8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1effe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1effec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1effecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFF0u;
        // 0x1efff4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFFF8u;
}
