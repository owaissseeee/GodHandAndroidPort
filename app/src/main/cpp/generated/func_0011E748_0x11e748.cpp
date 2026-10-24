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

// Function: func_0011E748
// Address: 0x11e748 - 0x11ecb0
void func_0011E748_0x11e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011E748_0x11e748");
#endif

    switch (ctx->pc) {
        case 0x11e7b8u: goto label_11e7b8;
        case 0x11e7c4u: goto label_11e7c4;
        case 0x11e808u: goto label_11e808;
        case 0x11e810u: goto label_11e810;
        case 0x11e8e8u: goto label_11e8e8;
        case 0x11e8f8u: goto label_11e8f8;
        case 0x11e978u: goto label_11e978;
        case 0x11e9e0u: goto label_11e9e0;
        case 0x11e9f8u: goto label_11e9f8;
        case 0x11ea20u: goto label_11ea20;
        case 0x11ea28u: goto label_11ea28;
        case 0x11ea3cu: goto label_11ea3c;
        case 0x11ea60u: goto label_11ea60;
        case 0x11ea6cu: goto label_11ea6c;
        case 0x11eaa0u: goto label_11eaa0;
        case 0x11eac8u: goto label_11eac8;
        case 0x11ead4u: goto label_11ead4;
        case 0x11eaf0u: goto label_11eaf0;
        case 0x11eb10u: goto label_11eb10;
        case 0x11eb24u: goto label_11eb24;
        case 0x11eb2cu: goto label_11eb2c;
        case 0x11eb4cu: goto label_11eb4c;
        case 0x11eb8cu: goto label_11eb8c;
        case 0x11eb98u: goto label_11eb98;
        case 0x11ebd0u: goto label_11ebd0;
        case 0x11ebf8u: goto label_11ebf8;
        case 0x11ec04u: goto label_11ec04;
        case 0x11ec40u: goto label_11ec40;
        case 0x11ec48u: goto label_11ec48;
        case 0x11ec54u: goto label_11ec54;
        case 0x11ec88u: goto label_11ec88;
        default: break;
    }

    ctx->pc = 0x11e748u;

    // 0x11e748: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x11e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x11e74c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x11e74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x11e750: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x11e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x11e754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e758: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x11e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x11e75c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x11e75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x11e760: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11e760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11e764: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x11e764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x11e768: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x11e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x11e76c: 0x8e330694  lw          $s3, 0x694($s1)
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11e770: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x11e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11e774: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x11e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11e778: 0x8e2615f4  lw          $a2, 0x15F4($s1)
    ctx->pc = 0x11e778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11e77c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11e780: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11e784: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11e784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11e788: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11e78c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e790: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x11e790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x11e794: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e798: 0xae2615f4  sw          $a2, 0x15F4($s1)
    ctx->pc = 0x11e798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 6));
    // 0x11e79c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11e7a0: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x11e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x11e7a4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11e7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7b0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11E7B0u;
    SET_GPR_U32(ctx, 31, 0x11E7B8u);
    ctx->pc = 0x11E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7B0u;
    // 0x11e7b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11E7B0u, 0x11E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7B8u;
label_11e7b8:
    // 0x11e7b8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11e7bc: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11E7BCu;
    SET_GPR_U32(ctx, 31, 0x11E7C4u);
    ctx->pc = 0x11E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7BCu;
    // 0x11e7c0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11E7BCu, 0x11E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7C4u;
label_11e7c4:
    // 0x11e7c4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11e7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11e7c8: 0x10700093  beq         $v1, $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x11E7C8u;
    {
        const bool branch_taken_0x11e7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7C8u;
        // 0x11e7cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7c8) {
            ctx->pc = 0x11EA18u;
            goto label_11ea18;
        }
    }
    ctx->pc = 0x11E7D0u;
    // 0x11e7d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E7D0u;
    {
        const bool branch_taken_0x11e7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e7d0) {
            ctx->pc = 0x11E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E7D0u;
            // 0x11e7d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E7E8u;
            goto label_11e7e8;
        }
    }
    ctx->pc = 0x11E7D8u;
    // 0x11e7d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E7D8u;
    {
        const bool branch_taken_0x11e7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7D8u;
        // 0x11e7dc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d8) {
            ctx->pc = 0x11E800u;
            goto label_11e800;
        }
    }
    ctx->pc = 0x11E7E0u;
    // 0x11e7e0: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x11E7E0u;
    {
        const bool branch_taken_0x11e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7E0u;
        // 0x11e7e4: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7e0) {
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11E7E8u;
label_11e7e8:
    // 0x11e7e8: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x11E7E8u;
    {
        const bool branch_taken_0x11e7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7E8u;
        // 0x11e7ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7e8) {
            ctx->pc = 0x11EADCu;
            goto label_11eadc;
        }
    }
    ctx->pc = 0x11E7F0u;
    // 0x11e7f0: 0x106200ca  beq         $v1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x11E7F0u;
    {
        const bool branch_taken_0x11e7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7F0u;
        // 0x11e7f4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7f0) {
            ctx->pc = 0x11EB1Cu;
            goto label_11eb1c;
        }
    }
    ctx->pc = 0x11E7F8u;
    // 0x11e7f8: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11E7F8u;
    {
        const bool branch_taken_0x11e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7F8u;
        // 0x11e7fc: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7f8) {
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11E800u;
label_11e800:
    // 0x11e800: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11E800u;
    SET_GPR_U32(ctx, 31, 0x11E808u);
    ctx->pc = 0x11E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E800u;
    // 0x11e804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11E800u, 0x11E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E808u;
label_11e808:
    // 0x11e808: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11E808u;
    SET_GPR_U32(ctx, 31, 0x11E810u);
    ctx->pc = 0x11E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E808u;
    // 0x11e80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11E808u, 0x11E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E810u;
label_11e810:
    // 0x11e810: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11e814: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x11e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x11e818: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x11e818u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x11e81c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E81Cu;
    {
        const bool branch_taken_0x11e81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E81Cu;
        // 0x11e820: 0x28820304  slti        $v0, $a0, 0x304 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)772) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e81c) {
            ctx->pc = 0x11E874u;
            goto label_11e874;
        }
    }
    ctx->pc = 0x11E824u;
    // 0x11e824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E824u;
    {
        const bool branch_taken_0x11e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E824u;
        // 0x11e828: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e824) {
            ctx->pc = 0x11E83Cu;
            goto label_11e83c;
        }
    }
    ctx->pc = 0x11E82Cu;
    // 0x11e82c: 0x50820022  beql        $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11E82Cu;
    {
        const bool branch_taken_0x11e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e82c) {
            ctx->pc = 0x11E830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E82Cu;
            // 0x11e830: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8B8u;
            goto label_11e8b8;
        }
    }
    ctx->pc = 0x11E834u;
    // 0x11e834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E834u;
    {
        const bool branch_taken_0x11e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E834u;
        // 0x11e838: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e834) {
            ctx->pc = 0x11E84Cu;
            goto label_11e84c;
        }
    }
    ctx->pc = 0x11E83Cu;
label_11e83c:
    // 0x11e83c: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x11e840: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E840u;
    {
        const bool branch_taken_0x11e840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E840u;
        // 0x11e844: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e840) {
            ctx->pc = 0x11E8A0u;
            goto label_11e8a0;
        }
    }
    ctx->pc = 0x11E848u;
    // 0x11e848: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_11e84c:
    // 0x11e84c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e850: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11E850u;
    {
        const bool branch_taken_0x11e850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e850) {
            ctx->pc = 0x11E8C4u;
            goto label_11e8c4;
        }
    }
    ctx->pc = 0x11E858u;
    // 0x11e858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e85c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11e85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11e860: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e864: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11e868: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e86c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11E86Cu;
    {
        const bool branch_taken_0x11e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E86Cu;
        // 0x11e870: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e86c) {
            ctx->pc = 0x11E8C4u;
            goto label_11e8c4;
        }
    }
    ctx->pc = 0x11E874u;
label_11e874:
    // 0x11e874: 0x3c0142ae  lui         $at, 0x42AE
    ctx->pc = 0x11e874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17070 << 16));
    // 0x11e878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e87c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e880: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11e884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e888: 0x3c01c21c  lui         $at, 0xC21C
    ctx->pc = 0x11e888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49692 << 16));
    // 0x11e88c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e890: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11e890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11e894: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11e898: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E898u;
    {
        const bool branch_taken_0x11e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E898u;
        // 0x11e89c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e898) {
            ctx->pc = 0x11E8C4u;
            goto label_11e8c4;
        }
    }
    ctx->pc = 0x11E8A0u;
label_11e8a0:
    // 0x11e8a0: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x11e8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x11e8a4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x11e8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x11e8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8ac: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x11e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x11e8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E8B0u;
    {
        const bool branch_taken_0x11e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B0u;
        // 0x11e8b4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8b0) {
            ctx->pc = 0x11E8C0u;
            goto label_11e8c0;
        }
    }
    ctx->pc = 0x11E8B8u;
label_11e8b8:
    // 0x11e8b8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e8bc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_11e8c0:
    // 0x11e8c0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x11e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_11e8c4:
    // 0x11e8c4: 0x3c01c033  lui         $at, 0xC033
    ctx->pc = 0x11e8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49203 << 16));
    // 0x11e8c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x11e8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x11e8cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8d4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x11e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11e8d8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x11e8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11e8dc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x11e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x11e8e0: 0xc051e62  jal         func_147988
    ctx->pc = 0x11E8E0u;
    SET_GPR_U32(ctx, 31, 0x11E8E8u);
    ctx->pc = 0x11E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8E0u;
    // 0x11e8e4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11E8E0u, 0x11E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8E8u;
label_11e8e8:
    // 0x11e8e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e8ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8f0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11E8F0u;
    SET_GPR_U32(ctx, 31, 0x11E8F8u);
    ctx->pc = 0x11E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8F0u;
    // 0x11e8f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11E8F0u, 0x11E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8F8u;
label_11e8f8:
    // 0x11e8f8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e8fc: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x11e8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11e900: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11e900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e904: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e908: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e90c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x11e90cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e910: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11e910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11e914: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e918: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11e918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11e91c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e920: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11e924: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x11e924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11e928: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E928u;
    {
        const bool branch_taken_0x11e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E928u;
        // 0x11e92c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e928) {
            ctx->pc = 0x11E944u;
            goto label_11e944;
        }
    }
    ctx->pc = 0x11E930u;
    // 0x11e930: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11e930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11e934: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e938: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11e938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11e93c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e940: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11e940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11e944:
    // 0x11e944: 0x3c01be13  lui         $at, 0xBE13
    ctx->pc = 0x11e944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48659 << 16));
    // 0x11e948: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x11e948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x11e94c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e954: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x11e954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x11e958: 0x3421c63f  ori         $at, $at, 0xC63F
    ctx->pc = 0x11e958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50751);
    // 0x11e95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e960: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e964: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x11e964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11e968: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11e968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e96c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x11e96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11e970: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11E970u;
    SET_GPR_U32(ctx, 31, 0x11E978u);
    ctx->pc = 0x11E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E970u;
    // 0x11e974: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11E970u, 0x11E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E978u;
label_11e978:
    // 0x11e978: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11e97c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11e97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e980: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e984: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e988: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x11e988u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e98c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11e98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11e990: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11e990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e994: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11e994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11e998: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11e998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11e99c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x11e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11e9a0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E9A0u;
    {
        const bool branch_taken_0x11e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A0u;
        // 0x11e9a4: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a0) {
            ctx->pc = 0x11E9BCu;
            goto label_11e9bc;
        }
    }
    ctx->pc = 0x11E9A8u;
    // 0x11e9a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11e9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11e9ac: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e9b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11e9b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11e9b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e9b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11e9bc:
    // 0x11e9bc: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e9c0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11e9c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11e9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11e9c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e9cc: 0x0  nop
    ctx->pc = 0x11e9ccu;
    // NOP
    // 0x11e9d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e9d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11e9d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11e9d8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11E9D8u;
    SET_GPR_U32(ctx, 31, 0x11E9E0u);
    ctx->pc = 0x11E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9D8u;
    // 0x11e9dc: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11E9D8u, 0x11E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9E0u;
label_11e9e0:
    // 0x11e9e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11e9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9e8: 0xe6600104  swc1        $f0, 0x104($s3)
    ctx->pc = 0x11e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    // 0x11e9ec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x11e9f0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11E9F0u;
    SET_GPR_U32(ctx, 31, 0x11E9F8u);
    ctx->pc = 0x11E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9F0u;
    // 0x11e9f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11E9F0u, 0x11E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9F8u;
label_11e9f8:
    // 0x11e9f8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11e9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11e9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea00: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11ea04: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11ea08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ea0c: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11ea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11ea10: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11ea10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11ea14: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_11ea18:
    // 0x11ea18: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11EA18u;
    SET_GPR_U32(ctx, 31, 0x11EA20u);
    ctx->pc = 0x11EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA18u;
    // 0x11ea1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11EA18u, 0x11EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA20u;
label_11ea20:
    // 0x11ea20: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11EA20u;
    SET_GPR_U32(ctx, 31, 0x11EA28u);
    ctx->pc = 0x11EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA20u;
    // 0x11ea24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11EA20u, 0x11EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA28u;
label_11ea28:
    // 0x11ea28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EA28u;
    {
        const bool branch_taken_0x11ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA28u;
        // 0x11ea2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea28) {
            ctx->pc = 0x11EA4Cu;
            goto label_11ea4c;
        }
    }
    ctx->pc = 0x11EA30u;
    // 0x11ea30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea34: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11EA34u;
    SET_GPR_U32(ctx, 31, 0x11EA3Cu);
    ctx->pc = 0x11EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA34u;
    // 0x11ea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11EA34u, 0x11EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA3Cu;
label_11ea3c:
    // 0x11ea3c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ea40: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11ea40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ea44: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11ea44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ea48: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11ea48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11ea4c:
    // 0x11ea4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ea50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ea50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ea54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea58: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11EA58u;
    SET_GPR_U32(ctx, 31, 0x11EA60u);
    ctx->pc = 0x11EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA58u;
    // 0x11ea5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11EA58u, 0x11EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA60u;
label_11ea60:
    // 0x11ea60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ea60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ea64: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11EA64u;
    SET_GPR_U32(ctx, 31, 0x11EA6Cu);
    ctx->pc = 0x11EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA64u;
    // 0x11ea68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11EA64u, 0x11EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA6Cu;
label_11ea6c:
    // 0x11ea6c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11ea6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11ea70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11ea74: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x11EA74u;
    {
        const bool branch_taken_0x11ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA74u;
        // 0x11ea78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea74) {
            ctx->pc = 0x11EC8Cu;
            goto label_11ec8c;
        }
    }
    ctx->pc = 0x11EA7Cu;
    // 0x11ea7c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11ea80: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x11EA80u;
    {
        const bool branch_taken_0x11ea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ea80) {
            ctx->pc = 0x11EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EA80u;
            // 0x11ea84: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11EA88u;
    // 0x11ea88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11ea90: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x11ea94: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11ea98: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11EA98u;
    SET_GPR_U32(ctx, 31, 0x11EAA0u);
    ctx->pc = 0x11EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA98u;
    // 0x11ea9c: 0x2405ff60  addiu       $a1, $zero, -0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11EA98u, 0x11EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAA0u;
label_11eaa0:
    // 0x11eaa0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x11EAA0u;
    {
        const bool branch_taken_0x11eaa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAA0u;
        // 0x11eaa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa0) {
            ctx->pc = 0x11EACCu;
            goto label_11eacc;
        }
    }
    ctx->pc = 0x11EAA8u;
    // 0x11eaa8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11eaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11eaac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11eaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eab0: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eab4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11eab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11eab8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11eab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11eabc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11eabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11eac0: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11EAC0u;
    SET_GPR_U32(ctx, 31, 0x11EAC8u);
    ctx->pc = 0x11EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAC0u;
    // 0x11eac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11EAC0u, 0x11EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAC8u;
label_11eac8:
    // 0x11eac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11eacc:
    // 0x11eacc: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11EACCu;
    SET_GPR_U32(ctx, 31, 0x11EAD4u);
    ctx->pc = 0x11EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EACCu;
    // 0x11ead0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11EACCu, 0x11EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAD4u;
label_11ead4:
    // 0x11ead4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAD4u;
        // 0x11ead8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11EC8Cu;
            goto label_11ec8c;
        }
    }
    ctx->pc = 0x11EADCu;
label_11eadc:
    // 0x11eadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11eadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11eae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eae4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x11eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x11eae8: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11EAE8u;
    SET_GPR_U32(ctx, 31, 0x11EAF0u);
    ctx->pc = 0x11EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAE8u;
    // 0x11eaec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11EAE8u, 0x11EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAF0u;
label_11eaf0:
    // 0x11eaf0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11eaf4: 0xae3015b0  sw          $s0, 0x15B0($s1)
    ctx->pc = 0x11eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 16));
    // 0x11eaf8: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x11eafc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11eb00: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11eb00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11eb04: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11eb08: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11EB08u;
    SET_GPR_U32(ctx, 31, 0x11EB10u);
    ctx->pc = 0x11EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB08u;
    // 0x11eb0c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11EB08u, 0x11EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB10u;
label_11eb10:
    // 0x11eb10: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11eb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11eb14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11eb18: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11eb18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11eb1c:
    // 0x11eb1c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11EB1Cu;
    SET_GPR_U32(ctx, 31, 0x11EB24u);
    ctx->pc = 0x11EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB1Cu;
    // 0x11eb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11EB1Cu, 0x11EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB24u;
label_11eb24:
    // 0x11eb24: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11EB24u;
    SET_GPR_U32(ctx, 31, 0x11EB2Cu);
    ctx->pc = 0x11EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB24u;
    // 0x11eb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11EB24u, 0x11EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB2Cu;
label_11eb2c:
    // 0x11eb2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11EB2Cu;
    {
        const bool branch_taken_0x11eb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eb2c) {
            ctx->pc = 0x11EB78u;
            goto label_11eb78;
        }
    }
    ctx->pc = 0x11EB34u;
    // 0x11eb34: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11eb38: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11EB38u;
    {
        const bool branch_taken_0x11eb38 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB38u;
        // 0x11eb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb38) {
            ctx->pc = 0x11EB68u;
            goto label_11eb68;
        }
    }
    ctx->pc = 0x11EB40u;
    // 0x11eb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb44: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11EB44u;
    SET_GPR_U32(ctx, 31, 0x11EB4Cu);
    ctx->pc = 0x11EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB44u;
    // 0x11eb48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11EB44u, 0x11EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB4Cu;
label_11eb4c:
    // 0x11eb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11eb54: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11eb54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11eb58: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11eb58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11eb5c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11eb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11eb60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB60u;
    {
        const bool branch_taken_0x11eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB60u;
        // 0x11eb64: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb60) {
            ctx->pc = 0x11EB78u;
            goto label_11eb78;
        }
    }
    ctx->pc = 0x11EB68u;
label_11eb68:
    // 0x11eb68: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11eb6c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11eb70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11eb74: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11eb74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11eb78:
    // 0x11eb78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11eb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11eb7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11eb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11eb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb84: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11EB84u;
    SET_GPR_U32(ctx, 31, 0x11EB8Cu);
    ctx->pc = 0x11EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB84u;
    // 0x11eb88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11EB84u, 0x11EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB8Cu;
label_11eb8c:
    // 0x11eb8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11eb8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11eb90: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11EB90u;
    SET_GPR_U32(ctx, 31, 0x11EB98u);
    ctx->pc = 0x11EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB90u;
    // 0x11eb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11EB90u, 0x11EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB98u;
label_11eb98:
    // 0x11eb98: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11eb98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11eb9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11eb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11eba0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11EBA0u;
    {
        const bool branch_taken_0x11eba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBA0u;
        // 0x11eba4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eba0) {
            ctx->pc = 0x11EC8Cu;
            goto label_11ec8c;
        }
    }
    ctx->pc = 0x11EBA8u;
    // 0x11eba8: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11ebac: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x11EBACu;
    {
        const bool branch_taken_0x11ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ebac) {
            ctx->pc = 0x11EBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBACu;
            // 0x11ebb0: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11EBB4u;
    // 0x11ebb4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x11ebb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ebbc: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11ebbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11ebc0: 0xae2315b4  sw          $v1, 0x15B4($s1)
    ctx->pc = 0x11ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
    // 0x11ebc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11EBC8u;
    SET_GPR_U32(ctx, 31, 0x11EBD0u);
    ctx->pc = 0x11EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBC8u;
    // 0x11ebcc: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11EBC8u, 0x11EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBD0u;
label_11ebd0:
    // 0x11ebd0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x11EBD0u;
    {
        const bool branch_taken_0x11ebd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBD0u;
        // 0x11ebd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebd0) {
            ctx->pc = 0x11EBFCu;
            goto label_11ebfc;
        }
    }
    ctx->pc = 0x11EBD8u;
    // 0x11ebd8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11ebd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11ebdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ebdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ebe0: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ebe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ebe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ebe8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ebe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ebec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11ebf0: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11EBF0u;
    SET_GPR_U32(ctx, 31, 0x11EBF8u);
    ctx->pc = 0x11EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBF0u;
    // 0x11ebf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11EBF0u, 0x11EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBF8u;
label_11ebf8:
    // 0x11ebf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11ebfc:
    // 0x11ebfc: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11EBFCu;
    SET_GPR_U32(ctx, 31, 0x11EC04u);
    ctx->pc = 0x11EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBFCu;
    // 0x11ec00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11EBFCu, 0x11EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC04u;
label_11ec04:
    // 0x11ec04: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11ec04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11ec08: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11EC08u;
    {
        const bool branch_taken_0x11ec08 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC08u;
        // 0x11ec0c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec08) {
            ctx->pc = 0x11EC64u;
            goto label_11ec64;
        }
    }
    ctx->pc = 0x11EC10u;
    // 0x11ec10: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11ec14: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11ec14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11ec18: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11ec1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec20: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11ec24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11ec24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ec28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ec30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11ec34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec38: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11EC38u;
    SET_GPR_U32(ctx, 31, 0x11EC40u);
    ctx->pc = 0x11EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC38u;
    // 0x11ec3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11EC38u, 0x11EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC40u;
label_11ec40:
    // 0x11ec40: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11EC40u;
    SET_GPR_U32(ctx, 31, 0x11EC48u);
    ctx->pc = 0x11EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC40u;
    // 0x11ec44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11EC40u, 0x11EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC48u;
label_11ec48:
    // 0x11ec48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec4c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11EC4Cu;
    SET_GPR_U32(ctx, 31, 0x11EC54u);
    ctx->pc = 0x11EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC4Cu;
    // 0x11ec50: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11EC4Cu, 0x11EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC54u;
label_11ec54:
    // 0x11ec54: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11ec54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11ec58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11ec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11ec5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11EC5Cu;
    {
        const bool branch_taken_0x11ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC5Cu;
        // 0x11ec60: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec5c) {
            ctx->pc = 0x11EC88u;
            goto label_11ec88;
        }
    }
    ctx->pc = 0x11EC64u;
label_11ec64:
    // 0x11ec64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11ec64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11ec6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec70: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11ec74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ec74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ec78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ec7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11EC80u;
    SET_GPR_U32(ctx, 31, 0x11EC88u);
    ctx->pc = 0x11EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC80u;
    // 0x11ec84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11EC80u, 0x11EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC88u;
label_11ec88:
    // 0x11ec88: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x11ec88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_11ec8c:
    // 0x11ec8c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x11ec8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11ec90:
    // 0x11ec90: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x11ec90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ec94: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x11ec94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ec98: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x11ec98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ec9c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11eca0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x11eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x11ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA4u;
        // 0x11eca8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ECACu;
    // 0x11ecac: 0x0  nop
    ctx->pc = 0x11ecacu;
    // NOP
    ctx->pc = 0x11ecb0u;
}
