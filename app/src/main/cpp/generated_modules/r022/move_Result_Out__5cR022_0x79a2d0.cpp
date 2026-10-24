#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Result_Out__5cR022
// Address: 0x79a2d0 - 0x79a378
void move_Result_Out__5cR022_0x79a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Result_Out__5cR022_0x79a2d0");
#endif

    ctx->pc = 0x79a2d0u;

    // 0x79a2d0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x79a2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2d8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A2D8u;
    {
        const bool branch_taken_0x79a2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D8u;
        // 0x79a2dc: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d8) {
            ctx->pc = 0x79A358u;
            goto label_79a358;
        }
    }
    ctx->pc = 0x79A2E0u;
    // 0x79a2e0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x79a2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a2e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2E4u;
            // 0x79a2e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2FCu;
            goto label_79a2fc;
        }
    }
    ctx->pc = 0x79A2ECu;
    // 0x79a2ec: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A2ECu;
    {
        const bool branch_taken_0x79a2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2ec) {
            ctx->pc = 0x79A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2ECu;
            // 0x79a2f0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A30Cu;
            goto label_79a30c;
        }
    }
    ctx->pc = 0x79A2F4u;
    // 0x79a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2FCu;
label_79a2fc:
    // 0x79a2fc: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A2FCu;
    {
        const bool branch_taken_0x79a2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x79a2fc) {
            ctx->pc = 0x79A300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2FCu;
            // 0x79a300: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A364u;
            goto label_79a364;
        }
    }
    ctx->pc = 0x79A304u;
    // 0x79a304: 0x3e00008  jr          $ra
    ctx->pc = 0x79A304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a314: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a318: 0x3c01c441  lui         $at, 0xC441
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50241 << 16));
    // 0x79a31c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79a320: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a328: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a32c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x79a330: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a334: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79a334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a338: 0x0  nop
    ctx->pc = 0x79a338u;
    // NOP
    // 0x79a33c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A370u;
            goto label_79a370;
        }
    }
    ctx->pc = 0x79A344u;
    // 0x79a344: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x79a344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a348: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x79a348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x79a34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a350: 0x3e00008  jr          $ra
    ctx->pc = 0x79A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A358u;
label_79a358:
    // 0x79a358: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A35Cu;
        // 0x79a360: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x79a364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a36c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x79a36cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a370:
    // 0x79a370: 0x3e00008  jr          $ra
    ctx->pc = 0x79A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A378u;
}
} // namespace gh_r022
