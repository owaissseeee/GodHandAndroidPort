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

// Function: func_001CA5C8
// Address: 0x1ca5c8 - 0x1cb030
void func_001CA5C8_0x1ca5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CA5C8_0x1ca5c8");
#endif

    switch (ctx->pc) {
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca6ecu: goto label_1ca6ec;
        case 0x1ca714u: goto label_1ca714;
        case 0x1ca74cu: goto label_1ca74c;
        case 0x1ca7a4u: goto label_1ca7a4;
        case 0x1ca7e0u: goto label_1ca7e0;
        case 0x1ca7f4u: goto label_1ca7f4;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca81cu: goto label_1ca81c;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca8ecu: goto label_1ca8ec;
        case 0x1ca934u: goto label_1ca934;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca9acu: goto label_1ca9ac;
        case 0x1caab4u: goto label_1caab4;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab84u: goto label_1cab84;
        case 0x1cac54u: goto label_1cac54;
        case 0x1cac90u: goto label_1cac90;
        case 0x1caca4u: goto label_1caca4;
        case 0x1cacc0u: goto label_1cacc0;
        case 0x1cacccu: goto label_1caccc;
        case 0x1cad30u: goto label_1cad30;
        case 0x1cadc8u: goto label_1cadc8;
        case 0x1cadf8u: goto label_1cadf8;
        case 0x1caeccu: goto label_1caecc;
        case 0x1caf08u: goto label_1caf08;
        case 0x1caf1cu: goto label_1caf1c;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf44u: goto label_1caf44;
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cb000u: goto label_1cb000;
        default: break;
    }

    ctx->pc = 0x1ca5c8u;

    // 0x1ca5c8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ca5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1ca5cc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1ca5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1ca5d0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1ca5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1ca5d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1ca5d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5dc: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1ca5dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1ca5e0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1ca5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1ca5e4: 0x260464f0  addiu       $a0, $s0, 0x64F0
    ctx->pc = 0x1ca5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1ca5e8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1ca5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1ca5ec: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1ca5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1ca5f0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1ca5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1ca5f4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ca5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ca5f8: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CA5F8u;
    SET_GPR_U32(ctx, 31, 0x1CA600u);
    ctx->pc = 0x1CA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5F8u;
    // 0x1ca5fc: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CA5F8u, 0x1CA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA600u;
label_1ca600:
    // 0x1ca600: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ca600u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1ca604: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ca604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca608: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1ca608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca60c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1ca60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca610: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca614: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ca614u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca618: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ca618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca61c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1ca61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca620: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1ca620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ca624: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1ca624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA628u;
    {
        const bool branch_taken_0x1ca628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA628u;
        // 0x1ca62c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca628) {
            ctx->pc = 0x1CA63Cu;
            goto label_1ca63c;
        }
    }
    ctx->pc = 0x1CA630u;
    // 0x1ca630: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ca634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA634u;
    {
        const bool branch_taken_0x1ca634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA634u;
        // 0x1ca638: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca634) {
            ctx->pc = 0x1CA640u;
            goto label_1ca640;
        }
    }
    ctx->pc = 0x1CA63Cu;
label_1ca63c:
    // 0x1ca63c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca640:
    // 0x1ca640: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ca640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca644: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1ca644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ca648: 0x1040023e  beqz        $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x1CA648u;
    {
        const bool branch_taken_0x1ca648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA648u;
        // 0x1ca64c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca648) {
            ctx->pc = 0x1CAF44u;
            goto label_1caf44;
        }
    }
    ctx->pc = 0x1CA650u;
    // 0x1ca650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca654: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x1ca658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca65c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ca65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca660: 0x800008  jr          $a0
    ctx->pc = 0x1CA660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA668u: goto label_1ca668;
            case 0x1CA720u: goto label_1ca720;
            case 0x1CA8D4u: goto label_1ca8d4;
            case 0x1CA908u: goto label_1ca908;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD04u: goto label_1cad04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CA668u;
label_1ca668:
    // 0x1ca668: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1ca66c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca67c: 0x2403036c  addiu       $v1, $zero, 0x36C
    ctx->pc = 0x1ca67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x1ca680: 0x962402fe  lhu         $a0, 0x2FE($s1)
    ctx->pc = 0x1ca680u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca684: 0xe6210674  swc1        $f1, 0x674($s1)
    ctx->pc = 0x1ca684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1ca688: 0xe6200678  swc1        $f0, 0x678($s1)
    ctx->pc = 0x1ca688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
    // 0x1ca68c: 0xa2220531  sb          $v0, 0x531($s1)
    ctx->pc = 0x1ca68cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca690: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1ca690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1ca694: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x1ca698: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CA698u;
    {
        const bool branch_taken_0x1ca698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA698u;
        // 0x1ca69c: 0xae200108  sw          $zero, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca698) {
            ctx->pc = 0x1CA6F4u;
            goto label_1ca6f4;
        }
    }
    ctx->pc = 0x1CA6A0u;
    // 0x1ca6a0: 0x2882036d  slti        $v0, $a0, 0x36D
    ctx->pc = 0x1ca6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)877) ? 1 : 0);
    // 0x1ca6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA6A4u;
    {
        const bool branch_taken_0x1ca6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6A4u;
        // 0x1ca6a8: 0x24020367  addiu       $v0, $zero, 0x367 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6a4) {
            ctx->pc = 0x1CA6BCu;
            goto label_1ca6bc;
        }
    }
    ctx->pc = 0x1CA6ACu;
    // 0x1ca6ac: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA6ACu;
    {
        const bool branch_taken_0x1ca6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6ACu;
        // 0x1ca6b0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6ac) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA6B4u;
    // 0x1ca6b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CA6B4u;
    {
        const bool branch_taken_0x1ca6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6B4u;
        // 0x1ca6b8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6b4) {
            ctx->pc = 0x1CA718u;
            goto label_1ca718;
        }
    }
    ctx->pc = 0x1CA6BCu;
label_1ca6bc:
    // 0x1ca6bc: 0x24020370  addiu       $v0, $zero, 0x370
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x1ca6c0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA6C0u;
    {
        const bool branch_taken_0x1ca6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca6c0) {
            ctx->pc = 0x1CA6F4u;
            goto label_1ca6f4;
        }
    }
    ctx->pc = 0x1CA6C8u;
    // 0x1ca6c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA6C8u;
    {
        const bool branch_taken_0x1ca6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6C8u;
        // 0x1ca6cc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6c8) {
            ctx->pc = 0x1CA718u;
            goto label_1ca718;
        }
    }
    ctx->pc = 0x1CA6D0u;
label_1ca6d0:
    // 0x1ca6d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca6d4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ca6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ca6d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca6e4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CA6E4u;
    SET_GPR_U32(ctx, 31, 0x1CA6ECu);
    ctx->pc = 0x1CA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6E4u;
    // 0x1ca6e8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CA6E4u, 0x1CA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6ECu;
label_1ca6ec:
    // 0x1ca6ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CA6ECu;
    {
        const bool branch_taken_0x1ca6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6ECu;
        // 0x1ca6f0: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6ec) {
            ctx->pc = 0x1CA718u;
            goto label_1ca718;
        }
    }
    ctx->pc = 0x1CA6F4u;
label_1ca6f4:
    // 0x1ca6f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca6f8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ca6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ca6fc: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1ca6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ca700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca708: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca70c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CA70Cu;
    SET_GPR_U32(ctx, 31, 0x1CA714u);
    ctx->pc = 0x1CA710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA70Cu;
    // 0x1ca710: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CA70Cu, 0x1CA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA714u;
label_1ca714:
    // 0x1ca714: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ca714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1ca718:
    // 0x1ca718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca71c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca71cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ca720:
    // 0x1ca720: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA720u;
    {
        const bool branch_taken_0x1ca720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA720u;
        // 0x1ca724: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca720) {
            ctx->pc = 0x1CA754u;
            goto label_1ca754;
        }
    }
    ctx->pc = 0x1CA728u;
    // 0x1ca728: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1ca728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1ca72c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1ca72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1ca730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca734: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1ca734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca738: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ca738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ca73c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ca73cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca740: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ca740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ca744: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CA744u;
    SET_GPR_U32(ctx, 31, 0x1CA74Cu);
    ctx->pc = 0x1CA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA744u;
    // 0x1ca748: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CA744u, 0x1CA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA74Cu;
label_1ca74c:
    // 0x1ca74c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1ca74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1ca750: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ca754:
    // 0x1ca754: 0x26240640  addiu       $a0, $s1, 0x640
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1ca758: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ca758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca75c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1ca75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca760: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1ca760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca764: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1ca764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ca768: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ca768u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ca76c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ca76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ca770: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1ca770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca774: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ca774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca778: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ca778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca77c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca780: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1ca780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca784: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ca784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca788: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ca788u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca78c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ca78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ca790: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ca790u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca794: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ca794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca79c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CA79Cu;
    SET_GPR_U32(ctx, 31, 0x1CA7A4u);
    ctx->pc = 0x1CA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA79Cu;
    // 0x1ca7a0: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CA79Cu, 0x1CA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7A4u;
label_1ca7a4:
    // 0x1ca7a4: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca7a8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1ca7ac: 0x2404036c  addiu       $a0, $zero, 0x36C
    ctx->pc = 0x1ca7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x1ca7b0: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ca7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca7b4: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1ca7b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca7b8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA7B8u;
    {
        const bool branch_taken_0x1ca7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7B8u;
        // 0x1ca7bc: 0x2862036d  slti        $v0, $v1, 0x36D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)877) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7b8) {
            ctx->pc = 0x1CA7C8u;
            goto label_1ca7c8;
        }
    }
    ctx->pc = 0x1CA7C0u;
    // 0x1ca7c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA7C0u;
    {
        const bool branch_taken_0x1ca7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca7c0) {
            ctx->pc = 0x1CA7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA7C0u;
            // 0x1ca7c4: 0x24020370  addiu       $v0, $zero, 0x370 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA7C8u;
            goto label_1ca7c8;
        }
    }
    ctx->pc = 0x1CA7C8u;
label_1ca7c8:
    // 0x1ca7c8: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1ca7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca7cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ca7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca7d0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ca7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ca7d4: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca7d8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CA7D8u;
    SET_GPR_U32(ctx, 31, 0x1CA7E0u);
    ctx->pc = 0x1CA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7D8u;
    // 0x1ca7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CA7D8u, 0x1CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7E0u;
label_1ca7e0:
    // 0x1ca7e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ca7e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca7e8: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1ca7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca7ec: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CA7ECu;
    SET_GPR_U32(ctx, 31, 0x1CA7F4u);
    ctx->pc = 0x1CA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7ECu;
    // 0x1ca7f0: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CA7ECu, 0x1CA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7F4u;
label_1ca7f4:
    // 0x1ca7f4: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca7f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca7fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca800: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1ca800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1ca804: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1ca804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca808: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CA808u;
    SET_GPR_U32(ctx, 31, 0x1CA810u);
    ctx->pc = 0x1CA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA808u;
    // 0x1ca80c: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CA808u, 0x1CA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA810u;
label_1ca810:
    // 0x1ca810: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca814: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CA814u;
    SET_GPR_U32(ctx, 31, 0x1CA81Cu);
    ctx->pc = 0x1CA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA814u;
    // 0x1ca818: 0x26a464f0  addiu       $a0, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CA814u, 0x1CA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA81Cu;
label_1ca81c:
    // 0x1ca81c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca820: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ca820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ca824: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA824u;
    {
        const bool branch_taken_0x1ca824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA824u;
        // 0x1ca828: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca824) {
            ctx->pc = 0x1CA844u;
            goto label_1ca844;
        }
    }
    ctx->pc = 0x1CA82Cu;
    // 0x1ca82c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca830: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1ca830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ca834: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ca834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca838: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1ca838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ca83c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca840: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ca840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ca844:
    // 0x1ca844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca848: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ca848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ca84c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ca850: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ca850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ca854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ca854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca858: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ca858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ca85c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca860: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ca860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ca864: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ca864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca868: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ca868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ca86c: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1ca86cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1ca870: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca870u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca874: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CA874u;
    SET_GPR_U32(ctx, 31, 0x1CA87Cu);
    ctx->pc = 0x1CA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA874u;
    // 0x1ca878: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CA874u, 0x1CA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA87Cu;
label_1ca87c:
    // 0x1ca87c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA87Cu;
    {
        const bool branch_taken_0x1ca87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca87c) {
            ctx->pc = 0x1CA880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA87Cu;
            // 0x1ca880: 0xc6200674  lwc1        $f0, 0x674($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA8B0u;
            goto label_1ca8b0;
        }
    }
    ctx->pc = 0x1CA884u;
    // 0x1ca884: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca888: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA888u;
    {
        const bool branch_taken_0x1ca888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA888u;
        // 0x1ca88c: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca888) {
            ctx->pc = 0x1CA8A4u;
            goto label_1ca8a4;
        }
    }
    ctx->pc = 0x1CA890u;
    // 0x1ca890: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ca894: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1ca894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca898: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ca898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ca89c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1ca89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca8a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ca8a4:
    // 0x1ca8a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca8a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca8ac: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x1ca8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca8b0:
    // 0x1ca8b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ca8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca8b4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1ca8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1ca8b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ca8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca8bc: 0x0  nop
    ctx->pc = 0x1ca8bcu;
    // NOP
    // 0x1ca8c0: 0x450001a0  bc1f        . + 4 + (0x1A0 << 2)
    ctx->pc = 0x1CA8C0u;
    {
        const bool branch_taken_0x1ca8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8C0u;
        // 0x1ca8c4: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8c0) {
            ctx->pc = 0x1CAF44u;
            goto label_1caf44;
        }
    }
    ctx->pc = 0x1CA8C8u;
    // 0x1ca8c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca8cc: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x1CA8CCu;
    {
        const bool branch_taken_0x1ca8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8CCu;
        // 0x1ca8d0: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8cc) {
            ctx->pc = 0x1CAF44u;
            goto label_1caf44;
        }
    }
    ctx->pc = 0x1CA8D4u;
label_1ca8d4:
    // 0x1ca8d4: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ca8d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA8D8u;
    {
        const bool branch_taken_0x1ca8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8D8u;
        // 0x1ca8dc: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8d8) {
            ctx->pc = 0x1CA8F0u;
            goto label_1ca8f0;
        }
    }
    ctx->pc = 0x1CA8E0u;
    // 0x1ca8e0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ca8e4: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x1CA8E4u;
    SET_GPR_U32(ctx, 31, 0x1CA8ECu);
    ctx->pc = 0x1CA8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8E4u;
    // 0x1ca8e8: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x1CA8E4u, 0x1CA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8ECu;
label_1ca8ec:
    // 0x1ca8ec: 0xe6200680  swc1        $f0, 0x680($s1)
    ctx->pc = 0x1ca8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1664), bits); }
label_1ca8f0:
    // 0x1ca8f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ca8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca8f4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1ca8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1ca8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca900: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1ca900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1ca904: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ca908:
    // 0x1ca908: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA908u;
    {
        const bool branch_taken_0x1ca908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca908) {
            ctx->pc = 0x1CA90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA908u;
            // 0x1ca90c: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA93Cu;
            goto label_1ca93c;
        }
    }
    ctx->pc = 0x1CA910u;
    // 0x1ca910: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1ca910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1ca914: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1ca914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1ca918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca91c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1ca91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca920: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ca920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ca924: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ca924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca928: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ca928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ca92c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CA92Cu;
    SET_GPR_U32(ctx, 31, 0x1CA934u);
    ctx->pc = 0x1CA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA92Cu;
    // 0x1ca930: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CA92Cu, 0x1CA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA934u;
label_1ca934:
    // 0x1ca934: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1ca934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1ca938: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1ca938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ca93c:
    // 0x1ca93c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1CA93Cu;
    {
        const bool branch_taken_0x1ca93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA93Cu;
        // 0x1ca940: 0x24020367  addiu       $v0, $zero, 0x367 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca93c) {
            ctx->pc = 0x1CAC48u;
            goto label_1cac48;
        }
    }
    ctx->pc = 0x1CA944u;
    // 0x1ca944: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1ca944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca948: 0x546200c0  bnel        $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1CA948u;
    {
        const bool branch_taken_0x1ca948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca948) {
            ctx->pc = 0x1CA94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA948u;
            // 0x1ca94c: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC4Cu;
            goto label_1cac4c;
        }
    }
    ctx->pc = 0x1CA950u;
    // 0x1ca950: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CA950u;
    SET_GPR_U32(ctx, 31, 0x1CA958u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CA950u, 0x1CA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA958u;
label_1ca958:
    // 0x1ca958: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1ca958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ca95c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x1ca95cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ca960: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ca964: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1ca964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ca968: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1ca968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca96c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ca96cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca970: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ca970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca974: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ca974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ca978: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ca978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca97c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca980: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ca980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca984: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ca984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca988: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1ca988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca98c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1ca98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca990: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ca990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ca994: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1ca994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ca998: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ca998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ca99c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1ca99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca9a0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ca9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CA9A4u;
    SET_GPR_U32(ctx, 31, 0x1CA9ACu);
    ctx->pc = 0x1CA9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9A4u;
    // 0x1ca9a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CA9A4u, 0x1CA9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9ACu;
label_1ca9ac:
    // 0x1ca9ac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1ca9acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1ca9b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca9b4: 0x0  nop
    ctx->pc = 0x1ca9b4u;
    // NOP
    // 0x1ca9b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ca9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca9bc: 0x0  nop
    ctx->pc = 0x1ca9bcu;
    // NOP
    // 0x1ca9c0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA9C0u;
    {
        const bool branch_taken_0x1ca9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9C0u;
        // 0x1ca9c4: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9c0) {
            ctx->pc = 0x1CAA04u;
            goto label_1caa04;
        }
    }
    ctx->pc = 0x1CA9C8u;
    // 0x1ca9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca9d0: 0x0  nop
    ctx->pc = 0x1ca9d0u;
    // NOP
    // 0x1ca9d4: 0x0  nop
    ctx->pc = 0x1ca9d4u;
    // NOP
    // 0x1ca9d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1ca9d8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1ca9dc: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1ca9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca9e0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1ca9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca9e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9e8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1ca9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ca9ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1ca9ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ca9f0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1ca9f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ca9f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1ca9f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1ca9f8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ca9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ca9fc: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1ca9fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1caa00: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1caa00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1caa04:
    // 0x1caa04: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1caa04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1caa08: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1caa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1caa0c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1caa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caa10: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1caa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caa14: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1caa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa18: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1caa18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1caa1c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1caa1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1caa20: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1caa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1caa24: 0xc6200680  lwc1        $f0, 0x680($s1)
    ctx->pc = 0x1caa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa28: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1caa28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1caa2c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1caa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1caa30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1caa30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1caa34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1caa34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1caa38: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1caa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1caa3c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1caa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1caa40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1caa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1caa44: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1caa48: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1caa48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1caa4c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1caa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1caa50: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1caa50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1caa54: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1caa54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1caa58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1caa58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1caa5c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1caa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1caa60: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1caa60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1caa64: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1caa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1caa68: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1caa68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1caa6c: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAA6Cu;
    {
        const bool branch_taken_0x1caa6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1CAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA6Cu;
        // 0x1caa70: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa6c) {
            ctx->pc = 0x1CAA8Cu;
            goto label_1caa8c;
        }
    }
    ctx->pc = 0x1CAA74u;
    // 0x1caa74: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1caa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa78: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1caa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caa7c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1caa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1caa80: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1caa80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1caa84: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1caa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa88: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1caa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1caa8c:
    // 0x1caa8c: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1caa90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1caa94: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1caa98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caa9c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1caa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1caaa0: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1caaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1caaa4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1caaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caaa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1caaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1caaac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1CAAACu;
    SET_GPR_U32(ctx, 31, 0x1CAAB4u);
    ctx->pc = 0x1CAAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAACu;
    // 0x1caab0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1CAAACu, 0x1CAAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAB4u;
label_1caab4:
    // 0x1caab4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1caab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1caab8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1caab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1caabc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAABCu;
    {
        const bool branch_taken_0x1caabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAABCu;
        // 0x1caac0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caabc) {
            ctx->pc = 0x1CAADCu;
            goto label_1caadc;
        }
    }
    ctx->pc = 0x1CAAC4u;
    // 0x1caac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1caac8: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x1caacc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1caad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1caad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1caad4: 0x800008  jr          $a0
    ctx->pc = 0x1CAAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAADCu: goto label_1caadc;
            case 0x1CAAF0u: goto label_1caaf0;
            case 0x1CAB04u: goto label_1cab04;
            case 0x1CAB18u: goto label_1cab18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAAD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CAADCu;
label_1caadc:
    // 0x1caadc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1caae0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1caae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1caae4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1caae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1caae8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CAAE8u;
    {
        const bool branch_taken_0x1caae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAE8u;
        // 0x1caaec: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caae8) {
            ctx->pc = 0x1CAB24u;
            goto label_1cab24;
        }
    }
    ctx->pc = 0x1CAAF0u;
label_1caaf0:
    // 0x1caaf0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1caaf4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1caaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1caaf8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1caaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1caafc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAAFCu;
    {
        const bool branch_taken_0x1caafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAFCu;
        // 0x1cab00: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caafc) {
            ctx->pc = 0x1CAB24u;
            goto label_1cab24;
        }
    }
    ctx->pc = 0x1CAB04u;
label_1cab04:
    // 0x1cab04: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1cab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1cab08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cab08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cab0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cab0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cab10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAB10u;
    {
        const bool branch_taken_0x1cab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB10u;
        // 0x1cab14: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab10) {
            ctx->pc = 0x1CAB24u;
            goto label_1cab24;
        }
    }
    ctx->pc = 0x1CAB18u;
label_1cab18:
    // 0x1cab18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cab1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cab20: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cab24:
    // 0x1cab24: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cab28: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cab28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cab2c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cab2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cab30: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cab30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cab34: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cab38: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cab38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cab3c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cab40: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1cab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab44: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x1cab44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1cab48: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1cab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cab50: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1cab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab54: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1cab54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cab58: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1cab58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cab5c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1CAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB64u);
    ctx->pc = 0x1CAB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB5Cu;
    // 0x1cab60: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1CAB5Cu, 0x1CAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB64u;
label_1cab64:
    // 0x1cab64: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1cab64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1cab68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cab68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab6c: 0x0  nop
    ctx->pc = 0x1cab6cu;
    // NOP
    // 0x1cab70: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x1CAB70u;
    {
        const bool branch_taken_0x1cab70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cab70) {
            ctx->pc = 0x1CAB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAB70u;
            // 0x1cab74: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC2Cu;
            goto label_1cac2c;
        }
    }
    ctx->pc = 0x1CAB78u;
    // 0x1cab78: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cab7c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB84u);
    ctx->pc = 0x1CAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB7Cu;
    // 0x1cab80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CAB7Cu, 0x1CAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB84u;
label_1cab84:
    // 0x1cab84: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1cab84u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1cab88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cab88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cab8c: 0x0  nop
    ctx->pc = 0x1cab8cu;
    // NOP
    // 0x1cab90: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab94: 0x0  nop
    ctx->pc = 0x1cab94u;
    // NOP
    // 0x1cab98: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAB98u;
    {
        const bool branch_taken_0x1cab98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB98u;
        // 0x1cab9c: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab98) {
            ctx->pc = 0x1CABDCu;
            goto label_1cabdc;
        }
    }
    ctx->pc = 0x1CABA0u;
    // 0x1caba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caba8: 0x0  nop
    ctx->pc = 0x1caba8u;
    // NOP
    // 0x1cabac: 0x0  nop
    ctx->pc = 0x1cabacu;
    // NOP
    // 0x1cabb0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cabb0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1cabb4: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1cabb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cabb8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1cabb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cabbc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cabbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabc0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cabc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1cabc4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cabc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cabc8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cabc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cabcc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cabccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cabd0: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1cabd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cabd4: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1cabd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cabd8: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1cabd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1cabdc:
    // 0x1cabdc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cabdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cabe0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cabe4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1cabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabe8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1cabe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cabec: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1cabecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cabf0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1cabf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cabf4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1cabf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cabf8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1cabf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cabfc: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cabfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cac00: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cac00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cac04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cac04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cac08: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cac08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cac0c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cac10: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cac14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cac14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cac18: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1cac18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cac1c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cac1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cac20: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cac20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cac24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAC24u;
    {
        const bool branch_taken_0x1cac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC24u;
        // 0x1cac28: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac24) {
            ctx->pc = 0x1CAC4Cu;
            goto label_1cac4c;
        }
    }
    ctx->pc = 0x1CAC2Cu;
label_1cac2c:
    // 0x1cac2c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAC2Cu;
    {
        const bool branch_taken_0x1cac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC2Cu;
        // 0x1cac30: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac2c) {
            ctx->pc = 0x1CAC48u;
            goto label_1cac48;
        }
    }
    ctx->pc = 0x1CAC34u;
    // 0x1cac34: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cac38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1cac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cac3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cac3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cac40: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cac44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cac48:
    // 0x1cac48: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1cac4c:
    // 0x1cac4c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC54u);
    ctx->pc = 0x1CAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC4Cu;
    // 0x1cac50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CAC4Cu, 0x1CAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC54u;
label_1cac54:
    // 0x1cac54: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cac58: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cac5c: 0x2404036c  addiu       $a0, $zero, 0x36C
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x1cac60: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x1cac60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac64: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cac64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cac68: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC68u;
    {
        const bool branch_taken_0x1cac68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC68u;
        // 0x1cac6c: 0x2862036d  slti        $v0, $v1, 0x36D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)877) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac68) {
            ctx->pc = 0x1CAC78u;
            goto label_1cac78;
        }
    }
    ctx->pc = 0x1CAC70u;
    // 0x1cac70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAC70u;
    {
        const bool branch_taken_0x1cac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac70) {
            ctx->pc = 0x1CAC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC70u;
            // 0x1cac74: 0x24020370  addiu       $v0, $zero, 0x370 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC78u;
            goto label_1cac78;
        }
    }
    ctx->pc = 0x1CAC78u;
label_1cac78:
    // 0x1cac78: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cac7c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cac80: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1cac80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1cac84: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cac88: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CAC88u;
    SET_GPR_U32(ctx, 31, 0x1CAC90u);
    ctx->pc = 0x1CAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC88u;
    // 0x1cac8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CAC88u, 0x1CAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC90u;
label_1cac90:
    // 0x1cac90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cac94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cac94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cac98: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cac9c: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CACA4u);
    ctx->pc = 0x1CACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC9Cu;
    // 0x1caca0: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CAC9Cu, 0x1CACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACA4u;
label_1caca4:
    // 0x1caca4: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caca8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1cacac: 0x26250640  addiu       $a1, $s1, 0x640
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cacb0: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1cacb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cacb4: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1cacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1cacb8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CACB8u;
    SET_GPR_U32(ctx, 31, 0x1CACC0u);
    ctx->pc = 0x1CACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACB8u;
    // 0x1cacbc: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CACB8u, 0x1CACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACC0u;
label_1cacc0:
    // 0x1cacc0: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cacc4: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CACC4u;
    SET_GPR_U32(ctx, 31, 0x1CACCCu);
    ctx->pc = 0x1CACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACC4u;
    // 0x1cacc8: 0x26a464f0  addiu       $a0, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CACC4u, 0x1CACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACCCu;
label_1caccc:
    // 0x1caccc: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x1cacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cacd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cacd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cacd4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1cacd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1cacd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cacd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cacdc: 0x0  nop
    ctx->pc = 0x1cacdcu;
    // NOP
    // 0x1cace0: 0x45000098  bc1f        . + 4 + (0x98 << 2)
    ctx->pc = 0x1CACE0u;
    {
        const bool branch_taken_0x1cace0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACE0u;
        // 0x1cace4: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cace0) {
            ctx->pc = 0x1CAF44u;
            goto label_1caf44;
        }
    }
    ctx->pc = 0x1CACE8u;
    // 0x1cace8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cace8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cacec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cacf0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1CACF0u;
    {
        const bool branch_taken_0x1cacf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACF0u;
        // 0x1cacf4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf0) {
            ctx->pc = 0x1CAF44u;
            goto label_1caf44;
        }
    }
    ctx->pc = 0x1CACF8u;
label_1cacf8:
    // 0x1cacf8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cacf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cacfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cad00: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cad00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cad04:
    // 0x1cad04: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAD04u;
    {
        const bool branch_taken_0x1cad04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cad04) {
            ctx->pc = 0x1CAD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAD04u;
            // 0x1cad08: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD38u;
            goto label_1cad38;
        }
    }
    ctx->pc = 0x1CAD0Cu;
    // 0x1cad0c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1cad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1cad10: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1cad10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1cad14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cad14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad18: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1cad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cad1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1cad1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1cad20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cad20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cad24: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cad24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cad28: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CAD28u;
    SET_GPR_U32(ctx, 31, 0x1CAD30u);
    ctx->pc = 0x1CAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD28u;
    // 0x1cad2c: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CAD28u, 0x1CAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD30u;
label_1cad30:
    // 0x1cad30: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1cad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1cad34: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1cad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1cad38:
    // 0x1cad38: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CAD38u;
    {
        const bool branch_taken_0x1cad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cad38) {
            ctx->pc = 0x1CAD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAD38u;
            // 0x1cad3c: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEC4u;
            goto label_1caec4;
        }
    }
    ctx->pc = 0x1CAD40u;
    // 0x1cad40: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1cad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cad44: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cad48: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cad4c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1cad4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cad50: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAD50u;
    {
        const bool branch_taken_0x1cad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD50u;
        // 0x1cad54: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad50) {
            ctx->pc = 0x1CAD74u;
            goto label_1cad74;
        }
    }
    ctx->pc = 0x1CAD58u;
    // 0x1cad58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cad5c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1cad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1cad60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cad64: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1cad64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1cad68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cad6c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1cad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1cad70: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1cad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cad74:
    // 0x1cad74: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1cad78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1cad7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cad7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cad80: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cad84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cad84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cad88: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1cad88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1cad8c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x1cad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cad90: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cad90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cad94: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cad94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cad98: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cad98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cad9c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1cad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cada0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cada0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cada4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1cada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cada8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1cada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cadac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cadb0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1cadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cadb4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1cadb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cadb8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1cadb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cadbc: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1cadbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cadc0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1CADC0u;
    SET_GPR_U32(ctx, 31, 0x1CADC8u);
    ctx->pc = 0x1CADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADC0u;
    // 0x1cadc4: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1CADC0u, 0x1CADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC8u;
label_1cadc8:
    // 0x1cadc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cadc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cadcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cadccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cadd0: 0x0  nop
    ctx->pc = 0x1cadd0u;
    // NOP
    // 0x1cadd4: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1cadd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1cadd8: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x1cadd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1caddc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1caddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cade0: 0x0  nop
    ctx->pc = 0x1cade0u;
    // NOP
    // 0x1cade4: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x1CADE4u;
    {
        const bool branch_taken_0x1cade4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cade4) {
            ctx->pc = 0x1CADE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CADE4u;
            // 0x1cade8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEA4u;
            goto label_1caea4;
        }
    }
    ctx->pc = 0x1CADECu;
    // 0x1cadec: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x1cadecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cadf0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CADF0u;
    SET_GPR_U32(ctx, 31, 0x1CADF8u);
    ctx->pc = 0x1CADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADF0u;
    // 0x1cadf4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CADF0u, 0x1CADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADF8u;
label_1cadf8:
    // 0x1cadf8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1cadf8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1cadfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cadfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cae00: 0x0  nop
    ctx->pc = 0x1cae00u;
    // NOP
    // 0x1cae04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cae04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cae08: 0x0  nop
    ctx->pc = 0x1cae08u;
    // NOP
    // 0x1cae0c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAE0Cu;
    {
        const bool branch_taken_0x1cae0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE0Cu;
        // 0x1cae10: 0xc7a40090  lwc1        $f4, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae0c) {
            ctx->pc = 0x1CAE50u;
            goto label_1cae50;
        }
    }
    ctx->pc = 0x1CAE14u;
    // 0x1cae14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cae18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cae18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cae1c: 0x0  nop
    ctx->pc = 0x1cae1cu;
    // NOP
    // 0x1cae20: 0x0  nop
    ctx->pc = 0x1cae20u;
    // NOP
    // 0x1cae24: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cae24u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1cae28: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x1cae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cae2c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1cae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae30: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cae34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1cae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1cae38: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cae38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cae3c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cae3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cae40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cae40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cae44: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1cae44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1cae48: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x1cae48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1cae4c: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x1cae4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1cae50:
    // 0x1cae50: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cae50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cae54: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1cae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cae58: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1cae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cae5c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1cae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cae60: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1cae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae64: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1cae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cae68: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1cae68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1cae6c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1cae6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cae70: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cae70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cae74: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cae74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cae78: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cae78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cae7c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cae7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cae80: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cae84: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cae88: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1cae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cae8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cae8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cae90: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cae90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cae94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cae94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cae98: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cae98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cae9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAE9Cu;
    {
        const bool branch_taken_0x1cae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9Cu;
        // 0x1caea0: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9c) {
            ctx->pc = 0x1CAEC4u;
            goto label_1caec4;
        }
    }
    ctx->pc = 0x1CAEA4u;
label_1caea4:
    // 0x1caea4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAEA4u;
    {
        const bool branch_taken_0x1caea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA4u;
        // 0x1caea8: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caea4) {
            ctx->pc = 0x1CAEC0u;
            goto label_1caec0;
        }
    }
    ctx->pc = 0x1CAEACu;
    // 0x1caeac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1caeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1caeb0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1caeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caeb4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1caeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1caeb8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1caeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caebc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1caebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1caec0:
    // 0x1caec0: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1caec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1caec4:
    // 0x1caec4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CAEC4u;
    SET_GPR_U32(ctx, 31, 0x1CAECCu);
    ctx->pc = 0x1CAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC4u;
    // 0x1caec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CAEC4u, 0x1CAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAECCu;
label_1caecc:
    // 0x1caecc: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1caeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caed0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1caed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1caed4: 0x2404036c  addiu       $a0, $zero, 0x36C
    ctx->pc = 0x1caed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x1caed8: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x1caed8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caedc: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1caedcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1caee0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAEE0u;
    {
        const bool branch_taken_0x1caee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEE0u;
        // 0x1caee4: 0x2862036d  slti        $v0, $v1, 0x36D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)877) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caee0) {
            ctx->pc = 0x1CAEF0u;
            goto label_1caef0;
        }
    }
    ctx->pc = 0x1CAEE8u;
    // 0x1caee8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAEE8u;
    {
        const bool branch_taken_0x1caee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caee8) {
            ctx->pc = 0x1CAEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEE8u;
            // 0x1caeec: 0x24020370  addiu       $v0, $zero, 0x370 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEF0u;
            goto label_1caef0;
        }
    }
    ctx->pc = 0x1CAEF0u;
label_1caef0:
    // 0x1caef0: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caef4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1caef8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1caef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1caefc: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1caefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caf00: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CAF00u;
    SET_GPR_U32(ctx, 31, 0x1CAF08u);
    ctx->pc = 0x1CAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF00u;
    // 0x1caf04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CAF00u, 0x1CAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF08u;
label_1caf08:
    // 0x1caf08: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1caf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caf0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1caf10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1caf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caf14: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CAF14u;
    SET_GPR_U32(ctx, 31, 0x1CAF1Cu);
    ctx->pc = 0x1CAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF14u;
    // 0x1caf18: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CAF14u, 0x1CAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF1Cu;
label_1caf1c:
    // 0x1caf1c: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1caf20: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1caf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1caf24: 0x26250640  addiu       $a1, $s1, 0x640
    ctx->pc = 0x1caf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1caf28: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1caf28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1caf2c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1caf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1caf30: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CAF30u;
    SET_GPR_U32(ctx, 31, 0x1CAF38u);
    ctx->pc = 0x1CAF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF30u;
    // 0x1caf34: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CAF30u, 0x1CAF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF38u;
label_1caf38:
    // 0x1caf38: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1caf3c: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF44u);
    ctx->pc = 0x1CAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF3Cu;
    // 0x1caf40: 0x26a464f0  addiu       $a0, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CAF3Cu, 0x1CAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF44u;
label_1caf44:
    // 0x1caf44: 0xc6200678  lwc1        $f0, 0x678($s1)
    ctx->pc = 0x1caf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caf48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1caf48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caf4c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1caf4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1caf50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1caf50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caf54: 0x0  nop
    ctx->pc = 0x1caf54u;
    // NOP
    // 0x1caf58: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAF58u;
    {
        const bool branch_taken_0x1caf58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF58u;
        // 0x1caf5c: 0xe6200678  swc1        $f0, 0x678($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf58) {
            ctx->pc = 0x1CB000u;
            goto label_1cb000;
        }
    }
    ctx->pc = 0x1CAF60u;
    // 0x1caf60: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1caf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1caf64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1caf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caf68: 0x2402036c  addiu       $v0, $zero, 0x36C
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x1caf6c: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1caf6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1caf70: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CAF70u;
    {
        const bool branch_taken_0x1caf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF70u;
        // 0x1caf74: 0xe6200678  swc1        $f0, 0x678($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf70) {
            ctx->pc = 0x1CAFD8u;
            goto label_1cafd8;
        }
    }
    ctx->pc = 0x1CAF78u;
    // 0x1caf78: 0x2862036d  slti        $v0, $v1, 0x36D
    ctx->pc = 0x1caf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)877) ? 1 : 0);
    // 0x1caf7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAF7Cu;
    {
        const bool branch_taken_0x1caf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF7Cu;
        // 0x1caf80: 0x24020367  addiu       $v0, $zero, 0x367 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf7c) {
            ctx->pc = 0x1CAF94u;
            goto label_1caf94;
        }
    }
    ctx->pc = 0x1CAF84u;
    // 0x1caf84: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAF84u;
    {
        const bool branch_taken_0x1caf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF84u;
        // 0x1caf88: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf84) {
            ctx->pc = 0x1CAFA8u;
            goto label_1cafa8;
        }
    }
    ctx->pc = 0x1CAF8Cu;
    // 0x1caf8c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CAF8Cu;
    {
        const bool branch_taken_0x1caf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF8Cu;
        // 0x1caf90: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf8c) {
            ctx->pc = 0x1CB008u;
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CAF94u;
label_1caf94:
    // 0x1caf94: 0x24020370  addiu       $v0, $zero, 0x370
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x1caf98: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAF98u;
    {
        const bool branch_taken_0x1caf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF98u;
        // 0x1caf9c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf98) {
            ctx->pc = 0x1CAFD8u;
            goto label_1cafd8;
        }
    }
    ctx->pc = 0x1CAFA0u;
    // 0x1cafa0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CAFA0u;
    {
        const bool branch_taken_0x1cafa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFA0u;
        // 0x1cafa4: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafa0) {
            ctx->pc = 0x1CB008u;
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CAFA8u;
label_1cafa8:
    // 0x1cafa8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cafa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cafacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cafb0: 0x8ce80670  lw          $t0, 0x670($a3)
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1648)));
    // 0x1cafb4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cafb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cafbc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cafc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cafc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafc8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CAFC8u;
    SET_GPR_U32(ctx, 31, 0x1CAFD0u);
    ctx->pc = 0x1CAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFC8u;
    // 0x1cafcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CAFC8u, 0x1CAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFD0u;
label_1cafd0:
    // 0x1cafd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CAFD0u;
    {
        const bool branch_taken_0x1cafd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFD0u;
        // 0x1cafd4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafd0) {
            ctx->pc = 0x1CB004u;
            goto label_1cb004;
        }
    }
    ctx->pc = 0x1CAFD8u;
label_1cafd8:
    // 0x1cafd8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cafdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cafdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafe0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cafe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cafe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafe8: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x1cafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1cafec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cafecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caff0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caff4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1caff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caff8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CAFF8u;
    SET_GPR_U32(ctx, 31, 0x1CB000u);
    ctx->pc = 0x1CAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFF8u;
    // 0x1caffc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CAFF8u, 0x1CB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB000u;
label_1cb000:
    // 0x1cb000: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1cb000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cb004:
    // 0x1cb004: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1cb004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cb008:
    // 0x1cb008: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1cb008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cb00c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1cb00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cb010: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1cb010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cb014: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1cb014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cb018: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1cb018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cb01c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1cb01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cb020: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1cb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb024: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB024u;
        // 0x1cb028: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB02Cu;
    // 0x1cb02c: 0x0  nop
    ctx->pc = 0x1cb02cu;
    // NOP
    ctx->pc = 0x1cb030u;
}
