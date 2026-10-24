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

// Function: func_00124540
// Address: 0x124540 - 0x124c30
void func_00124540_0x124540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00124540_0x124540");
#endif

    switch (ctx->pc) {
        case 0x124570u: goto label_124570;
        case 0x1245f0u: goto label_1245f0;
        case 0x12463cu: goto label_12463c;
        case 0x124678u: goto label_124678;
        case 0x1246b8u: goto label_1246b8;
        case 0x1246f8u: goto label_1246f8;
        case 0x124740u: goto label_124740;
        case 0x12477cu: goto label_12477c;
        case 0x1247b8u: goto label_1247b8;
        case 0x124804u: goto label_124804;
        case 0x124850u: goto label_124850;
        case 0x124884u: goto label_124884;
        case 0x1248ccu: goto label_1248cc;
        case 0x124908u: goto label_124908;
        case 0x12495cu: goto label_12495c;
        case 0x1249a4u: goto label_1249a4;
        case 0x124a28u: goto label_124a28;
        case 0x124a64u: goto label_124a64;
        case 0x124aa0u: goto label_124aa0;
        case 0x124adcu: goto label_124adc;
        case 0x124b68u: goto label_124b68;
        case 0x124ba8u: goto label_124ba8;
        case 0x124becu: goto label_124bec;
        default: break;
    }

    ctx->pc = 0x124540u;

    // 0x124540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x124544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x124548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12454c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x124550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12455c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x12455cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x124560: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124560u;
    {
        const bool branch_taken_0x124560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x124564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124560u;
        // 0x124564: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124560) {
            ctx->pc = 0x12457Cu;
            goto label_12457c;
        }
    }
    ctx->pc = 0x124568u;
    // 0x124568: 0xc04930c  jal         func_124C30
    ctx->pc = 0x124568u;
    SET_GPR_U32(ctx, 31, 0x124570u);
    ctx->pc = 0x12456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124568u;
    // 0x12456c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C30u, 0x124568u, 0x124570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124570u;
label_124570:
    // 0x124570: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x124574: 0x144001a4  bnez        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x124574u;
    {
        const bool branch_taken_0x124574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124574u;
        // 0x124578: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124574) {
            ctx->pc = 0x124C08u;
            goto label_124c08;
        }
    }
    ctx->pc = 0x12457Cu;
label_12457c:
    // 0x12457c: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x12457cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x124580: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124580u;
    {
        const bool branch_taken_0x124580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124580u;
        // 0x124584: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124580) {
            ctx->pc = 0x1245A0u;
            goto label_1245a0;
        }
    }
    ctx->pc = 0x124588u;
    // 0x124588: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x124588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12458c: 0x2442c830  addiu       $v0, $v0, -0x37D0
    ctx->pc = 0x12458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953008));
    // 0x124590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x124594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124598: 0x800008  jr          $a0
    ctx->pc = 0x124598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1245A0u: goto label_1245a0;
            case 0x1247C0u: goto label_1247c0;
            case 0x12488Cu: goto label_12488c;
            case 0x124918u: goto label_124918;
            case 0x1249E0u: goto label_1249e0;
            case 0x124B20u: goto label_124b20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1245A0u;
label_1245a0:
    // 0x1245a0: 0x8e2305d8  lw          $v1, 0x5D8($s1)
    ctx->pc = 0x1245a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1496)));
    // 0x1245a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1245a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1245a8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1245A8u;
    {
        const bool branch_taken_0x1245a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245A8u;
        // 0x1245ac: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245a8) {
            ctx->pc = 0x124700u;
            goto label_124700;
        }
    }
    ctx->pc = 0x1245B0u;
    // 0x1245b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1245b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1245b4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1245b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1245b8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1245b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1245bc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1245bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1245c0: 0x247064f0  addiu       $s0, $v1, 0x64F0
    ctx->pc = 0x1245c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
    // 0x1245c4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1245c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1245c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1245cc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1245ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1245d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1245d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1245d4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1245d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1245d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1245dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1245e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1245e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245e8: 0xc0a4404  jal         func_291010
    ctx->pc = 0x1245E8u;
    SET_GPR_U32(ctx, 31, 0x1245F0u);
    ctx->pc = 0x1245ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245E8u;
    // 0x1245ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x1245E8u, 0x1245F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245F0u;
label_1245f0:
    // 0x1245f0: 0x14400184  bnez        $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x1245F0u;
    {
        const bool branch_taken_0x1245f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F0u;
        // 0x1245f4: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245f0) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x1245F8u;
    // 0x1245f8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1245fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1245fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124600: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124604: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x124604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x124608: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12460c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124610: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x124610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x124614: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x124618: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12461c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124620: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124624: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x124624u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124628: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124628u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x12462c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12462cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124634: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124634u;
    SET_GPR_U32(ctx, 31, 0x12463Cu);
    ctx->pc = 0x124638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124634u;
    // 0x124638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124634u, 0x12463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12463Cu;
label_12463c:
    // 0x12463c: 0x14400171  bnez        $v0, . + 4 + (0x171 << 2)
    ctx->pc = 0x12463Cu;
    {
        const bool branch_taken_0x12463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12463Cu;
        // 0x124640: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12463c) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124644u;
    // 0x124644: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124648: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12464c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124650: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124654: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124654u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124658: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x12465c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x12465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12466c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124670: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124670u;
    SET_GPR_U32(ctx, 31, 0x124678u);
    ctx->pc = 0x124674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124670u;
    // 0x124674: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124670u, 0x124678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124678u;
label_124678:
    // 0x124678: 0x14400162  bnez        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x124678u;
    {
        const bool branch_taken_0x124678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124678u;
        // 0x12467c: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124678) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124680u;
    // 0x124680: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124684: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124684u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124688: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12468c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x12468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124690: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x124690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124694: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x124698: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x124698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x12469c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x12469cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1246a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1246a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1246a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1246a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1246acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246b0: 0xc0a4404  jal         func_291010
    ctx->pc = 0x1246B0u;
    SET_GPR_U32(ctx, 31, 0x1246B8u);
    ctx->pc = 0x1246B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246B0u;
    // 0x1246b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x1246B0u, 0x1246B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246B8u;
label_1246b8:
    // 0x1246b8: 0x14400152  bnez        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x1246B8u;
    {
        const bool branch_taken_0x1246b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B8u;
        // 0x1246bc: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b8) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x1246C0u;
    // 0x1246c0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1246c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1246c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1246c8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1246c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1246cc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1246ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1246d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1246d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1246d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1246d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1246dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1246dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246e0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1246e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1246e4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1246e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1246e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1246e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1246ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1246ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246f0: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x1246F0u;
    SET_GPR_U32(ctx, 31, 0x1246F8u);
    ctx->pc = 0x1246F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246F0u;
    // 0x1246f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x1246F0u, 0x1246F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246F8u;
label_1246f8:
    // 0x1246f8: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x1246F8u;
    {
        const bool branch_taken_0x1246f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246F8u;
        // 0x1246fc: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246f8) {
            ctx->pc = 0x124BF0u;
            goto label_124bf0;
        }
    }
    ctx->pc = 0x124700u;
label_124700:
    // 0x124700: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124704: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124708: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x12470c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x12470cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x124710: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x124714: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124718: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x124718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x12471c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x12471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124720: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x124720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x124724: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12472c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12472cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124730: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124730u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124738: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x124738u;
    SET_GPR_U32(ctx, 31, 0x124740u);
    ctx->pc = 0x12473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124738u;
    // 0x12473c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x124738u, 0x124740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124740u;
label_124740:
    // 0x124740: 0x14400130  bnez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x124740u;
    {
        const bool branch_taken_0x124740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124740u;
        // 0x124744: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124740) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124748u;
    // 0x124748: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12474c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12474cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124750: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124754: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x124758: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12475c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x12475cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124760: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12476c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12476cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124774: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x124774u;
    SET_GPR_U32(ctx, 31, 0x12477Cu);
    ctx->pc = 0x124778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124774u;
    // 0x124778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x124774u, 0x12477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12477Cu;
label_12477c:
    // 0x12477c: 0x14400121  bnez        $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x12477Cu;
    {
        const bool branch_taken_0x12477c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12477Cu;
        // 0x124780: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12477c) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124784u;
    // 0x124784: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124788: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12478c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124790: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124798: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12479c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12479cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1247a0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1247a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1247a4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1247a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1247a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1247a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1247acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247b0: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x1247B0u;
    SET_GPR_U32(ctx, 31, 0x1247B8u);
    ctx->pc = 0x1247B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247B0u;
    // 0x1247b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x1247B0u, 0x1247B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247B8u;
label_1247b8:
    // 0x1247b8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x1247B8u;
    {
        const bool branch_taken_0x1247b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247B8u;
        // 0x1247bc: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247b8) {
            ctx->pc = 0x124BF0u;
            goto label_124bf0;
        }
    }
    ctx->pc = 0x1247C0u;
label_1247c0:
    // 0x1247c0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1247c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1247c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1247c8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1247c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1247cc: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1247ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1247d0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1247d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1247d4: 0x247064f0  addiu       $s0, $v1, 0x64F0
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
    // 0x1247d8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1247dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1247dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1247e0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1247e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1247e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1247e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1247e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1247e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1247ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1247ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1247f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1247f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1247f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247fc: 0xc0a4404  jal         func_291010
    ctx->pc = 0x1247FCu;
    SET_GPR_U32(ctx, 31, 0x124804u);
    ctx->pc = 0x124800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247FCu;
    // 0x124800: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x1247FCu, 0x124804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124804u;
label_124804:
    // 0x124804: 0x144000ff  bnez        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x124804u;
    {
        const bool branch_taken_0x124804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124804u;
        // 0x124808: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124804) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x12480Cu;
    // 0x12480c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x12480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124810: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124814: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124818: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12481c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124824: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x124824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x124828: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x124828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12482c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12482cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124834: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124838: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x124838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x12483c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x12483cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124848: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124848u;
    SET_GPR_U32(ctx, 31, 0x124850u);
    ctx->pc = 0x12484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124848u;
    // 0x12484c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124848u, 0x124850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124850u;
label_124850:
    // 0x124850: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x124850u;
    {
        const bool branch_taken_0x124850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124850u;
        // 0x124854: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124850) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124858u;
    // 0x124858: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12485c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12485cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124860: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124864: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12486c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12486cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124870: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124870u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124874: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12487c: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x12487Cu;
    SET_GPR_U32(ctx, 31, 0x124884u);
    ctx->pc = 0x124880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12487Cu;
    // 0x124880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x12487Cu, 0x124884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124884u;
label_124884:
    // 0x124884: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x124884u;
    {
        const bool branch_taken_0x124884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124884u;
        // 0x124888: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124884) {
            ctx->pc = 0x124BF0u;
            goto label_124bf0;
        }
    }
    ctx->pc = 0x12488Cu;
label_12488c:
    // 0x12488c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124890: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124890u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124894: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124898: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x124898u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x12489c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x12489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1248a0: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1248a4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1248a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1248a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1248a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1248ac: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1248acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1248b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1248b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1248b4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1248b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1248b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1248b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1248bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1248c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248c4: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x1248C4u;
    SET_GPR_U32(ctx, 31, 0x1248CCu);
    ctx->pc = 0x1248C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1248C4u;
    // 0x1248c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x1248C4u, 0x1248CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248CCu;
label_1248cc:
    // 0x1248cc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1248ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1248d0: 0xae220640  sw          $v0, 0x640($s1)
    ctx->pc = 0x1248d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
    // 0x1248d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1248d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1248d8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1248d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1248dc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1248dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1248e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1248e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e4: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x1248e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x1248e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1248e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1248ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1248ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1248f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1248f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1248f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1248f8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1248f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1248fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1248fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124900: 0xc0a4282  jal         func_290A08
    ctx->pc = 0x124900u;
    SET_GPR_U32(ctx, 31, 0x124908u);
    ctx->pc = 0x124904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124900u;
    // 0x124904: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A08u, 0x124900u, 0x124908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124908u;
label_124908:
    // 0x124908: 0x504000ba  beql        $v0, $zero, . + 4 + (0xBA << 2)
    ctx->pc = 0x124908u;
    {
        const bool branch_taken_0x124908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124908) {
            ctx->pc = 0x12490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124908u;
            // 0x12490c: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124BF4u;
            goto label_124bf4;
        }
    }
    ctx->pc = 0x124910u;
    // 0x124910: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x124910u;
    {
        const bool branch_taken_0x124910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124910u;
        // 0x124914: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124910) {
            ctx->pc = 0x124BF0u;
            goto label_124bf0;
        }
    }
    ctx->pc = 0x124918u;
label_124918:
    // 0x124918: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12491c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12491cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124920: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124924: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x124924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x124928: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12492c: 0x247064f0  addiu       $s0, $v1, 0x64F0
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
    // 0x124930: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x124934: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124938: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x12493c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12493cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x124940: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x124940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x124944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12494c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12494cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124954: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124954u;
    SET_GPR_U32(ctx, 31, 0x12495Cu);
    ctx->pc = 0x124958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124954u;
    // 0x124958: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124954u, 0x12495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12495Cu;
label_12495c:
    // 0x12495c: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x12495Cu;
    {
        const bool branch_taken_0x12495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12495Cu;
        // 0x124960: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12495c) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124964u;
    // 0x124964: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124968: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124968u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12496c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124970: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x124970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x124974: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x124974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x124978: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12497c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124980: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124988: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x12498c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x12498cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124990: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124990u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12499c: 0xc0a4404  jal         func_291010
    ctx->pc = 0x12499Cu;
    SET_GPR_U32(ctx, 31, 0x1249A4u);
    ctx->pc = 0x1249A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12499Cu;
    // 0x1249a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x12499Cu, 0x1249A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249A4u;
label_1249a4:
    // 0x1249a4: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1249A4u;
    {
        const bool branch_taken_0x1249a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1249A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249A4u;
        // 0x1249a8: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249a4) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x1249ACu;
    // 0x1249ac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1249acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1249b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1249b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1249b4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1249b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1249b8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1249b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1249bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1249bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249c0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1249c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1249c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1249c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1249c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1249c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1249cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1249ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1249d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1249d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1249D8u;
    {
        const bool branch_taken_0x1249d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249D8u;
        // 0x1249dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249d8) {
            ctx->pc = 0x124BE4u;
            goto label_124be4;
        }
    }
    ctx->pc = 0x1249E0u;
label_1249e0:
    // 0x1249e0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1249e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1249e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1249e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1249e8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1249e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1249ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1249f0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1249f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1249f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1249f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1249f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1249f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1249fc: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x1249fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x124a00: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124a04: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x124a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x124a08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a14: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124a14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a1c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124a20: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124A20u;
    SET_GPR_U32(ctx, 31, 0x124A28u);
    ctx->pc = 0x124A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A20u;
    // 0x124a24: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124A20u, 0x124A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A28u;
label_124a28:
    // 0x124a28: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x124A28u;
    {
        const bool branch_taken_0x124a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A28u;
        // 0x124a2c: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a28) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124A30u;
    // 0x124a30: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124a34: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124a38: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124a3c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a44: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x124a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x124a48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a50: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124a50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a58: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124a5c: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124A5Cu;
    SET_GPR_U32(ctx, 31, 0x124A64u);
    ctx->pc = 0x124A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A5Cu;
    // 0x124a60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124A5Cu, 0x124A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A64u;
label_124a64:
    // 0x124a64: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x124A64u;
    {
        const bool branch_taken_0x124a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A64u;
        // 0x124a68: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a64) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124A6Cu;
    // 0x124a6c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124a70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124a70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124a74: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124a78: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a80: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x124a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x124a84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124a88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a8c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124a8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a94: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124a98: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124A98u;
    SET_GPR_U32(ctx, 31, 0x124AA0u);
    ctx->pc = 0x124A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A98u;
    // 0x124a9c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124A98u, 0x124AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AA0u;
label_124aa0:
    // 0x124aa0: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x124AA0u;
    {
        const bool branch_taken_0x124aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA0u;
        // 0x124aa4: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124aa0) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124AA8u;
    // 0x124aa8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124aac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124aacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124ab0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124ab4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124ab8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124ab8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124abc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x124abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x124ac0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ad0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124ad4: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124AD4u;
    SET_GPR_U32(ctx, 31, 0x124ADCu);
    ctx->pc = 0x124AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AD4u;
    // 0x124ad8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124AD4u, 0x124ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ADCu;
label_124adc:
    // 0x124adc: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x124ADCu;
    {
        const bool branch_taken_0x124adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ADCu;
        // 0x124ae0: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124adc) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124AE4u;
    // 0x124ae4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124ae8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124aec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124af0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124af8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x124af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x124afc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124b00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b04: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x124b08: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x124b0c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x124b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x124b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124b18: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x124B18u;
    {
        const bool branch_taken_0x124b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B18u;
        // 0x124b1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b18) {
            ctx->pc = 0x124BE4u;
            goto label_124be4;
        }
    }
    ctx->pc = 0x124B20u;
label_124b20:
    // 0x124b20: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124b24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124b28: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124b2c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x124b30: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x124b34: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x124b38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124b3c: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x124b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x124b40: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124b44: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x124b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x124b48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x124b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b54: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124b54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b60: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124B60u;
    SET_GPR_U32(ctx, 31, 0x124B68u);
    ctx->pc = 0x124B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B60u;
    // 0x124b64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124B60u, 0x124B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B68u;
label_124b68:
    // 0x124b68: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x124B68u;
    {
        const bool branch_taken_0x124b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B68u;
        // 0x124b6c: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b68) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124B70u;
    // 0x124b70: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124b74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124b78: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124b7c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x124b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x124b80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x124b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124b84: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x124b84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x124b88: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b94: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x124b94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ba0: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124BA0u;
    SET_GPR_U32(ctx, 31, 0x124BA8u);
    ctx->pc = 0x124BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BA0u;
    // 0x124ba4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124BA0u, 0x124BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BA8u;
label_124ba8:
    // 0x124ba8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x124BA8u;
    {
        const bool branch_taken_0x124ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BA8u;
        // 0x124bac: 0xae220640  sw          $v0, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ba8) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124BB0u;
    // 0x124bb0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x124bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x124bb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x124bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124bb8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x124bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124bbc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc4: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x124bc8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x124bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x124bcc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x124bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x124bd0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x124bd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x124bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124be0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x124be0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124be4:
    // 0x124be4: 0xc0a4404  jal         func_291010
    ctx->pc = 0x124BE4u;
    SET_GPR_U32(ctx, 31, 0x124BECu);
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x124BE4u, 0x124BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BECu;
label_124bec:
    // 0x124bec: 0xae220640  sw          $v0, 0x640($s1)
    ctx->pc = 0x124becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 2));
label_124bf0:
    // 0x124bf0: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x124bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_124bf4:
    // 0x124bf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124BF4u;
    {
        const bool branch_taken_0x124bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BF4u;
        // 0x124bf8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bf4) {
            ctx->pc = 0x124C08u;
            goto label_124c08;
        }
    }
    ctx->pc = 0x124BFCu;
    // 0x124bfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124BFCu;
    {
        const bool branch_taken_0x124bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BFCu;
        // 0x124c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bfc) {
            ctx->pc = 0x124C10u;
            goto label_124c10;
        }
    }
    ctx->pc = 0x124C04u;
label_124c04:
    // 0x124c04: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_124c08:
    // 0x124c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c0c: 0xa2230648  sb          $v1, 0x648($s1)
    ctx->pc = 0x124c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 3));
label_124c10:
    // 0x124c10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x124c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124c14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x124c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124c1c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x124c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124c20: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x124c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124c24: 0x3e00008  jr          $ra
    ctx->pc = 0x124C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C24u;
        // 0x124c28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124C2Cu;
    // 0x124c2c: 0x0  nop
    ctx->pc = 0x124c2cu;
    // NOP
    ctx->pc = 0x124c30u;
}
