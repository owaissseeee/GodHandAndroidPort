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

// Function: func_0025DB70
// Address: 0x25db70 - 0x25de58
void func_0025DB70_0x25db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025DB70_0x25db70");
#endif

    switch (ctx->pc) {
        case 0x25db8cu: goto label_25db8c;
        case 0x25dba4u: goto label_25dba4;
        case 0x25dbb8u: goto label_25dbb8;
        case 0x25dc0cu: goto label_25dc0c;
        case 0x25dc20u: goto label_25dc20;
        case 0x25dc48u: goto label_25dc48;
        case 0x25dc88u: goto label_25dc88;
        case 0x25dc94u: goto label_25dc94;
        case 0x25dca0u: goto label_25dca0;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dd14u: goto label_25dd14;
        case 0x25dd64u: goto label_25dd64;
        case 0x25dd70u: goto label_25dd70;
        case 0x25dda4u: goto label_25dda4;
        case 0x25ddb8u: goto label_25ddb8;
        case 0x25de10u: goto label_25de10;
        case 0x25de20u: goto label_25de20;
        case 0x25de34u: goto label_25de34;
        case 0x25de40u: goto label_25de40;
        default: break;
    }

    ctx->pc = 0x25db70u;

    // 0x25db70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25db74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25db78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25db80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25db80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25db84: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x25DB84u;
    SET_GPR_U32(ctx, 31, 0x25DB8Cu);
    ctx->pc = 0x25DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB84u;
    // 0x25db88: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25DB84u, 0x25DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB8Cu;
label_25db8c:
    // 0x25db8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25db8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db94: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25db98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x25db9c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x25DB9Cu;
    SET_GPR_U32(ctx, 31, 0x25DBA4u);
    ctx->pc = 0x25DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB9Cu;
    // 0x25dba0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25DB9Cu, 0x25DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBA4u;
label_25dba4:
    // 0x25dba4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25dba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25dba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbac: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x25dbb0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x25DBB0u;
    SET_GPR_U32(ctx, 31, 0x25DBB8u);
    ctx->pc = 0x25DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBB0u;
    // 0x25dbb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25DBB0u, 0x25DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBB8u;
label_25dbb8:
    // 0x25dbb8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25dbb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25dbbc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x25dbbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25dbc0: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x25DBC0u;
    {
        const bool branch_taken_0x25dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBC0u;
        // 0x25dbc4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbc0) {
            ctx->pc = 0x25DE40u;
            goto label_25de40;
        }
    }
    ctx->pc = 0x25DBC8u;
    // 0x25dbc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25dbcc: 0x24423a60  addiu       $v0, $v0, 0x3A60
    ctx->pc = 0x25dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14944));
    // 0x25dbd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25dbd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dbd8: 0x800008  jr          $a0
    ctx->pc = 0x25DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25DBE0u: goto label_25dbe0;
            case 0x25DC34u: goto label_25dc34;
            case 0x25DC54u: goto label_25dc54;
            case 0x25DCACu: goto label_25dcac;
            case 0x25DCD4u: goto label_25dcd4;
            case 0x25DD78u: goto label_25dd78;
            case 0x25DDCCu: goto label_25ddcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DBD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25DBE0u;
label_25dbe0:
    // 0x25dbe0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25dbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25dbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25dbec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25dbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbf0: 0x8c4533ec  lw          $a1, 0x33EC($v0)
    ctx->pc = 0x25dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13292)));
    // 0x25dbf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25dbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbf8: 0x8c4633f0  lw          $a2, 0x33F0($v0)
    ctx->pc = 0x25dbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13296)));
    // 0x25dbfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25dbfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25dc04: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25DC04u;
    SET_GPR_U32(ctx, 31, 0x25DC0Cu);
    ctx->pc = 0x25DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC04u;
    // 0x25dc08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25DC04u, 0x25DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC0Cu;
label_25dc0c:
    // 0x25dc0c: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x25dc10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC10u;
    {
        const bool branch_taken_0x25dc10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc10) {
            ctx->pc = 0x25DC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC10u;
            // 0x25dc14: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC24u;
            goto label_25dc24;
        }
    }
    ctx->pc = 0x25DC18u;
    // 0x25dc18: 0xc09f714  jal         func_27DC50
    ctx->pc = 0x25DC18u;
    SET_GPR_U32(ctx, 31, 0x25DC20u);
    ctx->pc = 0x25DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC18u;
    // 0x25dc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC50u, 0x25DC18u, 0x25DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC20u;
label_25dc20:
    // 0x25dc20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25dc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25dc24:
    // 0x25dc24: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
    // 0x25dc28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25dc2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DC2Cu;
    {
        const bool branch_taken_0x25dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC2Cu;
        // 0x25dc30: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc2c) {
            ctx->pc = 0x25DC50u;
            goto label_25dc50;
        }
    }
    ctx->pc = 0x25DC34u;
label_25dc34:
    // 0x25dc34: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x25dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x25dc38: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC38u;
    {
        const bool branch_taken_0x25dc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc38) {
            ctx->pc = 0x25DC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC38u;
            // 0x25dc3c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC4Cu;
            goto label_25dc4c;
        }
    }
    ctx->pc = 0x25DC40u;
    // 0x25dc40: 0xc09f714  jal         func_27DC50
    ctx->pc = 0x25DC40u;
    SET_GPR_U32(ctx, 31, 0x25DC48u);
    ctx->pc = 0x25DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC40u;
    // 0x25dc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC50u, 0x25DC40u, 0x25DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC48u;
label_25dc48:
    // 0x25dc48: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25dc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25dc4c:
    // 0x25dc4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25dc50:
    // 0x25dc50: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25dc54:
    // 0x25dc54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25dc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25dc58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25dc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dc5c: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x25dc60: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25dc64: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25dc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x25dc68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25dc68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dc6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25dc6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dc70: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25dc70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25dc74: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25dc78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25dc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25dc7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25dc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25dc80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25DC80u;
    SET_GPR_U32(ctx, 31, 0x25DC88u);
    ctx->pc = 0x25DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC80u;
    // 0x25dc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25DC80u, 0x25DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC88u;
label_25dc88:
    // 0x25dc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25DC8Cu;
    SET_GPR_U32(ctx, 31, 0x25DC94u);
    ctx->pc = 0x25DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC8Cu;
    // 0x25dc90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25DC8Cu, 0x25DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC94u;
label_25dc94:
    // 0x25dc94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25dc94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25dc98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25DC98u;
    SET_GPR_U32(ctx, 31, 0x25DCA0u);
    ctx->pc = 0x25DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC98u;
    // 0x25dc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25DC98u, 0x25DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCA0u;
label_25dca0:
    // 0x25dca0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25dca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25dca4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x25DCA4u;
    {
        const bool branch_taken_0x25dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCA4u;
        // 0x25dca8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dca4) {
            ctx->pc = 0x25DE40u;
            goto label_25de40;
        }
    }
    ctx->pc = 0x25DCACu;
label_25dcac:
    // 0x25dcac: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x25dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x25dcb0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DCB0u;
    {
        const bool branch_taken_0x25dcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcb0) {
            ctx->pc = 0x25DCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DCB0u;
            // 0x25dcb4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DCC4u;
            goto label_25dcc4;
        }
    }
    ctx->pc = 0x25DCB8u;
    // 0x25dcb8: 0xc09f714  jal         func_27DC50
    ctx->pc = 0x25DCB8u;
    SET_GPR_U32(ctx, 31, 0x25DCC0u);
    ctx->pc = 0x25DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DCB8u;
    // 0x25dcbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC50u, 0x25DCB8u, 0x25DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCC0u;
label_25dcc0:
    // 0x25dcc0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25dcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25dcc4:
    // 0x25dcc4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25dcc8: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x25dcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25dcd0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25dcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25dcd4:
    // 0x25dcd4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25dcd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25dcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dcdc: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25dcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x25dce0: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x25dce4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE4u;
        // 0x25dce8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DD0Cu;
            goto label_25dd0c;
        }
    }
    ctx->pc = 0x25DCECu;
    // 0x25dcec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25dcf0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25dcf4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25dcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dcf8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x25dcfc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25dcfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25dd00: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25dd00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dd04: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25dd04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25dd08: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25dd0c:
    // 0x25dd0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25DD0Cu;
    SET_GPR_U32(ctx, 31, 0x25DD14u);
    ctx->pc = 0x25DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD0Cu;
    // 0x25dd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25DD0Cu, 0x25DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD14u;
label_25dd14:
    // 0x25dd14: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25dd14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25dd18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25dd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25dd1c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25DD50u;
            goto label_25dd50;
        }
    }
    ctx->pc = 0x25DD24u;
    // 0x25dd24: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25dd24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x25dd28: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DD28u;
    {
        const bool branch_taken_0x25dd28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD28u;
        // 0x25dd2c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd28) {
            ctx->pc = 0x25DD38u;
            goto label_25dd38;
        }
    }
    ctx->pc = 0x25DD30u;
    // 0x25dd30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25DD30u;
    {
        const bool branch_taken_0x25dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD30u;
        // 0x25dd34: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd30) {
            ctx->pc = 0x25DD50u;
            goto label_25dd50;
        }
    }
    ctx->pc = 0x25DD38u;
label_25dd38:
    // 0x25dd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dd3c: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x25dd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x25dd40: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x25dd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25dd44: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25dd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25dd48: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25dd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x25dd4c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25dd50:
    // 0x25dd50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25dd54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25dd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25dd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd5c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25DD5Cu;
    SET_GPR_U32(ctx, 31, 0x25DD64u);
    ctx->pc = 0x25DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD5Cu;
    // 0x25dd60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25DD5Cu, 0x25DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD64u;
label_25dd64:
    // 0x25dd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd68: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25DD68u;
    SET_GPR_U32(ctx, 31, 0x25DD70u);
    ctx->pc = 0x25DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD68u;
    // 0x25dd6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25DD68u, 0x25DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD70u;
label_25dd70:
    // 0x25dd70: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25DD70u;
    {
        const bool branch_taken_0x25dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD70u;
        // 0x25dd74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd70) {
            ctx->pc = 0x25DE44u;
            goto label_25de44;
        }
    }
    ctx->pc = 0x25DD78u;
label_25dd78:
    // 0x25dd78: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25dd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25dd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25dd84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25dd88: 0x8c453390  lw          $a1, 0x3390($v0)
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13200)));
    // 0x25dd8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25dd8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd90: 0x8c463394  lw          $a2, 0x3394($v0)
    ctx->pc = 0x25dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13204)));
    // 0x25dd94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25dd94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25dd9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25DD9Cu;
    SET_GPR_U32(ctx, 31, 0x25DDA4u);
    ctx->pc = 0x25DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD9Cu;
    // 0x25dda0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25DD9Cu, 0x25DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDA4u;
label_25dda4:
    // 0x25dda4: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x25dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
    // 0x25dda8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DDA8u;
    {
        const bool branch_taken_0x25dda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dda8) {
            ctx->pc = 0x25DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DDA8u;
            // 0x25ddac: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DDBCu;
            goto label_25ddbc;
        }
    }
    ctx->pc = 0x25DDB0u;
    // 0x25ddb0: 0xc09f714  jal         func_27DC50
    ctx->pc = 0x25DDB0u;
    SET_GPR_U32(ctx, 31, 0x25DDB8u);
    ctx->pc = 0x25DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDB0u;
    // 0x25ddb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC50u, 0x25DDB0u, 0x25DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDB8u;
label_25ddb8:
    // 0x25ddb8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25ddb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25ddbc:
    // 0x25ddbc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25ddc0: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x25ddc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ddc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ddc8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25ddc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ddcc:
    // 0x25ddcc: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25ddccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x25ddd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25DDD0u;
    {
        const bool branch_taken_0x25ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDD0u;
        // 0x25ddd4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddd0) {
            ctx->pc = 0x25DE08u;
            goto label_25de08;
        }
    }
    ctx->pc = 0x25DDD8u;
    // 0x25ddd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25dddc: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x25dde0: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x25dde0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dde4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25dde8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25dde8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ddec: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25ddecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ddf0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25ddf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25ddf4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25ddf8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25ddfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ddfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25de00: 0x0  nop
    ctx->pc = 0x25de00u;
    // NOP
    // 0x25de04: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25de08:
    // 0x25de08: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25DE08u;
    SET_GPR_U32(ctx, 31, 0x25DE10u);
    ctx->pc = 0x25DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE08u;
    // 0x25de0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25DE08u, 0x25DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE10u;
label_25de10:
    // 0x25de10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE10u;
    {
        const bool branch_taken_0x25de10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de10) {
            ctx->pc = 0x25DE20u;
            goto label_25de20;
        }
    }
    ctx->pc = 0x25DE18u;
    // 0x25de18: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25DE18u;
    SET_GPR_U32(ctx, 31, 0x25DE20u);
    ctx->pc = 0x25DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE18u;
    // 0x25de1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25DE18u, 0x25DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE20u;
label_25de20:
    // 0x25de20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25de20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25de24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25de24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25de28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de2c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25DE2Cu;
    SET_GPR_U32(ctx, 31, 0x25DE34u);
    ctx->pc = 0x25DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE2Cu;
    // 0x25de30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25DE2Cu, 0x25DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE34u;
label_25de34:
    // 0x25de34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de38: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25DE38u;
    SET_GPR_U32(ctx, 31, 0x25DE40u);
    ctx->pc = 0x25DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE38u;
    // 0x25de3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25DE38u, 0x25DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE40u;
label_25de40:
    // 0x25de40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25de40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25de44:
    // 0x25de44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25de44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25de48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25de48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25de4c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25de50: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE50u;
        // 0x25de54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE58u;
}
