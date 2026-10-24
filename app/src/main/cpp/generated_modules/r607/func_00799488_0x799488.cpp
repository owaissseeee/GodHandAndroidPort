#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_00799488
// Address: 0x799488 - 0x799520
void func_00799488_0x799488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799488_0x799488");
#endif

    switch (ctx->pc) {
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994ccu: goto label_7994cc;
        case 0x79950cu: goto label_79950c;
        default: break;
    }

    ctx->pc = 0x799488u;

    // 0x799488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79948c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799490: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x799490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799498: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0xc1e68f4  jal         func_79A3D0
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A3D0u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x7994B0u;
    // 0x7994b0: 0xc1e6a8a  jal         func_79AA28
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x79AA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AA28u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7994bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x7994C4u;
    // 0x7994c4: 0xc0b777e  jal         func_2DDDF8
    ctx->pc = 0x7994C4u;
    SET_GPR_U32(ctx, 31, 0x7994CCu);
    ctx->pc = 0x2DDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDF8u, 0x7994C4u, 0x7994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x7994d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7994D0u;
    {
        const bool branch_taken_0x7994d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d0) {
            ctx->pc = 0x79950Cu;
            goto label_79950c;
        }
    }
    ctx->pc = 0x7994D8u;
    // 0x7994d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7994d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7994dc: 0x8c83b770  lw          $v1, -0x4890($a0)
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948720)));
    // 0x7994e0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x7994e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7994e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x7994e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x7994e8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x7994e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x7994ec: 0x8c82b770  lw          $v0, -0x4890($a0)
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948720)));
    // 0x7994f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x7994f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7994f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x7994f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7994f8: 0x0  nop
    ctx->pc = 0x7994f8u;
    // NOP
    // 0x7994fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x7994FCu;
    {
        const bool branch_taken_0x7994fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994fc) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x799504u;
    // 0x799504: 0xc1e6548  jal         func_799520
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799520u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799510:
    // 0x799510: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x799510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799514: 0x3e00008  jr          $ra
    ctx->pc = 0x799514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79951Cu;
    // 0x79951c: 0x0  nop
    ctx->pc = 0x79951cu;
    // NOP
    ctx->pc = 0x799520u;
}
} // namespace gh_r607
