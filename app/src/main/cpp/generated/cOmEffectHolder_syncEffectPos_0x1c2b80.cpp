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

// Function: cOmEffectHolder_syncEffectPos
// Address: 0x1c2b80 - 0x1c2c00
void cOmEffectHolder_syncEffectPos_0x1c2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmEffectHolder_syncEffectPos_0x1c2b80");
#endif

    switch (ctx->pc) {
        case 0x1c2b80u: goto label_1c2b80;
        case 0x1c2b84u: goto label_1c2b84;
        case 0x1c2b88u: goto label_1c2b88;
        case 0x1c2b8cu: goto label_1c2b8c;
        case 0x1c2b90u: goto label_1c2b90;
        case 0x1c2b94u: goto label_1c2b94;
        case 0x1c2b98u: goto label_1c2b98;
        case 0x1c2b9cu: goto label_1c2b9c;
        case 0x1c2ba0u: goto label_1c2ba0;
        case 0x1c2ba4u: goto label_1c2ba4;
        case 0x1c2ba8u: goto label_1c2ba8;
        case 0x1c2bacu: goto label_1c2bac;
        case 0x1c2bb0u: goto label_1c2bb0;
        case 0x1c2bb4u: goto label_1c2bb4;
        case 0x1c2bb8u: goto label_1c2bb8;
        case 0x1c2bbcu: goto label_1c2bbc;
        case 0x1c2bc0u: goto label_1c2bc0;
        case 0x1c2bc4u: goto label_1c2bc4;
        case 0x1c2bc8u: goto label_1c2bc8;
        case 0x1c2bccu: goto label_1c2bcc;
        case 0x1c2bd0u: goto label_1c2bd0;
        case 0x1c2bd4u: goto label_1c2bd4;
        case 0x1c2bd8u: goto label_1c2bd8;
        case 0x1c2bdcu: goto label_1c2bdc;
        case 0x1c2be0u: goto label_1c2be0;
        case 0x1c2be4u: goto label_1c2be4;
        case 0x1c2be8u: goto label_1c2be8;
        case 0x1c2becu: goto label_1c2bec;
        case 0x1c2bf0u: goto label_1c2bf0;
        case 0x1c2bf4u: goto label_1c2bf4;
        case 0x1c2bf8u: goto label_1c2bf8;
        case 0x1c2bfcu: goto label_1c2bfc;
        default: break;
    }

    ctx->pc = 0x1c2b80u;

label_1c2b80:
    // 0x1c2b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2b84:
    // 0x1c2b84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c2b88:
    // 0x1c2b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b8c:
    // 0x1c2b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c2b90:
    // 0x1c2b90: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c2b94:
    // 0x1c2b94: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c2b98:
    // 0x1c2b98: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c2b9c:
    // 0x1c2b9c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c2ba0:
    // 0x1c2ba0: 0x40f809  jalr        $v0
label_1c2ba4:
    if (ctx->pc == 0x1C2BA4u) {
        ctx->pc = 0x1C2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BA0u;
        // 0x1c2ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BA8u;
        goto label_1c2ba8;
    }
    ctx->pc = 0x1C2BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2BA8u);
        ctx->pc = 0x1C2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BA0u;
        // 0x1c2ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2BA0u, 0x1C2BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2BA8u;
label_1c2ba8:
    // 0x1c2ba8: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_1c2bac:
    if (ctx->pc == 0x1C2BACu) {
        ctx->pc = 0x1C2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BA8u;
        // 0x1c2bac: 0x8e0505e4  lw          $a1, 0x5E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BB0u;
        goto label_1c2bb0;
    }
    ctx->pc = 0x1C2BA8u;
    {
        const bool branch_taken_0x1c2ba8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2ba8) {
            ctx->pc = 0x1C2BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2BA8u;
            // 0x1c2bac: 0x8e0505e4  lw          $a1, 0x5E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2BCCu;
            goto label_1c2bcc;
        }
    }
    ctx->pc = 0x1C2BB0u;
label_1c2bb0:
    // 0x1c2bb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c2bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2bb4:
    // 0x1c2bb4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c2bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c2bb8:
    // 0x1c2bb8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2bbc:
    // 0x1c2bbc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c2bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c2bc0:
    // 0x1c2bc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c2bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2bc4:
    // 0x1c2bc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c2bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c2bc8:
    // 0x1c2bc8: 0x8e0505e4  lw          $a1, 0x5E4($s0)
    ctx->pc = 0x1c2bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
label_1c2bcc:
    // 0x1c2bcc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1c2bd0:
    if (ctx->pc == 0x1C2BD0u) {
        ctx->pc = 0x1C2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BCCu;
        // 0x1c2bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BD4u;
        goto label_1c2bd4;
    }
    ctx->pc = 0x1C2BCCu;
    {
        const bool branch_taken_0x1c2bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BCCu;
        // 0x1c2bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bcc) {
            ctx->pc = 0x1C2BECu;
            goto label_1c2bec;
        }
    }
    ctx->pc = 0x1C2BD4u;
label_1c2bd4:
    // 0x1c2bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c2bd8:
    // 0x1c2bd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c2bdc:
    // 0x1c2bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2be0:
    // 0x1c2be0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c2be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2be4:
    // 0x1c2be4: 0xc0c1a0e  jal         func_306838
label_1c2be8:
    if (ctx->pc == 0x1C2BE8u) {
        ctx->pc = 0x1C2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BE4u;
        // 0x1c2be8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BECu;
        goto label_1c2bec;
    }
    ctx->pc = 0x1C2BE4u;
    SET_GPR_U32(ctx, 31, 0x1C2BECu);
    ctx->pc = 0x1C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BE4u;
    // 0x1c2be8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C2BE4u, 0x1C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BECu;
label_1c2bec:
    // 0x1c2bec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2bf0:
    // 0x1c2bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2bf4:
    // 0x1c2bf4: 0x3e00008  jr          $ra
label_1c2bf8:
    if (ctx->pc == 0x1C2BF8u) {
        ctx->pc = 0x1C2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BF4u;
        // 0x1c2bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BFCu;
        goto label_1c2bfc;
    }
    ctx->pc = 0x1C2BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BF4u;
        // 0x1c2bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2BFCu;
label_1c2bfc:
    // 0x1c2bfc: 0x0  nop
    ctx->pc = 0x1c2bfcu;
    // NOP
    ctx->pc = 0x1c2c00u;
}
