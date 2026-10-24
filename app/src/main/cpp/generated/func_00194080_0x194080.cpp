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

// Function: func_00194080
// Address: 0x194080 - 0x194480
void func_00194080_0x194080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00194080_0x194080");
#endif

    switch (ctx->pc) {
        case 0x1940b0u: goto label_1940b0;
        case 0x194128u: goto label_194128;
        case 0x194188u: goto label_194188;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941f8u: goto label_1941f8;
        case 0x194258u: goto label_194258;
        case 0x194268u: goto label_194268;
        case 0x1942b0u: goto label_1942b0;
        case 0x194304u: goto label_194304;
        case 0x194314u: goto label_194314;
        case 0x194330u: goto label_194330;
        case 0x194408u: goto label_194408;
        case 0x194424u: goto label_194424;
        case 0x194444u: goto label_194444;
        default: break;
    }

    ctx->pc = 0x194080u;

    // 0x194080: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x194084: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x194084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x194088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19408c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x19408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x194090: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x194090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x194094: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x194094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x194098: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x19409c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x19409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1940a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1940a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1940a4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1940a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940a8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1940A8u;
    SET_GPR_U32(ctx, 31, 0x1940B0u);
    ctx->pc = 0x1940ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940A8u;
    // 0x1940ac: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1940A8u, 0x1940B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940B0u;
label_1940b0:
    // 0x1940b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1940b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1940b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1940b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1940b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1940b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1940bc: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1940bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1940c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1940c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1940c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1940c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1940c8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1940c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1940cc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1940ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1940d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1940d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1940d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940d8: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x1940d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x1940dc: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x1940dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x1940e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1940e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1940e4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1940e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940e8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1940e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1940ec: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1940ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1940f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1940f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1940f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1940f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1940f8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1940f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1940fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1940fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194100: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x194100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x194104: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x194104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x194108: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x194108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19410c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19410cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x194110: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194114: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x194114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x194118: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x194118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19411c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19411cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x194120: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x194120u;
    SET_GPR_U32(ctx, 31, 0x194128u);
    ctx->pc = 0x194124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194120u;
    // 0x194124: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x194120u, 0x194128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194128u;
label_194128:
    // 0x194128: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x194128u;
    {
        const bool branch_taken_0x194128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194128u;
        // 0x19412c: 0xae220608  sw          $v0, 0x608($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194128) {
            ctx->pc = 0x1941C0u;
            goto label_1941c0;
        }
    }
    ctx->pc = 0x194130u;
    // 0x194130: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x194130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x194134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194138: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x194138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19413c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19413Cu;
    {
        const bool branch_taken_0x19413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19413Cu;
        // 0x194140: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19413c) {
            ctx->pc = 0x194150u;
            goto label_194150;
        }
    }
    ctx->pc = 0x194144u;
    // 0x194144: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x194144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x194148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194148u;
    {
        const bool branch_taken_0x194148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194148u;
        // 0x19414c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194148) {
            ctx->pc = 0x194154u;
            goto label_194154;
        }
    }
    ctx->pc = 0x194150u;
label_194150:
    // 0x194150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194154:
    // 0x194154: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x194154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x194158: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19415c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x19415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x194160: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x194164: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x194164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x194168: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x194168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19416c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x194170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194174: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x194174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194178: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x19417c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194180: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x194180u;
    SET_GPR_U32(ctx, 31, 0x194188u);
    ctx->pc = 0x194184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194180u;
    // 0x194184: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x194180u, 0x194188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194188u;
label_194188:
    // 0x194188: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x194188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x19418c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x19418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x194190: 0xae220610  sw          $v0, 0x610($s1)
    ctx->pc = 0x194190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 2));
    // 0x194194: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x194198: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x194198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x19419c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19419cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941a0: 0x8e220608  lw          $v0, 0x608($s1)
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1941a4: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1941a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1941a8: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x1941a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1941ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1941acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1941b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1941b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1941b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1941b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1941b8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1941B8u;
    SET_GPR_U32(ctx, 31, 0x1941C0u);
    ctx->pc = 0x1941BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1941B8u;
    // 0x1941bc: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1941B8u, 0x1941C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941C0u;
label_1941c0:
    // 0x1941c0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1941c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1941c4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1941c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1941c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1941cc: 0x26844380  addiu       $a0, $s4, 0x4380
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17280));
    // 0x1941d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1941d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1941d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1941d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1941dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1941dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1941e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1941e4: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1941e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1941e8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1941e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1941ec: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1941ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1941f0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1941F0u;
    SET_GPR_U32(ctx, 31, 0x1941F8u);
    ctx->pc = 0x1941F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1941F0u;
    // 0x1941f4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1941F0u, 0x1941F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941F8u;
label_1941f8:
    // 0x1941f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1941f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1941FCu;
    {
        const bool branch_taken_0x1941fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941FCu;
        // 0x194200: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941fc) {
            ctx->pc = 0x194268u;
            goto label_194268;
        }
    }
    ctx->pc = 0x194204u;
    // 0x194204: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x194204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x194208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19420c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x19420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194210u;
    {
        const bool branch_taken_0x194210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194210u;
        // 0x194214: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194210) {
            ctx->pc = 0x194224u;
            goto label_194224;
        }
    }
    ctx->pc = 0x194218u;
    // 0x194218: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x194218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19421c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19421Cu;
    {
        const bool branch_taken_0x19421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19421Cu;
        // 0x194220: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19421c) {
            ctx->pc = 0x194228u;
            goto label_194228;
        }
    }
    ctx->pc = 0x194224u;
label_194224:
    // 0x194224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194228:
    // 0x194228: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x194228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x19422c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x19422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x194230: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x194230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x194234: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x194234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x194238: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x194238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x19423c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19423cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194240: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x194244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19424c: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x194250: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194250u;
    // 0x194254: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x194250u, 0x194258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194258u;
label_194258:
    // 0x194258: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x19425c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194260: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x194260u;
    SET_GPR_U32(ctx, 31, 0x194268u);
    ctx->pc = 0x194264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194260u;
    // 0x194264: 0xae22060c  sw          $v0, 0x60C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x194260u, 0x194268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194268u;
label_194268:
    // 0x194268: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x194268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19426c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x194270: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x194270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x194274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194278: 0x24502fc0  addiu       $s0, $v0, 0x2FC0
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x19427c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x194280: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x194280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x194284: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194288: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x194288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x19428c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19428cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194290: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x194290u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x194294: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x194294u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x194298: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x194298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x19429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1942a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942a4: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x1942a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1942a8: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x1942A8u;
    SET_GPR_U32(ctx, 31, 0x1942B0u);
    ctx->pc = 0x1942ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1942A8u;
    // 0x1942ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x1942A8u, 0x1942B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942B0u;
label_1942b0:
    // 0x1942b0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1942b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1942b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1942b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1942b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1942bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1942BCu;
    {
        const bool branch_taken_0x1942bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942BCu;
        // 0x1942c0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942bc) {
            ctx->pc = 0x1942D0u;
            goto label_1942d0;
        }
    }
    ctx->pc = 0x1942C4u;
    // 0x1942c4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1942c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1942c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1942C8u;
    {
        const bool branch_taken_0x1942c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942C8u;
        // 0x1942cc: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942c8) {
            ctx->pc = 0x1942D4u;
            goto label_1942d4;
        }
    }
    ctx->pc = 0x1942D0u;
label_1942d0:
    // 0x1942d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1942d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1942d4:
    // 0x1942d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1942d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1942d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1942dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1942dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942e0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1942e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1942e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1942e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942e8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1942e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1942ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1942ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1942f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1942f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1942f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1942f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1942f8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1942f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1942fc: 0xc04d220  jal         func_134880
    ctx->pc = 0x1942FCu;
    SET_GPR_U32(ctx, 31, 0x194304u);
    ctx->pc = 0x194300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1942FCu;
    // 0x194300: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1942FCu, 0x194304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194304u;
label_194304:
    // 0x194304: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x194308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19430c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19430Cu;
    SET_GPR_U32(ctx, 31, 0x194314u);
    ctx->pc = 0x194310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19430Cu;
    // 0x194310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19430Cu, 0x194314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194314u;
label_194314:
    // 0x194314: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x194314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x194318: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x194318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19431c: 0x1045002e  beq         $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19431Cu;
    {
        const bool branch_taken_0x19431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x194320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19431Cu;
        // 0x194320: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19431c) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x194324u;
    // 0x194324: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x194324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194328: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x194328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19432c: 0x0  nop
    ctx->pc = 0x19432cu;
    // NOP
label_194330:
    // 0x194330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194334: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x194334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x194338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194338u;
    {
        const bool branch_taken_0x194338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194338u;
        // 0x19433c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194338) {
            ctx->pc = 0x194348u;
            goto label_194348;
        }
    }
    ctx->pc = 0x194340u;
    // 0x194340: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x194340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194348:
    // 0x194348: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x194348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19434c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19434Cu;
    {
        const bool branch_taken_0x19434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19434Cu;
        // 0x194350: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19434c) {
            ctx->pc = 0x194364u;
            goto label_194364;
        }
    }
    ctx->pc = 0x194354u;
    // 0x194354: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x194358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19435c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19435Cu;
    {
        const bool branch_taken_0x19435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19435Cu;
        // 0x194360: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19435c) {
            ctx->pc = 0x194368u;
            goto label_194368;
        }
    }
    ctx->pc = 0x194364u;
label_194364:
    // 0x194364: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194368:
    // 0x194368: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19436c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194370: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x194370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x194374: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x194374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x194378: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x194378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19437c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19437cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x194380: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x194380u;
    {
        const bool branch_taken_0x194380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194380u;
        // 0x194384: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194380) {
            ctx->pc = 0x194390u;
            goto label_194390;
        }
    }
    ctx->pc = 0x194388u;
    // 0x194388: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x194388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19438c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19438cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194390:
    // 0x194390: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x194390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x194394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194394u;
    {
        const bool branch_taken_0x194394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194394u;
        // 0x194398: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194394) {
            ctx->pc = 0x1943ACu;
            goto label_1943ac;
        }
    }
    ctx->pc = 0x19439Cu;
    // 0x19439c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1943a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1943a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1943A4u;
    {
        const bool branch_taken_0x1943a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A4u;
        // 0x1943a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943a4) {
            ctx->pc = 0x1943B0u;
            goto label_1943b0;
        }
    }
    ctx->pc = 0x1943ACu;
label_1943ac:
    // 0x1943ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1943acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1943b0:
    // 0x1943b0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1943b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1943b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1943b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1943b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1943bc: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x1943bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1943c0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1943c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1943c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1943C4u;
    {
        const bool branch_taken_0x1943c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943C4u;
        // 0x1943c8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943c4) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x1943CCu;
    // 0x1943cc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1943ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1943d0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1943D0u;
    {
        const bool branch_taken_0x1943d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1943d0) {
            ctx->pc = 0x1943D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1943D0u;
            // 0x1943d4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194330;
        }
    }
    ctx->pc = 0x1943D8u;
label_1943d8:
    // 0x1943d8: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1943d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1943dc: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1943dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1943e0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1943e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1943e4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1943e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1943e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1943e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1943ec: 0x34631188  ori         $v1, $v1, 0x1188
    ctx->pc = 0x1943ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4488);
    // 0x1943f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1943f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1943f4: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1943f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1943f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1943f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943fc: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1943fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x194400: 0xc06566a  jal         func_1959A8
    ctx->pc = 0x194400u;
    SET_GPR_U32(ctx, 31, 0x194408u);
    ctx->pc = 0x194404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194400u;
    // 0x194404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x194400u, 0x194408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194408u;
label_194408:
    // 0x194408: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x194408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x19440c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x194410: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x194414: 0x24050177  addiu       $a1, $zero, 0x177
    ctx->pc = 0x194414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x194418: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19441c: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x19441Cu;
    SET_GPR_U32(ctx, 31, 0x194424u);
    ctx->pc = 0x194420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19441Cu;
    // 0x194420: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x19441Cu, 0x194424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194424u;
label_194424:
    // 0x194424: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x194428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19442c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x194434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194438: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19443c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x19443Cu;
    SET_GPR_U32(ctx, 31, 0x194444u);
    ctx->pc = 0x194440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19443Cu;
    // 0x194440: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x19443Cu, 0x194444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194444u;
label_194444:
    // 0x194444: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x194444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x194448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19444c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x19444cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x194450: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x194450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x194454: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x194454u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x194458: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x194458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19445c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x19445cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194460: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x194460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194464: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x194464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194468: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x194468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19446c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194470: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x194470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194474: 0x3e00008  jr          $ra
    ctx->pc = 0x194474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194474u;
        // 0x194478: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19447Cu;
    // 0x19447c: 0x0  nop
    ctx->pc = 0x19447cu;
    // NOP
    ctx->pc = 0x194480u;
}
