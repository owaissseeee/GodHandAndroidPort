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

// Function: func_001A0E98
// Address: 0x1a0e98 - 0x1a13e8
void func_001A0E98_0x1a0e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0E98_0x1a0e98");
#endif

    switch (ctx->pc) {
        case 0x1a0ed8u: goto label_1a0ed8;
        case 0x1a0f38u: goto label_1a0f38;
        case 0x1a0fb8u: goto label_1a0fb8;
        case 0x1a0fdcu: goto label_1a0fdc;
        case 0x1a10a8u: goto label_1a10a8;
        case 0x1a10bcu: goto label_1a10bc;
        case 0x1a10f0u: goto label_1a10f0;
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a1168u: goto label_1a1168;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a1188u: goto label_1a1188;
        case 0x1a1198u: goto label_1a1198;
        case 0x1a11a8u: goto label_1a11a8;
        case 0x1a11c0u: goto label_1a11c0;
        case 0x1a11d8u: goto label_1a11d8;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a13a4u: goto label_1a13a4;
        default: break;
    }

    ctx->pc = 0x1a0e98u;

    // 0x1a0e98: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a0e9c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1a0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1a0ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ea4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1a0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1a0ea8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1a0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1a0eac: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1a0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1a0eb0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1a0eb4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1a0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1a0eb8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1a0eb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ebc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1a0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1a0ec0: 0x3c160042  lui         $s6, 0x42
    ctx->pc = 0x1a0ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)66 << 16));
    // 0x1a0ec4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1a0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1a0ec8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1a0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1a0ecc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a0ed0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A0ED0u;
    SET_GPR_U32(ctx, 31, 0x1A0ED8u);
    ctx->pc = 0x1A0ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0ED0u;
    // 0x1a0ed4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A0ED0u, 0x1A0ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ED8u;
label_1a0ed8:
    // 0x1a0ed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0edc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a0edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a0ee0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a0ee4: 0x3c014126  lui         $at, 0x4126
    ctx->pc = 0x1a0ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16678 << 16));
    // 0x1a0ee8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a0eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0ef0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ef4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a0ef8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a0ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0efc: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1a0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1a0f00: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1a0f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x1a0f04: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a0f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a0f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0f0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0f10: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a0f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a0f14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f18: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1a0f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a0f1c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a0f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a0f20: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1a0f20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a0f24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1a0f28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a0f2c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a0f30: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1A0F30u;
    SET_GPR_U32(ctx, 31, 0x1A0F38u);
    ctx->pc = 0x1A0F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F30u;
    // 0x1a0f34: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1A0F30u, 0x1A0F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F38u;
label_1a0f38:
    // 0x1a0f38: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A0F38u;
    {
        const bool branch_taken_0x1a0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F38u;
        // 0x1a0f3c: 0xae220608  sw          $v0, 0x608($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f38) {
            ctx->pc = 0x1A0FECu;
            goto label_1a0fec;
        }
    }
    ctx->pc = 0x1A0F40u;
    // 0x1a0f40: 0x26c26f30  addiu       $v0, $s6, 0x6F30
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 28464));
    // 0x1a0f44: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a0f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a0f48: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a0f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a0f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f50: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a0f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a0f54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F54u;
    {
        const bool branch_taken_0x1a0f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F54u;
        // 0x1a0f58: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f54) {
            ctx->pc = 0x1A0F64u;
            goto label_1a0f64;
        }
    }
    ctx->pc = 0x1A0F5Cu;
    // 0x1a0f5c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a0f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f64:
    // 0x1a0f64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a0f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a0f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F68u;
    {
        const bool branch_taken_0x1a0f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F68u;
        // 0x1a0f6c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f68) {
            ctx->pc = 0x1A0F80u;
            goto label_1a0f80;
        }
    }
    ctx->pc = 0x1A0F70u;
    // 0x1a0f70: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a0f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0f78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F78u;
    {
        const bool branch_taken_0x1a0f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F78u;
        // 0x1a0f7c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f78) {
            ctx->pc = 0x1A0F84u;
            goto label_1a0f84;
        }
    }
    ctx->pc = 0x1A0F80u;
label_1a0f80:
    // 0x1a0f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f84:
    // 0x1a0f84: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a0f88: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0f8c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a0f90: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a0f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f94: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a0f98: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a0f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1a0f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0fa4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a0fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1a0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a0fac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fb0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A0FB0u;
    SET_GPR_U32(ctx, 31, 0x1A0FB8u);
    ctx->pc = 0x1A0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FB0u;
    // 0x1a0fb4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A0FB0u, 0x1A0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FB8u;
label_1a0fb8:
    // 0x1a0fb8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a0fbc: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a0fc0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a0fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fc8: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1a0fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a0fcc: 0x8e220608  lw          $v0, 0x608($s1)
    ctx->pc = 0x1a0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a0fd0: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1a0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1a0fd4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A0FD4u;
    SET_GPR_U32(ctx, 31, 0x1A0FDCu);
    ctx->pc = 0x1A0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FD4u;
    // 0x1a0fd8: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A0FD4u, 0x1A0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FDCu;
label_1a0fdc:
    // 0x1a0fdc: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x1a0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a0fe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0fe4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a0fe8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a0fec:
    // 0x1a0fec: 0x3c0140a6  lui         $at, 0x40A6
    ctx->pc = 0x1a0fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16550 << 16));
    // 0x1a0ff0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a0ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0ff8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a0ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a1000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1004: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1a1004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1008: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a100c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a100cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a1010: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1014: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1a1018: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a1018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a101c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a101cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1020: 0x26b04380  addiu       $s0, $s5, 0x4380
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    // 0x1a1024: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a1024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a1028: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a102c: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x1a1030: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a1030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a1034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a103c: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x1a103cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1a1040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1044: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1a1044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1a1048: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a104c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a104cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a1050: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a1050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a1054: 0x3c01c02c  lui         $at, 0xC02C
    ctx->pc = 0x1a1054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49196 << 16));
    // 0x1a1058: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a105c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a105cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1060: 0xe6830004  swc1        $f3, 0x4($s4)
    ctx->pc = 0x1a1060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1a1064: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x1a1064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1a1068: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1a1068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1a106c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a1070: 0x3c013fca  lui         $at, 0x3FCA
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16330 << 16));
    // 0x1a1074: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1a1074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1a1078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a107c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1a107cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1a1080: 0x3c01406a  lui         $at, 0x406A
    ctx->pc = 0x1a1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16490 << 16));
    // 0x1a1084: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1a1084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1a1088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a108c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1a108cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1a1090: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1a1090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1a1094: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a1094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a1098: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1a109c: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x1a109cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1a10a0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A10A0u;
    SET_GPR_U32(ctx, 31, 0x1A10A8u);
    ctx->pc = 0x1A10A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10A0u;
    // 0x1a10a4: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A10A0u, 0x1A10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10A8u;
label_1a10a8:
    // 0x1a10a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a10a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10ac: 0xae220600  sw          $v0, 0x600($s1)
    ctx->pc = 0x1a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    // 0x1a10b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a10b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10b4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A10B4u;
    SET_GPR_U32(ctx, 31, 0x1A10BCu);
    ctx->pc = 0x1A10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10B4u;
    // 0x1a10b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A10B4u, 0x1A10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10BCu;
label_1a10bc:
    // 0x1a10bc: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1a10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1a10c0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A10C0u;
    {
        const bool branch_taken_0x1a10c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10C0u;
        // 0x1a10c4: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10c0) {
            ctx->pc = 0x1A1100u;
            goto label_1a1100;
        }
    }
    ctx->pc = 0x1A10C8u;
    // 0x1a10c8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a10cc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1a10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1a10d0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1a10d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a10d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10d8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a10dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a10e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1a10e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a10e8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A10E8u;
    SET_GPR_U32(ctx, 31, 0x1A10F0u);
    ctx->pc = 0x1A10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10E8u;
    // 0x1a10ec: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A10E8u, 0x1A10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10F0u;
label_1a10f0:
    // 0x1a10f0: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1a10f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a10f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a10f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a10fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a1100:
    // 0x1a1100: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a1104: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1104u;
    {
        const bool branch_taken_0x1a1104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1104u;
        // 0x1a1108: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1104) {
            ctx->pc = 0x1A113Cu;
            goto label_1a113c;
        }
    }
    ctx->pc = 0x1A110Cu;
    // 0x1a110c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1a110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1a1110: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1a1114: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a1114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1118: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a1118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a111c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a111cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1120: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a1120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a1124: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A1124u;
    SET_GPR_U32(ctx, 31, 0x1A112Cu);
    ctx->pc = 0x1A1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1124u;
    // 0x1a1128: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A1124u, 0x1A112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a1130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1134: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a1138: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a113c:
    // 0x1a113c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1144: 0xa6220d9a  sh          $v0, 0xD9A($s1)
    ctx->pc = 0x1a1144u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3482), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a114c: 0xa6220d98  sh          $v0, 0xD98($s1)
    ctx->pc = 0x1a114cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1150: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A1150u;
    SET_GPR_U32(ctx, 31, 0x1A1158u);
    ctx->pc = 0x1A1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1150u;
    // 0x1a1154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A1150u, 0x1A1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a115c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1160: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A1160u;
    SET_GPR_U32(ctx, 31, 0x1A1168u);
    ctx->pc = 0x1A1164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1160u;
    // 0x1a1164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A1160u, 0x1A1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1168u;
label_1a1168:
    // 0x1a1168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a116c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1170: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A1170u;
    SET_GPR_U32(ctx, 31, 0x1A1178u);
    ctx->pc = 0x1A1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1170u;
    // 0x1a1174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A1170u, 0x1A1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1178u;
label_1a1178:
    // 0x1a1178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a117c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a1180: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A1180u;
    SET_GPR_U32(ctx, 31, 0x1A1188u);
    ctx->pc = 0x1A1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1180u;
    // 0x1a1184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A1180u, 0x1A1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1188u;
label_1a1188:
    // 0x1a1188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a118c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a1190: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A1190u;
    SET_GPR_U32(ctx, 31, 0x1A1198u);
    ctx->pc = 0x1A1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1190u;
    // 0x1a1194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A1190u, 0x1A1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1198u;
label_1a1198:
    // 0x1a1198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a119c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a11a0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A11A0u;
    SET_GPR_U32(ctx, 31, 0x1A11A8u);
    ctx->pc = 0x1A11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11A0u;
    // 0x1a11a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A11A0u, 0x1A11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11A8u;
label_1a11a8:
    // 0x1a11a8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a11ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a11acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11b0: 0x24496f30  addiu       $t1, $v0, 0x6F30
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
    // 0x1a11b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a11b8: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1a11b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a11bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a11c0:
    // 0x1a11c0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a11c4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1a11c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a11c8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1a11c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A11CCu;
    {
        const bool branch_taken_0x1a11cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11CCu;
        // 0x1a11d0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11cc) {
            ctx->pc = 0x1A1264u;
            goto label_1a1264;
        }
    }
    ctx->pc = 0x1A11D4u;
    // 0x1a11d4: 0x0  nop
    ctx->pc = 0x1a11d4u;
    // NOP
label_1a11d8:
    // 0x1a11d8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1a11d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a11dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A11DCu;
    {
        const bool branch_taken_0x1a11dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11DCu;
        // 0x1a11e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11dc) {
            ctx->pc = 0x1A11ECu;
            goto label_1a11ec;
        }
    }
    ctx->pc = 0x1A11E4u;
    // 0x1a11e4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1a11e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a11e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a11e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a11ec:
    // 0x1a11ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a11ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a11f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A11F0u;
    {
        const bool branch_taken_0x1a11f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11F0u;
        // 0x1a11f4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11f0) {
            ctx->pc = 0x1A1208u;
            goto label_1a1208;
        }
    }
    ctx->pc = 0x1A11F8u;
    // 0x1a11f8: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a11fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1200u;
    {
        const bool branch_taken_0x1a1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1200u;
        // 0x1a1204: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1200) {
            ctx->pc = 0x1A120Cu;
            goto label_1a120c;
        }
    }
    ctx->pc = 0x1A1208u;
label_1a1208:
    // 0x1a1208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a120c:
    // 0x1a120c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a1210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1214: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x1a1214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a1218: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a1218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a121c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a121cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a1220: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a1220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a1224: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1224u;
    {
        const bool branch_taken_0x1a1224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1224u;
        // 0x1a1228: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1224) {
            ctx->pc = 0x1A1234u;
            goto label_1a1234;
        }
    }
    ctx->pc = 0x1A122Cu;
    // 0x1a122c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1a122cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1234:
    // 0x1a1234: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a1238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1238u;
    {
        const bool branch_taken_0x1a1238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1238u;
        // 0x1a123c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1238) {
            ctx->pc = 0x1A1250u;
            goto label_1a1250;
        }
    }
    ctx->pc = 0x1A1240u;
    // 0x1a1240: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a1244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1248u;
    {
        const bool branch_taken_0x1a1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1248u;
        // 0x1a124c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1248) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A1250u;
label_1a1250:
    // 0x1a1250: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1254:
    // 0x1a1254: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a1258: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a1258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a125c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a1260: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a1260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1a1264:
    // 0x1a1264: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a1268: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1a126c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a126cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1270: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a1270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1278: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1a1278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a127c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A127Cu;
    {
        const bool branch_taken_0x1a127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a127c) {
            ctx->pc = 0x1A1280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A127Cu;
            // 0x1a1280: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1298u;
            goto label_1a1298;
        }
    }
    ctx->pc = 0x1A1284u;
    // 0x1a1284: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a1284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a1288: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1a1288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a128c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1A128Cu;
    {
        const bool branch_taken_0x1a128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a128c) {
            ctx->pc = 0x1A1290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A128Cu;
            // 0x1a1290: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a11d8;
        }
    }
    ctx->pc = 0x1A1294u;
    // 0x1a1294: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a1294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1298:
    // 0x1a1298: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1a1298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a129c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1A129Cu;
    {
        const bool branch_taken_0x1a129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a129c) {
            ctx->pc = 0x1A11C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a11c0;
        }
    }
    ctx->pc = 0x1A12A4u;
    // 0x1a12a4: 0x26c26f30  addiu       $v0, $s6, 0x6F30
    ctx->pc = 0x1a12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 28464));
    // 0x1a12a8: 0x9056000b  lbu         $s6, 0xB($v0)
    ctx->pc = 0x1a12a8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1a12ac: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a12acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a12b0: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a12b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a12b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a12b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12b8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a12b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a12bc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a12bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a12c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A12C0u;
    {
        const bool branch_taken_0x1a12c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12C0u;
        // 0x1a12c4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12c0) {
            ctx->pc = 0x1A12D0u;
            goto label_1a12d0;
        }
    }
    ctx->pc = 0x1A12C8u;
    // 0x1a12c8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a12c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a12cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a12ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a12d0:
    // 0x1a12d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a12d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a12d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A12D4u;
    {
        const bool branch_taken_0x1a12d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12D4u;
        // 0x1a12d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12d4) {
            ctx->pc = 0x1A12ECu;
            goto label_1a12ec;
        }
    }
    ctx->pc = 0x1A12DCu;
    // 0x1a12dc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a12e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a12e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A12E4u;
    {
        const bool branch_taken_0x1a12e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12E4u;
        // 0x1a12e8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12e4) {
            ctx->pc = 0x1A12F0u;
            goto label_1a12f0;
        }
    }
    ctx->pc = 0x1A12ECu;
label_1a12ec:
    // 0x1a12ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a12f0:
    // 0x1a12f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12f4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A12F4u;
    SET_GPR_U32(ctx, 31, 0x1A12FCu);
    ctx->pc = 0x1A12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12F4u;
    // 0x1a12f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A12F4u, 0x1A12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12FCu;
label_1a12fc:
    // 0x1a12fc: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A12FCu;
    {
        const bool branch_taken_0x1a12fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12FCu;
        // 0x1a1300: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12fc) {
            ctx->pc = 0x1A13B0u;
            goto label_1a13b0;
        }
    }
    ctx->pc = 0x1A1304u;
    // 0x1a1304: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1a1304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1308: 0x90436f3a  lbu         $v1, 0x6F3A($v0)
    ctx->pc = 0x1a1308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28474)));
    // 0x1a130c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1310: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1a1310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1314: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1318: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a1318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a131c: 0x0  nop
    ctx->pc = 0x1a131cu;
    // NOP
label_1a1320:
    // 0x1a1320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1324: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1324u;
    {
        const bool branch_taken_0x1a1324 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1324u;
        // 0x1a1328: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1324) {
            ctx->pc = 0x1A1330u;
            goto label_1a1330;
        }
    }
    ctx->pc = 0x1A132Cu;
    // 0x1a132c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a132cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1330:
    // 0x1a1330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a1334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1334u;
    {
        const bool branch_taken_0x1a1334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1334u;
        // 0x1a1338: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1334) {
            ctx->pc = 0x1A1348u;
            goto label_1a1348;
        }
    }
    ctx->pc = 0x1A133Cu;
    // 0x1a133c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a1340: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a1344: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a1344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1348:
    // 0x1a1348: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a1348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a134c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1350: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A1350u;
    SET_GPR_U32(ctx, 31, 0x1A1358u);
    ctx->pc = 0x1A1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1350u;
    // 0x1a1354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A1350u, 0x1A1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1358u;
label_1a1358:
    // 0x1a1358: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1a1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a135c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1a135cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a1360: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a1360u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1364: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a1364u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a1368: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a136c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1a136cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1a1370: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a1374: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a1374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a137c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a1380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1384: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a1384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1388: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a1388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a138c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a138cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a1390: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a1390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a1394: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a1394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a1398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a1398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a139c: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1A139Cu;
    SET_GPR_U32(ctx, 31, 0x1A13A4u);
    ctx->pc = 0x1A13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A139Cu;
    // 0x1a13a0: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A139Cu, 0x1A13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13A4u;
label_1a13a4:
    // 0x1a13a4: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x1a13a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1a13a8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A13A8u;
    {
        const bool branch_taken_0x1a13a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13a8) {
            ctx->pc = 0x1A13ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13A8u;
            // 0x1a13ac: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1320;
        }
    }
    ctx->pc = 0x1A13B0u;
label_1a13b0:
    // 0x1a13b0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1a13b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a13b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a13b8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1a13b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a13bc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1a13bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a13c0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1a13c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a13c4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1a13c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a13c8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1a13c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a13cc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1a13ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a13d0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1a13d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a13d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a13d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a13d8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1a13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a13dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A13DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13DCu;
        // 0x1a13e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A13DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A13E4u;
    // 0x1a13e4: 0x0  nop
    ctx->pc = 0x1a13e4u;
    // NOP
    ctx->pc = 0x1a13e8u;
}
