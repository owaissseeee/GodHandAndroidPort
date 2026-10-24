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

// Function: func_001689E8
// Address: 0x1689e8 - 0x168ab8
void func_001689E8_0x1689e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001689E8_0x1689e8");
#endif

    switch (ctx->pc) {
        case 0x168a00u: goto label_168a00;
        case 0x168a10u: goto label_168a10;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a64u: goto label_168a64;
        case 0x168a70u: goto label_168a70;
        case 0x168a78u: goto label_168a78;
        case 0x168a80u: goto label_168a80;
        case 0x168a88u: goto label_168a88;
        case 0x168aa4u: goto label_168aa4;
        default: break;
    }

    ctx->pc = 0x1689e8u;

    // 0x1689e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1689ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1689ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1689f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1689f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1689f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1689f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1689f8: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x1689F8u;
    SET_GPR_U32(ctx, 31, 0x168A00u);
    ctx->pc = 0x1689FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689F8u;
    // 0x1689fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x1689F8u, 0x168A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A00u;
label_168a00:
    // 0x168a00: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x168a00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x168a04: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x168a04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x168a08: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x168A08u;
    SET_GPR_U32(ctx, 31, 0x168A10u);
    ctx->pc = 0x168A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A08u;
    // 0x168a0c: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x168A08u, 0x168A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A10u;
label_168a10:
    // 0x168a10: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x168a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
    // 0x168a14: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x168A14u;
    SET_GPR_U32(ctx, 31, 0x168A1Cu);
    ctx->pc = 0x168A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A14u;
    // 0x168a18: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x168A14u, 0x168A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A1Cu;
label_168a1c:
    // 0x168a1c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x168a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x168a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a24: 0xc04e3d0  jal         func_138F40
    ctx->pc = 0x168A24u;
    SET_GPR_U32(ctx, 31, 0x168A2Cu);
    ctx->pc = 0x168A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A24u;
    // 0x168a28: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F40u, 0x168A24u, 0x168A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A2Cu;
label_168a2c:
    // 0x168a2c: 0x8e2401d8  lw          $a0, 0x1D8($s1)
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x168a30: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x168a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x168a34: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x168a38: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x168A38u;
    {
        const bool branch_taken_0x168a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x168a38) {
            ctx->pc = 0x168A5Cu;
            goto label_168a5c;
        }
    }
    ctx->pc = 0x168A40u;
    // 0x168a40: 0xc62001f0  lwc1        $f0, 0x1F0($s1)
    ctx->pc = 0x168a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168a44: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x168a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x168a48: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x168a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168a4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x168a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x168a50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x168a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168a54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x168a58: 0x8e2401d8  lw          $a0, 0x1D8($s1)
    ctx->pc = 0x168a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_168a5c:
    // 0x168a5c: 0xc042e22  jal         func_10B888
    ctx->pc = 0x168A5Cu;
    SET_GPR_U32(ctx, 31, 0x168A64u);
    ctx->pc = 0x168A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A5Cu;
    // 0x168a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x168A5Cu, 0x168A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A64u;
label_168a64:
    // 0x168a64: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x168a68: 0xc0b6628  jal         func_2D98A0
    ctx->pc = 0x168A68u;
    SET_GPR_U32(ctx, 31, 0x168A70u);
    ctx->pc = 0x168A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A68u;
    // 0x168a6c: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D98A0u, 0x168A68u, 0x168A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A70u;
label_168a70:
    // 0x168a70: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x168A70u;
    SET_GPR_U32(ctx, 31, 0x168A78u);
    ctx->pc = 0x168A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A70u;
    // 0x168a74: 0x26240210  addiu       $a0, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x168A70u, 0x168A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A78u;
label_168a78:
    // 0x168a78: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x168A78u;
    SET_GPR_U32(ctx, 31, 0x168A80u);
    ctx->pc = 0x168A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A78u;
    // 0x168a7c: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x168A78u, 0x168A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A80u;
label_168a80:
    // 0x168a80: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x168A80u;
    SET_GPR_U32(ctx, 31, 0x168A88u);
    ctx->pc = 0x168A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A80u;
    // 0x168a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x168A80u, 0x168A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A88u;
label_168a88:
    // 0x168a88: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x168a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x168a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a90: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x168a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x168a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168a98: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x168a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x168a9c: 0xc058564  jal         func_161590
    ctx->pc = 0x168A9Cu;
    SET_GPR_U32(ctx, 31, 0x168AA4u);
    ctx->pc = 0x168AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A9Cu;
    // 0x168aa0: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x168A9Cu, 0x168AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AA4u;
label_168aa4:
    // 0x168aa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x168AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AB0u;
        // 0x168ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AB8u;
}
