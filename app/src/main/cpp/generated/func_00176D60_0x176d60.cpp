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

// Function: func_00176D60
// Address: 0x176d60 - 0x1771e0
void func_00176D60_0x176d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176D60_0x176d60");
#endif

    switch (ctx->pc) {
        case 0x176d94u: goto label_176d94;
        case 0x176df8u: goto label_176df8;
        case 0x176e78u: goto label_176e78;
        case 0x176e9cu: goto label_176e9c;
        case 0x176f10u: goto label_176f10;
        case 0x176f24u: goto label_176f24;
        case 0x176fa4u: goto label_176fa4;
        case 0x177034u: goto label_177034;
        case 0x177060u: goto label_177060;
        case 0x177070u: goto label_177070;
        case 0x177080u: goto label_177080;
        case 0x177090u: goto label_177090;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b8u: goto label_1770b8;
        case 0x1770d0u: goto label_1770d0;
        case 0x1770e8u: goto label_1770e8;
        default: break;
    }

    ctx->pc = 0x176d60u;

    // 0x176d60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x176d64: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x176d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x176d68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d6c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x176d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x176d70: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x176d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x176d74: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x176d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x176d78: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x176d78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x176d7c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x176d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x176d80: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
    // 0x176d84: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x176d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x176d88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x176d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x176d8c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x176D8Cu;
    SET_GPR_U32(ctx, 31, 0x176D94u);
    ctx->pc = 0x176D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D8Cu;
    // 0x176d90: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x176D8Cu, 0x176D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D94u;
label_176d94:
    // 0x176d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176d98: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x176d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x176d9c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176da0: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x176da4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x176da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x176da8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x176da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dac: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x176db0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x176db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176db8: 0x26244380  addiu       $a0, $s1, 0x4380
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17280));
    // 0x176dbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x176dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x176dc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176dc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176dc8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x176dcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x176dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176dd4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x176dd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x176dd8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x176dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x176ddc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x176ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x176de0: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x176de0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x176de4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x176de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x176de8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x176de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x176dec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x176decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x176df0: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x176DF0u;
    SET_GPR_U32(ctx, 31, 0x176DF8u);
    ctx->pc = 0x176DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DF0u;
    // 0x176df4: 0xe604000c  swc1        $f4, 0xC($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x176DF0u, 0x176DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DF8u;
label_176df8:
    // 0x176df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dfc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x176DFCu;
    {
        const bool branch_taken_0x176dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DFCu;
        // 0x176e00: 0xae420608  sw          $v0, 0x608($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dfc) {
            ctx->pc = 0x176E9Cu;
            goto label_176e9c;
        }
    }
    ctx->pc = 0x176E04u;
    // 0x176e04: 0x266213a0  addiu       $v0, $s3, 0x13A0
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5024));
    // 0x176e08: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x176e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x176e0c: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x176e0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x176e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e14: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x176e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176E18u;
    {
        const bool branch_taken_0x176e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E18u;
        // 0x176e1c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e18) {
            ctx->pc = 0x176E28u;
            goto label_176e28;
        }
    }
    ctx->pc = 0x176E20u;
    // 0x176e20: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x176e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176e28:
    // 0x176e28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176e2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176E2Cu;
    {
        const bool branch_taken_0x176e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E2Cu;
        // 0x176e30: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e2c) {
            ctx->pc = 0x176E44u;
            goto label_176e44;
        }
    }
    ctx->pc = 0x176E34u;
    // 0x176e34: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x176e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176E3Cu;
    {
        const bool branch_taken_0x176e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E3Cu;
        // 0x176e40: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e3c) {
            ctx->pc = 0x176E48u;
            goto label_176e48;
        }
    }
    ctx->pc = 0x176E44u;
label_176e44:
    // 0x176e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176e48:
    // 0x176e48: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x176e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x176e4c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x176e50: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x176e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x176e54: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x176e58: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x176e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x176e5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x176e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176e68: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x176e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e6c: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x176e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x176e70: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x176E70u;
    SET_GPR_U32(ctx, 31, 0x176E78u);
    ctx->pc = 0x176E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E70u;
    // 0x176e74: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x176E70u, 0x176E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E78u;
label_176e78:
    // 0x176e78: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x176e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x176e7c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x176e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x176e80: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x176e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e88: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x176e88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x176e8c: 0x8e420608  lw          $v0, 0x608($s2)
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x176e90: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x176e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x176e94: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x176E94u;
    SET_GPR_U32(ctx, 31, 0x176E9Cu);
    ctx->pc = 0x176E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E94u;
    // 0x176e98: 0x8e440608  lw          $a0, 0x608($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x176E94u, 0x176E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E9Cu;
label_176e9c:
    // 0x176e9c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x176ea0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x176ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x176ea4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176ea8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176eb4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x176eb8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x176eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x176ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176ec0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x176ec4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x176ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x176ec8: 0x26b04380  addiu       $s0, $s5, 0x4380
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    // 0x176ecc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x176eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x176ed0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x176ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ed4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x176ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x176ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176edc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x176edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x176ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x176ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ee4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x176ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x176ee8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176eec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x176eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x176ef0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x176ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ef4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x176ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x176ef8: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x176ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x176efc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x176efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x176f00: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x176f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x176f04: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x176f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x176f08: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x176F08u;
    SET_GPR_U32(ctx, 31, 0x176F10u);
    ctx->pc = 0x176F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F08u;
    // 0x176f0c: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x176F08u, 0x176F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F10u;
label_176f10:
    // 0x176f10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x176f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176f14: 0xae420600  sw          $v0, 0x600($s2)
    ctx->pc = 0x176f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 2));
    // 0x176f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f1c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x176F1Cu;
    SET_GPR_U32(ctx, 31, 0x176F24u);
    ctx->pc = 0x176F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F1Cu;
    // 0x176f20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x176F1Cu, 0x176F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F24u;
label_176f24:
    // 0x176f24: 0x8e430600  lw          $v1, 0x600($s2)
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x176f28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x176f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f2c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x176F2Cu;
    {
        const bool branch_taken_0x176f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F2Cu;
        // 0x176f30: 0xae420604  sw          $v0, 0x604($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f2c) {
            ctx->pc = 0x176FB4u;
            goto label_176fb4;
        }
    }
    ctx->pc = 0x176F34u;
    // 0x176f34: 0x926413a0  lbu         $a0, 0x13A0($s3)
    ctx->pc = 0x176f34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5024)));
    // 0x176f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f3c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x176f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x176f40: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x176f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176f44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176F44u;
    {
        const bool branch_taken_0x176f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F44u;
        // 0x176f48: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f44) {
            ctx->pc = 0x176F54u;
            goto label_176f54;
        }
    }
    ctx->pc = 0x176F4Cu;
    // 0x176f4c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x176f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176f50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176f54:
    // 0x176f54: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176F58u;
    {
        const bool branch_taken_0x176f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F58u;
        // 0x176f5c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f58) {
            ctx->pc = 0x176F70u;
            goto label_176f70;
        }
    }
    ctx->pc = 0x176F60u;
    // 0x176f60: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x176f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176F68u;
    {
        const bool branch_taken_0x176f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F68u;
        // 0x176f6c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f68) {
            ctx->pc = 0x176F74u;
            goto label_176f74;
        }
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176f74:
    // 0x176f74: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x176f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x176f78: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x176f7c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x176f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x176f80: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x176f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x176f84: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x176f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x176f88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x176f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176f90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176f94: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x176f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f98: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x176f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x176f9c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x176F9Cu;
    SET_GPR_U32(ctx, 31, 0x176FA4u);
    ctx->pc = 0x176FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F9Cu;
    // 0x176fa0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x176F9Cu, 0x176FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FA4u;
label_176fa4:
    // 0x176fa4: 0x8e430600  lw          $v1, 0x600($s2)
    ctx->pc = 0x176fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x176fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176fac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176fb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x176fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_176fb4:
    // 0x176fb4: 0x8e420604  lw          $v0, 0x604($s2)
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x176fb8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x176FB8u;
    {
        const bool branch_taken_0x176fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FB8u;
        // 0x176fbc: 0x266213a0  addiu       $v0, $s3, 0x13A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fb8) {
            ctx->pc = 0x177044u;
            goto label_177044;
        }
    }
    ctx->pc = 0x176FC0u;
    // 0x176fc0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x176fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x176fc4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x176fc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x176fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fcc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x176fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176fd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176FD0u;
    {
        const bool branch_taken_0x176fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FD0u;
        // 0x176fd4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fd0) {
            ctx->pc = 0x176FE0u;
            goto label_176fe0;
        }
    }
    ctx->pc = 0x176FD8u;
    // 0x176fd8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176fdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176fe0:
    // 0x176fe0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176fe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176FE4u;
    {
        const bool branch_taken_0x176fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE4u;
        // 0x176fe8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fe4) {
            ctx->pc = 0x176FFCu;
            goto label_176ffc;
        }
    }
    ctx->pc = 0x176FECu;
    // 0x176fec: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x176ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176ff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176FF4u;
    {
        const bool branch_taken_0x176ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FF4u;
        // 0x176ff8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ff4) {
            ctx->pc = 0x177000u;
            goto label_177000;
        }
    }
    ctx->pc = 0x176FFCu;
label_176ffc:
    // 0x176ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177000:
    // 0x177000: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x177000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x177004: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x177004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177008: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x177008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x17700c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x177010: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x177010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x177014: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x177018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17701c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17701cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177020: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x177020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177024: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x177028: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x177028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17702c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x17702Cu;
    SET_GPR_U32(ctx, 31, 0x177034u);
    ctx->pc = 0x177030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17702Cu;
    // 0x177030: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x17702Cu, 0x177034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177034u;
label_177034:
    // 0x177034: 0x8e430604  lw          $v1, 0x604($s2)
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x177038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17703c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x177040: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x177040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_177044:
    // 0x177044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17704c: 0xa6420d3a  sh          $v0, 0xD3A($s2)
    ctx->pc = 0x17704cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3386), (uint16_t)GPR_U32(ctx, 2));
    // 0x177050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177054: 0xa6420d38  sh          $v0, 0xD38($s2)
    ctx->pc = 0x177054u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3384), (uint16_t)GPR_U32(ctx, 2));
    // 0x177058: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x177058u;
    SET_GPR_U32(ctx, 31, 0x177060u);
    ctx->pc = 0x17705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177058u;
    // 0x17705c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x177058u, 0x177060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177060u;
label_177060:
    // 0x177060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177068: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x177068u;
    SET_GPR_U32(ctx, 31, 0x177070u);
    ctx->pc = 0x17706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177068u;
    // 0x17706c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x177068u, 0x177070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177070u;
label_177070:
    // 0x177070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177074: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177078: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x177078u;
    SET_GPR_U32(ctx, 31, 0x177080u);
    ctx->pc = 0x17707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177078u;
    // 0x17707c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x177078u, 0x177080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177080u;
label_177080:
    // 0x177080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177084: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x177088: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x177088u;
    SET_GPR_U32(ctx, 31, 0x177090u);
    ctx->pc = 0x17708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177088u;
    // 0x17708c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x177088u, 0x177090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177090u;
label_177090:
    // 0x177090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177094: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x177098: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x177098u;
    SET_GPR_U32(ctx, 31, 0x1770A0u);
    ctx->pc = 0x17709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177098u;
    // 0x17709c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x177098u, 0x1770A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770A0u;
label_1770a0:
    // 0x1770a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1770a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770a4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1770a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1770a8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1770A8u;
    SET_GPR_U32(ctx, 31, 0x1770B0u);
    ctx->pc = 0x1770ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770A8u;
    // 0x1770ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1770A8u, 0x1770B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770B0u;
label_1770b0:
    // 0x1770b0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1770B0u;
    SET_GPR_U32(ctx, 31, 0x1770B8u);
    ctx->pc = 0x1770B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770B0u;
    // 0x1770b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1770B0u, 0x1770B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770B8u;
label_1770b8:
    // 0x1770b8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1770bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1770bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770c0: 0x244913a0  addiu       $t1, $v0, 0x13A0
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5024));
    // 0x1770c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1770c8: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1770cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1770ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1770d0:
    // 0x1770d0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1770d4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1770d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1770d8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1770d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1770DCu;
    {
        const bool branch_taken_0x1770dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1770E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770DCu;
        // 0x1770e0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770dc) {
            ctx->pc = 0x177174u;
            goto label_177174;
        }
    }
    ctx->pc = 0x1770E4u;
    // 0x1770e4: 0x0  nop
    ctx->pc = 0x1770e4u;
    // NOP
label_1770e8:
    // 0x1770e8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1770e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1770ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1770ECu;
    {
        const bool branch_taken_0x1770ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770ECu;
        // 0x1770f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770ec) {
            ctx->pc = 0x1770FCu;
            goto label_1770fc;
        }
    }
    ctx->pc = 0x1770F4u;
    // 0x1770f4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1770f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1770f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1770fc:
    // 0x1770fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1770fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x177100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177100u;
    {
        const bool branch_taken_0x177100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177100u;
        // 0x177104: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177100) {
            ctx->pc = 0x177118u;
            goto label_177118;
        }
    }
    ctx->pc = 0x177108u;
    // 0x177108: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x17710c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177110u;
    {
        const bool branch_taken_0x177110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177110u;
        // 0x177114: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177110) {
            ctx->pc = 0x17711Cu;
            goto label_17711c;
        }
    }
    ctx->pc = 0x177118u;
label_177118:
    // 0x177118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17711c:
    // 0x17711c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x177120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177124: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x177124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x177128: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x177128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17712c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x17712cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x177130: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x177130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177134: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177134u;
    {
        const bool branch_taken_0x177134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177134) {
            ctx->pc = 0x177144u;
            goto label_177144;
        }
    }
    ctx->pc = 0x17713Cu;
    // 0x17713c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x17713cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177144:
    // 0x177144: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x177144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x177148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177148u;
    {
        const bool branch_taken_0x177148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177148u;
        // 0x17714c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177148) {
            ctx->pc = 0x177160u;
            goto label_177160;
        }
    }
    ctx->pc = 0x177150u;
    // 0x177150: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x177154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177158: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177158u;
    {
        const bool branch_taken_0x177158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177158u;
        // 0x17715c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177158) {
            ctx->pc = 0x177164u;
            goto label_177164;
        }
    }
    ctx->pc = 0x177160u;
label_177160:
    // 0x177160: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x177160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177164:
    // 0x177164: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x177168: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17716c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x177170: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x177170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_177174:
    // 0x177174: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x177178: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x177178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x17717c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17717cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177180: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x177180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177188: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17718c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17718Cu;
    {
        const bool branch_taken_0x17718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17718c) {
            ctx->pc = 0x177190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17718Cu;
            // 0x177190: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1771A8u;
            goto label_1771a8;
        }
    }
    ctx->pc = 0x177194u;
    // 0x177194: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x177194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x177198: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x177198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17719c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x17719Cu;
    {
        const bool branch_taken_0x17719c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17719c) {
            ctx->pc = 0x1771A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17719Cu;
            // 0x1771a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1770E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1770e8;
        }
    }
    ctx->pc = 0x1771A4u;
    // 0x1771a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1771a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1771a8:
    // 0x1771a8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1771a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1771ac: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1771ACu;
    {
        const bool branch_taken_0x1771ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1771ac) {
            ctx->pc = 0x1771B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1771ACu;
            // 0x1771b0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1770D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1770d0;
        }
    }
    ctx->pc = 0x1771B4u;
    // 0x1771b4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1771b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1771b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1771bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1771bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1771c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1771c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1771c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1771c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1771c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1771c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1771cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1771ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1771d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1771d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1771d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1771D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1771D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D4u;
        // 0x1771d8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1771DCu;
    // 0x1771dc: 0x0  nop
    ctx->pc = 0x1771dcu;
    // NOP
    ctx->pc = 0x1771e0u;
}
