#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: setEventJump__5cR022
// Address: 0x79a7b0 - 0x79aa50
void setEventJump__5cR022_0x79a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setEventJump__5cR022_0x79a7b0");
#endif

    switch (ctx->pc) {
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a830u: goto label_79a830;
        case 0x79a840u: goto label_79a840;
        case 0x79a898u: goto label_79a898;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79aa20u: goto label_79aa20;
        default: break;
    }

    ctx->pc = 0x79a7b0u;

    // 0x79a7b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a7b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a7b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a7bc: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x79a7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x79a7c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a7c4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79a7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a7cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a7d4: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x79a7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a7dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a7e0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79a7e4: 0xc07efe4  jal         func_1FBF90
    ctx->pc = 0x79A7E4u;
    SET_GPR_U32(ctx, 31, 0x79A7ECu);
    ctx->pc = 0x79A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E4u;
    // 0x79a7e8: 0x920505b7  lbu         $a1, 0x5B7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1463)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF90u, 0x79A7E4u, 0x79A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7ECu;
label_79a7ec:
    // 0x79a7ec: 0x920205b7  lbu         $v0, 0x5B7($s0)
    ctx->pc = 0x79a7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1463)));
    // 0x79a7f0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a7f4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a7f8: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x79A7F8u;
    {
        const bool branch_taken_0x79a7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F8u;
        // 0x79a7fc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7f8) {
            ctx->pc = 0x79AA28u;
            goto label_79aa28;
        }
    }
    ctx->pc = 0x79A800u;
    // 0x79a800: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79a804: 0x2442cd20  addiu       $v0, $v0, -0x32E0
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954272));
    // 0x79a808: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a80c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a810: 0x800008  jr          $a0
    ctx->pc = 0x79A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A818u: goto label_79a818;
            case 0x79A8C4u: goto label_79a8c4;
            case 0x79A8E0u: goto label_79a8e0;
            case 0x79A8FCu: goto label_79a8fc;
            case 0x79A918u: goto label_79a918;
            case 0x79A934u: goto label_79a934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A810u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A818u;
label_79a818:
    // 0x79a818: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a81c: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a820: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a824: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a828: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a82c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a830:
    // 0x79a830: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79a834: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x79a838: 0xc1e72bc  jal         func_79CAF0
    ctx->pc = 0x79A838u;
    SET_GPR_U32(ctx, 31, 0x79A840u);
    ctx->pc = 0x79A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A838u;
    // 0x79a83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAF0u, 0x79A838u, 0x79A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A840u;
label_79a840:
    // 0x79a840: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a844: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79a844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79a848: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a84c: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x79a84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x79a850: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a854: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79a858: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A858u;
    {
        const bool branch_taken_0x79a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A858u;
        // 0x79a85c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a858) {
            ctx->pc = 0x79A874u;
            goto label_79a874;
        }
    }
    ctx->pc = 0x79A860u;
    // 0x79a860: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79a860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79a864: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a868: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a86c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79a86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a870: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a874:
    // 0x79a874: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a878: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a880: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x79a880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x79a884: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a88c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79a890: 0xc1e72cc  jal         func_79CB30
    ctx->pc = 0x79A890u;
    SET_GPR_U32(ctx, 31, 0x79A898u);
    ctx->pc = 0x79A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A890u;
    // 0x79a894: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB30u, 0x79A890u, 0x79A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A898u;
label_79a898:
    // 0x79a898: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x79A898u;
    {
        const bool branch_taken_0x79a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A898u;
        // 0x79a89c: 0x268274a0  addiu       $v0, $s4, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a898) {
            ctx->pc = 0x79AA2Cu;
            goto label_79aa2c;
        }
    }
    ctx->pc = 0x79A8A0u;
    // 0x79a8a0: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x79a8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x79a8a4: 0x10700062  beq         $v1, $s0, . + 4 + (0x62 << 2)
    ctx->pc = 0x79A8A4u;
    {
        const bool branch_taken_0x79a8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A4u;
        // 0x79a8a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a4) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79A8ACu;
    // 0x79a8ac: 0xc1e72c6  jal         func_79CB18
    ctx->pc = 0x79A8ACu;
    SET_GPR_U32(ctx, 31, 0x79A8B4u);
    ctx->pc = 0x79A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ACu;
    // 0x79a8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB18u, 0x79A8ACu, 0x79A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B4u;
label_79a8b4:
    // 0x79a8b4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x79A8B4u;
    {
        const bool branch_taken_0x79a8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8b4) {
            ctx->pc = 0x79A9D8u;
            goto label_79a9d8;
        }
    }
    ctx->pc = 0x79A8BCu;
    // 0x79a8bc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x79A8BCu;
    {
        const bool branch_taken_0x79a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a8bc) {
            ctx->pc = 0x79AA00u;
            goto label_79aa00;
        }
    }
    ctx->pc = 0x79A8C4u;
label_79a8c4:
    // 0x79a8c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a8c8: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a8cc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a8ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a8d0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a8d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a8d8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x79A8D8u;
    {
        const bool branch_taken_0x79a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D8u;
        // 0x79a8dc: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d8) {
            ctx->pc = 0x79A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a830;
        }
    }
    ctx->pc = 0x79A8E0u;
label_79a8e0:
    // 0x79a8e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a8e4: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a8e8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a8e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a8ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a8f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a8f4: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x79A8F4u;
    {
        const bool branch_taken_0x79a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F4u;
        // 0x79a8f8: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8f4) {
            ctx->pc = 0x79A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a830;
        }
    }
    ctx->pc = 0x79A8FCu;
label_79a8fc:
    // 0x79a8fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a900: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a904: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a908: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a90c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a910: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x79A910u;
    {
        const bool branch_taken_0x79a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A910u;
        // 0x79a914: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a910) {
            ctx->pc = 0x79A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a830;
        }
    }
    ctx->pc = 0x79A918u;
label_79a918:
    // 0x79a918: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a91c: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a920: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a924: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a928: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a92c: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x79A92Cu;
    {
        const bool branch_taken_0x79a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A92Cu;
        // 0x79a930: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a92c) {
            ctx->pc = 0x79A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a830;
        }
    }
    ctx->pc = 0x79A934u;
label_79a934:
    // 0x79a934: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a938: 0x24537b00  addiu       $s3, $v0, 0x7B00
    ctx->pc = 0x79a938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x79a93c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a93cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x79a940: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a944: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a948: 0x24100027  addiu       $s0, $zero, 0x27
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x79a94c: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79a950: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x79a954: 0xc1e72bc  jal         func_79CAF0
    ctx->pc = 0x79A954u;
    SET_GPR_U32(ctx, 31, 0x79A95Cu);
    ctx->pc = 0x79A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A954u;
    // 0x79a958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAF0u, 0x79A954u, 0x79A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A95Cu;
label_79a95c:
    // 0x79a95c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a960: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79a960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79a964: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a968: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x79a968u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x79a96c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a970: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79a974: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A974u;
    {
        const bool branch_taken_0x79a974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A974u;
        // 0x79a978: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a974) {
            ctx->pc = 0x79A990u;
            goto label_79a990;
        }
    }
    ctx->pc = 0x79A97Cu;
    // 0x79a97c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79a97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79a980: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a984: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a988: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a98c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a990:
    // 0x79a990: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a994: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a99c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x79a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x79a9a0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79a9a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a9a8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79a9ac: 0xc1e72cc  jal         func_79CB30
    ctx->pc = 0x79A9ACu;
    SET_GPR_U32(ctx, 31, 0x79A9B4u);
    ctx->pc = 0x79A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9ACu;
    // 0x79a9b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB30u, 0x79A9ACu, 0x79A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B4u;
label_79a9b4:
    // 0x79a9b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A9B4u;
    {
        const bool branch_taken_0x79a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x268274a0  addiu       $v0, $s4, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9b4) {
            ctx->pc = 0x79AA2Cu;
            goto label_79aa2c;
        }
    }
    ctx->pc = 0x79A9BCu;
    // 0x79a9bc: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x79a9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x79a9c0: 0x1070001b  beq         $v1, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A9C0u;
    {
        const bool branch_taken_0x79a9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C0u;
        // 0x79a9c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c0) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79A9C8u;
    // 0x79a9c8: 0xc1e72c6  jal         func_79CB18
    ctx->pc = 0x79A9C8u;
    SET_GPR_U32(ctx, 31, 0x79A9D0u);
    ctx->pc = 0x79A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C8u;
    // 0x79a9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB18u, 0x79A9C8u, 0x79A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A9D0u;
    {
        const bool branch_taken_0x79a9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D0u;
        // 0x79a9d4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9d0) {
            ctx->pc = 0x79AA00u;
            goto label_79aa00;
        }
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79a9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a9dc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79a9e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79a9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9f0: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79A9F0u;
    SET_GPR_U32(ctx, 31, 0x79A9F8u);
    ctx->pc = 0x79A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F0u;
    // 0x79a9f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79A9F0u, 0x79A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9F8u;
label_79a9f8:
    // 0x79a9f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79aa00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aa04: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79aa08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79aa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79aa14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa18: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79AA18u;
    SET_GPR_U32(ctx, 31, 0x79AA20u);
    ctx->pc = 0x79AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA18u;
    // 0x79aa1c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79AA18u, 0x79AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA20u;
label_79aa20:
    // 0x79aa20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AA30u;
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79AA28u;
label_79aa28:
    // 0x79aa28: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x79aa28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_79aa2c:
    // 0x79aa2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79aa2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79aa30:
    // 0x79aa30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79aa30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aa34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79aa34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aa38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79aa38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aa3c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79aa3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aa40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA44u;
        // 0x79aa48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA4Cu;
    // 0x79aa4c: 0x0  nop
    ctx->pc = 0x79aa4cu;
    // NOP
    ctx->pc = 0x79aa50u;
}
} // namespace gh_r022
