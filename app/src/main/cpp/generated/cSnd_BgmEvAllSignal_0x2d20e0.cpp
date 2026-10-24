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

// Function: cSnd_BgmEvAllSignal
// Address: 0x2d20e0 - 0x2d2178
void cSnd_BgmEvAllSignal_0x2d20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvAllSignal_0x2d20e0");
#endif

    switch (ctx->pc) {
        case 0x2d2120u: goto label_2d2120;
        case 0x2d214cu: goto label_2d214c;
        default: break;
    }

    ctx->pc = 0x2d20e0u;

    // 0x2d20e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d20e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d20e4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d20e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d20e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d20e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d20ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d20f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d20f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d20f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d20f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d20f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d20fc: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d20fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d2100: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2100u;
    {
        const bool branch_taken_0x2d2100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2100u;
        // 0x2d2104: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2100) {
            ctx->pc = 0x2D2158u;
            goto label_2d2158;
        }
    }
    ctx->pc = 0x2D2108u;
    // 0x2d2108: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x2d2108u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x2d210c: 0x2413f7ff  addiu       $s3, $zero, -0x801
    ctx->pc = 0x2d210cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2d2110: 0x3631ff00  ori         $s1, $s1, 0xFF00
    ctx->pc = 0x2d2110u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65280);
    // 0x2d2114: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2d2114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2118: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d211c: 0x0  nop
    ctx->pc = 0x2d211cu;
    // NOP
label_2d2120:
    // 0x2d2120: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2d2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2d2124: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2124u;
    {
        const bool branch_taken_0x2d2124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2124u;
        // 0x2d2128: 0x731024  and         $v0, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2124) {
            ctx->pc = 0x2D214Cu;
            goto label_2d214c;
        }
    }
    ctx->pc = 0x2D212Cu;
    // 0x2d212c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x2d212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d2130: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2130u;
    {
        const bool branch_taken_0x2d2130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2130u;
        // 0x2d2134: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2130) {
            ctx->pc = 0x2D214Cu;
            goto label_2d214c;
        }
    }
    ctx->pc = 0x2D2138u;
    // 0x2d2138: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d213c: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D213Cu;
    {
        const bool branch_taken_0x2d213c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D213Cu;
        // 0x2d2140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d213c) {
            ctx->pc = 0x2D214Cu;
            goto label_2d214c;
        }
    }
    ctx->pc = 0x2D2144u;
    // 0x2d2144: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2D2144u;
    SET_GPR_U32(ctx, 31, 0x2D214Cu);
    ctx->pc = 0x2D2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2144u;
    // 0x2d2148: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2D2144u, 0x2D214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D214Cu;
label_2d214c:
    // 0x2d214c: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d2150: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D2150u;
    {
        const bool branch_taken_0x2d2150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2150) {
            ctx->pc = 0x2D2154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2150u;
            // 0x2d2154: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2120;
        }
    }
    ctx->pc = 0x2D2158u;
label_2d2158:
    // 0x2d2158: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d2158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d215c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d215cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2164: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d2164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d216c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2170: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2170u;
        // 0x2d2174: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2178u;
}
