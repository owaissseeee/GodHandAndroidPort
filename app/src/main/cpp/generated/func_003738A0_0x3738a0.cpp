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

// Function: func_003738A0
// Address: 0x3738a0 - 0x373938
void func_003738A0_0x3738a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003738A0_0x3738a0");
#endif

    switch (ctx->pc) {
        case 0x3738c4u: goto label_3738c4;
        case 0x3738d4u: goto label_3738d4;
        case 0x3738f8u: goto label_3738f8;
        default: break;
    }

    ctx->pc = 0x3738a0u;

    // 0x3738a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3738a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3738a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3738a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3738a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3738a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3738ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3738acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3738b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3738b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3738b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3738b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3738bc: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3738BCu;
    SET_GPR_U32(ctx, 31, 0x3738C4u);
    ctx->pc = 0x3738C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738BCu;
    // 0x3738c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3738BCu, 0x3738C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738C4u;
label_3738c4:
    // 0x3738c4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3738C4u;
    {
        const bool branch_taken_0x3738c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3738c4) {
            ctx->pc = 0x3738C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3738C4u;
            // 0x3738c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373924u;
            goto label_373924;
        }
    }
    ctx->pc = 0x3738CCu;
    // 0x3738cc: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x3738CCu;
    SET_GPR_U32(ctx, 31, 0x3738D4u);
    ctx->pc = 0x3738D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738CCu;
    // 0x3738d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x3738CCu, 0x3738D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738D4u;
label_3738d4:
    // 0x3738d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3738d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3738d8: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3738D8u;
    {
        const bool branch_taken_0x3738d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3738d8) {
            ctx->pc = 0x3738DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3738D8u;
            // 0x3738dc: 0xe6140020  swc1        $f20, 0x20($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373920u;
            goto label_373920;
        }
    }
    ctx->pc = 0x3738E0u;
    // 0x3738e0: 0x621000d  bgez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3738E0u;
    {
        const bool branch_taken_0x3738e0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3738E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738E0u;
        // 0x3738e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738e0) {
            ctx->pc = 0x373918u;
            goto label_373918;
        }
    }
    ctx->pc = 0x3738E8u;
    // 0x3738e8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3738e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3738ec: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3738ECu;
    {
        const bool branch_taken_0x3738ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3738F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738ECu;
        // 0x3738f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738ec) {
            ctx->pc = 0x373920u;
            goto label_373920;
        }
    }
    ctx->pc = 0x3738F4u;
    // 0x3738f4: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x3738f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_3738f8:
    // 0x3738f8: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x3738f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3738fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x373900: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x373900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x373904: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x373904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x373908: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x373908u;
    {
        const bool branch_taken_0x373908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373908u;
        // 0x37390c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373908) {
            ctx->pc = 0x3738F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3738f8;
        }
    }
    ctx->pc = 0x373910u;
    // 0x373910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373910u;
    {
        const bool branch_taken_0x373910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373910u;
        // 0x373914: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373910) {
            ctx->pc = 0x373924u;
            goto label_373924;
        }
    }
    ctx->pc = 0x373918u;
label_373918:
    // 0x373918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x373918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37391c: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x37391cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_373920:
    // 0x373920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373924:
    // 0x373924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37392c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x37392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373930: 0x3e00008  jr          $ra
    ctx->pc = 0x373930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373930u;
        // 0x373934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373938u;
}
