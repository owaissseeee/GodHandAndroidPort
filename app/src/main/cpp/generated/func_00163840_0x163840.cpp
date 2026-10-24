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

// Function: func_00163840
// Address: 0x163840 - 0x163c58
void func_00163840_0x163840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00163840_0x163840");
#endif

    switch (ctx->pc) {
        case 0x1638ecu: goto label_1638ec;
        default: break;
    }

    ctx->pc = 0x163840u;

    // 0x163840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163844: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x163848: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x163848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16384c: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x16384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x163850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163854: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x163854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x163858: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x163858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16385c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163860: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x163864: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x163864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163868: 0x8223005c  lb          $v1, 0x5C($s1)
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x16386c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16386cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x163870: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x163870u;
    {
        const bool branch_taken_0x163870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163870u;
        // 0x163874: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163870) {
            ctx->pc = 0x163BD4u;
            goto label_163bd4;
        }
    }
    ctx->pc = 0x163878u;
    // 0x163878: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x163878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16387c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16387cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163880: 0x2442f5a0  addiu       $v0, $v0, -0xA60
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964640));
    // 0x163884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163888: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16388c: 0x800008  jr          $a0
    ctx->pc = 0x16388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163894u: goto label_163894;
            case 0x1638ACu: goto label_1638ac;
            case 0x1639B0u: goto label_1639b0;
            case 0x163BA8u: goto label_163ba8;
            case 0x163BBCu: goto label_163bbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16388Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163894u;
label_163894:
    // 0x163894: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x163898: 0xac60d9d0  sw          $zero, -0x2630($v1)
    ctx->pc = 0x163898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BD9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BD9D0u, _value); } while (0);
    // 0x16389c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x16389cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638a0: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x1638a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1638a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1638a8: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x1638a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
label_1638ac:
    // 0x1638ac: 0x822300f0  lb          $v1, 0xF0($s1)
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1638b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1638b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1638b4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1638B4u;
    {
        const bool branch_taken_0x1638b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1638b4) {
            ctx->pc = 0x1638B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1638B4u;
            // 0x1638b8: 0xc6210120  lwc1        $f1, 0x120($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1638C4u;
            goto label_1638c4;
        }
    }
    ctx->pc = 0x1638BCu;
    // 0x1638bc: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1638BCu;
    {
        const bool branch_taken_0x1638bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638BCu;
        // 0x1638c0: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638bc) {
            ctx->pc = 0x163BB0u;
            goto label_163bb0;
        }
    }
    ctx->pc = 0x1638C4u;
label_1638c4:
    // 0x1638c4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1638c8: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x1638c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1638cc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x1638d0: 0xc640d9d0  lwc1        $f0, -0x2630($s2)
    ctx->pc = 0x1638d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1638d4: 0x24a57d70  addiu       $a1, $a1, 0x7D70
    ctx->pc = 0x1638d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32112));
    // 0x1638d8: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1638d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1638dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1638dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638e0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1638e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1638e4: 0xc0591b0  jal         func_1646C0
    ctx->pc = 0x1638E4u;
    SET_GPR_U32(ctx, 31, 0x1638ECu);
    ctx->pc = 0x1638E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638E4u;
    // 0x1638e8: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646C0u, 0x1638E4u, 0x1638ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638ECu;
label_1638ec:
    // 0x1638ec: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1638ECu;
    {
        const bool branch_taken_0x1638ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x1638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638ECu;
        // 0x1638f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638ec) {
            ctx->pc = 0x163908u;
            goto label_163908;
        }
    }
    ctx->pc = 0x1638F4u;
    // 0x1638f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1638f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1638f8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1638f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1638fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1638fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x163900: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x163900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x163904: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x163904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_163908:
    // 0x163908: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x16390c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163910: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x163914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x163914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163918: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x163918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x16391c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x16391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x163920: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x163920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x163924: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x163924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x163928: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x163928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16392c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x16392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163930: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x163930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x163934: 0x3c01441b  lui         $at, 0x441B
    ctx->pc = 0x163934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17435 << 16));
    // 0x163938: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x163938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x16393c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x163940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x163944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163948: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x163948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x16394c: 0xc640d9d0  lwc1        $f0, -0x2630($s2)
    ctx->pc = 0x16394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163950: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x163950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x163954: 0xe640d9d0  swc1        $f0, -0x2630($s2)
    ctx->pc = 0x163954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294957520), bits); }
    // 0x163958: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x163958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16395c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163960: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x163960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x163964: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x163964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16396c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x16396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x163970: 0xc641d9d0  lwc1        $f1, -0x2630($s2)
    ctx->pc = 0x163970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163974: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x163974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163978: 0x0  nop
    ctx->pc = 0x163978u;
    // NOP
    // 0x16397c: 0x45000094  bc1f        . + 4 + (0x94 << 2)
    ctx->pc = 0x16397Cu;
    {
        const bool branch_taken_0x16397c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16397Cu;
        // 0x163980: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16397c) {
            ctx->pc = 0x163BD0u;
            goto label_163bd0;
        }
    }
    ctx->pc = 0x163984u;
    // 0x163984: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x163984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163988: 0xe440d9d4  swc1        $f0, -0x262C($v0)
    ctx->pc = 0x163988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294957524), bits); }
    // 0x16398c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x16398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163990: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x163990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x163994: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x163994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16399c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x16399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x1639a0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1639a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1639a4: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x1639a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x1639a8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639A8u;
        // 0x1639ac: 0xe621012c  swc1        $f1, 0x12C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x163BD0u;
            goto label_163bd0;
        }
    }
    ctx->pc = 0x1639B0u;
label_1639b0:
    // 0x1639b0: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1639b4: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x1639b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x1639b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1639b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1639bc: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1639c0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1639c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1639c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1639c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1639c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1639c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1639cc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1639ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1639d0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1639d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1639d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1639d8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1639d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1639dc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1639dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1639e0: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x1639e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1639e4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1639e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1639e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1639ec: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1639ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1639f0: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1639f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1639f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1639f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1639f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1639f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1639fc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1639fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163a00: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x163a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x163a04: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x163a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163a08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163a0c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163a10: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x163a14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163a18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x163a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x163a1c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163a20: 0x86230130  lh          $v1, 0x130($s1)
    ctx->pc = 0x163a20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x163a24: 0x10670018  beq         $v1, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x163A24u;
    {
        const bool branch_taken_0x163a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x163A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A24u;
        // 0x163a28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a24) {
            ctx->pc = 0x163A88u;
            goto label_163a88;
        }
    }
    ctx->pc = 0x163A2Cu;
    // 0x163a2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163A2Cu;
    {
        const bool branch_taken_0x163a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A2Cu;
        // 0x163a30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a2c) {
            ctx->pc = 0x163A44u;
            goto label_163a44;
        }
    }
    ctx->pc = 0x163A34u;
    // 0x163a34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x163A34u;
    {
        const bool branch_taken_0x163a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A34u;
        // 0x163a38: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a34) {
            ctx->pc = 0x163A5Cu;
            goto label_163a5c;
        }
    }
    ctx->pc = 0x163A3Cu;
    // 0x163a3c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x163A3Cu;
    {
        const bool branch_taken_0x163a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A3Cu;
        // 0x163a40: 0x92220132  lbu         $v0, 0x132($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 306)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a3c) {
            ctx->pc = 0x163B34u;
            goto label_163b34;
        }
    }
    ctx->pc = 0x163A44u;
label_163a44:
    // 0x163a44: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x163A44u;
    {
        const bool branch_taken_0x163a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A44u;
        // 0x163a48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a44) {
            ctx->pc = 0x163AC8u;
            goto label_163ac8;
        }
    }
    ctx->pc = 0x163A4Cu;
    // 0x163a4c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x163A4Cu;
    {
        const bool branch_taken_0x163a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A4Cu;
        // 0x163a50: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a4c) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163A54u;
    // 0x163a54: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x163A54u;
    {
        const bool branch_taken_0x163a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A54u;
        // 0x163a58: 0x92220132  lbu         $v0, 0x132($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 306)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a54) {
            ctx->pc = 0x163B34u;
            goto label_163b34;
        }
    }
    ctx->pc = 0x163A5Cu;
label_163a5c:
    // 0x163a5c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x163a60: 0x24a474a0  addiu       $a0, $a1, 0x74A0
    ctx->pc = 0x163a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x163a64: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x163a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x163a68: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1388)));
    // 0x163a6c: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x163a70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163a78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x163a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a7c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163a80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x163A80u;
    {
        const bool branch_taken_0x163a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A80u;
        // 0x163a84: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a80) {
            ctx->pc = 0x163AB4u;
            goto label_163ab4;
        }
    }
    ctx->pc = 0x163A88u;
label_163a88:
    // 0x163a88: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x163a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x163a8c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x163a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x163a90: 0x24a474a0  addiu       $a0, $a1, 0x74A0
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x163a94: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x163a98: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x163a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x163a9c: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x163a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x163aa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163aa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163aa8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x163aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163aac: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163ab0: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x163ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_163ab4:
    // 0x163ab4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163ab8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x163ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x163abc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163ac0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x163AC0u;
    {
        const bool branch_taken_0x163ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AC0u;
        // 0x163ac4: 0xa2200132  sb          $zero, 0x132($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 306), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ac0) {
            ctx->pc = 0x163B30u;
            goto label_163b30;
        }
    }
    ctx->pc = 0x163AC8u;
label_163ac8:
    // 0x163ac8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x163acc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x163accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x163ad0: 0x24a474a0  addiu       $a0, $a1, 0x74A0
    ctx->pc = 0x163ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x163ad4: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x163ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x163ad8: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x163ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x163adc: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x163adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x163ae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163ae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163ae8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x163ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163aec: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163af0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163AF0u;
    {
        const bool branch_taken_0x163af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AF0u;
        // 0x163af4: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163af0) {
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163AF8u;
label_163af8:
    // 0x163af8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x163afc: 0x24a474a0  addiu       $a0, $a1, 0x74A0
    ctx->pc = 0x163afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x163b00: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x163b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x163b04: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1388)));
    // 0x163b08: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x163b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x163b0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163b14: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x163b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b18: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x163b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x163b1c: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x163b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_163b20:
    // 0x163b20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x163b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x163b24: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x163b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x163b28: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x163b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x163b2c: 0xa2270132  sb          $a3, 0x132($s1)
    ctx->pc = 0x163b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 306), (uint8_t)GPR_U32(ctx, 7));
label_163b30:
    // 0x163b30: 0x92220132  lbu         $v0, 0x132($s1)
    ctx->pc = 0x163b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 306)));
label_163b34:
    // 0x163b34: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x163B34u;
    {
        const bool branch_taken_0x163b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163b34) {
            ctx->pc = 0x163B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B34u;
            // 0x163b38: 0x92230132  lbu         $v1, 0x132($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B58u;
            goto label_163b58;
        }
    }
    ctx->pc = 0x163B3Cu;
    // 0x163b3c: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x163b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b40: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x163b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163b44: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x163b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x163b48: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163b4c: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x163b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b50: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x163b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x163b54: 0x92230132  lbu         $v1, 0x132($s1)
    ctx->pc = 0x163b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 306)));
label_163b58:
    // 0x163b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b5c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x163B5Cu;
    {
        const bool branch_taken_0x163b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B5Cu;
        // 0x163b60: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b5c) {
            ctx->pc = 0x163B8Cu;
            goto label_163b8c;
        }
    }
    ctx->pc = 0x163B64u;
    // 0x163b64: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x163b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163b68: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x163b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x163b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b70: 0x3c01438d  lui         $at, 0x438D
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17293 << 16));
    // 0x163b74: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x163b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x163b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163b7c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x163b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x163b80: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x163b84: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x163b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x163b88: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
label_163b8c:
    // 0x163b8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x163b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x163b90: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x163b90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x163b94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x163b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x163b98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x163B98u;
    {
        const bool branch_taken_0x163b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B98u;
        // 0x163b9c: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b98) {
            ctx->pc = 0x163BD0u;
            goto label_163bd0;
        }
    }
    ctx->pc = 0x163BA0u;
    // 0x163ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163BA0u;
    {
        const bool branch_taken_0x163ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA0u;
        // 0x163ba4: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba0) {
            ctx->pc = 0x163BB0u;
            goto label_163bb0;
        }
    }
    ctx->pc = 0x163BA8u;
label_163ba8:
    // 0x163ba8: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x163ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x163bac: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x163bacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_163bb0:
    // 0x163bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163bb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x163BB4u;
    {
        const bool branch_taken_0x163bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BB4u;
        // 0x163bb8: 0xa222005c  sb          $v0, 0x5C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bb4) {
            ctx->pc = 0x163BD0u;
            goto label_163bd0;
        }
    }
    ctx->pc = 0x163BBCu;
label_163bbc:
    // 0x163bbc: 0x9222005b  lbu         $v0, 0x5B($s1)
    ctx->pc = 0x163bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
    // 0x163bc0: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x163bc4: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x163bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x163bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163bcc: 0xa222005b  sb          $v0, 0x5B($s1)
    ctx->pc = 0x163bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 2));
label_163bd0:
    // 0x163bd0: 0x8223005c  lb          $v1, 0x5C($s1)
    ctx->pc = 0x163bd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_163bd4:
    // 0x163bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163bd8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163BD8u;
    {
        const bool branch_taken_0x163bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BD8u;
        // 0x163bdc: 0xc640d9d0  lwc1        $f0, -0x2630($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bd8) {
            ctx->pc = 0x163BF8u;
            goto label_163bf8;
        }
    }
    ctx->pc = 0x163BE0u;
    // 0x163be0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x163be4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x163be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x163be8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163bec: 0x0  nop
    ctx->pc = 0x163becu;
    // NOP
    // 0x163bf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163bf4: 0xe640d9d0  swc1        $f0, -0x2630($s2)
    ctx->pc = 0x163bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294957520), bits); }
label_163bf8:
    // 0x163bf8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x163bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163bfc: 0xc641d9d0  lwc1        $f1, -0x2630($s2)
    ctx->pc = 0x163bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c00: 0x3c01441b  lui         $at, 0x441B
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17435 << 16));
    // 0x163c04: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x163c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x163c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163c0c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x163c10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x163c10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163c14: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x163c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x163c18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x163c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163c1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x163c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x163c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163c24: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x163c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x163c28: 0xc640d9d0  lwc1        $f0, -0x2630($s2)
    ctx->pc = 0x163c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294957520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c2c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x163c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c30: 0x0  nop
    ctx->pc = 0x163c30u;
    // NOP
    // 0x163c34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x163C34u;
    {
        const bool branch_taken_0x163c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c34) {
            ctx->pc = 0x163C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163C34u;
            // 0x163c38: 0xae40d9d0  sw          $zero, -0x2630($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294957520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163C3Cu;
            goto label_163c3c;
        }
    }
    ctx->pc = 0x163C3Cu;
label_163c3c:
    // 0x163c3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x163c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163c40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x163c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163c44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x163c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x163C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C4Cu;
        // 0x163c50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C54u;
    // 0x163c54: 0x0  nop
    ctx->pc = 0x163c54u;
    // NOP
    ctx->pc = 0x163c58u;
}
