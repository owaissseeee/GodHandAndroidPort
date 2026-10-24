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

// Function: func_00147C88
// Address: 0x147c88 - 0x148160
void func_00147C88_0x147c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00147C88_0x147c88");
#endif

    switch (ctx->pc) {
        case 0x147cc8u: goto label_147cc8;
        case 0x147d18u: goto label_147d18;
        case 0x147d84u: goto label_147d84;
        case 0x147dc4u: goto label_147dc4;
        case 0x147de8u: goto label_147de8;
        case 0x147e38u: goto label_147e38;
        case 0x147e54u: goto label_147e54;
        case 0x147ec4u: goto label_147ec4;
        case 0x147ee8u: goto label_147ee8;
        case 0x147f0cu: goto label_147f0c;
        case 0x147f34u: goto label_147f34;
        case 0x147f54u: goto label_147f54;
        case 0x147facu: goto label_147fac;
        case 0x14801cu: goto label_14801c;
        case 0x14803cu: goto label_14803c;
        case 0x148068u: goto label_148068;
        case 0x148094u: goto label_148094;
        case 0x148100u: goto label_148100;
        case 0x148124u: goto label_148124;
        case 0x148138u: goto label_148138;
        default: break;
    }

    ctx->pc = 0x147c88u;

    // 0x147c88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x147c8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x147c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x147c90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x147c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x147c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x147c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147c9c: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x147c9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x147ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147ca4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x147ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ca8: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x147ca8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x147cac: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x147cacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x147cb0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x147cb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x147cb4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x147cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x147cb8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x147cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x147cbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x147cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147cc0: 0xc052058  jal         func_148160
    ctx->pc = 0x147CC0u;
    SET_GPR_U32(ctx, 31, 0x147CC8u);
    ctx->pc = 0x147CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147CC0u;
    // 0x147cc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148160u, 0x147CC0u, 0x147CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC8u;
label_147cc8:
    // 0x147cc8: 0xc7b60000  lwc1        $f22, 0x0($sp)
    ctx->pc = 0x147cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x147ccc: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x147cd0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x147cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x147cd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x147CD4u;
    {
        const bool branch_taken_0x147cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD4u;
        // 0x147cd8: 0xc7b40008  lwc1        $f20, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd4) {
            ctx->pc = 0x147CF8u;
            goto label_147cf8;
        }
    }
    ctx->pc = 0x147CDCu;
    // 0x147cdc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x147cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x147ce0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x147ce4: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x147ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147cec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147cf0: 0x800008  jr          $a0
    ctx->pc = 0x147CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147CF8u: goto label_147cf8;
            case 0x147DA0u: goto label_147da0;
            case 0x147E5Cu: goto label_147e5c;
            case 0x147F14u: goto label_147f14;
            case 0x147FB4u: goto label_147fb4;
            case 0x148070u: goto label_148070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147CF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147CF8u;
label_147cf8:
    // 0x147cf8: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x147cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147cfc: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x147cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147d00: 0x0  nop
    ctx->pc = 0x147d00u;
    // NOP
    // 0x147d04: 0x0  nop
    ctx->pc = 0x147d04u;
    // NOP
    // 0x147d08: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x147d08u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[21]);
    // 0x147d0c: 0x46146b43  div.s       $f13, $f13, $f20
    ctx->pc = 0x147d0cu;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[20]);
    // 0x147d10: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147D10u;
    SET_GPR_U32(ctx, 31, 0x147D18u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147D10u, 0x147D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D18u;
label_147d18:
    // 0x147d18: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x147d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147d1c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x147d1cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x147d20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x147d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x147d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d28: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x147d28u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x147d2c: 0x0  nop
    ctx->pc = 0x147d2cu;
    // NOP
    // 0x147d30: 0x46160b03  div.s       $f12, $f1, $f22
    ctx->pc = 0x147d30u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[22]);
    // 0x147d34: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x147d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147d38: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x147d3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d44: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x147D44u;
    {
        const bool branch_taken_0x147d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147d44) {
            ctx->pc = 0x147D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D44u;
            // 0x147d48: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D88u;
            goto label_147d88;
        }
    }
    ctx->pc = 0x147D4Cu;
    // 0x147d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d54: 0x0  nop
    ctx->pc = 0x147d54u;
    // NOP
    // 0x147d58: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x147d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147d5c: 0x0  nop
    ctx->pc = 0x147d5cu;
    // NOP
    // 0x147d60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147D60u;
    {
        const bool branch_taken_0x147d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147d60) {
            ctx->pc = 0x147D7Cu;
            goto label_147d7c;
        }
    }
    ctx->pc = 0x147D68u;
    // 0x147d68: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x147d6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147D74u;
    {
        const bool branch_taken_0x147d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D74u;
        // 0x147d78: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d74) {
            ctx->pc = 0x147D88u;
            goto label_147d88;
        }
    }
    ctx->pc = 0x147D7Cu;
label_147d7c:
    // 0x147d7c: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x147D7Cu;
    SET_GPR_U32(ctx, 31, 0x147D84u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x147D7Cu, 0x147D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D84u;
label_147d84:
    // 0x147d84: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x147d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_147d88:
    // 0x147d88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x147d88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x147d8c: 0x0  nop
    ctx->pc = 0x147d8cu;
    // NOP
    // 0x147d90: 0x0  nop
    ctx->pc = 0x147d90u;
    // NOP
    // 0x147d94: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x147d94u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[22]);
    // 0x147d98: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x147D98u;
    {
        const bool branch_taken_0x147d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D98u;
        // 0x147d9c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d98) {
            ctx->pc = 0x148054u;
            goto label_148054;
        }
    }
    ctx->pc = 0x147DA0u;
label_147da0:
    // 0x147da0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x147da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147da4: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x147da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147da8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x147da8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x147dac: 0x0  nop
    ctx->pc = 0x147dacu;
    // NOP
    // 0x147db0: 0x0  nop
    ctx->pc = 0x147db0u;
    // NOP
    // 0x147db4: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x147db4u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[21]);
    // 0x147db8: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x147db8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x147dbc: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147DBCu;
    SET_GPR_U32(ctx, 31, 0x147DC4u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147DBCu, 0x147DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DC4u;
label_147dc4:
    // 0x147dc4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x147dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147dc8: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x147dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147dcc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x147dccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x147dd0: 0x0  nop
    ctx->pc = 0x147dd0u;
    // NOP
    // 0x147dd4: 0x0  nop
    ctx->pc = 0x147dd4u;
    // NOP
    // 0x147dd8: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x147dd8u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[22]);
    // 0x147ddc: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x147ddcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x147de0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147DE0u;
    SET_GPR_U32(ctx, 31, 0x147DE8u);
    ctx->pc = 0x147DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DE0u;
    // 0x147de4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147DE0u, 0x147DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DE8u;
label_147de8:
    // 0x147de8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x147de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147dec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x147decu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x147df0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x147df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x147df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147df8: 0x0  nop
    ctx->pc = 0x147df8u;
    // NOP
    // 0x147dfc: 0x0  nop
    ctx->pc = 0x147dfcu;
    // NOP
    // 0x147e00: 0x46160b03  div.s       $f12, $f1, $f22
    ctx->pc = 0x147e00u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[22]);
    // 0x147e04: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x147e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e08: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x147e0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e14: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x147E14u;
    {
        const bool branch_taken_0x147e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E14u;
        // 0x147e18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e14) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147E1Cu;
    // 0x147e1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e24: 0x0  nop
    ctx->pc = 0x147e24u;
    // NOP
    // 0x147e28: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x147e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e2c: 0x0  nop
    ctx->pc = 0x147e2cu;
    // NOP
    // 0x147e30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147E30u;
    {
        const bool branch_taken_0x147e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147e30) {
            ctx->pc = 0x147E4Cu;
            goto label_147e4c;
        }
    }
    ctx->pc = 0x147E38u;
label_147e38:
    // 0x147e38: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x147e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x147e3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e44: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x147E44u;
    {
        const bool branch_taken_0x147e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E44u;
        // 0x147e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e44) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147E4Cu;
label_147e4c:
    // 0x147e4c: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x147E4Cu;
    SET_GPR_U32(ctx, 31, 0x147E54u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x147E4Cu, 0x147E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E54u;
label_147e54:
    // 0x147e54: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x147E54u;
    {
        const bool branch_taken_0x147e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E54u;
        // 0x147e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e54) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147E5Cu;
label_147e5c:
    // 0x147e5c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x147e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147e60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x147e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x147e64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147e68: 0x0  nop
    ctx->pc = 0x147e68u;
    // NOP
    // 0x147e6c: 0x0  nop
    ctx->pc = 0x147e6cu;
    // NOP
    // 0x147e70: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x147e70u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x147e74: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x147e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e78: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x147e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x147e7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e84: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x147E84u;
    {
        const bool branch_taken_0x147e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147e84) {
            ctx->pc = 0x147E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E84u;
            // 0x147e88: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EC8u;
            goto label_147ec8;
        }
    }
    ctx->pc = 0x147E8Cu;
    // 0x147e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e94: 0x0  nop
    ctx->pc = 0x147e94u;
    // NOP
    // 0x147e98: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x147e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e9c: 0x0  nop
    ctx->pc = 0x147e9cu;
    // NOP
    // 0x147ea0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147EA0u;
    {
        const bool branch_taken_0x147ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147ea0) {
            ctx->pc = 0x147EBCu;
            goto label_147ebc;
        }
    }
    ctx->pc = 0x147EA8u;
    // 0x147ea8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x147ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x147eac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147EB4u;
    {
        const bool branch_taken_0x147eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EB4u;
        // 0x147eb8: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147eb4) {
            ctx->pc = 0x147EC8u;
            goto label_147ec8;
        }
    }
    ctx->pc = 0x147EBCu;
label_147ebc:
    // 0x147ebc: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x147EBCu;
    SET_GPR_U32(ctx, 31, 0x147EC4u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x147EBCu, 0x147EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EC4u;
label_147ec4:
    // 0x147ec4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x147ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147ec8:
    // 0x147ec8: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x147ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147ecc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x147eccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x147ed0: 0x0  nop
    ctx->pc = 0x147ed0u;
    // NOP
    // 0x147ed4: 0x0  nop
    ctx->pc = 0x147ed4u;
    // NOP
    // 0x147ed8: 0x46146b43  div.s       $f13, $f13, $f20
    ctx->pc = 0x147ed8u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[20]);
    // 0x147edc: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x147edcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x147ee0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147EE0u;
    SET_GPR_U32(ctx, 31, 0x147EE8u);
    ctx->pc = 0x147EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147EE0u;
    // 0x147ee4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147EE0u, 0x147EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EE8u;
label_147ee8:
    // 0x147ee8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x147ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147eec: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x147eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147ef0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x147ef0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x147ef4: 0x0  nop
    ctx->pc = 0x147ef4u;
    // NOP
    // 0x147ef8: 0x0  nop
    ctx->pc = 0x147ef8u;
    // NOP
    // 0x147efc: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x147efcu;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[21]);
    // 0x147f00: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x147f00u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[21]);
    // 0x147f04: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147F04u;
    SET_GPR_U32(ctx, 31, 0x147F0Cu);
    ctx->pc = 0x147F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F04u;
    // 0x147f08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147F04u, 0x147F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F0Cu;
label_147f0c:
    // 0x147f0c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x147F0Cu;
    {
        const bool branch_taken_0x147f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F0Cu;
        // 0x147f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f0c) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147F14u;
label_147f14:
    // 0x147f14: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x147f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147f18: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x147f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147f1c: 0x0  nop
    ctx->pc = 0x147f1cu;
    // NOP
    // 0x147f20: 0x0  nop
    ctx->pc = 0x147f20u;
    // NOP
    // 0x147f24: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x147f24u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[21]);
    // 0x147f28: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x147f28u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[21]);
    // 0x147f2c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147F2Cu;
    SET_GPR_U32(ctx, 31, 0x147F34u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147F2Cu, 0x147F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F34u;
label_147f34:
    // 0x147f34: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x147f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147f38: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x147f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147f3c: 0x0  nop
    ctx->pc = 0x147f3cu;
    // NOP
    // 0x147f40: 0x0  nop
    ctx->pc = 0x147f40u;
    // NOP
    // 0x147f44: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x147f44u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x147f48: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x147f48u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[22]);
    // 0x147f4c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x147F4Cu;
    SET_GPR_U32(ctx, 31, 0x147F54u);
    ctx->pc = 0x147F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F4Cu;
    // 0x147f50: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x147F4Cu, 0x147F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F54u;
label_147f54:
    // 0x147f54: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x147f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x147f58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x147f5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x147f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x147f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f64: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x147f64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x147f68: 0x0  nop
    ctx->pc = 0x147f68u;
    // NOP
    // 0x147f6c: 0x46150b03  div.s       $f12, $f1, $f21
    ctx->pc = 0x147f6cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[21]);
    // 0x147f70: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x147f70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f74: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x147f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x147f78: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f80: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x147F80u;
    {
        const bool branch_taken_0x147f80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F80u;
        // 0x147f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f80) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147F88u;
    // 0x147f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f90: 0x0  nop
    ctx->pc = 0x147f90u;
    // NOP
    // 0x147f94: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x147f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f98: 0x0  nop
    ctx->pc = 0x147f98u;
    // NOP
    // 0x147f9c: 0x4501ffa6  bc1t        . + 4 + (-0x5A << 2)
    ctx->pc = 0x147F9Cu;
    {
        const bool branch_taken_0x147f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147f9c) {
            ctx->pc = 0x147E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147e38;
        }
    }
    ctx->pc = 0x147FA4u;
    // 0x147fa4: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x147FA4u;
    SET_GPR_U32(ctx, 31, 0x147FACu);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x147FA4u, 0x147FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FACu;
label_147fac:
    // 0x147fac: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x147FACu;
    {
        const bool branch_taken_0x147fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FACu;
        // 0x147fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fac) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147FB4u;
label_147fb4:
    // 0x147fb4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x147fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147fb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x147fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x147fbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147fc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x147fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x147fc4: 0x0  nop
    ctx->pc = 0x147fc4u;
    // NOP
    // 0x147fc8: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x147fc8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x147fcc: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x147fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147fd0: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x147fd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x147fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x147fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fdc: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x147FDCu;
    {
        const bool branch_taken_0x147fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147fdc) {
            ctx->pc = 0x147FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147FDCu;
            // 0x147fe0: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148020u;
            goto label_148020;
        }
    }
    ctx->pc = 0x147FE4u;
    // 0x147fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147fe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fec: 0x0  nop
    ctx->pc = 0x147fecu;
    // NOP
    // 0x147ff0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x147ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147ff4: 0x0  nop
    ctx->pc = 0x147ff4u;
    // NOP
    // 0x147ff8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147FF8u;
    {
        const bool branch_taken_0x147ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147ff8) {
            ctx->pc = 0x148014u;
            goto label_148014;
        }
    }
    ctx->pc = 0x148000u;
    // 0x148000: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x148000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x148004: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x148004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x148008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14800c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14800Cu;
    {
        const bool branch_taken_0x14800c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14800Cu;
        // 0x148010: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14800c) {
            ctx->pc = 0x148020u;
            goto label_148020;
        }
    }
    ctx->pc = 0x148014u;
label_148014:
    // 0x148014: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x148014u;
    SET_GPR_U32(ctx, 31, 0x14801Cu);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x148014u, 0x14801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14801Cu;
label_14801c:
    // 0x14801c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x14801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_148020:
    // 0x148020: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x148020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148024: 0x0  nop
    ctx->pc = 0x148024u;
    // NOP
    // 0x148028: 0x0  nop
    ctx->pc = 0x148028u;
    // NOP
    // 0x14802c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14802cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x148030: 0x46146b43  div.s       $f13, $f13, $f20
    ctx->pc = 0x148030u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[20]);
    // 0x148034: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x148034u;
    SET_GPR_U32(ctx, 31, 0x14803Cu);
    ctx->pc = 0x148038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148034u;
    // 0x148038: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x148034u, 0x14803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14803Cu;
label_14803c:
    // 0x14803c: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x14803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148040: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x148040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x148044: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x148044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148048: 0x0  nop
    ctx->pc = 0x148048u;
    // NOP
    // 0x14804c: 0x0  nop
    ctx->pc = 0x14804cu;
    // NOP
    // 0x148050: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x148050u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[21]);
label_148054:
    // 0x148054: 0x0  nop
    ctx->pc = 0x148054u;
    // NOP
    // 0x148058: 0x0  nop
    ctx->pc = 0x148058u;
    // NOP
    // 0x14805c: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x14805cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x148060: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x148060u;
    SET_GPR_U32(ctx, 31, 0x148068u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x148060u, 0x148068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148068u;
label_148068:
    // 0x148068: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x148068u;
    {
        const bool branch_taken_0x148068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148068u;
        // 0x14806c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148068) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x148070u;
label_148070:
    // 0x148070: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x148070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148074: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x148074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148078: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x148078u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x14807c: 0x0  nop
    ctx->pc = 0x14807cu;
    // NOP
    // 0x148080: 0x0  nop
    ctx->pc = 0x148080u;
    // NOP
    // 0x148084: 0x46146b43  div.s       $f13, $f13, $f20
    ctx->pc = 0x148084u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[20]);
    // 0x148088: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x148088u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14808c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x14808Cu;
    SET_GPR_U32(ctx, 31, 0x148094u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x14808Cu, 0x148094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148094u;
label_148094:
    // 0x148094: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x148094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148098: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x148098u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x14809c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1480a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1480a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1480a4: 0x0  nop
    ctx->pc = 0x1480a4u;
    // NOP
    // 0x1480a8: 0x0  nop
    ctx->pc = 0x1480a8u;
    // NOP
    // 0x1480ac: 0x46140b03  div.s       $f12, $f1, $f20
    ctx->pc = 0x1480acu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x1480b0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1480b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1480b4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1480b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1480b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1480b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1480bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1480bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1480c0: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1480C0u;
    {
        const bool branch_taken_0x1480c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1480c0) {
            ctx->pc = 0x1480C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1480C0u;
            // 0x1480c4: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148104u;
            goto label_148104;
        }
    }
    ctx->pc = 0x1480C8u;
    // 0x1480c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1480cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1480ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1480d0: 0x0  nop
    ctx->pc = 0x1480d0u;
    // NOP
    // 0x1480d4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1480d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1480d8: 0x0  nop
    ctx->pc = 0x1480d8u;
    // NOP
    // 0x1480dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1480DCu;
    {
        const bool branch_taken_0x1480dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1480dc) {
            ctx->pc = 0x1480F8u;
            goto label_1480f8;
        }
    }
    ctx->pc = 0x1480E4u;
    // 0x1480e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1480e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1480e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1480e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1480ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1480ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1480f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1480F0u;
    {
        const bool branch_taken_0x1480f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480F0u;
        // 0x1480f4: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480f0) {
            ctx->pc = 0x148104u;
            goto label_148104;
        }
    }
    ctx->pc = 0x1480F8u;
label_1480f8:
    // 0x1480f8: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x1480F8u;
    SET_GPR_U32(ctx, 31, 0x148100u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x1480F8u, 0x148100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148100u;
label_148100:
    // 0x148100: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x148100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_148104:
    // 0x148104: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x148104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148108: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x148108u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x14810c: 0x0  nop
    ctx->pc = 0x14810cu;
    // NOP
    // 0x148110: 0x0  nop
    ctx->pc = 0x148110u;
    // NOP
    // 0x148114: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x148114u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[22]);
    // 0x148118: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x148118u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[21]);
    // 0x14811c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x14811Cu;
    SET_GPR_U32(ctx, 31, 0x148124u);
    ctx->pc = 0x148120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14811Cu;
    // 0x148120: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x14811Cu, 0x148124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148124u;
label_148124:
    // 0x148124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_148128:
    // 0x148128: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x148128u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x14812c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x14812cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x148130: 0xc0541c4  jal         func_150710
    ctx->pc = 0x148130u;
    SET_GPR_U32(ctx, 31, 0x148138u);
    ctx->pc = 0x148134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148130u;
    // 0x148134: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150710u, 0x148130u, 0x148138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148138u;
label_148138:
    // 0x148138: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x148138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14813c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14813cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148148: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x148148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14814c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x14814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148150: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x148150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148154: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x148154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148158: 0x3e00008  jr          $ra
    ctx->pc = 0x148158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148158u;
        // 0x14815c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148160u;
}
