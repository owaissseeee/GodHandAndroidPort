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

// Function: func_0026BDD0
// Address: 0x26bdd0 - 0x26bef0
void func_0026BDD0_0x26bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026BDD0_0x26bdd0");
#endif

    switch (ctx->pc) {
        case 0x26be9cu: goto label_26be9c;
        case 0x26bec4u: goto label_26bec4;
        case 0x26bed4u: goto label_26bed4;
        default: break;
    }

    ctx->pc = 0x26bdd0u;

    // 0x26bdd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26bdd4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x26bdd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x26bddc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26bddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bde0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x26bde4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26bde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bde8: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x26BDE8u;
    {
        const bool branch_taken_0x26bde8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDE8u;
        // 0x26bdec: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bde8) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BDF0u;
    // 0x26bdf0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x26bdf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x26bdf4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26bdf8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26bdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26bdfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BDFCu;
    {
        const bool branch_taken_0x26bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDFCu;
        // 0x26be00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdfc) {
            ctx->pc = 0x26BE10u;
            goto label_26be10;
        }
    }
    ctx->pc = 0x26BE04u;
    // 0x26be04: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x26be08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26BE08u;
    {
        const bool branch_taken_0x26be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE08u;
        // 0x26be0c: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be08) {
            ctx->pc = 0x26BE14u;
            goto label_26be14;
        }
    }
    ctx->pc = 0x26BE10u;
label_26be10:
    // 0x26be10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26be10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26be14:
    // 0x26be14: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26BE14u;
    {
        const bool branch_taken_0x26be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE14u;
        // 0x26be18: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be14) {
            ctx->pc = 0x26BED8u;
            goto label_26bed8;
        }
    }
    ctx->pc = 0x26BE1Cu;
    // 0x26be1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26be20: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x26be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26be24: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26be28: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26be2c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BE2Cu;
    {
        const bool branch_taken_0x26be2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26be2c) {
            ctx->pc = 0x26BE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BE2Cu;
            // 0x26be30: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE50u;
            goto label_26be50;
        }
    }
    ctx->pc = 0x26BE34u;
    // 0x26be34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26be38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26be3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26be40: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26be40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26be44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be48: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26be48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26be4c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26be50:
    // 0x26be50: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BE50u;
    {
        const bool branch_taken_0x26be50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE50u;
        // 0x26be54: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be50) {
            ctx->pc = 0x26BE6Cu;
            goto label_26be6c;
        }
    }
    ctx->pc = 0x26BE58u;
    // 0x26be58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26be5c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26be60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26be60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26be64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26be68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26be6c:
    // 0x26be6c: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x26be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x26be70: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BE70u;
    {
        const bool branch_taken_0x26be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE70u;
        // 0x26be74: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be70) {
            ctx->pc = 0x26BE8Cu;
            goto label_26be8c;
        }
    }
    ctx->pc = 0x26BE78u;
    // 0x26be78: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26be7c: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x26be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x26be80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26be80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26be84: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26be88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26be8c:
    // 0x26be8c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26be8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be90: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x26be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26be94: 0xc051e62  jal         func_147988
    ctx->pc = 0x26BE94u;
    SET_GPR_U32(ctx, 31, 0x26BE9Cu);
    ctx->pc = 0x26BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE94u;
    // 0x26be98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26BE94u, 0x26BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE9Cu;
label_26be9c:
    // 0x26be9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26be9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26bea0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26bea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26bea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bea8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26beac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26beacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26beb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x26beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26beb8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x26bebc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26BEBCu;
    SET_GPR_U32(ctx, 31, 0x26BEC4u);
    ctx->pc = 0x26BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEBCu;
    // 0x26bec0: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26BEBCu, 0x26BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEC4u;
label_26bec4:
    // 0x26bec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bec8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26bec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26becc: 0xc074090  jal         func_1D0240
    ctx->pc = 0x26BECCu;
    SET_GPR_U32(ctx, 31, 0x26BED4u);
    ctx->pc = 0x26BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BECCu;
    // 0x26bed0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0240u, 0x26BECCu, 0x26BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BED4u;
label_26bed4:
    // 0x26bed4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26bed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26bed8:
    // 0x26bed8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26bed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bedc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26bedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26bee0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bee4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEE4u;
        // 0x26bee8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BEECu;
    // 0x26beec: 0x0  nop
    ctx->pc = 0x26beecu;
    // NOP
    ctx->pc = 0x26bef0u;
}
