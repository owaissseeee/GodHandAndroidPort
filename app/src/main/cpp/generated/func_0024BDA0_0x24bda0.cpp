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

// Function: func_0024BDA0
// Address: 0x24bda0 - 0x24bf20
void func_0024BDA0_0x24bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024BDA0_0x24bda0");
#endif

    switch (ctx->pc) {
        case 0x24be2cu: goto label_24be2c;
        case 0x24be78u: goto label_24be78;
        case 0x24be8cu: goto label_24be8c;
        default: break;
    }

    ctx->pc = 0x24bda0u;

    // 0x24bda0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24bda4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24bda8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24bdac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdb0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x24bdb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24bdb4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x24bdb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24bdb8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x24bdbc: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x24bdbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x24bdc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BDC0u;
    {
        const bool branch_taken_0x24bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDC0u;
        // 0x24bdc4: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdc0) {
            ctx->pc = 0x24BDD0u;
            goto label_24bdd0;
        }
    }
    ctx->pc = 0x24BDC8u;
    // 0x24bdc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BDC8u;
    {
        const bool branch_taken_0x24bdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDC8u;
        // 0x24bdcc: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdc8) {
            ctx->pc = 0x24BDF0u;
            goto label_24bdf0;
        }
    }
    ctx->pc = 0x24BDD0u;
label_24bdd0:
    // 0x24bdd0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x24bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x24bdd4: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x24bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x24bdd8: 0x248574a0  addiu       $a1, $a0, 0x74A0
    ctx->pc = 0x24bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x24bddc: 0x8ca20210  lw          $v0, 0x210($a1)
    ctx->pc = 0x24bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x24bde0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x24bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x24bde4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24bde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x24bde8: 0x14430046  bne         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x24BDE8u;
    {
        const bool branch_taken_0x24bde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDE8u;
        // 0x24bdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bde8) {
            ctx->pc = 0x24BF04u;
            goto label_24bf04;
        }
    }
    ctx->pc = 0x24BDF0u;
label_24bdf0:
    // 0x24bdf0: 0x248274a0  addiu       $v0, $a0, 0x74A0
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x24bdf4: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x24bdf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x24bdf8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x24bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24bdfc: 0x10640041  beq         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x24BDFCu;
    {
        const bool branch_taken_0x24bdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDFCu;
        // 0x24be00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdfc) {
            ctx->pc = 0x24BF04u;
            goto label_24bf04;
        }
    }
    ctx->pc = 0x24BE04u;
    // 0x24be04: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x24be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24be08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24be0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24be0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24be10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24be10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24be14: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x24be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x24be18: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x24be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24be1c: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x24be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x24be20: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24be20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24be24: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x24BE24u;
    SET_GPR_U32(ctx, 31, 0x24BE2Cu);
    ctx->pc = 0x24BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE24u;
    // 0x24be28: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x24BE24u, 0x24BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE2Cu;
label_24be2c:
    // 0x24be2c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x24be2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be30: 0x0  nop
    ctx->pc = 0x24be30u;
    // NOP
    // 0x24be34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE34u;
    {
        const bool branch_taken_0x24be34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE34u;
        // 0x24be38: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be34) {
            ctx->pc = 0x24BE40u;
            goto label_24be40;
        }
    }
    ctx->pc = 0x24BE3Cu;
    // 0x24be3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x24be3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_24be40:
    // 0x24be40: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x24be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x24be44: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x24be44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x24be48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24be48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24be4c: 0x0  nop
    ctx->pc = 0x24be4cu;
    // NOP
    // 0x24be50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24be50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be54: 0x0  nop
    ctx->pc = 0x24be54u;
    // NOP
    // 0x24be58: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x24BE58u;
    {
        const bool branch_taken_0x24be58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE58u;
        // 0x24be5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be58) {
            ctx->pc = 0x24BF04u;
            goto label_24bf04;
        }
    }
    ctx->pc = 0x24BE60u;
    // 0x24be60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x24be60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x24be64: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x24be64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24be68: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x24be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x24be6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24be6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be70: 0xc0b0ad6  jal         func_2C2B58
    ctx->pc = 0x24BE70u;
    SET_GPR_U32(ctx, 31, 0x24BE78u);
    ctx->pc = 0x24BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE70u;
    // 0x24be74: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2B58u, 0x24BE70u, 0x24BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE78u;
label_24be78:
    // 0x24be78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24BE78u;
    {
        const bool branch_taken_0x24be78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE78u;
        // 0x24be7c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be78) {
            ctx->pc = 0x24BEC0u;
            goto label_24bec0;
        }
    }
    ctx->pc = 0x24BE80u;
    // 0x24be80: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x24be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24be84: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x24BE84u;
    SET_GPR_U32(ctx, 31, 0x24BE8Cu);
    ctx->pc = 0x24BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE84u;
    // 0x24be88: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x24BE84u, 0x24BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE8Cu;
label_24be8c:
    // 0x24be8c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x24be8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be90: 0x0  nop
    ctx->pc = 0x24be90u;
    // NOP
    // 0x24be94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE94u;
    {
        const bool branch_taken_0x24be94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE94u;
        // 0x24be98: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be94) {
            ctx->pc = 0x24BEA0u;
            goto label_24bea0;
        }
    }
    ctx->pc = 0x24BE9Cu;
    // 0x24be9c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x24be9cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_24bea0:
    // 0x24bea0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x24bea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x24bea4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24bea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24bea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24beac: 0x0  nop
    ctx->pc = 0x24beacu;
    // NOP
    // 0x24beb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24beb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24beb4: 0x0  nop
    ctx->pc = 0x24beb4u;
    // NOP
    // 0x24beb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24BEB8u;
    {
        const bool branch_taken_0x24beb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEB8u;
        // 0x24bebc: 0x260206d0  addiu       $v0, $s0, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24beb8) {
            ctx->pc = 0x24BEC8u;
            goto label_24bec8;
        }
    }
    ctx->pc = 0x24BEC0u;
label_24bec0:
    // 0x24bec0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24BEC0u;
    {
        const bool branch_taken_0x24bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC0u;
        // 0x24bec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bec0) {
            ctx->pc = 0x24BF04u;
            goto label_24bf04;
        }
    }
    ctx->pc = 0x24BEC8u;
label_24bec8:
    // 0x24bec8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BEC8u;
    {
        const bool branch_taken_0x24bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x24BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC8u;
        // 0x24becc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bec8) {
            ctx->pc = 0x24BEE4u;
            goto label_24bee4;
        }
    }
    ctx->pc = 0x24BED0u;
    // 0x24bed0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x24bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bed4: 0xe60006d0  swc1        $f0, 0x6D0($s0)
    ctx->pc = 0x24bed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
    // 0x24bed8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24bed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24bedc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x24bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bee0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24bee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_24bee4:
    // 0x24bee4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x24bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bee8: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x24bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x24beec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24beecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24bef0: 0xe60006e0  swc1        $f0, 0x6E0($s0)
    ctx->pc = 0x24bef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1760), bits); }
    // 0x24bef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bef8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24bef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24befc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24befcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24bf00: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24bf00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_24bf04:
    // 0x24bf04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24bf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bf08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24bf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bf0c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x24bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24bf10: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x24bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24bf14: 0x3e00008  jr          $ra
    ctx->pc = 0x24BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF14u;
        // 0x24bf18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BF1Cu;
    // 0x24bf1c: 0x0  nop
    ctx->pc = 0x24bf1cu;
    // NOP
    ctx->pc = 0x24bf20u;
}
