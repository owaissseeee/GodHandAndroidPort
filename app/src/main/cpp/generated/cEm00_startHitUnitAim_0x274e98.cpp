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

// Function: cEm00_startHitUnitAim
// Address: 0x274e98 - 0x274f50
void cEm00_startHitUnitAim_0x274e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_startHitUnitAim_0x274e98");
#endif

    switch (ctx->pc) {
        case 0x274ef0u: goto label_274ef0;
        default: break;
    }

    ctx->pc = 0x274e98u;

    // 0x274e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274e9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x274e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x274ea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ea8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x274ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x274eac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x274eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x274eb0: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x274eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x274eb4: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x274eb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x274eb8: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x274EB8u;
    {
        const bool branch_taken_0x274eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x274EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EB8u;
        // 0x274ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274eb8) {
            ctx->pc = 0x274F3Cu;
            goto label_274f3c;
        }
    }
    ctx->pc = 0x274EC0u;
    // 0x274ec0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x274ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x274ec4: 0x28620224  slti        $v0, $v1, 0x224
    ctx->pc = 0x274ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
    // 0x274ec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274EC8u;
    {
        const bool branch_taken_0x274ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EC8u;
        // 0x274ecc: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ec8) {
            ctx->pc = 0x274ED8u;
            goto label_274ed8;
        }
    }
    ctx->pc = 0x274ED0u;
    // 0x274ed0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x274ED0u;
    {
        const bool branch_taken_0x274ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ED0u;
        // 0x274ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ed0) {
            ctx->pc = 0x274F3Cu;
            goto label_274f3c;
        }
    }
    ctx->pc = 0x274ED8u;
label_274ed8:
    // 0x274ed8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x274ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x274edc: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x274edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x274ee0: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x274ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x274ee4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ee8: 0xc0b098e  jal         func_2C2638
    ctx->pc = 0x274EE8u;
    SET_GPR_U32(ctx, 31, 0x274EF0u);
    ctx->pc = 0x274EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274EE8u;
    // 0x274eec: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2638u, 0x274EE8u, 0x274EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EF0u;
label_274ef0:
    // 0x274ef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274EF0u;
    {
        const bool branch_taken_0x274ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EF0u;
        // 0x274ef4: 0x26020580  addiu       $v0, $s0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ef0) {
            ctx->pc = 0x274F00u;
            goto label_274f00;
        }
    }
    ctx->pc = 0x274EF8u;
    // 0x274ef8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x274EF8u;
    {
        const bool branch_taken_0x274ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EF8u;
        // 0x274efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ef8) {
            ctx->pc = 0x274F3Cu;
            goto label_274f3c;
        }
    }
    ctx->pc = 0x274F00u;
label_274f00:
    // 0x274f00: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x274F00u;
    {
        const bool branch_taken_0x274f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x274F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F00u;
        // 0x274f04: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f00) {
            ctx->pc = 0x274F1Cu;
            goto label_274f1c;
        }
    }
    ctx->pc = 0x274F08u;
    // 0x274f08: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x274f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f0c: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x274f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x274f10: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x274f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x274f14: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x274f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x274f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_274f1c:
    // 0x274f1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x274f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f20: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x274f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x274f24: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x274f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x274f28: 0xe6000598  swc1        $f0, 0x598($s0)
    ctx->pc = 0x274f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1432), bits); }
    // 0x274f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274f30: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x274f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x274f34: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x274f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x274f38: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x274f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_274f3c:
    // 0x274f3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x274f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f44: 0x3e00008  jr          $ra
    ctx->pc = 0x274F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F44u;
        // 0x274f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274F4Cu;
    // 0x274f4c: 0x0  nop
    ctx->pc = 0x274f4cu;
    // NOP
    ctx->pc = 0x274f50u;
}
