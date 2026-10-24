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

// Function: func_001977B0
// Address: 0x1977b0 - 0x197c20
void func_001977B0_0x1977b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001977B0_0x1977b0");
#endif

    switch (ctx->pc) {
        case 0x1977f0u: goto label_1977f0;
        case 0x197848u: goto label_197848;
        case 0x1978c8u: goto label_1978c8;
        case 0x1978ecu: goto label_1978ec;
        case 0x197954u: goto label_197954;
        case 0x197984u: goto label_197984;
        case 0x1979acu: goto label_1979ac;
        case 0x1979bcu: goto label_1979bc;
        case 0x1979ccu: goto label_1979cc;
        case 0x1979dcu: goto label_1979dc;
        case 0x1979f8u: goto label_1979f8;
        case 0x197a10u: goto label_197a10;
        case 0x197b34u: goto label_197b34;
        case 0x197b58u: goto label_197b58;
        case 0x197b90u: goto label_197b90;
        case 0x197bdcu: goto label_197bdc;
        default: break;
    }

    ctx->pc = 0x1977b0u;

    // 0x1977b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1977b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1977b4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1977b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1977b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1977b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1977bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1977c0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1977c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1977c4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1977c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1977c8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1977cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1977ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1977d0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1977d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977d4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1977d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1977d8: 0x3c140042  lui         $s4, 0x42
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)66 << 16));
    // 0x1977dc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1977dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1977e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1977e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1977e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1977e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1977e8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1977E8u;
    SET_GPR_U32(ctx, 31, 0x1977F0u);
    ctx->pc = 0x1977ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1977E8u;
    // 0x1977ec: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1977E8u, 0x1977F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977F0u;
label_1977f0:
    // 0x1977f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1977f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1977f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1977f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1977f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1977fc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x197800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197804: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x197804u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197808: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19780c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19780cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197810: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x197810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x197814: 0x3c0140f8  lui         $at, 0x40F8
    ctx->pc = 0x197814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16632 << 16));
    // 0x197818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19781c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197820: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x197820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x197824: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x197824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197828: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x197828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19782c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x197830: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x197830u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x197834: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x197834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x197838: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x197838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x19783c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x197840: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x197840u;
    SET_GPR_U32(ctx, 31, 0x197848u);
    ctx->pc = 0x197844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197840u;
    // 0x197844: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x197840u, 0x197848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197848u;
label_197848:
    // 0x197848: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x197848u;
    {
        const bool branch_taken_0x197848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197848u;
        // 0x19784c: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197848) {
            ctx->pc = 0x1978ECu;
            goto label_1978ec;
        }
    }
    ctx->pc = 0x197850u;
    // 0x197850: 0x26824fe0  addiu       $v0, $s4, 0x4FE0
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20448));
    // 0x197854: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x197854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x197858: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x197858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19785c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197860: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x197860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197864: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197864u;
    {
        const bool branch_taken_0x197864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197864u;
        // 0x197868: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197864) {
            ctx->pc = 0x197874u;
            goto label_197874;
        }
    }
    ctx->pc = 0x19786Cu;
    // 0x19786c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19786cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197874:
    // 0x197874: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x197874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x197878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197878u;
    {
        const bool branch_taken_0x197878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197878u;
        // 0x19787c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197878) {
            ctx->pc = 0x197890u;
            goto label_197890;
        }
    }
    ctx->pc = 0x197880u;
    // 0x197880: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x197884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197888: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197888u;
    {
        const bool branch_taken_0x197888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197888u;
        // 0x19788c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197888) {
            ctx->pc = 0x197894u;
            goto label_197894;
        }
    }
    ctx->pc = 0x197890u;
label_197890:
    // 0x197890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197894:
    // 0x197894: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x197894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x197898: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19789c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1978a0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1978a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1978a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1978a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1978a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1978acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1978b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1978b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1978b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1978b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978b8: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1978bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1978bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978c0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1978C0u;
    SET_GPR_U32(ctx, 31, 0x1978C8u);
    ctx->pc = 0x1978C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978C0u;
    // 0x1978c4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1978C0u, 0x1978C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978C8u;
label_1978c8:
    // 0x1978c8: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1978cc: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1978d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1978d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1978d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1978d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d8: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1978d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1978dc: 0x8e220604  lw          $v0, 0x604($s1)
    ctx->pc = 0x1978dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1978e0: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1978e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1978e4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1978E4u;
    SET_GPR_U32(ctx, 31, 0x1978ECu);
    ctx->pc = 0x1978E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978E4u;
    // 0x1978e8: 0x8e240604  lw          $a0, 0x604($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1978E4u, 0x1978ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978ECu;
label_1978ec:
    // 0x1978ec: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1978f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1978f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1978f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1978f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1978f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1978fc: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
    // 0x197900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197904: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x197904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x197908: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x197908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19790c: 0x26644380  addiu       $a0, $s3, 0x4380
    ctx->pc = 0x19790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    // 0x197910: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x197914: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x197914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x197918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19791c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x19791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x197920: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197924: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x197928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19792c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x19792cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x197930: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x197930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x197934: 0x3c01405c  lui         $at, 0x405C
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16476 << 16));
    // 0x197938: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19793c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19793cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197940: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x197940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x197944: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x197944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x197948: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x197948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x19794c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19794Cu;
    SET_GPR_U32(ctx, 31, 0x197954u);
    ctx->pc = 0x197950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19794Cu;
    // 0x197950: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19794Cu, 0x197954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197954u;
label_197954:
    // 0x197954: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x197954u;
    {
        const bool branch_taken_0x197954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197954u;
        // 0x197958: 0xae220600  sw          $v0, 0x600($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197954) {
            ctx->pc = 0x197994u;
            goto label_197994;
        }
    }
    ctx->pc = 0x19795Cu;
    // 0x19795c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x19795cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197960: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x197960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x197964: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x197964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x197968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19796c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x19796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x197970: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x197970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197974: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x197974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x197978: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x197978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19797c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19797Cu;
    SET_GPR_U32(ctx, 31, 0x197984u);
    ctx->pc = 0x197980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19797Cu;
    // 0x197980: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19797Cu, 0x197984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197984u;
label_197984:
    // 0x197984: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x197984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x197988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19798c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x197990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x197990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_197994:
    // 0x197994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19799c: 0xa62209d8  sh          $v0, 0x9D8($s1)
    ctx->pc = 0x19799cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2520), (uint16_t)GPR_U32(ctx, 2));
    // 0x1979a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1979a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979a4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1979A4u;
    SET_GPR_U32(ctx, 31, 0x1979ACu);
    ctx->pc = 0x1979A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979A4u;
    // 0x1979a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1979A4u, 0x1979ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ACu;
label_1979ac:
    // 0x1979ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1979acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1979b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1979b4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1979B4u;
    SET_GPR_U32(ctx, 31, 0x1979BCu);
    ctx->pc = 0x1979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979B4u;
    // 0x1979b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1979B4u, 0x1979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979BCu;
label_1979bc:
    // 0x1979bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1979bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979c0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1979c4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1979C4u;
    SET_GPR_U32(ctx, 31, 0x1979CCu);
    ctx->pc = 0x1979C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979C4u;
    // 0x1979c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1979C4u, 0x1979CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979CCu;
label_1979cc:
    // 0x1979cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1979ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979d0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1979d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1979d4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1979D4u;
    SET_GPR_U32(ctx, 31, 0x1979DCu);
    ctx->pc = 0x1979D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979D4u;
    // 0x1979d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1979D4u, 0x1979DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979DCu;
label_1979dc:
    // 0x1979dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1979dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1979e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1979e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979e4: 0x24494fe0  addiu       $t1, $v0, 0x4FE0
    ctx->pc = 0x1979e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
    // 0x1979e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1979e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1979ec: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1979ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1979f0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1979f4: 0x0  nop
    ctx->pc = 0x1979f4u;
    // NOP
label_1979f8:
    // 0x1979f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1979fc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1979fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197a00: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x197a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a04: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x197A04u;
    {
        const bool branch_taken_0x197a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A04u;
        // 0x197a08: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a04) {
            ctx->pc = 0x197A9Cu;
            goto label_197a9c;
        }
    }
    ctx->pc = 0x197A0Cu;
    // 0x197a0c: 0x0  nop
    ctx->pc = 0x197a0cu;
    // NOP
label_197a10:
    // 0x197a10: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x197a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x197a14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197A14u;
    {
        const bool branch_taken_0x197a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A14u;
        // 0x197a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a14) {
            ctx->pc = 0x197A24u;
            goto label_197a24;
        }
    }
    ctx->pc = 0x197A1Cu;
    // 0x197a1c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x197a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a24:
    // 0x197a24: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x197a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x197a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197A28u;
    {
        const bool branch_taken_0x197a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A28u;
        // 0x197a2c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a28) {
            ctx->pc = 0x197A40u;
            goto label_197a40;
        }
    }
    ctx->pc = 0x197A30u;
    // 0x197a30: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x197a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x197a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197A38u;
    {
        const bool branch_taken_0x197a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A38u;
        // 0x197a3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a38) {
            ctx->pc = 0x197A44u;
            goto label_197a44;
        }
    }
    ctx->pc = 0x197A40u;
label_197a40:
    // 0x197a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a44:
    // 0x197a44: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x197a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a4c: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x197a50: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x197a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x197a54: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x197a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x197a58: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x197a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x197a5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197A5Cu;
    {
        const bool branch_taken_0x197a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A5Cu;
        // 0x197a60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a5c) {
            ctx->pc = 0x197A6Cu;
            goto label_197a6c;
        }
    }
    ctx->pc = 0x197A64u;
    // 0x197a64: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x197a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197a6c:
    // 0x197a6c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x197a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x197a70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197A70u;
    {
        const bool branch_taken_0x197a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A70u;
        // 0x197a74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a70) {
            ctx->pc = 0x197A88u;
            goto label_197a88;
        }
    }
    ctx->pc = 0x197A78u;
    // 0x197a78: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x197a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197A80u;
    {
        const bool branch_taken_0x197a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A80u;
        // 0x197a84: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a80) {
            ctx->pc = 0x197A8Cu;
            goto label_197a8c;
        }
    }
    ctx->pc = 0x197A88u;
label_197a88:
    // 0x197a88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x197a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a8c:
    // 0x197a8c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x197a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x197a90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x197a94: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x197a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x197a98: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x197a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_197a9c:
    // 0x197a9c: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x197a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x197aa0: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x197aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x197aa4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x197aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197aa8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x197aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197ab0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x197ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197ab4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x197AB4u;
    {
        const bool branch_taken_0x197ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ab4) {
            ctx->pc = 0x197AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197AB4u;
            // 0x197ab8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197AD0u;
            goto label_197ad0;
        }
    }
    ctx->pc = 0x197ABCu;
    // 0x197abc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x197abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x197ac0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197ac4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x197AC4u;
    {
        const bool branch_taken_0x197ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197ac4) {
            ctx->pc = 0x197AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197AC4u;
            // 0x197ac8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197a10;
        }
    }
    ctx->pc = 0x197ACCu;
    // 0x197acc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x197accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_197ad0:
    // 0x197ad0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x197ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197ad4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x197AD4u;
    {
        const bool branch_taken_0x197ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD4u;
        // 0x197ad8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad4) {
            ctx->pc = 0x1979F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1979f8;
        }
    }
    ctx->pc = 0x197ADCu;
    // 0x197adc: 0x26824fe0  addiu       $v0, $s4, 0x4FE0
    ctx->pc = 0x197adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20448));
    // 0x197ae0: 0x90560007  lbu         $s6, 0x7($v0)
    ctx->pc = 0x197ae0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x197ae4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x197ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x197ae8: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x197ae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x197aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197af0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x197af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x197af4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x197af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197AF8u;
    {
        const bool branch_taken_0x197af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AF8u;
        // 0x197afc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197af8) {
            ctx->pc = 0x197B08u;
            goto label_197b08;
        }
    }
    ctx->pc = 0x197B00u;
    // 0x197b00: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x197b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b08:
    // 0x197b08: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x197b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x197b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197B0Cu;
    {
        const bool branch_taken_0x197b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b0c) {
            ctx->pc = 0x197B24u;
            goto label_197b24;
        }
    }
    ctx->pc = 0x197B14u;
    // 0x197b14: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x197b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x197b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197B1Cu;
    {
        const bool branch_taken_0x197b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B1Cu;
        // 0x197b20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b1c) {
            ctx->pc = 0x197B28u;
            goto label_197b28;
        }
    }
    ctx->pc = 0x197B24u;
label_197b24:
    // 0x197b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197b28:
    // 0x197b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x197b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b2c: 0xc051f18  jal         func_147C60
    ctx->pc = 0x197B2Cu;
    SET_GPR_U32(ctx, 31, 0x197B34u);
    ctx->pc = 0x197B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B2Cu;
    // 0x197b30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x197B2Cu, 0x197B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B34u;
label_197b34:
    // 0x197b34: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x197B34u;
    {
        const bool branch_taken_0x197b34 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B34u;
        // 0x197b38: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b34) {
            ctx->pc = 0x197BE8u;
            goto label_197be8;
        }
    }
    ctx->pc = 0x197B3Cu;
    // 0x197b3c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x197b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b40: 0x90434fe6  lbu         $v1, 0x4FE6($v0)
    ctx->pc = 0x197b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20454)));
    // 0x197b44: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x197b48: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x197b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b4c: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197b50: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x197b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x197b54: 0x0  nop
    ctx->pc = 0x197b54u;
    // NOP
label_197b58:
    // 0x197b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b5c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x197B5Cu;
    {
        const bool branch_taken_0x197b5c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x197B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B5Cu;
        // 0x197b60: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b5c) {
            ctx->pc = 0x197B68u;
            goto label_197b68;
        }
    }
    ctx->pc = 0x197B64u;
    // 0x197b64: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x197b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_197b68:
    // 0x197b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B6Cu;
    {
        const bool branch_taken_0x197b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B6Cu;
        // 0x197b70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b6c) {
            ctx->pc = 0x197B80u;
            goto label_197b80;
        }
    }
    ctx->pc = 0x197B74u;
    // 0x197b74: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x197b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x197b78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x197b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x197b7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197b80:
    // 0x197b80: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x197b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x197b84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b88: 0xc051f18  jal         func_147C60
    ctx->pc = 0x197B88u;
    SET_GPR_U32(ctx, 31, 0x197B90u);
    ctx->pc = 0x197B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B88u;
    // 0x197b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x197B88u, 0x197B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B90u;
label_197b90:
    // 0x197b90: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x197b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x197b94: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x197b94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x197b98: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x197b98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197b9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x197b9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197ba0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x197ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197ba4: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x197ba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x197ba8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x197ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197bac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x197bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bb4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x197bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197bb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bbc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x197bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197bc0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x197bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x197bc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x197bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x197bc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x197bcc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x197bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x197bd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x197bd4: 0xc051f10  jal         func_147C40
    ctx->pc = 0x197BD4u;
    SET_GPR_U32(ctx, 31, 0x197BDCu);
    ctx->pc = 0x197BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BD4u;
    // 0x197bd8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x197BD4u, 0x197BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BDCu;
label_197bdc:
    // 0x197bdc: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x197bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x197be0: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x197BE0u;
    {
        const bool branch_taken_0x197be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197be0) {
            ctx->pc = 0x197BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197BE0u;
            // 0x197be4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197b58;
        }
    }
    ctx->pc = 0x197BE8u;
label_197be8:
    // 0x197be8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x197be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x197bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197bf0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x197bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x197bf4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x197bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x197bf8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x197bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x197bfc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x197bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x197c00: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x197c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197c04: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x197c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197c08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x197c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197c0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x197c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197c10: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x197c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197c14: 0x3e00008  jr          $ra
    ctx->pc = 0x197C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C14u;
        // 0x197c18: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197C1Cu;
    // 0x197c1c: 0x0  nop
    ctx->pc = 0x197c1cu;
    // NOP
    ctx->pc = 0x197c20u;
}
