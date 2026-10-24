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

// Function: func_00143D20
// Address: 0x143d20 - 0x144368
void func_00143D20_0x143d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143D20_0x143d20");
#endif

    switch (ctx->pc) {
        case 0x143d7cu: goto label_143d7c;
        case 0x143e00u: goto label_143e00;
        case 0x143f10u: goto label_143f10;
        case 0x143fa4u: goto label_143fa4;
        case 0x143fc4u: goto label_143fc4;
        case 0x143fd4u: goto label_143fd4;
        case 0x144024u: goto label_144024;
        case 0x1440bcu: goto label_1440bc;
        case 0x1440d8u: goto label_1440d8;
        case 0x1440e0u: goto label_1440e0;
        case 0x144308u: goto label_144308;
        case 0x144310u: goto label_144310;
        case 0x144318u: goto label_144318;
        case 0x144320u: goto label_144320;
        default: break;
    }

    ctx->pc = 0x143d20u;

    // 0x143d20: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x143d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x143d24: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x143d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x143d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d2c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x143d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x143d30: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x143d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x143d34: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x143d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x143d38: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x143d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x143d3c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x143d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x143d40: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x143d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x143d44: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x143d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x143d48: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x143d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x143d4c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x143d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x143d50: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x143d50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x143d54: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x143d54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x143d58: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x143d58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x143d5c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x143d5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x143d60: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x143d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x143d64: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x143d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x143d68: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x143d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143d6c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x143d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143d70: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x143d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143d74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x143D74u;
    SET_GPR_U32(ctx, 31, 0x143D7Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x143D74u, 0x143D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D7Cu;
label_143d7c:
    // 0x143d7c: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x143d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x143d80: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x143d84: 0x8e2305a4  lw          $v1, 0x5A4($s1)
    ctx->pc = 0x143d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x143d88: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x143d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x143d8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x143d90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x143d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x143d94: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x143d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x143d98: 0x8e2405a8  lw          $a0, 0x5A8($s1)
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
    // 0x143d9c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x143d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x143da0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x143da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x143da4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x143da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x143da8: 0x8cc34c58  lw          $v1, 0x4C58($a2)
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x143dac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x143dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x143db0: 0x8c760004  lw          $s6, 0x4($v1)
    ctx->pc = 0x143db0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x143db4: 0x12c2014b  beq         $s6, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x143DB4u;
    {
        const bool branch_taken_0x143db4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x143DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DB4u;
        // 0x143db8: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143db4) {
            ctx->pc = 0x1442E4u;
            goto label_1442e4;
        }
    }
    ctx->pc = 0x143DBCu;
    // 0x143dbc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x143dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x143dc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x143dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x143dc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x143dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x143dc8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x143dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x143dcc: 0x3c014218  lui         $at, 0x4218
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16920 << 16));
    // 0x143dd0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x143dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x143dd4: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143dd8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x143dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x143ddc: 0x263300a8  addiu       $s3, $s1, 0xA8
    ctx->pc = 0x143ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x143de0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x143de4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x143de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x143de8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x143de8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143df0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x143df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x143df4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x143df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x143df8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x143df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143dfc: 0x0  nop
    ctx->pc = 0x143dfcu;
    // NOP
label_143e00:
    // 0x143e00: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e04: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x143e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x143e08: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x143e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x143e0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143E0Cu;
    {
        const bool branch_taken_0x143e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E0Cu;
        // 0x143e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e0c) {
            ctx->pc = 0x143E1Cu;
            goto label_143e1c;
        }
    }
    ctx->pc = 0x143E14u;
    // 0x143e14: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x143e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x143e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143e1c:
    // 0x143e1c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x143e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x143e20: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x143E20u;
    {
        const bool branch_taken_0x143e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143e20) {
            ctx->pc = 0x143E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E20u;
            // 0x143e24: 0x82430531  lb          $v1, 0x531($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E4Cu;
            goto label_143e4c;
        }
    }
    ctx->pc = 0x143E28u;
    // 0x143e28: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x143e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x143e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143E2Cu;
    {
        const bool branch_taken_0x143e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E2Cu;
        // 0x143e30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e2c) {
            ctx->pc = 0x143E3Cu;
            goto label_143e3c;
        }
    }
    ctx->pc = 0x143E34u;
    // 0x143e34: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x143e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x143e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143e3c:
    // 0x143e3c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x143e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x143e40: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x143E40u;
    {
        const bool branch_taken_0x143e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E40u;
        // 0x143e44: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e40) {
            ctx->pc = 0x1442C4u;
            goto label_1442c4;
        }
    }
    ctx->pc = 0x143E48u;
    // 0x143e48: 0x82430531  lb          $v1, 0x531($s2)
    ctx->pc = 0x143e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
label_143e4c:
    // 0x143e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143e50: 0x1062011c  beq         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x143E50u;
    {
        const bool branch_taken_0x143e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x143E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E50u;
        // 0x143e54: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e50) {
            ctx->pc = 0x1442C4u;
            goto label_1442c4;
        }
    }
    ctx->pc = 0x143E58u;
    // 0x143e58: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x143e5c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x143e60: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x143e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x143e64: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x143e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143e68: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x143e68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143e6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x143e6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143e70: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x143e70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143e74: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x143e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143e78: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x143e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x143e7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x143e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143e80: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x143e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143e84: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x143e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x143e88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x143e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e8c: 0x13a40007  beq         $sp, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x143E8Cu;
    {
        const bool branch_taken_0x143e8c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x143E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E8Cu;
        // 0x143e90: 0x27b40070  addiu       $s4, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e8c) {
            ctx->pc = 0x143EACu;
            goto label_143eac;
        }
    }
    ctx->pc = 0x143E94u;
    // 0x143e94: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x143e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143e98: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x143e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143e9c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x143e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143ea0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x143ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x143ea4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x143ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x143ea8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x143ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_143eac:
    // 0x143eac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x143eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143eb0: 0xc62105d0  lwc1        $f1, 0x5D0($s1)
    ctx->pc = 0x143eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143eb4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x143eb4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x143eb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143ebc: 0x0  nop
    ctx->pc = 0x143ebcu;
    // NOP
    // 0x143ec0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143EC0u;
    {
        const bool branch_taken_0x143ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC0u;
        // 0x143ec4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ec0) {
            ctx->pc = 0x143EE0u;
            goto label_143ee0;
        }
    }
    ctx->pc = 0x143EC8u;
    // 0x143ec8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x143ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143ecc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x143eccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x143ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143ed4: 0x0  nop
    ctx->pc = 0x143ed4u;
    // NOP
    // 0x143ed8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x143ED8u;
    {
        const bool branch_taken_0x143ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x143ed8) {
            ctx->pc = 0x143F08u;
            goto label_143f08;
        }
    }
    ctx->pc = 0x143EE0u;
label_143ee0:
    // 0x143ee0: 0x82420531  lb          $v0, 0x531($s2)
    ctx->pc = 0x143ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
    // 0x143ee4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x143ee8: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143EE8u;
    {
        const bool branch_taken_0x143ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x143EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE8u;
        // 0x143eec: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ee8) {
            ctx->pc = 0x143F08u;
            goto label_143f08;
        }
    }
    ctx->pc = 0x143EF0u;
    // 0x143ef0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x143EF0u;
    {
        const bool branch_taken_0x143ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x143EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF0u;
        // 0x143ef4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ef0) {
            ctx->pc = 0x143F08u;
            goto label_143f08;
        }
    }
    ctx->pc = 0x143EF8u;
    // 0x143ef8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143EF8u;
    {
        const bool branch_taken_0x143ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x143EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF8u;
        // 0x143efc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ef8) {
            ctx->pc = 0x143F08u;
            goto label_143f08;
        }
    }
    ctx->pc = 0x143F00u;
    // 0x143f00: 0x144500f0  bne         $v0, $a1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x143F00u;
    {
        const bool branch_taken_0x143f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x143F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F00u;
        // 0x143f04: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f00) {
            ctx->pc = 0x1442C4u;
            goto label_1442c4;
        }
    }
    ctx->pc = 0x143F08u;
label_143f08:
    // 0x143f08: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x143F08u;
    SET_GPR_U32(ctx, 31, 0x143F10u);
    ctx->pc = 0x143F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F08u;
    // 0x143f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x143F08u, 0x143F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F10u;
label_143f10:
    // 0x143f10: 0xc62105d0  lwc1        $f1, 0x5D0($s1)
    ctx->pc = 0x143f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f18: 0x0  nop
    ctx->pc = 0x143f18u;
    // NOP
    // 0x143f1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x143F1Cu;
    {
        const bool branch_taken_0x143f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F1Cu;
        // 0x143f20: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f1c) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F24u;
    // 0x143f24: 0x82420531  lb          $v0, 0x531($s2)
    ctx->pc = 0x143f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
    // 0x143f28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143F28u;
    {
        const bool branch_taken_0x143f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x143F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F28u;
        // 0x143f2c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f28) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F30u;
    // 0x143f30: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143F30u;
    {
        const bool branch_taken_0x143f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x143F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F30u;
        // 0x143f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f30) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F38u;
    // 0x143f38: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143F38u;
    {
        const bool branch_taken_0x143f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x143F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F38u;
        // 0x143f3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f38) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F40u;
    // 0x143f40: 0x144300e0  bne         $v0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x143F40u;
    {
        const bool branch_taken_0x143f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x143F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F40u;
        // 0x143f44: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f40) {
            ctx->pc = 0x1442C4u;
            goto label_1442c4;
        }
    }
    ctx->pc = 0x143F48u;
label_143f48:
    // 0x143f48: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x143f4c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x143f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x143f50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x143f50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143f54: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x143f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143f58: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x143f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x143f5c: 0x4408c000  mfc1        $t0, $f24
    ctx->pc = 0x143f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x143f60: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x143f60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x143f64: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x143f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143f68: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x143f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143f6c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x143f6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143f70: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x143f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143f74: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x143f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143f78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x143f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f7c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x143f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f84: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x143f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143f88: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x143f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143f90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x143f94: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x143f94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x143f98: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x143f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x143f9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x143F9Cu;
    SET_GPR_U32(ctx, 31, 0x143FA4u);
    ctx->pc = 0x143FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F9Cu;
    // 0x143fa0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x143F9Cu, 0x143FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FA4u;
label_143fa4:
    // 0x143fa4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143fa8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x143fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x143fac: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x143facu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x143fb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x143fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fb4: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x143fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x143fb8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x143fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fbc: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x143FBCu;
    SET_GPR_U32(ctx, 31, 0x143FC4u);
    ctx->pc = 0x143FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FBCu;
    // 0x143fc0: 0xe7b4006c  swc1        $f20, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x143FBCu, 0x143FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FC4u;
label_143fc4:
    // 0x143fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x143fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fc8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x143fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fcc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x143FCCu;
    SET_GPR_U32(ctx, 31, 0x143FD4u);
    ctx->pc = 0x143FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FCCu;
    // 0x143fd0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x143FCCu, 0x143FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FD4u;
label_143fd4:
    // 0x143fd4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x143fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x143fd8: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143fdc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x143fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x143fe0: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x143fe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x143fe4: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x143fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x143fe8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x143fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143fec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x143fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143ff0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x143ff0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143ff4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x143ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143ff8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x143ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143ffc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x143ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144000: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x144000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144004: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x144004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144008: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x144008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14400c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x14400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144010: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x144010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144014: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x144014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x144018: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x144018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14401c: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x14401Cu;
    SET_GPR_U32(ctx, 31, 0x144024u);
    ctx->pc = 0x144020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14401Cu;
    // 0x144020: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x14401Cu, 0x144024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144024u;
label_144024:
    // 0x144024: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x144024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x144028: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x144028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14402c: 0xc62105d0  lwc1        $f1, 0x5D0($s1)
    ctx->pc = 0x14402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144030: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x144030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x144034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144038: 0x0  nop
    ctx->pc = 0x144038u;
    // NOP
    // 0x14403c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x14403Cu;
    {
        const bool branch_taken_0x14403c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x144040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14403Cu;
        // 0x144040: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14403c) {
            ctx->pc = 0x144118u;
            goto label_144118;
        }
    }
    ctx->pc = 0x144044u;
    // 0x144044: 0x82440531  lb          $a0, 0x531($s2)
    ctx->pc = 0x144044u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
    // 0x144048: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x144048u;
    {
        const bool branch_taken_0x144048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x14404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144048u;
        // 0x14404c: 0x92420531  lbu         $v0, 0x531($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144048) {
            ctx->pc = 0x14406Cu;
            goto label_14406c;
        }
    }
    ctx->pc = 0x144050u;
    // 0x144050: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x144054: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x144054u;
    {
        const bool branch_taken_0x144054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x144058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144054u;
        // 0x144058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144054) {
            ctx->pc = 0x14406Cu;
            goto label_14406c;
        }
    }
    ctx->pc = 0x14405Cu;
    // 0x14405c: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14405Cu;
    {
        const bool branch_taken_0x14405c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x144060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14405Cu;
        // 0x144060: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14405c) {
            ctx->pc = 0x14406Cu;
            goto label_14406c;
        }
    }
    ctx->pc = 0x144064u;
    // 0x144064: 0x14830097  bne         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x144064u;
    {
        const bool branch_taken_0x144064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x144068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144064u;
        // 0x144068: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144064) {
            ctx->pc = 0x1442C4u;
            goto label_1442c4;
        }
    }
    ctx->pc = 0x14406Cu;
label_14406c:
    // 0x14406c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x144070: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x144070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144074: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x144078: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144078u;
    {
        const bool branch_taken_0x144078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x144078) {
            ctx->pc = 0x14407Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144078u;
            // 0x14407c: 0x8e2205a8  lw          $v0, 0x5A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144090u;
            goto label_144090;
        }
    }
    ctx->pc = 0x144080u;
    // 0x144080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144084: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x144084u;
    {
        const bool branch_taken_0x144084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x144084) {
            ctx->pc = 0x144088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144084u;
            // 0x144088: 0x8e2205a4  lw          $v0, 0x5A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144098u;
            goto label_144098;
        }
    }
    ctx->pc = 0x14408Cu;
    // 0x14408c: 0x8e2205a8  lw          $v0, 0x5A8($s1)
    ctx->pc = 0x14408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
label_144090:
    // 0x144090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x144090u;
    {
        const bool branch_taken_0x144090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144090u;
        // 0x144094: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144090) {
            ctx->pc = 0x14409Cu;
            goto label_14409c;
        }
    }
    ctx->pc = 0x144098u;
label_144098:
    // 0x144098: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14409c:
    // 0x14409c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1440a0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1440a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1440a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1440a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1440a8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1440a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1440ac: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1440acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1440b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1440b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440b4: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1440B4u;
    SET_GPR_U32(ctx, 31, 0x1440BCu);
    ctx->pc = 0x1440B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440B4u;
    // 0x1440b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1440B4u, 0x1440BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440BCu;
label_1440bc:
    // 0x1440bc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1440bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1440c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1440c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440c4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1440c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1440c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1440c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440cc: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x1440ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1440d0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1440D0u;
    SET_GPR_U32(ctx, 31, 0x1440D8u);
    ctx->pc = 0x1440D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440D0u;
    // 0x1440d4: 0xe695000c  swc1        $f21, 0xC($s4) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1440D0u, 0x1440D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440D8u;
label_1440d8:
    // 0x1440d8: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x1440D8u;
    SET_GPR_U32(ctx, 31, 0x1440E0u);
    ctx->pc = 0x1440DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440D8u;
    // 0x1440dc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x1440D8u, 0x1440E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440E0u;
label_1440e0:
    // 0x1440e0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1440e0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1440e4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1440e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1440e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1440e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1440ec: 0x0  nop
    ctx->pc = 0x1440ecu;
    // NOP
    // 0x1440f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1440f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1440f4: 0x0  nop
    ctx->pc = 0x1440f4u;
    // NOP
    // 0x1440f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1440F8u;
    {
        const bool branch_taken_0x1440f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1440f8) {
            ctx->pc = 0x1440FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1440F8u;
            // 0x1440fc: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x144100u;
            goto label_144100;
        }
    }
    ctx->pc = 0x144100u;
label_144100:
    // 0x144100: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x144104: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x144104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x144108: 0xe442009c  swc1        $f2, 0x9C($v0)
    ctx->pc = 0x144108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x14410c: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x144110: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x144110u;
    {
        const bool branch_taken_0x144110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144110u;
        // 0x144114: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144110) {
            ctx->pc = 0x1442B8u;
            goto label_1442b8;
        }
    }
    ctx->pc = 0x144118u;
label_144118:
    // 0x144118: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x144118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14411c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144120: 0x0  nop
    ctx->pc = 0x144120u;
    // NOP
    // 0x144124: 0x0  nop
    ctx->pc = 0x144124u;
    // NOP
    // 0x144128: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x144128u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x14412c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14412cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x144130: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x144130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x144134: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x144134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x144138: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x144138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14413c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144140: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x144140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144144: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x144144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144148: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x144148u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14414c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144150: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x144150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x144154: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x144154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x144158: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x144158u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x14415c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x14415cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x144160: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x144160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x144164: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x144164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144168: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x144168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14416c: 0x13b40006  beq         $sp, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x14416Cu;
    {
        const bool branch_taken_0x14416c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x144170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14416Cu;
        // 0x144170: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14416c) {
            ctx->pc = 0x144188u;
            goto label_144188;
        }
    }
    ctx->pc = 0x144174u;
    // 0x144174: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x144174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144178: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x144178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14417c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x144180: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x144180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x144184: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x144184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_144188:
    // 0x144188: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x144188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14418c: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x14418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x144190: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x144190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144194: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144198: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x144198u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14419c: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x1441a0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1441a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1441a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1441a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1441a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1441a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1441ac: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x1441b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1441b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1441b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1441b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1441b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1441b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1441bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1441c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1441c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1441c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1441c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1441c8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1441c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1441cc: 0xe441009c  swc1        $f1, 0x9C($v0)
    ctx->pc = 0x1441ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1441d0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1441d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1441d4: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x1441d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1441d8: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1441dc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1441dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1441e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1441e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1441e4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1441e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1441e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1441e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1441ec: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1441ecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x1441f0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1441f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1441f4: 0x0  nop
    ctx->pc = 0x1441f4u;
    // NOP
    // 0x1441f8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1441F8u;
    {
        const bool branch_taken_0x1441f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1441f8) {
            ctx->pc = 0x14425Cu;
            goto label_14425c;
        }
    }
    ctx->pc = 0x144200u;
    // 0x144200: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x144200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144204: 0x0  nop
    ctx->pc = 0x144204u;
    // NOP
    // 0x144208: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x144208u;
    {
        const bool branch_taken_0x144208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144208u;
        // 0x14420c: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144208) {
            ctx->pc = 0x14425Cu;
            goto label_14425c;
        }
    }
    ctx->pc = 0x144210u;
    // 0x144210: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x144210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x144214: 0x3c0142f4  lui         $at, 0x42F4
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17140 << 16));
    // 0x144218: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14421c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x14421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x144220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144224: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x144224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x144228: 0x262500a4  addiu       $a1, $s1, 0xA4
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x14422c: 0x0  nop
    ctx->pc = 0x14422cu;
    // NOP
    // 0x144230: 0x0  nop
    ctx->pc = 0x144230u;
    // NOP
    // 0x144234: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x144234u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x144238: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x144238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x14423c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14423cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x144240: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144244: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x144244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x144248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x144248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14424c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x14424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x144250: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x144250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x144254: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x144254u;
    {
        const bool branch_taken_0x144254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144254u;
        // 0x144258: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144254) {
            ctx->pc = 0x144280u;
            goto label_144280;
        }
    }
    ctx->pc = 0x14425Cu;
label_14425c:
    // 0x14425c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x144260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x144260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144264: 0x0  nop
    ctx->pc = 0x144264u;
    // NOP
    // 0x144268: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x144268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14426c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x144270: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x144270u;
    {
        const bool branch_taken_0x144270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144270) {
            ctx->pc = 0x144274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144270u;
            // 0x144274: 0x3c020580  lui         $v0, 0x580 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1408 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144278u;
            goto label_144278;
        }
    }
    ctx->pc = 0x144278u;
label_144278:
    // 0x144278: 0x262500a4  addiu       $a1, $s1, 0xA4
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x14427c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x14427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_144280:
    // 0x144280: 0xae62fffc  sw          $v0, -0x4($s3)
    ctx->pc = 0x144280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 2));
    // 0x144284: 0x92420531  lbu         $v0, 0x531($s2)
    ctx->pc = 0x144284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1329)));
    // 0x144288: 0x2404026a  addiu       $a0, $zero, 0x26A
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x14428c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14428cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x144290: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x144290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x144294: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144294u;
    {
        const bool branch_taken_0x144294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x144298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144294u;
        // 0x144298: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144294) {
            ctx->pc = 0x1442B0u;
            goto label_1442b0;
        }
    }
    ctx->pc = 0x14429Cu;
    // 0x14429c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1442a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1442a4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1442a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1442a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1442a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1442ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1442b0:
    // 0x1442b0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1442b4: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_1442b8:
    // 0x1442b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1442bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1442c0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1442c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_1442c4:
    // 0x1442c4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1442c8: 0x8c834c58  lw          $v1, 0x4C58($a0)
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19544)));
    // 0x1442cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1442ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1442d0: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1442D0u;
    {
        const bool branch_taken_0x1442d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1442D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442D0u;
        // 0x1442d4: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442d0) {
            ctx->pc = 0x1442E4u;
            goto label_1442e4;
        }
    }
    ctx->pc = 0x1442D8u;
    // 0x1442d8: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x1442d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1442dc: 0x5440fec8  bnel        $v0, $zero, . + 4 + (-0x138 << 2)
    ctx->pc = 0x1442DCu;
    {
        const bool branch_taken_0x1442dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1442dc) {
            ctx->pc = 0x1442E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1442DCu;
            // 0x1442e0: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143e00;
        }
    }
    ctx->pc = 0x1442E4u;
label_1442e4:
    // 0x1442e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1442e8: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1442e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1442ec: 0x8e2304a4  lw          $v1, 0x4A4($s1)
    ctx->pc = 0x1442ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1188)));
    // 0x1442f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1442f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1442f4: 0xae22049c  sw          $v0, 0x49C($s1)
    ctx->pc = 0x1442f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 2));
    // 0x1442f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1442fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1442fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x144300: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x144300u;
    SET_GPR_U32(ctx, 31, 0x144308u);
    ctx->pc = 0x144304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144300u;
    // 0x144304: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x144300u, 0x144308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144308u;
label_144308:
    // 0x144308: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x144308u;
    SET_GPR_U32(ctx, 31, 0x144310u);
    ctx->pc = 0x14430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144308u;
    // 0x14430c: 0x262404b0  addiu       $a0, $s1, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x144308u, 0x144310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144310u;
label_144310:
    // 0x144310: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x144310u;
    SET_GPR_U32(ctx, 31, 0x144318u);
    ctx->pc = 0x144314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144310u;
    // 0x144314: 0x26240500  addiu       $a0, $s1, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x144310u, 0x144318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144318u;
label_144318:
    // 0x144318: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x144318u;
    SET_GPR_U32(ctx, 31, 0x144320u);
    ctx->pc = 0x14431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144318u;
    // 0x14431c: 0x26240550  addiu       $a0, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x144318u, 0x144320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144320u;
label_144320:
    // 0x144320: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x144320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x144324: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x144324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x144328: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x144328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14432c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x14432cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x144330: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x144330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x144334: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x144334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x144338: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x144338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14433c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x14433cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x144340: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x144340u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x144344: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x144344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x144348: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x144348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14434c: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x14434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x144350: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x144350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x144354: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x144354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x144358: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x144358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14435c: 0x3e00008  jr          $ra
    ctx->pc = 0x14435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14435Cu;
        // 0x144360: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144364u;
    // 0x144364: 0x0  nop
    ctx->pc = 0x144364u;
    // NOP
    ctx->pc = 0x144368u;
}
