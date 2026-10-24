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

// Function: func_00161D08
// Address: 0x161d08 - 0x162278
void func_00161D08_0x161d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161D08_0x161d08");
#endif

    switch (ctx->pc) {
        case 0x161dd0u: goto label_161dd0;
        case 0x161decu: goto label_161dec;
        case 0x161df8u: goto label_161df8;
        case 0x161e10u: goto label_161e10;
        case 0x161e70u: goto label_161e70;
        case 0x161e80u: goto label_161e80;
        case 0x161e9cu: goto label_161e9c;
        case 0x161ef0u: goto label_161ef0;
        case 0x16217cu: goto label_16217c;
        case 0x162244u: goto label_162244;
        default: break;
    }

    ctx->pc = 0x161d08u;

    // 0x161d08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x161d0c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x161d10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x161d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x161d14: 0x2463f3f8  addiu       $v1, $v1, -0xC08
    ctx->pc = 0x161d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964216));
    // 0x161d18: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x161d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x161d1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x161d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x161d24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x161d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161d28: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x161d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x161d2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x161d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x161d30: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x161d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x161d34: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x161d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x161d38: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x161d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x161d3c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x161d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x161d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161d44: 0x824200ed  lb          $v0, 0xED($s2)
    ctx->pc = 0x161d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
    // 0x161d48: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x161d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161d54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d58: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x161d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x161d5c: 0x824300ec  lb          $v1, 0xEC($s2)
    ctx->pc = 0x161d5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x161d60: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161D60u;
    {
        const bool branch_taken_0x161d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x161D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D60u;
        // 0x161d64: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d60) {
            ctx->pc = 0x161D80u;
            goto label_161d80;
        }
    }
    ctx->pc = 0x161D68u;
    // 0x161d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161d6c: 0x2442f3e0  addiu       $v0, $v0, -0xC20
    ctx->pc = 0x161d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964192));
    // 0x161d70: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x161d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161d78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d7c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x161d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_161d80:
    // 0x161d80: 0x824300ee  lb          $v1, 0xEE($s2)
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 238)));
    // 0x161d84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x161d88: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x161d8c: 0x8e450084  lw          $a1, 0x84($s2)
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x161d90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161d94: 0x240420bb  addiu       $a0, $zero, 0x20BB
    ctx->pc = 0x161d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8379));
    // 0x161d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161d9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x161d9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161da0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161da4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x161da8: 0x2456d938  addiu       $s6, $v0, -0x26C8
    ctx->pc = 0x161da8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957368));
    // 0x161dac: 0x265e0080  addiu       $fp, $s2, 0x80
    ctx->pc = 0x161dacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x161db0: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x161db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x161db4: 0x265700f1  addiu       $s7, $s2, 0xF1
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 241));
    // 0x161db8: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x161db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x161dbc: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x161dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x161dc0: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x161dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x161dc4: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x161dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x161dc8: 0xa24000f0  sb          $zero, 0xF0($s2)
    ctx->pc = 0x161dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x161dcc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_161dd0:
    // 0x161dd0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x161dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x161dd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dd8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x161ddc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x161de0: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x161de4: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x161DE4u;
    SET_GPR_U32(ctx, 31, 0x161DECu);
    ctx->pc = 0x161DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161DE4u;
    // 0x161de8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x161DE4u, 0x161DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161DECu;
label_161dec:
    // 0x161dec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x161DECu;
    {
        const bool branch_taken_0x161dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DECu;
        // 0x161df0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dec) {
            ctx->pc = 0x161E44u;
            goto label_161e44;
        }
    }
    ctx->pc = 0x161DF4u;
    // 0x161df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x161df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161df8:
    // 0x161df8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x161df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x161dfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161DFCu;
    {
        const bool branch_taken_0x161dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DFCu;
        // 0x161e00: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dfc) {
            ctx->pc = 0x161E24u;
            goto label_161e24;
        }
    }
    ctx->pc = 0x161E04u;
    // 0x161e04: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x161e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x161e08: 0xc07f066  jal         func_1FC198
    ctx->pc = 0x161E08u;
    SET_GPR_U32(ctx, 31, 0x161E10u);
    ctx->pc = 0x161E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E08u;
    // 0x161e0c: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC198u, 0x161E08u, 0x161E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E10u;
label_161e10:
    // 0x161e10: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x161e14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x161e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161e18: 0x5444fff7  bnel        $v0, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x161E18u;
    {
        const bool branch_taken_0x161e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x161e18) {
            ctx->pc = 0x161E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E18u;
            // 0x161e1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161df8;
        }
    }
    ctx->pc = 0x161E20u;
    // 0x161e20: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x161e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161e24:
    // 0x161e24: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x161E24u;
    {
        const bool branch_taken_0x161e24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e24) {
            ctx->pc = 0x161E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E24u;
            // 0x161e28: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E48u;
            goto label_161e48;
        }
    }
    ctx->pc = 0x161E2Cu;
    // 0x161e2c: 0x824200f0  lb          $v0, 0xF0($s2)
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x161e30: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x161e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x161e34: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x161e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x161e38: 0x924300f0  lbu         $v1, 0xF0($s2)
    ctx->pc = 0x161e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x161e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161e40: 0xa24300f0  sb          $v1, 0xF0($s2)
    ctx->pc = 0x161e40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 240), (uint8_t)GPR_U32(ctx, 3));
label_161e44:
    // 0x161e44: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x161e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_161e48:
    // 0x161e48: 0x2e82001c  sltiu       $v0, $s4, 0x1C
    ctx->pc = 0x161e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x161e4c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161E4Cu;
    {
        const bool branch_taken_0x161e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E4Cu;
        // 0x161e50: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e4c) {
            ctx->pc = 0x161DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161dd0;
        }
    }
    ctx->pc = 0x161E54u;
    // 0x161e54: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x161e58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x161e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e5c: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x161e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x161e60: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x161e60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161e64: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x161e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x161e68: 0x241530c1  addiu       $s5, $zero, 0x30C1
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x161e6c: 0x27d10008  addiu       $s1, $fp, 0x8
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_161e70:
    // 0x161e70: 0x327000ff  andi        $s0, $s3, 0xFF
    ctx->pc = 0x161e70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x161e74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e78: 0xc07f066  jal         func_1FC198
    ctx->pc = 0x161E78u;
    SET_GPR_U32(ctx, 31, 0x161E80u);
    ctx->pc = 0x161E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E78u;
    // 0x161e7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC198u, 0x161E78u, 0x161E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E80u;
label_161e80:
    // 0x161e80: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x161e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x161e84: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x161E84u;
    {
        const bool branch_taken_0x161e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x161E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E84u;
        // 0x161e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e84) {
            ctx->pc = 0x161EACu;
            goto label_161eac;
        }
    }
    ctx->pc = 0x161E8Cu;
    // 0x161e8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e94: 0xc07f066  jal         func_1FC198
    ctx->pc = 0x161E94u;
    SET_GPR_U32(ctx, 31, 0x161E9Cu);
    ctx->pc = 0x161E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E94u;
    // 0x161e98: 0xa057008b  sb          $s7, 0x8B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC198u, 0x161E94u, 0x161E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E9Cu;
label_161e9c:
    // 0x161e9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161ea0: 0x244230d1  addiu       $v0, $v0, 0x30D1
    ctx->pc = 0x161ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12497));
    // 0x161ea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161EA4u;
    {
        const bool branch_taken_0x161ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EA4u;
        // 0x161ea8: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ea4) {
            ctx->pc = 0x161EBCu;
            goto label_161ebc;
        }
    }
    ctx->pc = 0x161EACu;
label_161eac:
    // 0x161eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161eb0: 0xa056008b  sb          $s6, 0x8B($v0)
    ctx->pc = 0x161eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 22));
    // 0x161eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161eb8: 0xa4750090  sh          $s5, 0x90($v1)
    ctx->pc = 0x161eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 21));
label_161ebc:
    // 0x161ebc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x161ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x161ec0: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x161ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x161ec4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x161EC4u;
    {
        const bool branch_taken_0x161ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EC4u;
        // 0x161ec8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ec4) {
            ctx->pc = 0x161E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161e70;
        }
    }
    ctx->pc = 0x161ECCu;
    // 0x161ecc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x161ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed4: 0x244bd938  addiu       $t3, $v0, -0x26C8
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957368));
    // 0x161ed8: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x161edc: 0x240930c1  addiu       $t1, $zero, 0x30C1
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x161ee0: 0x264700f1  addiu       $a3, $s2, 0xF1
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 241));
    // 0x161ee4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161ee8: 0x27c50030  addiu       $a1, $fp, 0x30
    ctx->pc = 0x161ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x161eec: 0x0  nop
    ctx->pc = 0x161eecu;
    // NOP
label_161ef0:
    // 0x161ef0: 0x824300ef  lb          $v1, 0xEF($s2)
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
    // 0x161ef4: 0x824200f0  lb          $v0, 0xF0($s2)
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x161ef8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x161efc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x161efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161f00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161F00u;
    {
        const bool branch_taken_0x161f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F00u;
        // 0x161f04: 0xe31821  addu        $v1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f00) {
            ctx->pc = 0x161F1Cu;
            goto label_161f1c;
        }
    }
    ctx->pc = 0x161F08u;
    // 0x161f08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161f0c: 0xa04a008b  sb          $t2, 0x8B($v0)
    ctx->pc = 0x161f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 10));
    // 0x161f10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161f14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161F14u;
    {
        const bool branch_taken_0x161f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F14u;
        // 0x161f18: 0xa4690090  sh          $t1, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f14) {
            ctx->pc = 0x161F40u;
            goto label_161f40;
        }
    }
    ctx->pc = 0x161F1Cu;
label_161f1c:
    // 0x161f1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161f20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x161f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161f28: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x161f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x161f2c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x161f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161f30: 0x246330d1  addiu       $v1, $v1, 0x30D1
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12497));
    // 0x161f34: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x161f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x161f38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161f3c: 0xa048008b  sb          $t0, 0x8B($v0)
    ctx->pc = 0x161f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 8));
label_161f40:
    // 0x161f40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x161f44: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x161f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x161f48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x161F48u;
    {
        const bool branch_taken_0x161f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F48u;
        // 0x161f4c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f48) {
            ctx->pc = 0x161EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161ef0;
        }
    }
    ctx->pc = 0x161F50u;
    // 0x161f50: 0x824300ec  lb          $v1, 0xEC($s2)
    ctx->pc = 0x161f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x161f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161f58: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x161F58u;
    {
        const bool branch_taken_0x161f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F58u;
        // 0x161f5c: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f58) {
            ctx->pc = 0x161FACu;
            goto label_161fac;
        }
    }
    ctx->pc = 0x161F60u;
    // 0x161f60: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x161f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x161f64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x161f68: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x161f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x161f6c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x161f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161f70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x161f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x161f74: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161f78: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x161f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161f7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161f80: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161f84: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161f88: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161f8c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x161f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161f90: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x161f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x161f94: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161f98: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x161f9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x161f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161fa0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161fa4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x161FA4u;
    {
        const bool branch_taken_0x161fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FA4u;
        // 0x161fa8: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fa4) {
            ctx->pc = 0x162098u;
            goto label_162098;
        }
    }
    ctx->pc = 0x161FACu;
label_161fac:
    // 0x161fac: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x161fb0: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x161fb4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161fb8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x161fbc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161fc0: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x161fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161fc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x161fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161fc8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x161fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x161fcc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161fd0: 0x8243005a  lb          $v1, 0x5A($s2)
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x161fd4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FD4u;
    {
        const bool branch_taken_0x161fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FD4u;
        // 0x161fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fd4) {
            ctx->pc = 0x161FECu;
            goto label_161fec;
        }
    }
    ctx->pc = 0x161FDCu;
    // 0x161fdc: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x161FDCu;
    {
        const bool branch_taken_0x161fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161fdc) {
            ctx->pc = 0x161FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161FDCu;
            // 0x161fe0: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162028u;
            goto label_162028;
        }
    }
    ctx->pc = 0x161FE4u;
    // 0x161fe4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x161FE4u;
    {
        const bool branch_taken_0x161fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FE4u;
        // 0x161fe8: 0x824300f0  lb          $v1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fe4) {
            ctx->pc = 0x16209Cu;
            goto label_16209c;
        }
    }
    ctx->pc = 0x161FECu;
label_161fec:
    // 0x161fec: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x161ff0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x161ff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x161ff8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x161ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161ffc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x161ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162000: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x162000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x162004: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x162004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x162008: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x162008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16200c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x16200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x162010: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x162010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x162014: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x162014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x162018: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16201c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x162020: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162020u;
        // 0x162024: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162020) {
            ctx->pc = 0x162098u;
            goto label_162098;
        }
    }
    ctx->pc = 0x162028u;
label_162028:
    // 0x162028: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x162028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x16202c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16202cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x162030: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x162034: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162038: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x162038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x16203c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16203cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x162040: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x162044: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x162048: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x162048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16204c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16204cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x162050: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x162054: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x162054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162058: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x162058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x16205c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16205cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x162060: 0x824200ee  lb          $v0, 0xEE($s2)
    ctx->pc = 0x162060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 238)));
    // 0x162064: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x162064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x162068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16206c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x16206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x162070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162074: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x162074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x162078: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162078u;
    {
        const bool branch_taken_0x162078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x16207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162078u;
        // 0x16207c: 0x8e4200d8  lw          $v0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162078) {
            ctx->pc = 0x162088u;
            goto label_162088;
        }
    }
    ctx->pc = 0x162080u;
    // 0x162080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162080u;
    {
        const bool branch_taken_0x162080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162080u;
        // 0x162084: 0x240420bb  addiu       $a0, $zero, 0x20BB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8379));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162080) {
            ctx->pc = 0x16208Cu;
            goto label_16208c;
        }
    }
    ctx->pc = 0x162088u;
label_162088:
    // 0x162088: 0x240420bc  addiu       $a0, $zero, 0x20BC
    ctx->pc = 0x162088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8380));
label_16208c:
    // 0x16208c: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16208cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x162090: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x162090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x162094: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x162094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
label_162098:
    // 0x162098: 0x824300f0  lb          $v1, 0xF0($s2)
    ctx->pc = 0x162098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
label_16209c:
    // 0x16209c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x16209cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1620a0: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1620A0u;
    {
        const bool branch_taken_0x1620a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1620a0) {
            ctx->pc = 0x1620A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1620A0u;
            // 0x1620a4: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16212Cu;
            goto label_16212c;
        }
    }
    ctx->pc = 0x1620A8u;
    // 0x1620a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1620a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620ac: 0x0  nop
    ctx->pc = 0x1620acu;
    // NOP
    // 0x1620b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1620b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1620b4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1620b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1620b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1620b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1620bc: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x1620c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1620c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1620c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1620c8: 0x0  nop
    ctx->pc = 0x1620c8u;
    // NOP
    // 0x1620cc: 0x0  nop
    ctx->pc = 0x1620ccu;
    // NOP
    // 0x1620d0: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x1620d0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[0]);
    // 0x1620d4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1620d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1620d8: 0x824200f0  lb          $v0, 0xF0($s2)
    ctx->pc = 0x1620d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1620dc: 0x824300ef  lb          $v1, 0xEF($s2)
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
    // 0x1620e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1620e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1620e4: 0x0  nop
    ctx->pc = 0x1620e4u;
    // NOP
    // 0x1620e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1620e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1620ec: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x1620f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1620f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1620f4: 0x0  nop
    ctx->pc = 0x1620f4u;
    // NOP
    // 0x1620f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1620f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1620fc: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x1620fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162100: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x162100u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x162104: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x162108: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x162108u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x16210c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x16210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162110: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x162110u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x162114: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x162114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162118: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x162118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x16211c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x162120: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x162120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162124: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x162124u;
    {
        const bool branch_taken_0x162124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162124u;
        // 0x162128: 0xe481003c  swc1        $f1, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162124) {
            ctx->pc = 0x16214Cu;
            goto label_16214c;
        }
    }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x162130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162134: 0x0  nop
    ctx->pc = 0x162134u;
    // NOP
    // 0x162138: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x162138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16213c: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x162140: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x162144: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x162144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162148: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x162148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_16214c:
    // 0x16214c: 0x824300ec  lb          $v1, 0xEC($s2)
    ctx->pc = 0x16214cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x162150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162154: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x162154u;
    {
        const bool branch_taken_0x162154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162154u;
        // 0x162158: 0x924600ec  lbu         $a2, 0xEC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162154) {
            ctx->pc = 0x162228u;
            goto label_162228;
        }
    }
    ctx->pc = 0x16215Cu;
    // 0x16215c: 0x824200ed  lb          $v0, 0xED($s2)
    ctx->pc = 0x16215cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
    // 0x162160: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x162164: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x162168: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16216c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x162170: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162174: 0xc07f066  jal         func_1FC198
    ctx->pc = 0x162174u;
    SET_GPR_U32(ctx, 31, 0x16217Cu);
    ctx->pc = 0x162178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162174u;
    // 0x162178: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC198u, 0x162174u, 0x16217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16217Cu;
label_16217c:
    // 0x16217c: 0x8243005a  lb          $v1, 0x5A($s2)
    ctx->pc = 0x16217cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x162180: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x162180u;
    {
        const bool branch_taken_0x162180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162180u;
        // 0x162184: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162180) {
            ctx->pc = 0x16219Cu;
            goto label_16219c;
        }
    }
    ctx->pc = 0x162188u;
    // 0x162188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16218c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16218Cu;
    {
        const bool branch_taken_0x16218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16218c) {
            ctx->pc = 0x162190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16218Cu;
            // 0x162190: 0x824400f0  lb          $a0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1621B0u;
            goto label_1621b0;
        }
    }
    ctx->pc = 0x162194u;
    // 0x162194: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x162194u;
    {
        const bool branch_taken_0x162194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162194) {
            ctx->pc = 0x16223Cu;
            goto label_16223c;
        }
    }
    ctx->pc = 0x16219Cu;
label_16219c:
    // 0x16219c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1621a0: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1621A0u;
    {
        const bool branch_taken_0x1621a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1621A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621A0u;
        // 0x1621a4: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621a0) {
            ctx->pc = 0x16222Cu;
            goto label_16222c;
        }
    }
    ctx->pc = 0x1621A8u;
    // 0x1621a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1621A8u;
    {
        const bool branch_taken_0x1621a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621A8u;
        // 0x1621ac: 0x24842085  addiu       $a0, $a0, 0x2085 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621a8) {
            ctx->pc = 0x162230u;
            goto label_162230;
        }
    }
    ctx->pc = 0x1621B0u;
label_1621b0:
    // 0x1621b0: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1621B0u;
    {
        const bool branch_taken_0x1621b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621b0) {
            ctx->pc = 0x1621B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1621B0u;
            // 0x1621b4: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16222Cu;
            goto label_16222c;
        }
    }
    ctx->pc = 0x1621B8u;
    // 0x1621b8: 0x824200ee  lb          $v0, 0xEE($s2)
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 238)));
    // 0x1621bc: 0x824300ef  lb          $v1, 0xEF($s2)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
    // 0x1621c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1621c4: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x1621c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1621c8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1621C8u;
    {
        const bool branch_taken_0x1621c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621C8u;
        // 0x1621cc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621c8) {
            ctx->pc = 0x162228u;
            goto label_162228;
        }
    }
    ctx->pc = 0x1621D0u;
    // 0x1621d0: 0x264500f1  addiu       $a1, $s2, 0xF1
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 241));
    // 0x1621d4: 0x2467d938  addiu       $a3, $v1, -0x26C8
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957368));
    // 0x1621d8: 0x8e4600e4  lw          $a2, 0xE4($s2)
    ctx->pc = 0x1621d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1621dc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1621e0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1621e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1621e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1621e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1621ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1621ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1621f0: 0x24632085  addiu       $v1, $v1, 0x2085
    ctx->pc = 0x1621f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8325));
    // 0x1621f4: 0xa4c30090  sh          $v1, 0x90($a2)
    ctx->pc = 0x1621f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1621f8: 0x824200ef  lb          $v0, 0xEF($s2)
    ctx->pc = 0x1621f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 239)));
    // 0x1621fc: 0x824400ee  lb          $a0, 0xEE($s2)
    ctx->pc = 0x1621fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 238)));
    // 0x162200: 0x8e4600e8  lw          $a2, 0xE8($s2)
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x162204: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x162208: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16220c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162214: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x162214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x162218: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x162218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16221c: 0x24632085  addiu       $v1, $v1, 0x2085
    ctx->pc = 0x16221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8325));
    // 0x162220: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162220u;
    {
        const bool branch_taken_0x162220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162220u;
        // 0x162224: 0xa4c30090  sh          $v1, 0x90($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162220) {
            ctx->pc = 0x16223Cu;
            goto label_16223c;
        }
    }
    ctx->pc = 0x162228u;
label_162228:
    // 0x162228: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_16222c:
    // 0x16222c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x16222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_162230:
    // 0x162230: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x162230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x162234: 0x8e4300e8  lw          $v1, 0xE8($s2)
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x162238: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x162238u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
label_16223c:
    // 0x16223c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16223Cu;
    SET_GPR_U32(ctx, 31, 0x162244u);
    ctx->pc = 0x162240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16223Cu;
    // 0x162240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16223Cu, 0x162244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162244u;
label_162244:
    // 0x162244: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x162244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x162248: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x162248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16224c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16224cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162250: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x162250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162254: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x162254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162258: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x162258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16225c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16225cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162260: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x162260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162264: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x162264u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16226c: 0x3e00008  jr          $ra
    ctx->pc = 0x16226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16226Cu;
        // 0x162270: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162274u;
    // 0x162274: 0x0  nop
    ctx->pc = 0x162274u;
    // NOP
    ctx->pc = 0x162278u;
}
