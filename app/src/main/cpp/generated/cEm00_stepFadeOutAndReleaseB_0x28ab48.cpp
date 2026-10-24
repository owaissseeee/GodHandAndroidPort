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

// Function: cEm00_stepFadeOutAndReleaseB
// Address: 0x28ab48 - 0x28abf0
void cEm00_stepFadeOutAndReleaseB_0x28ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepFadeOutAndReleaseB_0x28ab48");
#endif

    switch (ctx->pc) {
        case 0x28ab88u: goto label_28ab88;
        case 0x28abd0u: goto label_28abd0;
        default: break;
    }

    ctx->pc = 0x28ab48u;

    // 0x28ab48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ab4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28ab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28ab50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28ab50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ab54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ab58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ab5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab60: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x28ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x28ab64: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28ab64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28ab68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AB68u;
    {
        const bool branch_taken_0x28ab68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB68u;
        // 0x28ab6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab68) {
            ctx->pc = 0x28AB80u;
            goto label_28ab80;
        }
    }
    ctx->pc = 0x28AB70u;
    // 0x28ab70: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AB70u;
    {
        const bool branch_taken_0x28ab70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ab70) {
            ctx->pc = 0x28AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AB70u;
            // 0x28ab74: 0xc600024c  lwc1        $f0, 0x24C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AB98u;
            goto label_28ab98;
        }
    }
    ctx->pc = 0x28AB78u;
    // 0x28ab78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28AB78u;
    {
        const bool branch_taken_0x28ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB78u;
        // 0x28ab7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab78) {
            ctx->pc = 0x28ABE0u;
            goto label_28abe0;
        }
    }
    ctx->pc = 0x28AB80u;
label_28ab80:
    // 0x28ab80: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x28AB80u;
    SET_GPR_U32(ctx, 31, 0x28AB88u);
    ctx->pc = 0x28AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB80u;
    // 0x28ab84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x28AB80u, 0x28AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB88u;
label_28ab88:
    // 0x28ab88: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28ab88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28ab8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ab90: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28ab90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ab94: 0xc600024c  lwc1        $f0, 0x24C($s0)
    ctx->pc = 0x28ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ab98:
    // 0x28ab98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28ab98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28ab9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28ab9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28aba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28aba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28aba4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28aba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aba8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28aba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28abac: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x28abacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28abb0: 0x0  nop
    ctx->pc = 0x28abb0u;
    // NOP
    // 0x28abb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x28ABB4u;
    {
        const bool branch_taken_0x28abb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB4u;
        // 0x28abb8: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abb4) {
            ctx->pc = 0x28ABDCu;
            goto label_28abdc;
        }
    }
    ctx->pc = 0x28ABBCu;
    // 0x28abbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28abc0: 0xe602024c  swc1        $f2, 0x24C($s0)
    ctx->pc = 0x28abc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x28abc4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x28abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x28abc8: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x28ABC8u;
    SET_GPR_U32(ctx, 31, 0x28ABD0u);
    ctx->pc = 0x28ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABC8u;
    // 0x28abcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x28ABC8u, 0x28ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABD0u;
label_28abd0:
    // 0x28abd0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28abd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28abd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28abd8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28abd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_28abdc:
    // 0x28abdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28abe0:
    // 0x28abe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28abe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28abe4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ABE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABE4u;
        // 0x28abe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABECu;
    // 0x28abec: 0x0  nop
    ctx->pc = 0x28abecu;
    // NOP
    ctx->pc = 0x28abf0u;
}
