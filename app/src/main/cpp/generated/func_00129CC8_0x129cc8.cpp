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

// Function: func_00129CC8
// Address: 0x129cc8 - 0x129eb0
void func_00129CC8_0x129cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129CC8_0x129cc8");
#endif

    switch (ctx->pc) {
        case 0x129d0cu: goto label_129d0c;
        case 0x129d14u: goto label_129d14;
        case 0x129d28u: goto label_129d28;
        case 0x129d68u: goto label_129d68;
        case 0x129dbcu: goto label_129dbc;
        case 0x129de0u: goto label_129de0;
        default: break;
    }

    ctx->pc = 0x129cc8u;

    // 0x129cc8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x129ccc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x129cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x129cd0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x129cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x129cd4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x129cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x129cd8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x129cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x129cdc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x129cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x129ce0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x129ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x129ce4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x129ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x129ce8: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x129ce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x129cec: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x129cecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x129cf0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x129cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x129cf4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x129cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x129cf8: 0x8c8206a0  lw          $v0, 0x6A0($a0)
    ctx->pc = 0x129cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
    // 0x129cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129CFCu;
    {
        const bool branch_taken_0x129cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CFCu;
        // 0x129d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cfc) {
            ctx->pc = 0x129D1Cu;
            goto label_129d1c;
        }
    }
    ctx->pc = 0x129D04u;
    // 0x129d04: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x129D04u;
    {
        const bool branch_taken_0x129d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D04u;
        // 0x129d08: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d04) {
            ctx->pc = 0x129E84u;
            goto label_129e84;
        }
    }
    ctx->pc = 0x129D0Cu;
label_129d0c:
    // 0x129d0c: 0xc0b6e80  jal         func_2DBA00
    ctx->pc = 0x129D0Cu;
    SET_GPR_U32(ctx, 31, 0x129D14u);
    ctx->pc = 0x2DBA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBA00u, 0x129D0Cu, 0x129D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D14u;
label_129d14:
    // 0x129d14: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x129D14u;
    {
        const bool branch_taken_0x129d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D14u;
        // 0x129d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d14) {
            ctx->pc = 0x129E80u;
            goto label_129e80;
        }
    }
    ctx->pc = 0x129D1Cu;
label_129d1c:
    // 0x129d1c: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x129d20: 0xc051d5a  jal         func_147568
    ctx->pc = 0x129D20u;
    SET_GPR_U32(ctx, 31, 0x129D28u);
    ctx->pc = 0x129D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D20u;
    // 0x129d24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x129D20u, 0x129D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D28u;
label_129d28:
    // 0x129d28: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x129d2c: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x129d30: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x129d34: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x129d34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x129d38: 0x12330050  beq         $s1, $s3, . + 4 + (0x50 << 2)
    ctx->pc = 0x129D38u;
    {
        const bool branch_taken_0x129d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x129D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D38u;
        // 0x129d3c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d38) {
            ctx->pc = 0x129E7Cu;
            goto label_129e7c;
        }
    }
    ctx->pc = 0x129D40u;
    // 0x129d40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x129d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x129d44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x129d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x129d48: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x129d4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x129d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x129d50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x129d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x129d54: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x129d58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129d5c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x129d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x129d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x129d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d64: 0x0  nop
    ctx->pc = 0x129d64u;
    // NOP
label_129d68:
    // 0x129d68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x129d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129d6c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x129d70: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x129d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x129d74: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x129D74u;
    {
        const bool branch_taken_0x129d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D74u;
        // 0x129d78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d74) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129D7Cu;
    // 0x129d7c: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x129d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x129d80: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x129D80u;
    {
        const bool branch_taken_0x129d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d80) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129D88u;
    // 0x129d88: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x129d88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x129d8c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x129d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x129d90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129D90u;
    {
        const bool branch_taken_0x129d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D90u;
        // 0x129d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d90) {
            ctx->pc = 0x129DA0u;
            goto label_129da0;
        }
    }
    ctx->pc = 0x129D98u;
    // 0x129d98: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x129d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x129d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129da0:
    // 0x129da0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x129da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x129da4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x129DA4u;
    {
        const bool branch_taken_0x129da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DA4u;
        // 0x129da8: 0x38620364  xori        $v0, $v1, 0x364 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129da4) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129DACu;
    // 0x129dac: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x129DACu;
    {
        const bool branch_taken_0x129dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129dac) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129DB4u;
    // 0x129db4: 0xc06c588  jal         func_1B1620
    ctx->pc = 0x129DB4u;
    SET_GPR_U32(ctx, 31, 0x129DBCu);
    ctx->pc = 0x129DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DB4u;
    // 0x129db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1620u, 0x129DB4u, 0x129DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DBCu;
label_129dbc:
    // 0x129dbc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x129DBCu;
    {
        const bool branch_taken_0x129dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129dbc) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129DC4u;
    // 0x129dc4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x129dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x129dc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x129dc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129dcc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x129dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dd4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x129dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129dd8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x129DD8u;
    SET_GPR_U32(ctx, 31, 0x129DE0u);
    ctx->pc = 0x129DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DD8u;
    // 0x129ddc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x129DD8u, 0x129DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x129de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x129de4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x129de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129de8: 0x13b40006  beq         $sp, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x129DE8u;
    {
        const bool branch_taken_0x129de8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x129DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DE8u;
        // 0x129dec: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129de8) {
            ctx->pc = 0x129E04u;
            goto label_129e04;
        }
    }
    ctx->pc = 0x129DF0u;
    // 0x129df0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x129df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129df4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x129df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129df8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x129df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x129dfc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x129dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x129e00: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x129e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_129e04:
    // 0x129e04: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x129e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129e08: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x129e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x129e0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129e10: 0x0  nop
    ctx->pc = 0x129e10u;
    // NOP
    // 0x129e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e18: 0x0  nop
    ctx->pc = 0x129e18u;
    // NOP
    // 0x129e1c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x129E1Cu;
    {
        const bool branch_taken_0x129e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129e1c) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E24u;
    // 0x129e24: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x129e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e28: 0x0  nop
    ctx->pc = 0x129e28u;
    // NOP
    // 0x129e2c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x129E2Cu;
    {
        const bool branch_taken_0x129e2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E2Cu;
        // 0x129e30: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e2c) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E34u;
    // 0x129e34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e38: 0x0  nop
    ctx->pc = 0x129e38u;
    // NOP
    // 0x129e3c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x129E3Cu;
    {
        const bool branch_taken_0x129e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129e3c) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E44u;
    // 0x129e44: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x129e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e48: 0x0  nop
    ctx->pc = 0x129e48u;
    // NOP
    // 0x129e4c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x129E4Cu;
    {
        const bool branch_taken_0x129e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E4Cu;
        // 0x129e50: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e4c) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E54u;
    // 0x129e54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e58: 0x0  nop
    ctx->pc = 0x129e58u;
    // NOP
    // 0x129e5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x129E5Cu;
    {
        const bool branch_taken_0x129e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129e5c) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E64u;
    // 0x129e64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x129e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129e68: 0x0  nop
    ctx->pc = 0x129e68u;
    // NOP
    // 0x129e6c: 0x4500ffa7  bc1f        . + 4 + (-0x59 << 2)
    ctx->pc = 0x129E6Cu;
    {
        const bool branch_taken_0x129e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129e6c) {
            ctx->pc = 0x129D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d0c;
        }
    }
    ctx->pc = 0x129E74u;
label_129e74:
    // 0x129e74: 0x1633ffbc  bne         $s1, $s3, . + 4 + (-0x44 << 2)
    ctx->pc = 0x129E74u;
    {
        const bool branch_taken_0x129e74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x129E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E74u;
        // 0x129e78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e74) {
            ctx->pc = 0x129D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d68;
        }
    }
    ctx->pc = 0x129E7Cu;
label_129e7c:
    // 0x129e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x129e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129e80:
    // 0x129e80: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x129e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_129e84:
    // 0x129e84: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x129e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x129e88: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x129e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x129e8c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x129e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x129e90: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x129e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129e94: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x129e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129e98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129e9c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x129e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x129ea0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x129ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129ea4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x129ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x129EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EA8u;
        // 0x129eac: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129EB0u;
}
