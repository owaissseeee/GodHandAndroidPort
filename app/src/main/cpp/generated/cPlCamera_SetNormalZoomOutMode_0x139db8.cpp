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

// Function: cPlCamera_SetNormalZoomOutMode
// Address: 0x139db8 - 0x139fa8
void cPlCamera_SetNormalZoomOutMode_0x139db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_SetNormalZoomOutMode_0x139db8");
#endif

    switch (ctx->pc) {
        case 0x139e50u: goto label_139e50;
        case 0x139e88u: goto label_139e88;
        case 0x139f5cu: goto label_139f5c;
        case 0x139f70u: goto label_139f70;
        default: break;
    }

    ctx->pc = 0x139db8u;

    // 0x139db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x139dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x139dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139dcc: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x139DCCu;
    {
        const bool branch_taken_0x139dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DCCu;
        // 0x139dd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139dcc) {
            ctx->pc = 0x139E34u;
            goto label_139e34;
        }
    }
    ctx->pc = 0x139DD4u;
    // 0x139dd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139dd8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x139ddc: 0x26060440  addiu       $a2, $s0, 0x440
    ctx->pc = 0x139ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x139de0: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x139DE0u;
    {
        const bool branch_taken_0x139de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x139DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DE0u;
        // 0x139de4: 0xae020430  sw          $v0, 0x430($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139de0) {
            ctx->pc = 0x139E00u;
            goto label_139e00;
        }
    }
    ctx->pc = 0x139DE8u;
    // 0x139de8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x139de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139dec: 0xe6000440  swc1        $f0, 0x440($s0)
    ctx->pc = 0x139decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1088), bits); }
    // 0x139df0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x139df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139df4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x139df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x139df8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x139df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139dfc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x139dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_139e00:
    // 0x139e00: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x139e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x139e04: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x139e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x139e08: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139E08u;
    {
        const bool branch_taken_0x139e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x139e08) {
            ctx->pc = 0x139E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139E08u;
            // 0x139e0c: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x139E2Cu;
            goto label_139e2c;
        }
    }
    ctx->pc = 0x139E10u;
    // 0x139e10: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x139e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e14: 0xe6000450  swc1        $f0, 0x450($s0)
    ctx->pc = 0x139e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1104), bits); }
    // 0x139e18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x139e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x139e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x139e20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x139e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e24: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x139e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x139e28: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x139e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139e2c:
    // 0x139e2c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x139E2Cu;
    {
        const bool branch_taken_0x139e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E2Cu;
        // 0x139e30: 0xe6000460  swc1        $f0, 0x460($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e2c) {
            ctx->pc = 0x139EDCu;
            goto label_139edc;
        }
    }
    ctx->pc = 0x139E34u;
label_139e34:
    // 0x139e34: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x139e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x139e38: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x139e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x139e3c: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x139e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x139e40: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x139E40u;
    {
        const bool branch_taken_0x139e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x139e40) {
            ctx->pc = 0x139E80u;
            goto label_139e80;
        }
    }
    ctx->pc = 0x139E48u;
    // 0x139e48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x139E48u;
    SET_GPR_U32(ctx, 31, 0x139E50u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x139E48u, 0x139E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E50u;
label_139e50:
    // 0x139e50: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x139e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x139e54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x139e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x139e58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x139e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x139e5c: 0x26060440  addiu       $a2, $s0, 0x440
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x139e60: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x139e64: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x139e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x139e68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x139e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x139e6c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x139e70: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x139e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x139e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139E78u;
    {
        const bool branch_taken_0x139e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E78u;
        // 0x139e7c: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e78) {
            ctx->pc = 0x139EB4u;
            goto label_139eb4;
        }
    }
    ctx->pc = 0x139E80u;
label_139e80:
    // 0x139e80: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x139E80u;
    SET_GPR_U32(ctx, 31, 0x139E88u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x139E80u, 0x139E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E88u;
label_139e88:
    // 0x139e88: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x139e8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x139e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x139e90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x139e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x139e94: 0x26060440  addiu       $a2, $s0, 0x440
    ctx->pc = 0x139e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x139e98: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x139e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x139e9c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x139e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x139ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x139ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x139ea4: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x139ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x139ea8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x139ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x139eac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x139eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x139eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139eb4:
    // 0x139eb4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x139eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139ebc: 0xae020430  sw          $v0, 0x430($s0)
    ctx->pc = 0x139ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
    // 0x139ec0: 0xe6030440  swc1        $f3, 0x440($s0)
    ctx->pc = 0x139ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1088), bits); }
    // 0x139ec4: 0xe6020444  swc1        $f2, 0x444($s0)
    ctx->pc = 0x139ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1092), bits); }
    // 0x139ec8: 0xe6000450  swc1        $f0, 0x450($s0)
    ctx->pc = 0x139ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1104), bits); }
    // 0x139ecc: 0xe6010460  swc1        $f1, 0x460($s0)
    ctx->pc = 0x139eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1120), bits); }
    // 0x139ed0: 0xae000448  sw          $zero, 0x448($s0)
    ctx->pc = 0x139ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1096), GPR_U32(ctx, 0));
    // 0x139ed4: 0xae000454  sw          $zero, 0x454($s0)
    ctx->pc = 0x139ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 0));
    // 0x139ed8: 0xae000458  sw          $zero, 0x458($s0)
    ctx->pc = 0x139ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1112), GPR_U32(ctx, 0));
label_139edc:
    // 0x139edc: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x139edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x139ee0: 0x260703f0  addiu       $a3, $s0, 0x3F0
    ctx->pc = 0x139ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x139ee4: 0x26050430  addiu       $a1, $s0, 0x430
    ctx->pc = 0x139ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x139ee8: 0x26030400  addiu       $v1, $s0, 0x400
    ctx->pc = 0x139ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x139eec: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x139EECu;
    {
        const bool branch_taken_0x139eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x139EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EECu;
        // 0x139ef0: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139eec) {
            ctx->pc = 0x139F0Cu;
            goto label_139f0c;
        }
    }
    ctx->pc = 0x139EF4u;
    // 0x139ef4: 0xc6000440  lwc1        $f0, 0x440($s0)
    ctx->pc = 0x139ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139ef8: 0xe6000400  swc1        $f0, 0x400($s0)
    ctx->pc = 0x139ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1024), bits); }
    // 0x139efc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x139efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x139f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x139f04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x139f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x139f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_139f0c:
    // 0x139f0c: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x139f10: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139F10u;
    {
        const bool branch_taken_0x139f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x139f10) {
            ctx->pc = 0x139F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139F10u;
            // 0x139f14: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x139F34u;
            goto label_139f34;
        }
    }
    ctx->pc = 0x139F18u;
    // 0x139f18: 0xc6000450  lwc1        $f0, 0x450($s0)
    ctx->pc = 0x139f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f1c: 0xe6000410  swc1        $f0, 0x410($s0)
    ctx->pc = 0x139f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
    // 0x139f20: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x139f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f24: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x139f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x139f28: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x139f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x139f30: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x139f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139f34:
    // 0x139f34: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x139f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x139f38: 0xae00051c  sw          $zero, 0x51C($s0)
    ctx->pc = 0x139f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 0));
    // 0x139f3c: 0x8e020520  lw          $v0, 0x520($s0)
    ctx->pc = 0x139f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x139f40: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x139f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x139f44: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x139f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x139f48: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139F48u;
    {
        const bool branch_taken_0x139f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F48u;
        // 0x139f4c: 0xae000528  sw          $zero, 0x528($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f48) {
            ctx->pc = 0x139F64u;
            goto label_139f64;
        }
    }
    ctx->pc = 0x139F50u;
    // 0x139f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f54: 0xc04ee6e  jal         func_13B9B8
    ctx->pc = 0x139F54u;
    SET_GPR_U32(ctx, 31, 0x139F5Cu);
    ctx->pc = 0x139F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F54u;
    // 0x139f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9B8u, 0x139F54u, 0x139F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F5Cu;
label_139f5c:
    // 0x139f5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139F5Cu;
    {
        const bool branch_taken_0x139f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F5Cu;
        // 0x139f60: 0x26020180  addiu       $v0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f5c) {
            ctx->pc = 0x139F74u;
            goto label_139f74;
        }
    }
    ctx->pc = 0x139F64u;
label_139f64:
    // 0x139f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f68: 0xc04ee6e  jal         func_13B9B8
    ctx->pc = 0x139F68u;
    SET_GPR_U32(ctx, 31, 0x139F70u);
    ctx->pc = 0x139F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F68u;
    // 0x139f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9B8u, 0x139F68u, 0x139F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F70u;
label_139f70:
    // 0x139f70: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_139f74:
    // 0x139f74: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x139f74u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x139f78: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x139f78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x139f7c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x139f7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x139f80: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x139f80u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x139f84: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x139f84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139f88: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x139f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x139f8c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x139f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x139f90: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x139f90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x139f94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x139f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x139FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FA0u;
        // 0x139fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FA8u;
}
