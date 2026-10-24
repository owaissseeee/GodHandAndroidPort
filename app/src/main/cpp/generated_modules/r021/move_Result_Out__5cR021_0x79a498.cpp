#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move_Result_Out__5cR021
// Address: 0x79a498 - 0x79a540
void move_Result_Out__5cR021_0x79a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Result_Out__5cR021_0x79a498");
#endif

    ctx->pc = 0x79a498u;

    // 0x79a498: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x79a49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a4a0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A4A0u;
    {
        const bool branch_taken_0x79a4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A0u;
        // 0x79a4a4: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a0) {
            ctx->pc = 0x79A520u;
            goto label_79a520;
        }
    }
    ctx->pc = 0x79A4A8u;
    // 0x79a4a8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a4ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A4ACu;
    {
        const bool branch_taken_0x79a4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a4ac) {
            ctx->pc = 0x79A4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4ACu;
            // 0x79a4b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4C4u;
            goto label_79a4c4;
        }
    }
    ctx->pc = 0x79A4B4u;
    // 0x79a4b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A4B4u;
    {
        const bool branch_taken_0x79a4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a4b4) {
            ctx->pc = 0x79A4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4B4u;
            // 0x79a4b8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4D4u;
            goto label_79a4d4;
        }
    }
    ctx->pc = 0x79A4BCu;
    // 0x79a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A4C4u;
    {
        const bool branch_taken_0x79a4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x79a4c4) {
            ctx->pc = 0x79A4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4C4u;
            // 0x79a4c8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A52Cu;
            goto label_79a52c;
        }
    }
    ctx->pc = 0x79A4CCu;
    // 0x79a4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a4d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a4dc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a4e0: 0x3c01c441  lui         $at, 0xC441
    ctx->pc = 0x79a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50241 << 16));
    // 0x79a4e4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79a4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79a4e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a4ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a4f0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a4f4: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x79a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x79a4f8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a4fc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79a4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a500: 0x0  nop
    ctx->pc = 0x79a500u;
    // NOP
    // 0x79a504: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x79A504u;
    {
        const bool branch_taken_0x79a504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a504) {
            ctx->pc = 0x79A538u;
            goto label_79a538;
        }
    }
    ctx->pc = 0x79A50Cu;
    // 0x79a50c: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x79a50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a510: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x79a510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x79a514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a518: 0x3e00008  jr          $ra
    ctx->pc = 0x79A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A518u;
        // 0x79a51c: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a524: 0x3e00008  jr          $ra
    ctx->pc = 0x79A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A524u;
        // 0x79a528: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A52Cu;
label_79a52c:
    // 0x79a52c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x79a52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a534: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x79a534u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a538:
    // 0x79a538: 0x3e00008  jr          $ra
    ctx->pc = 0x79A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A540u;
}
} // namespace gh_r021
