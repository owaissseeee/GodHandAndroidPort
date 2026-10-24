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

// Function: func_00149C20
// Address: 0x149c20 - 0x149e60
void func_00149C20_0x149c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00149C20_0x149c20");
#endif

    switch (ctx->pc) {
        case 0x149c70u: goto label_149c70;
        case 0x149c78u: goto label_149c78;
        case 0x149cf8u: goto label_149cf8;
        case 0x149d28u: goto label_149d28;
        case 0x149d30u: goto label_149d30;
        case 0x149d64u: goto label_149d64;
        case 0x149dd0u: goto label_149dd0;
        case 0x149de0u: goto label_149de0;
        case 0x149decu: goto label_149dec;
        default: break;
    }

    ctx->pc = 0x149c20u;

    // 0x149c20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x149c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x149c24: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x149c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x149c28: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x149c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x149c2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x149c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c30: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x149c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x149c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x149c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x149c3c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x149c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c40: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x149c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x149c44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x149c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x149c48: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x149c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x149c4c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x149c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x149c50: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x149c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x149c54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x149c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149c58: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x149C58u;
    {
        const bool branch_taken_0x149c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C58u;
        // 0x149c5c: 0xa24202b4  sb          $v0, 0x2B4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 692), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c58) {
            ctx->pc = 0x149D10u;
            goto label_149d10;
        }
    }
    ctx->pc = 0x149C60u;
    // 0x149c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149c64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x149c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x149c68: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x149c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x149c6c: 0x0  nop
    ctx->pc = 0x149c6cu;
    // NOP
label_149c70:
    // 0x149c70: 0xc054030  jal         func_1500C0
    ctx->pc = 0x149C70u;
    SET_GPR_U32(ctx, 31, 0x149C78u);
    ctx->pc = 0x1500C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500C0u, 0x149C70u, 0x149C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C78u;
label_149c78:
    // 0x149c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c7c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x149C7Cu;
    {
        const bool branch_taken_0x149c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x149c7c) {
            ctx->pc = 0x149C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149C7Cu;
            // 0x149c80: 0xae700144  sw          $s0, 0x144($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149C8Cu;
            goto label_149c8c;
        }
    }
    ctx->pc = 0x149C84u;
    // 0x149c84: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x149C84u;
    {
        const bool branch_taken_0x149c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C84u;
        // 0x149c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c84) {
            ctx->pc = 0x149E3Cu;
            goto label_149e3c;
        }
    }
    ctx->pc = 0x149C8Cu;
label_149c8c:
    // 0x149c8c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x149c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x149c90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x149c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149c9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x149ca0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x149ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149ca4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x149ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149ca8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x149ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149cac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x149cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x149cb0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x149cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x149cb4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x149cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x149cb8: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x149cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x149cbc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x149cc0: 0x10740006  beq         $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x149CC0u;
    {
        const bool branch_taken_0x149cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x149CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CC0u;
        // 0x149cc4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cc0) {
            ctx->pc = 0x149CDCu;
            goto label_149cdc;
        }
    }
    ctx->pc = 0x149CC8u;
    // 0x149cc8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x149cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x149ccc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x149cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149cd0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x149cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x149cd4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x149cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149cd8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x149cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_149cdc:
    // 0x149cdc: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x149cdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x149ce0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149CE0u;
    {
        const bool branch_taken_0x149ce0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x149ce0) {
            ctx->pc = 0x149CF0u;
            goto label_149cf0;
        }
    }
    ctx->pc = 0x149CE8u;
    // 0x149ce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149CE8u;
    {
        const bool branch_taken_0x149ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CE8u;
        // 0x149cec: 0xae120148  sw          $s2, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ce8) {
            ctx->pc = 0x149CFCu;
            goto label_149cfc;
        }
    }
    ctx->pc = 0x149CF0u;
label_149cf0:
    // 0x149cf0: 0xc0526fa  jal         func_149BE8
    ctx->pc = 0x149CF0u;
    SET_GPR_U32(ctx, 31, 0x149CF8u);
    ctx->pc = 0x149CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CF0u;
    // 0x149cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149BE8u, 0x149CF0u, 0x149CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CF8u;
label_149cf8:
    // 0x149cf8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x149cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_149cfc:
    // 0x149cfc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x149cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x149d00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x149d04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x149d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149d08: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x149D08u;
    {
        const bool branch_taken_0x149d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D08u;
        // 0x149d0c: 0x8e730144  lw          $s3, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d08) {
            ctx->pc = 0x149C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c70;
        }
    }
    ctx->pc = 0x149D10u;
label_149d10:
    // 0x149d10: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x149d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x149d14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x149d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d18: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x149d18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x149d1c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x149D1Cu;
    {
        const bool branch_taken_0x149d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D1Cu;
        // 0x149d20: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d1c) {
            ctx->pc = 0x149D7Cu;
            goto label_149d7c;
        }
    }
    ctx->pc = 0x149D24u;
    // 0x149d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_149d28:
    // 0x149d28: 0xc0526fa  jal         func_149BE8
    ctx->pc = 0x149D28u;
    SET_GPR_U32(ctx, 31, 0x149D30u);
    ctx->pc = 0x149D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D28u;
    // 0x149d2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149BE8u, 0x149D28u, 0x149D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D30u;
label_149d30:
    // 0x149d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d34: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x149d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x149d38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x149d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149d44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149d48: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x149d4c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149D4Cu;
    {
        const bool branch_taken_0x149d4c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x149d4c) {
            ctx->pc = 0x149D5Cu;
            goto label_149d5c;
        }
    }
    ctx->pc = 0x149D54u;
    // 0x149d54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149D54u;
    {
        const bool branch_taken_0x149d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D54u;
        // 0x149d58: 0xae10014c  sw          $s0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d54) {
            ctx->pc = 0x149D68u;
            goto label_149d68;
        }
    }
    ctx->pc = 0x149D5Cu;
label_149d5c:
    // 0x149d5c: 0xc0526fa  jal         func_149BE8
    ctx->pc = 0x149D5Cu;
    SET_GPR_U32(ctx, 31, 0x149D64u);
    ctx->pc = 0x149D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D5Cu;
    // 0x149d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149BE8u, 0x149D5Cu, 0x149D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D64u;
label_149d64:
    // 0x149d64: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x149d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_149d68:
    // 0x149d68: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x149d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x149d6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x149d70: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x149d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149d74: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x149D74u;
    {
        const bool branch_taken_0x149d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D74u;
        // 0x149d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d74) {
            ctx->pc = 0x149D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149d28;
        }
    }
    ctx->pc = 0x149D7Cu;
label_149d7c:
    // 0x149d7c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x149d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d80: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x149d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149d84: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x149d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149d88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149d8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x149d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x149d90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x149d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x149d94: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x149d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x149d98: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x149d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x149d9c: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x149d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x149da0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x149da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x149da4: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x149da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x149da8: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x149DA8u;
    {
        const bool branch_taken_0x149da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x149DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DA8u;
        // 0x149dac: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149da8) {
            ctx->pc = 0x149DC4u;
            goto label_149dc4;
        }
    }
    ctx->pc = 0x149DB0u;
    // 0x149db0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x149db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x149db4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x149db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149db8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x149db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x149dbc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x149dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149dc0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x149dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_149dc4:
    // 0x149dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dc8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x149DC8u;
    SET_GPR_U32(ctx, 31, 0x149DD0u);
    ctx->pc = 0x149DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DC8u;
    // 0x149dcc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x149DC8u, 0x149DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DD0u;
label_149dd0:
    // 0x149dd0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x149dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x149dd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x149DD4u;
    {
        const bool branch_taken_0x149dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DD4u;
        // 0x149dd8: 0x8e500144  lw          $s0, 0x144($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dd4) {
            ctx->pc = 0x149E18u;
            goto label_149e18;
        }
    }
    ctx->pc = 0x149DDCu;
    // 0x149ddc: 0x0  nop
    ctx->pc = 0x149ddcu;
    // NOP
label_149de0:
    // 0x149de0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x149de4: 0xc051d5a  jal         func_147568
    ctx->pc = 0x149DE4u;
    SET_GPR_U32(ctx, 31, 0x149DECu);
    ctx->pc = 0x149DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DE4u;
    // 0x149de8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x149DE4u, 0x149DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DECu;
label_149dec:
    // 0x149dec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x149df0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x149df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149df4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x149df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x149df8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x149df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149dfc: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x149dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x149e00: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x149e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149e04: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x149e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x149e08: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x149e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x149e0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x149e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149e10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x149E10u;
    {
        const bool branch_taken_0x149e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E10u;
        // 0x149e14: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e10) {
            ctx->pc = 0x149DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149de0;
        }
    }
    ctx->pc = 0x149E18u;
label_149e18:
    // 0x149e18: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x149e1c: 0x10940006  beq         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x149E1Cu;
    {
        const bool branch_taken_0x149e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x149E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E1Cu;
        // 0x149e20: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e1c) {
            ctx->pc = 0x149E38u;
            goto label_149e38;
        }
    }
    ctx->pc = 0x149E24u;
    // 0x149e24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x149e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x149e28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x149e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149e2c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x149e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x149e30: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x149e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149e34: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x149e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_149e38:
    // 0x149e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149e3c:
    // 0x149e3c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x149e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x149e40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x149e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x149e44: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x149e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149e48: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x149e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149e4c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x149e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149e50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x149e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149e54: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x149e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x149e58: 0x3e00008  jr          $ra
    ctx->pc = 0x149E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E58u;
        // 0x149e5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149E60u;
}
