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

// Function: func_0027BDD8
// Address: 0x27bdd8 - 0x27bef8
void func_0027BDD8_0x27bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027BDD8_0x27bdd8");
#endif

    switch (ctx->pc) {
        case 0x27be64u: goto label_27be64;
        case 0x27beacu: goto label_27beac;
        default: break;
    }

    ctx->pc = 0x27bdd8u;

    // 0x27bdd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bddc: 0x24030263  addiu       $v1, $zero, 0x263
    ctx->pc = 0x27bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x27bde0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27bde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27bde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27bde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdec: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x27bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27bdf0: 0x5043003d  beql        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x27BDF0u;
    {
        const bool branch_taken_0x27bdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bdf0) {
            ctx->pc = 0x27BDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BDF0u;
            // 0x27bdf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BDF8u;
    // 0x27bdf8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x27bdfc: 0x5840003a  blezl       $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27BDFCu;
    {
        const bool branch_taken_0x27bdfc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27bdfc) {
            ctx->pc = 0x27BE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BDFCu;
            // 0x27be00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BE04u;
    // 0x27be04: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x27be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x27be08: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x27BE08u;
    {
        const bool branch_taken_0x27be08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be08) {
            ctx->pc = 0x27BE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE08u;
            // 0x27be0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BE10u;
    // 0x27be10: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x27be10u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27be14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27be18: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x27BE18u;
    {
        const bool branch_taken_0x27be18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be18) {
            ctx->pc = 0x27BE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE18u;
            // 0x27be1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BE20u;
    // 0x27be20: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x27be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27be24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27be24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be28: 0x0  nop
    ctx->pc = 0x27be28u;
    // NOP
    // 0x27be2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27be2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27be30: 0x0  nop
    ctx->pc = 0x27be30u;
    // NOP
    // 0x27be34: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x27BE34u;
    {
        const bool branch_taken_0x27be34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be34) {
            ctx->pc = 0x27BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE34u;
            // 0x27be38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BE3Cu;
    // 0x27be3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27be40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27be40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27be48: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x27be48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27be4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27be4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27be50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27be54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27be58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be5c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27BE5Cu;
    SET_GPR_U32(ctx, 31, 0x27BE64u);
    ctx->pc = 0x27BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE5Cu;
    // 0x27be60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27BE5Cu, 0x27BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE64u;
label_27be64:
    // 0x27be64: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x27be64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27be68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27be6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27be6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27be70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BE70u;
    {
        const bool branch_taken_0x27be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE70u;
        // 0x27be74: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be70) {
            ctx->pc = 0x27BE84u;
            goto label_27be84;
        }
    }
    ctx->pc = 0x27BE78u;
    // 0x27be78: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27be7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BE7Cu;
    {
        const bool branch_taken_0x27be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE7Cu;
        // 0x27be80: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be7c) {
            ctx->pc = 0x27BE88u;
            goto label_27be88;
        }
    }
    ctx->pc = 0x27BE84u;
label_27be84:
    // 0x27be84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27be84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27be88:
    // 0x27be88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BE88u;
    {
        const bool branch_taken_0x27be88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE88u;
        // 0x27be8c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be88) {
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BE90u;
    // 0x27be90: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x27be90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27be94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27be98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27be98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27be9c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27bea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27bea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bea4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x27BEA4u;
    SET_GPR_U32(ctx, 31, 0x27BEACu);
    ctx->pc = 0x27BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEA4u;
    // 0x27bea8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x27BEA4u, 0x27BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEACu;
label_27beac:
    // 0x27beac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27beb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27beb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27beb4: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x27beb8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x27beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x27bebc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BEBCu;
    {
        const bool branch_taken_0x27bebc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x27BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEBCu;
        // 0x27bec0: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bebc) {
            ctx->pc = 0x27BECCu;
            goto label_27becc;
        }
    }
    ctx->pc = 0x27BEC4u;
    // 0x27bec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BEC4u;
    {
        const bool branch_taken_0x27bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEC4u;
        // 0x27bec8: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bec4) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27BECCu;
label_27becc:
    // 0x27becc: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x27beccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_27bed0:
    // 0x27bed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bed4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bed8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x27bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bedc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27bedcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bee0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27bee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bee4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27bee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27bee8:
    // 0x27bee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27bee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27beec: 0x3e00008  jr          $ra
    ctx->pc = 0x27BEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEECu;
        // 0x27bef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BEF4u;
    // 0x27bef4: 0x0  nop
    ctx->pc = 0x27bef4u;
    // NOP
    ctx->pc = 0x27bef8u;
}
