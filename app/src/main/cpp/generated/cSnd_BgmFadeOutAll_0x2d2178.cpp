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

// Function: cSnd_BgmFadeOutAll
// Address: 0x2d2178 - 0x2d2228
void cSnd_BgmFadeOutAll_0x2d2178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmFadeOutAll_0x2d2178");
#endif

    switch (ctx->pc) {
        case 0x2d21b0u: goto label_2d21b0;
        case 0x2d21d0u: goto label_2d21d0;
        case 0x2d21e8u: goto label_2d21e8;
        case 0x2d21f8u: goto label_2d21f8;
        default: break;
    }

    ctx->pc = 0x2d2178u;

    // 0x2d2178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d217c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d2180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2184: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d2184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2188: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d218c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d218cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2190: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d2190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d2194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2198: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d219c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d219cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d21a0: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D21A0u;
    {
        const bool branch_taken_0x2d21a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21A0u;
        // 0x2d21a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21a0) {
            ctx->pc = 0x2D2204u;
            goto label_2d2204;
        }
    }
    ctx->pc = 0x2D21A8u;
    // 0x2d21a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d21a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d21ac: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2d21b0:
    // 0x2d21b0: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d21b4: 0x54520011  bnel        $v0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D21B4u;
    {
        const bool branch_taken_0x2d21b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d21b4) {
            ctx->pc = 0x2D21B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21B4u;
            // 0x2d21b8: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21FCu;
            goto label_2d21fc;
        }
    }
    ctx->pc = 0x2D21BCu;
    // 0x2d21bc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d21c0: 0x5051000e  beql        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D21C0u;
    {
        const bool branch_taken_0x2d21c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d21c0) {
            ctx->pc = 0x2D21C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21C0u;
            // 0x2d21c4: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21FCu;
            goto label_2d21fc;
        }
    }
    ctx->pc = 0x2D21C8u;
    // 0x2d21c8: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x2D21C8u;
    SET_GPR_U32(ctx, 31, 0x2D21D0u);
    ctx->pc = 0x2D21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21C8u;
    // 0x2d21cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x2D21C8u, 0x2D21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21D0u;
label_2d21d0:
    // 0x2d21d0: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D21D0u;
    {
        const bool branch_taken_0x2d21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21D0u;
        // 0x2d21d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21d0) {
            ctx->pc = 0x2D21F0u;
            goto label_2d21f0;
        }
    }
    ctx->pc = 0x2D21D8u;
    // 0x2d21d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2d21d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2d21dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d21dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d21e0: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D21E0u;
    SET_GPR_U32(ctx, 31, 0x2D21E8u);
    ctx->pc = 0x2D21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21E0u;
    // 0x2d21e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D21E0u, 0x2D21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21E8u;
label_2d21e8:
    // 0x2d21e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E8u;
        // 0x2d21ec: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D21FCu;
            goto label_2d21fc;
        }
    }
    ctx->pc = 0x2D21F0u;
label_2d21f0:
    // 0x2d21f0: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D21F0u;
    SET_GPR_U32(ctx, 31, 0x2D21F8u);
    ctx->pc = 0x2D21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21F0u;
    // 0x2d21f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D21F0u, 0x2D21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21F8u;
label_2d21f8:
    // 0x2d21f8: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d21fc:
    // 0x2d21fc: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D21FCu;
    {
        const bool branch_taken_0x2d21fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d21fc) {
            ctx->pc = 0x2D2200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21FCu;
            // 0x2d2200: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d21b0;
        }
    }
    ctx->pc = 0x2D2204u;
label_2d2204:
    // 0x2d2204: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d2204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2208: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d2208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d220c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d220cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2210: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d2210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2218: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d221c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D221Cu;
        // 0x2d2220: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2224u;
    // 0x2d2224: 0x0  nop
    ctx->pc = 0x2d2224u;
    // NOP
    ctx->pc = 0x2d2228u;
}
