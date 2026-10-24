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

// Function: func_00244CF8
// Address: 0x244cf8 - 0x244fc8
void func_00244CF8_0x244cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00244CF8_0x244cf8");
#endif

    switch (ctx->pc) {
        case 0x244d20u: goto label_244d20;
        case 0x244d74u: goto label_244d74;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da4u: goto label_244da4;
        case 0x244e44u: goto label_244e44;
        case 0x244e54u: goto label_244e54;
        case 0x244e60u: goto label_244e60;
        case 0x244f10u: goto label_244f10;
        case 0x244f3cu: goto label_244f3c;
        case 0x244f84u: goto label_244f84;
        case 0x244f94u: goto label_244f94;
        case 0x244fa8u: goto label_244fa8;
        case 0x244fb4u: goto label_244fb4;
        default: break;
    }

    ctx->pc = 0x244cf8u;

    // 0x244cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x244d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244d0c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x244d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x244d10: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x244d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x244d14: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x244d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x244d18: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x244D18u;
    SET_GPR_U32(ctx, 31, 0x244D20u);
    ctx->pc = 0x244D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D18u;
    // 0x244d1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x244D18u, 0x244D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D20u;
label_244d20:
    // 0x244d20: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x244d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244d28: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x244D28u;
    {
        const bool branch_taken_0x244d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d28) {
            ctx->pc = 0x244DB0u;
            goto label_244db0;
        }
    }
    ctx->pc = 0x244D30u;
    // 0x244d30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x244D30u;
    {
        const bool branch_taken_0x244d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d30) {
            ctx->pc = 0x244D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D30u;
            // 0x244d34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D48u;
            goto label_244d48;
        }
    }
    ctx->pc = 0x244D38u;
    // 0x244d38: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x244D38u;
    {
        const bool branch_taken_0x244d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d38) {
            ctx->pc = 0x244D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D38u;
            // 0x244d3c: 0x8e0204a8  lw          $v0, 0x4A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D60u;
            goto label_244d60;
        }
    }
    ctx->pc = 0x244D40u;
    // 0x244d40: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x244D40u;
    {
        const bool branch_taken_0x244d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D40u;
        // 0x244d44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d40) {
            ctx->pc = 0x244FB8u;
            goto label_244fb8;
        }
    }
    ctx->pc = 0x244D48u;
label_244d48:
    // 0x244d48: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x244D48u;
    {
        const bool branch_taken_0x244d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D48u;
        // 0x244d4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d48) {
            ctx->pc = 0x244F08u;
            goto label_244f08;
        }
    }
    ctx->pc = 0x244D50u;
    // 0x244d50: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x244D50u;
    {
        const bool branch_taken_0x244d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x244d50) {
            ctx->pc = 0x244F7Cu;
            goto label_244f7c;
        }
    }
    ctx->pc = 0x244D58u;
    // 0x244d58: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x244D58u;
    {
        const bool branch_taken_0x244d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D58u;
        // 0x244d5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d58) {
            ctx->pc = 0x244FB8u;
            goto label_244fb8;
        }
    }
    ctx->pc = 0x244D60u;
label_244d60:
    // 0x244d60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x244d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x244d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x244d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x244d6c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x244D6Cu;
    SET_GPR_U32(ctx, 31, 0x244D74u);
    ctx->pc = 0x244D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D6Cu;
    // 0x244d70: 0xae0204a8  sw          $v0, 0x4A8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x244D6Cu, 0x244D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D74u;
label_244d74:
    // 0x244d74: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x244d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244d78: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x244d78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x244d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d84: 0x8c650d78  lw          $a1, 0xD78($v1)
    ctx->pc = 0x244d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
    // 0x244d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244D94u;
    SET_GPR_U32(ctx, 31, 0x244D9Cu);
    ctx->pc = 0x244D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D94u;
    // 0x244d98: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244D94u, 0x244D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D9Cu;
label_244d9c:
    // 0x244d9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244D9Cu;
    SET_GPR_U32(ctx, 31, 0x244DA4u);
    ctx->pc = 0x244DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D9Cu;
    // 0x244da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244D9Cu, 0x244DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DA4u;
label_244da4:
    // 0x244da4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x244da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x244dac: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x244dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_244db0:
    // 0x244db0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x244db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244db8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x244dbc: 0x8e031644  lw          $v1, 0x1644($s0)
    ctx->pc = 0x244dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
    // 0x244dc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244dc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x244dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244dc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x244dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x244dcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x244dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x244dd0: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x244dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x244dd4: 0xa2040617  sb          $a0, 0x617($s0)
    ctx->pc = 0x244dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 4));
    // 0x244dd8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x244DD8u;
    {
        const bool branch_taken_0x244dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD8u;
        // 0x244ddc: 0xa2050531  sb          $a1, 0x531($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dd8) {
            ctx->pc = 0x244ECCu;
            goto label_244ecc;
        }
    }
    ctx->pc = 0x244DE0u;
    // 0x244de0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x244de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x244de4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x244de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x244de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x244dec: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x244DECu;
    {
        const bool branch_taken_0x244dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244dec) {
            ctx->pc = 0x244DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244DECu;
            // 0x244df0: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244EC0u;
            goto label_244ec0;
        }
    }
    ctx->pc = 0x244DF4u;
    // 0x244df4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x244df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244df8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x244df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x244dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244e00: 0x0  nop
    ctx->pc = 0x244e00u;
    // NOP
    // 0x244e04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244e08: 0x0  nop
    ctx->pc = 0x244e08u;
    // NOP
    // 0x244e0c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x244E0Cu;
    {
        const bool branch_taken_0x244e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E0Cu;
        // 0x244e10: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e0c) {
            ctx->pc = 0x244E9Cu;
            goto label_244e9c;
        }
    }
    ctx->pc = 0x244E14u;
    // 0x244e14: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x244e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x244e18: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x244e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x244e1c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x244e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x244e20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x244e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x244e24: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x244E24u;
    {
        const bool branch_taken_0x244e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x244e24) {
            ctx->pc = 0x244E9Cu;
            goto label_244e9c;
        }
    }
    ctx->pc = 0x244E2Cu;
    // 0x244e2c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x244e30: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x244e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x244e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x244e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x244e38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x244e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x244e3c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x244E3Cu;
    SET_GPR_U32(ctx, 31, 0x244E44u);
    ctx->pc = 0x244E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E3Cu;
    // 0x244e40: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x244E3Cu, 0x244E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E44u;
label_244e44:
    // 0x244e44: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x244e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x244e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e4c: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x244E4Cu;
    SET_GPR_U32(ctx, 31, 0x244E54u);
    ctx->pc = 0x244E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E4Cu;
    // 0x244e50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x244E4Cu, 0x244E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E54u;
label_244e54:
    // 0x244e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e58: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x244E58u;
    SET_GPR_U32(ctx, 31, 0x244E60u);
    ctx->pc = 0x244E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E58u;
    // 0x244e5c: 0x260516a0  addiu       $a1, $s0, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x244E58u, 0x244E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E60u;
label_244e60:
    // 0x244e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244E60u;
    {
        const bool branch_taken_0x244e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E60u;
        // 0x244e64: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e60) {
            ctx->pc = 0x244E74u;
            goto label_244e74;
        }
    }
    ctx->pc = 0x244E68u;
    // 0x244e68: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x244e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x244e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x244e70: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x244e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
label_244e74:
    // 0x244e74: 0xc6010510  lwc1        $f1, 0x510($s0)
    ctx->pc = 0x244e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244e78: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x244e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x244e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244e80: 0x0  nop
    ctx->pc = 0x244e80u;
    // NOP
    // 0x244e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244e88: 0x0  nop
    ctx->pc = 0x244e88u;
    // NOP
    // 0x244e8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x244E8Cu;
    {
        const bool branch_taken_0x244e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E8Cu;
        // 0x244e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e8c) {
            ctx->pc = 0x244E98u;
            goto label_244e98;
        }
    }
    ctx->pc = 0x244E94u;
    // 0x244e94: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244e98:
    // 0x244e98: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x244e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244e9c:
    // 0x244e9c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x244e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x244ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244ea4: 0x0  nop
    ctx->pc = 0x244ea4u;
    // NOP
    // 0x244ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244eac: 0x0  nop
    ctx->pc = 0x244eacu;
    // NOP
    // 0x244eb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x244EB0u;
    {
        const bool branch_taken_0x244eb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EB0u;
        // 0x244eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244eb0) {
            ctx->pc = 0x244EBCu;
            goto label_244ebc;
        }
    }
    ctx->pc = 0x244EB8u;
    // 0x244eb8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244ebc:
    // 0x244ebc: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x244ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_244ec0:
    // 0x244ec0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244EC0u;
    {
        const bool branch_taken_0x244ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EC0u;
        // 0x244ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ec0) {
            ctx->pc = 0x244ECCu;
            goto label_244ecc;
        }
    }
    ctx->pc = 0x244EC8u;
    // 0x244ec8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244ecc:
    // 0x244ecc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x244eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x244ed0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x244ed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x244ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x244ed8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244ED8u;
    {
        const bool branch_taken_0x244ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ED8u;
        // 0x244edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ed8) {
            ctx->pc = 0x244EE4u;
            goto label_244ee4;
        }
    }
    ctx->pc = 0x244EE0u;
    // 0x244ee0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244ee4:
    // 0x244ee4: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x244ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244eec: 0x0  nop
    ctx->pc = 0x244eecu;
    // NOP
    // 0x244ef0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244ef4: 0x0  nop
    ctx->pc = 0x244ef4u;
    // NOP
    // 0x244ef8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF8u;
        // 0x244efc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244FB4u;
            goto label_244fb4;
        }
    }
    ctx->pc = 0x244F00u;
    // 0x244f00: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x244F00u;
    {
        const bool branch_taken_0x244f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F00u;
        // 0x244f04: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f00) {
            ctx->pc = 0x244FB4u;
            goto label_244fb4;
        }
    }
    ctx->pc = 0x244F08u;
label_244f08:
    // 0x244f08: 0xc09d91a  jal         func_276468
    ctx->pc = 0x244F08u;
    SET_GPR_U32(ctx, 31, 0x244F10u);
    ctx->pc = 0x244F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F08u;
    // 0x244f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x244F08u, 0x244F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F10u;
label_244f10:
    // 0x244f10: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x244f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244f14: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x244f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x244f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f20: 0x8c650d78  lw          $a1, 0xD78($v1)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
    // 0x244f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f28: 0x8c660d7c  lw          $a2, 0xD7C($v1)
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3452)));
    // 0x244f2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f30: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x244f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x244f34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244F34u;
    SET_GPR_U32(ctx, 31, 0x244F3Cu);
    ctx->pc = 0x244F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F34u;
    // 0x244f38: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244F34u, 0x244F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F3Cu;
label_244f3c:
    // 0x244f3c: 0x8e0304a8  lw          $v1, 0x4A8($s0)
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x244f40: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x244f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x244f44: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x244f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x244f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x244f4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x244f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x244f50: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x244f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x244f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244f58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x244f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244f60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x244f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244f64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x244f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244f68: 0xe6001744  swc1        $f0, 0x1744($s0)
    ctx->pc = 0x244f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5956), bits); }
    // 0x244f6c: 0xa2020531  sb          $v0, 0x531($s0)
    ctx->pc = 0x244f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x244f70: 0xae0304a8  sw          $v1, 0x4A8($s0)
    ctx->pc = 0x244f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 3));
    // 0x244f74: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x244f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x244f78: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x244f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_244f7c:
    // 0x244f7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244F7Cu;
    SET_GPR_U32(ctx, 31, 0x244F84u);
    ctx->pc = 0x244F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F7Cu;
    // 0x244f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244F7Cu, 0x244F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F84u;
label_244f84:
    // 0x244f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244F84u;
    {
        const bool branch_taken_0x244f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f84) {
            ctx->pc = 0x244F94u;
            goto label_244f94;
        }
    }
    ctx->pc = 0x244F8Cu;
    // 0x244f8c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x244F8Cu;
    SET_GPR_U32(ctx, 31, 0x244F94u);
    ctx->pc = 0x244F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F8Cu;
    // 0x244f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x244F8Cu, 0x244F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F94u;
label_244f94:
    // 0x244f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244f98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fa0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x244FA0u;
    SET_GPR_U32(ctx, 31, 0x244FA8u);
    ctx->pc = 0x244FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FA0u;
    // 0x244fa4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x244FA0u, 0x244FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FA8u;
label_244fa8:
    // 0x244fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x244FACu;
    SET_GPR_U32(ctx, 31, 0x244FB4u);
    ctx->pc = 0x244FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FACu;
    // 0x244fb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x244FACu, 0x244FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FB4u;
label_244fb4:
    // 0x244fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244fb8:
    // 0x244fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244fbc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x244fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x244FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FC0u;
        // 0x244fc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244FC8u;
}
