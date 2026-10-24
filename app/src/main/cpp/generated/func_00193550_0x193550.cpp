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

// Function: func_00193550
// Address: 0x193550 - 0x1936a8
void func_00193550_0x193550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193550_0x193550");
#endif

    switch (ctx->pc) {
        case 0x193570u: goto label_193570;
        case 0x1935f8u: goto label_1935f8;
        case 0x193628u: goto label_193628;
        case 0x193684u: goto label_193684;
        default: break;
    }

    ctx->pc = 0x193550u;

    // 0x193550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193554: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x193554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x193558: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x193558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19355c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x193560: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x193560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x193564: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193568: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x193568u;
    SET_GPR_U32(ctx, 31, 0x193570u);
    ctx->pc = 0x19356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193568u;
    // 0x19356c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x193568u, 0x193570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193570u;
label_193570:
    // 0x193570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193574: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193578: 0x3c013f97  lui         $at, 0x3F97
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16279 << 16));
    // 0x19357c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x19357cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x193580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x193580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193584: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x193584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193588: 0x3c013fce  lui         $at, 0x3FCE
    ctx->pc = 0x193588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16334 << 16));
    // 0x19358c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x19358cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x193590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193594: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x193594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193598: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x193598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x19359c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1935a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1935a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1935a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1935a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1935ac: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1935acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1935b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1935b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1935b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1935b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935b8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1935b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1935bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1935c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1935c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1935c4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1935c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1935c8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1935c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1935cc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1935ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1935d0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1935d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1935d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1935d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1935d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1935dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1935dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1935e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1935e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1935e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1935e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1935e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1935e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1935ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1935ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1935f0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1935F0u;
    SET_GPR_U32(ctx, 31, 0x1935F8u);
    ctx->pc = 0x1935F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935F0u;
    // 0x1935f4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1935F0u, 0x1935F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935F8u;
label_1935f8:
    // 0x1935f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1935F8u;
    {
        const bool branch_taken_0x1935f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1935FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935F8u;
        // 0x1935fc: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935f8) {
            ctx->pc = 0x193640u;
            goto label_193640;
        }
    }
    ctx->pc = 0x193600u;
    // 0x193600: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x193600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193604: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x193604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x193608: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x193608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19360c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193610: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193614: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193618: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x193618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19361c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19361cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193620: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x193620u;
    SET_GPR_U32(ctx, 31, 0x193628u);
    ctx->pc = 0x193624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193620u;
    // 0x193624: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x193620u, 0x193628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193628u;
label_193628:
    // 0x193628: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19362c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19362Cu;
    {
        const bool branch_taken_0x19362c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19362c) {
            ctx->pc = 0x193630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19362Cu;
            // 0x193630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193644u;
            goto label_193644;
        }
    }
    ctx->pc = 0x193634u;
    // 0x193634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193638: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x193638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19363c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19363cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_193640:
    // 0x193640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193644:
    // 0x193644: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x193648: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19364c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x193650: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x193650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x193654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193658: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x193658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19365c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193660: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x193660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x193664: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x193664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x193668: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x193668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19366c: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x193670: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x193670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x193674: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x193674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x193678: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x193678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19367c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19367Cu;
    SET_GPR_U32(ctx, 31, 0x193684u);
    ctx->pc = 0x193680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19367Cu;
    // 0x193680: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19367Cu, 0x193684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193684u;
label_193684:
    // 0x193684: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x193684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19368c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19368cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193690: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x193690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193694: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193698: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x193698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19369c: 0x3e00008  jr          $ra
    ctx->pc = 0x19369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1936A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19369Cu;
        // 0x1936a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1936A4u;
    // 0x1936a4: 0x0  nop
    ctx->pc = 0x1936a4u;
    // NOP
    ctx->pc = 0x1936a8u;
}
