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

// Function: cEm00_stepLeapAndLand
// Address: 0x255eb0 - 0x256898
void cEm00_stepLeapAndLand_0x255eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepLeapAndLand_0x255eb0");
#endif

    switch (ctx->pc) {
        case 0x255f80u: goto label_255f80;
        case 0x255f94u: goto label_255f94;
        case 0x255fb0u: goto label_255fb0;
        case 0x255fc0u: goto label_255fc0;
        case 0x255fe0u: goto label_255fe0;
        case 0x256074u: goto label_256074;
        case 0x2560a0u: goto label_2560a0;
        case 0x256170u: goto label_256170;
        case 0x256178u: goto label_256178;
        case 0x2561a0u: goto label_2561a0;
        case 0x256224u: goto label_256224;
        case 0x2562c8u: goto label_2562c8;
        case 0x256320u: goto label_256320;
        case 0x256348u: goto label_256348;
        case 0x256354u: goto label_256354;
        case 0x25645cu: goto label_25645c;
        case 0x256560u: goto label_256560;
        case 0x25659cu: goto label_25659c;
        case 0x256690u: goto label_256690;
        case 0x256714u: goto label_256714;
        case 0x256750u: goto label_256750;
        case 0x256780u: goto label_256780;
        case 0x256800u: goto label_256800;
        case 0x256854u: goto label_256854;
        case 0x256860u: goto label_256860;
        case 0x25686cu: goto label_25686c;
        default: break;
    }

    ctx->pc = 0x255eb0u;

    // 0x255eb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x255eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x255eb4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x255eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x255eb8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x255eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x255ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x255ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ec0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x255ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x255ec4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x255ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x255ec8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x255ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x255ecc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x255eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x255ed0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x255ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x255ed4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x255ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x255ed8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x255ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x255edc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x255edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255ee0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x255ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x255ee4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x255ee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255ee8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x255ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x255eec: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x255eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x255ef0: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x255ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x255ef4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x255ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x255ef8: 0x924502f6  lbu         $a1, 0x2F6($s2)
    ctx->pc = 0x255ef8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x255efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x255efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255f04: 0x10a400bb  beq         $a1, $a0, . + 4 + (0xBB << 2)
    ctx->pc = 0x255F04u;
    {
        const bool branch_taken_0x255f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x255F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F04u;
        // 0x255f08: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f04) {
            ctx->pc = 0x2561F4u;
            goto label_2561f4;
        }
    }
    ctx->pc = 0x255F0Cu;
    // 0x255f0c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x255f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255f10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x255F10u;
    {
        const bool branch_taken_0x255f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f10) {
            ctx->pc = 0x255F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F10u;
            // 0x255f14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F28u;
            goto label_255f28;
        }
    }
    ctx->pc = 0x255F18u;
    // 0x255f18: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x255F18u;
    {
        const bool branch_taken_0x255f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F18u;
        // 0x255f1c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f18) {
            ctx->pc = 0x255F40u;
            goto label_255f40;
        }
    }
    ctx->pc = 0x255F20u;
    // 0x255f20: 0x10000254  b           . + 4 + (0x254 << 2)
    ctx->pc = 0x255F20u;
    {
        const bool branch_taken_0x255f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F20u;
        // 0x255f24: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f20) {
            ctx->pc = 0x256874u;
            goto label_256874;
        }
    }
    ctx->pc = 0x255F28u;
label_255f28:
    // 0x255f28: 0x10a20112  beq         $a1, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x255F28u;
    {
        const bool branch_taken_0x255f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x255F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F28u;
        // 0x255f2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f28) {
            ctx->pc = 0x256374u;
            goto label_256374;
        }
    }
    ctx->pc = 0x255F30u;
    // 0x255f30: 0x10a2018e  beq         $a1, $v0, . + 4 + (0x18E << 2)
    ctx->pc = 0x255F30u;
    {
        const bool branch_taken_0x255f30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x255F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F30u;
        // 0x255f34: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f30) {
            ctx->pc = 0x25656Cu;
            goto label_25656c;
        }
    }
    ctx->pc = 0x255F38u;
    // 0x255f38: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x255F38u;
    {
        const bool branch_taken_0x255f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F38u;
        // 0x255f3c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f38) {
            ctx->pc = 0x256874u;
            goto label_256874;
        }
    }
    ctx->pc = 0x255F40u;
label_255f40:
    // 0x255f40: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x255f44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x255F44u;
    {
        const bool branch_taken_0x255f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f44) {
            ctx->pc = 0x255F94u;
            goto label_255f94;
        }
    }
    ctx->pc = 0x255F4Cu;
    // 0x255f4c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x255f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x255f50: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x255f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x255f54: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x255f54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x255f58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255F58u;
    {
        const bool branch_taken_0x255f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F58u;
        // 0x255f5c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f58) {
            ctx->pc = 0x255F78u;
            goto label_255f78;
        }
    }
    ctx->pc = 0x255F60u;
    // 0x255f60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x255f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x255f64: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x255f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x255f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255f6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255f70: 0x800008  jr          $a0
    ctx->pc = 0x255F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255F78u: goto label_255f78;
            case 0x255F94u: goto label_255f94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255F70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255F78u;
label_255f78:
    // 0x255f78: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255F78u;
    SET_GPR_U32(ctx, 31, 0x255F80u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255F78u, 0x255F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F80u;
label_255f80:
    // 0x255f80: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x255f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x255f84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255F84u;
    {
        const bool branch_taken_0x255f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255f84) {
            ctx->pc = 0x255F94u;
            goto label_255f94;
        }
    }
    ctx->pc = 0x255F8Cu;
    // 0x255f8c: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x255F8Cu;
    SET_GPR_U32(ctx, 31, 0x255F94u);
    ctx->pc = 0x255F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F8Cu;
    // 0x255f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x255F8Cu, 0x255F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F94u;
label_255f94:
    // 0x255f94: 0x3c01bec7  lui         $at, 0xBEC7
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48839 << 16));
    // 0x255f98: 0x3421ae15  ori         $at, $at, 0xAE15
    ctx->pc = 0x255f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44565);
    // 0x255f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255fa4: 0xae401710  sw          $zero, 0x1710($s2)
    ctx->pc = 0x255fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
    // 0x255fa8: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x255FA8u;
    SET_GPR_U32(ctx, 31, 0x255FB0u);
    ctx->pc = 0x255FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FA8u;
    // 0x255fac: 0xe64005c4  swc1        $f0, 0x5C4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x255FA8u, 0x255FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FB0u;
label_255fb0:
    // 0x255fb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255FB0u;
    {
        const bool branch_taken_0x255fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255fb0) {
            ctx->pc = 0x255FD8u;
            goto label_255fd8;
        }
    }
    ctx->pc = 0x255FB8u;
    // 0x255fb8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255FB8u;
    SET_GPR_U32(ctx, 31, 0x255FC0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255FB8u, 0x255FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FC0u;
label_255fc0:
    // 0x255fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x255fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255FC4u;
    {
        const bool branch_taken_0x255fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FC4u;
        // 0x255fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fc4) {
            ctx->pc = 0x255FD4u;
            goto label_255fd4;
        }
    }
    ctx->pc = 0x255FCCu;
    // 0x255fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x255FCCu;
    {
        const bool branch_taken_0x255fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FCCu;
        // 0x255fd0: 0xa24217c3  sb          $v0, 0x17C3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fcc) {
            ctx->pc = 0x255FD8u;
            goto label_255fd8;
        }
    }
    ctx->pc = 0x255FD4u;
label_255fd4:
    // 0x255fd4: 0xa24017c3  sb          $zero, 0x17C3($s2)
    ctx->pc = 0x255fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 0));
label_255fd8:
    // 0x255fd8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x255FD8u;
    SET_GPR_U32(ctx, 31, 0x255FE0u);
    ctx->pc = 0x255FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255FD8u;
    // 0x255fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x255FD8u, 0x255FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255FE0u;
label_255fe0:
    // 0x255fe0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x255fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x255fe4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x255fe4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255fe8: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x255fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x255fec: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x255fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x255ff0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255FF0u;
    {
        const bool branch_taken_0x255ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FF0u;
        // 0x255ff4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ff0) {
            ctx->pc = 0x256010u;
            goto label_256010;
        }
    }
    ctx->pc = 0x255FF8u;
    // 0x255ff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255ffc: 0x24421840  addiu       $v0, $v0, 0x1840
    ctx->pc = 0x255ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6208));
    // 0x256000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256004: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256008: 0x800008  jr          $a0
    ctx->pc = 0x256008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256010u: goto label_256010;
            case 0x256024u: goto label_256024;
            case 0x256038u: goto label_256038;
            case 0x25604Cu: goto label_25604c;
            case 0x2560A8u: goto label_2560a8;
            case 0x2560BCu: goto label_2560bc;
            case 0x2560D0u: goto label_2560d0;
            case 0x2560E4u: goto label_2560e4;
            case 0x2560F8u: goto label_2560f8;
            case 0x25610Cu: goto label_25610c;
            case 0x256120u: goto label_256120;
            case 0x256134u: goto label_256134;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256008u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256010u;
label_256010:
    // 0x256010: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256014: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x256014u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x256018: 0x8c430628  lw          $v1, 0x628($v0)
    ctx->pc = 0x256018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1576)));
    // 0x25601c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x25601Cu;
    {
        const bool branch_taken_0x25601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25601Cu;
        // 0x256020: 0x8c44062c  lw          $a0, 0x62C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25601c) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x256024u;
label_256024:
    // 0x256024: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256028: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x256028u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x25602c: 0x8c430f74  lw          $v1, 0xF74($v0)
    ctx->pc = 0x25602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3956)));
    // 0x256030: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x256030u;
    {
        const bool branch_taken_0x256030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256030u;
        // 0x256034: 0x8c440f78  lw          $a0, 0xF78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256030) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x256038u;
label_256038:
    // 0x256038: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25603c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x256040: 0x8c430b4c  lw          $v1, 0xB4C($v0)
    ctx->pc = 0x256040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2892)));
    // 0x256044: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x256044u;
    {
        const bool branch_taken_0x256044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256044u;
        // 0x256048: 0x8c440b50  lw          $a0, 0xB50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256044) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x25604Cu;
label_25604c:
    // 0x25604c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256050: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x256050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x256054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256058: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x25605c: 0x8c460b4c  lw          $a2, 0xB4C($v0)
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2892)));
    // 0x256060: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x256060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256064: 0x8c450b50  lw          $a1, 0xB50($v0)
    ctx->pc = 0x256064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2896)));
    // 0x256068: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25606c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25606Cu;
    SET_GPR_U32(ctx, 31, 0x256074u);
    ctx->pc = 0x256070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25606Cu;
    // 0x256070: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25606Cu, 0x256074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256074u;
label_256074:
    // 0x256074: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x256074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x256078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25607c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256084: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x256084u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x256088: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x256088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25608c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25608cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256098: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x256098u;
    SET_GPR_U32(ctx, 31, 0x2560A0u);
    ctx->pc = 0x25609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256098u;
    // 0x25609c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x256098u, 0x2560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560A0u;
label_2560a0:
    // 0x2560a0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2560A0u;
    {
        const bool branch_taken_0x2560a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2560a0) {
            ctx->pc = 0x25614Cu;
            goto label_25614c;
        }
    }
    ctx->pc = 0x2560A8u;
label_2560a8:
    // 0x2560a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2560ac: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2560acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2560b0: 0x8c430b4c  lw          $v1, 0xB4C($v0)
    ctx->pc = 0x2560b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2892)));
    // 0x2560b4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2560B4u;
    {
        const bool branch_taken_0x2560b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560B4u;
        // 0x2560b8: 0x8c440b50  lw          $a0, 0xB50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560b4) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x2560BCu;
label_2560bc:
    // 0x2560bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2560c0: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2560c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2560c4: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2560c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2560C8u;
    {
        const bool branch_taken_0x2560c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560C8u;
        // 0x2560cc: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560c8) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x2560D0u;
label_2560d0:
    // 0x2560d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2560d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2560d4: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2560d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2560d8: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x2560d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x2560dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2560DCu;
    {
        const bool branch_taken_0x2560dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560DCu;
        // 0x2560e0: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560dc) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x2560E4u;
label_2560e4:
    // 0x2560e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2560e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2560e8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2560ec: 0x8c4317c0  lw          $v1, 0x17C0($v0)
    ctx->pc = 0x2560ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x2560f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2560F0u;
    {
        const bool branch_taken_0x2560f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560F0u;
        // 0x2560f4: 0x8c4417c4  lw          $a0, 0x17C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560f0) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x2560F8u;
label_2560f8:
    // 0x2560f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2560f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2560fc: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2560fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x256100: 0x8c4317c0  lw          $v1, 0x17C0($v0)
    ctx->pc = 0x256100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x256104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x256104u;
    {
        const bool branch_taken_0x256104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256104u;
        // 0x256108: 0x8c4417c4  lw          $a0, 0x17C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256104) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x25610Cu;
label_25610c:
    // 0x25610c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256110: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x256110u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x256114: 0x8c430628  lw          $v1, 0x628($v0)
    ctx->pc = 0x256114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1576)));
    // 0x256118: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256118u;
    {
        const bool branch_taken_0x256118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256118u;
        // 0x25611c: 0x8c44062c  lw          $a0, 0x62C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256118) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x256120u;
label_256120:
    // 0x256120: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256124: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x256128: 0x8c432e34  lw          $v1, 0x2E34($v0)
    ctx->pc = 0x256128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11828)));
    // 0x25612c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25612Cu;
    {
        const bool branch_taken_0x25612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25612Cu;
        // 0x256130: 0x8c442e38  lw          $a0, 0x2E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25612c) {
            ctx->pc = 0x256144u;
            goto label_256144;
        }
    }
    ctx->pc = 0x256134u;
label_256134:
    // 0x256134: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256138: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x256138u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x25613c: 0x8c4313a0  lw          $v1, 0x13A0($v0)
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5024)));
    // 0x256140: 0x8c4413a4  lw          $a0, 0x13A4($v0)
    ctx->pc = 0x256140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5028)));
label_256144:
    // 0x256144: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x256144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256148: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x256148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25614c:
    // 0x25614c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25614cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256150: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x256154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256158: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x256158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25615c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256168: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x256168u;
    SET_GPR_U32(ctx, 31, 0x256170u);
    ctx->pc = 0x25616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256168u;
    // 0x25616c: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x256168u, 0x256170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256170u;
label_256170:
    // 0x256170: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x256170u;
    SET_GPR_U32(ctx, 31, 0x256178u);
    ctx->pc = 0x256174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256170u;
    // 0x256174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x256170u, 0x256178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256178u;
label_256178:
    // 0x256178: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x256178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256180: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x256184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256188: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x256188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25618c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25618cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256194: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256194u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256198: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x256198u;
    SET_GPR_U32(ctx, 31, 0x2561A0u);
    ctx->pc = 0x25619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256198u;
    // 0x25619c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x256198u, 0x2561A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2561A0u;
label_2561a0:
    // 0x2561a0: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x2561a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x2561a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2561A4u;
    {
        const bool branch_taken_0x2561a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561A4u;
        // 0x2561a8: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561a4) {
            ctx->pc = 0x2561E4u;
            goto label_2561e4;
        }
    }
    ctx->pc = 0x2561ACu;
    // 0x2561ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2561acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2561b0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2561B0u;
    {
        const bool branch_taken_0x2561b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561B0u;
        // 0x2561b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561b0) {
            ctx->pc = 0x2561E4u;
            goto label_2561e4;
        }
    }
    ctx->pc = 0x2561B8u;
    // 0x2561b8: 0x264305d0  addiu       $v1, $s2, 0x5D0
    ctx->pc = 0x2561b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x2561bc: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x2561bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x2561c0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2561c4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2561C4u;
    {
        const bool branch_taken_0x2561c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2561c4) {
            ctx->pc = 0x2561C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561C4u;
            // 0x2561c8: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561E8u;
            goto label_2561e8;
        }
    }
    ctx->pc = 0x2561CCu;
    // 0x2561cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2561ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2561d0: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x2561d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x2561d4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2561d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2561d8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2561d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2561dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2561dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2561e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2561e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2561e4:
    // 0x2561e4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2561e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_2561e8:
    // 0x2561e8: 0xae4005f4  sw          $zero, 0x5F4($s2)
    ctx->pc = 0x2561e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
    // 0x2561ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2561f0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2561f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2561f4:
    // 0x2561f4: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x2561f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2561F8u;
    {
        const bool branch_taken_0x2561f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2561FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561F8u;
        // 0x2561fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561f8) {
            ctx->pc = 0x256224u;
            goto label_256224;
        }
    }
    ctx->pc = 0x256200u;
    // 0x256200: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x256200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256204: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x256204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x256208: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x256208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25620c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25620cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256214: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x256214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x256218: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x25621c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x25621Cu;
    SET_GPR_U32(ctx, 31, 0x256224u);
    ctx->pc = 0x256220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25621Cu;
    // 0x256220: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x25621Cu, 0x256224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256224u;
label_256224:
    // 0x256224: 0xc64105c4  lwc1        $f1, 0x5C4($s2)
    ctx->pc = 0x256224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256228: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25622c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x25622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256230: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x256234: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x256238: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25623c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25623cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x256240: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x256244: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x256244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x256248: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x256248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25624c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256250: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x256250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256254: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x256258: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x256258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25625c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25625cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256264: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x256268: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x256268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25626c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x256270: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x256274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256278: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25627c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256280: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x256280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256284: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x256284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256288: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x256288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25628c: 0xc64205c4  lwc1        $f2, 0x5C4($s2)
    ctx->pc = 0x25628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256290: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x256290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x256294: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x256294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x256298: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x256298u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25629c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2562a0: 0xe64205c4  swc1        $f2, 0x5C4($s2)
    ctx->pc = 0x2562a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x2562a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2562a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2562a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2562ac: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2562acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2562b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2562b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2562b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2562b8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2562bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2562bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2562c0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2562C0u;
    SET_GPR_U32(ctx, 31, 0x2562C8u);
    ctx->pc = 0x2562C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562C0u;
    // 0x2562c4: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2562C0u, 0x2562C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562C8u;
label_2562c8:
    // 0x2562c8: 0x54500011  bnel        $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2562C8u;
    {
        const bool branch_taken_0x2562c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2562c8) {
            ctx->pc = 0x2562CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2562C8u;
            // 0x2562cc: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256310u;
            goto label_256310;
        }
    }
    ctx->pc = 0x2562D0u;
    // 0x2562d0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2562d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562d4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2562d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2562d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2562d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2562dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2562dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2562e0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2562e4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2562e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2562e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2562e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2562ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2562f0: 0x0  nop
    ctx->pc = 0x2562f0u;
    // NOP
    // 0x2562f4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2562F4u;
    {
        const bool branch_taken_0x2562f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2562f4) {
            ctx->pc = 0x2562F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2562F4u;
            // 0x2562f8: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256310u;
            goto label_256310;
        }
    }
    ctx->pc = 0x2562FCu;
    // 0x2562fc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2562fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256300: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x256304: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x256304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x256308: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x256308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
    // 0x25630c: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x25630cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
label_256310:
    // 0x256310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256314: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x256314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x256318: 0xc055f06  jal         func_157C18
    ctx->pc = 0x256318u;
    SET_GPR_U32(ctx, 31, 0x256320u);
    ctx->pc = 0x25631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256318u;
    // 0x25631c: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x256318u, 0x256320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256320u;
label_256320:
    // 0x256320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256320u;
    {
        const bool branch_taken_0x256320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256320) {
            ctx->pc = 0x256334u;
            goto label_256334;
        }
    }
    ctx->pc = 0x256328u;
    // 0x256328: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x256328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x25632c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x256330: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x256330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
label_256334:
    // 0x256334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x256334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x256338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x256338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25633c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256340: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x256340u;
    SET_GPR_U32(ctx, 31, 0x256348u);
    ctx->pc = 0x256344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256340u;
    // 0x256344: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x256340u, 0x256348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256348u;
label_256348:
    // 0x256348: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x256348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25634c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25634Cu;
    SET_GPR_U32(ctx, 31, 0x256354u);
    ctx->pc = 0x256350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25634Cu;
    // 0x256350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25634Cu, 0x256354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256354u;
label_256354:
    // 0x256354: 0x8e4305f4  lw          $v1, 0x5F4($s2)
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x256358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x256358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25635c: 0x14620144  bne         $v1, $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x25635Cu;
    {
        const bool branch_taken_0x25635c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x256360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25635Cu;
        // 0x256360: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25635c) {
            ctx->pc = 0x256870u;
            goto label_256870;
        }
    }
    ctx->pc = 0x256364u;
    // 0x256364: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x256364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x256368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25636c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x25636Cu;
    {
        const bool branch_taken_0x25636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25636Cu;
        // 0x256370: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25636c) {
            ctx->pc = 0x256870u;
            goto label_256870;
        }
    }
    ctx->pc = 0x256374u;
label_256374:
    // 0x256374: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x256374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x256378: 0x3c013e1f  lui         $at, 0x3E1F
    ctx->pc = 0x256378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15903 << 16));
    // 0x25637c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x25637cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x256380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256384u;
    {
        const bool branch_taken_0x256384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256384u;
        // 0x256388: 0xae401710  sw          $zero, 0x1710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256384) {
            ctx->pc = 0x256398u;
            goto label_256398;
        }
    }
    ctx->pc = 0x25638Cu;
    // 0x25638c: 0x3c013e54  lui         $at, 0x3E54
    ctx->pc = 0x25638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15956 << 16));
    // 0x256390: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x256390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x256394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_256398:
    // 0x256398: 0x0  nop
    ctx->pc = 0x256398u;
    // NOP
    // 0x25639c: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x25639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x2563a0: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2563a4: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x2563a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x2563a8: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x2563a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2563ac: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2563ACu;
    {
        const bool branch_taken_0x2563ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563ACu;
        // 0x2563b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563ac) {
            ctx->pc = 0x256454u;
            goto label_256454;
        }
    }
    ctx->pc = 0x2563B4u;
    // 0x2563b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2563b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2563b8: 0x24421a20  addiu       $v0, $v0, 0x1A20
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
    // 0x2563bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2563bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2563c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2563c4: 0x800008  jr          $a0
    ctx->pc = 0x2563C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2563CCu: goto label_2563cc;
            case 0x2563E0u: goto label_2563e0;
            case 0x256428u: goto label_256428;
            case 0x256454u: goto label_256454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2563C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2563CCu;
label_2563cc:
    // 0x2563cc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2563ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2563d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2563d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2563d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2563d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2563d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2563D8u;
    {
        const bool branch_taken_0x2563d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563D8u;
        // 0x2563dc: 0xc64005c4  lwc1        $f0, 0x5C4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563d8) {
            ctx->pc = 0x256448u;
            goto label_256448;
        }
    }
    ctx->pc = 0x2563E0u;
label_2563e0:
    // 0x2563e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2563e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2563e4: 0x24447a2c  addiu       $a0, $v0, 0x7A2C
    ctx->pc = 0x2563e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x2563e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A3Cu));
    // 0x2563ec: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2563ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2563f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2563F0u;
    {
        const bool branch_taken_0x2563f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2563f0) {
            ctx->pc = 0x2563F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2563F0u;
            // 0x2563f4: 0x94830024  lhu         $v1, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256408u;
            goto label_256408;
        }
    }
    ctx->pc = 0x2563F8u;
    // 0x2563f8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2563f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2563fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2563FCu;
    {
        const bool branch_taken_0x2563fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563FCu;
        // 0x256400: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563fc) {
            ctx->pc = 0x25642Cu;
            goto label_25642c;
        }
    }
    ctx->pc = 0x256404u;
    // 0x256404: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x256404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_256408:
    // 0x256408: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x256408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x25640c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25640Cu;
    {
        const bool branch_taken_0x25640c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x256410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25640Cu;
        // 0x256410: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25640c) {
            ctx->pc = 0x25642Cu;
            goto label_25642c;
        }
    }
    ctx->pc = 0x256414u;
    // 0x256414: 0x3c013ddf  lui         $at, 0x3DDF
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15839 << 16));
    // 0x256418: 0x3421a440  ori         $at, $at, 0xA440
    ctx->pc = 0x256418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42048);
    // 0x25641c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25641cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256420: 0x0  nop
    ctx->pc = 0x256420u;
    // NOP
    // 0x256424: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x256424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
label_256428:
    // 0x256428: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_25642c:
    // 0x25642c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x25642cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x256430: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x256430u;
    {
        const bool branch_taken_0x256430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256430) {
            ctx->pc = 0x256454u;
            goto label_256454;
        }
    }
    ctx->pc = 0x256438u;
    // 0x256438: 0xc64005c4  lwc1        $f0, 0x5C4($s2)
    ctx->pc = 0x256438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25643c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x25643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x256440: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x256440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x256444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x256444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_256448:
    // 0x256448: 0x0  nop
    ctx->pc = 0x256448u;
    // NOP
    // 0x25644c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25644cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x256450: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x256450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
label_256454:
    // 0x256454: 0xc09d91a  jal         func_276468
    ctx->pc = 0x256454u;
    SET_GPR_U32(ctx, 31, 0x25645Cu);
    ctx->pc = 0x256458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256454u;
    // 0x256458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x256454u, 0x25645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25645Cu;
label_25645c:
    // 0x25645c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x25645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x256460: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x256460u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256464: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x256464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x256468: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x256468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x25646c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25646Cu;
    {
        const bool branch_taken_0x25646c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25646Cu;
        // 0x256470: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25646c) {
            ctx->pc = 0x25648Cu;
            goto label_25648c;
        }
    }
    ctx->pc = 0x256474u;
    // 0x256474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256478: 0x24421be0  addiu       $v0, $v0, 0x1BE0
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25647c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256480: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256484: 0x800008  jr          $a0
    ctx->pc = 0x256484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25648Cu: goto label_25648c;
            case 0x25649Cu: goto label_25649c;
            case 0x2564ACu: goto label_2564ac;
            case 0x2564BCu: goto label_2564bc;
            case 0x2564CCu: goto label_2564cc;
            case 0x2564DCu: goto label_2564dc;
            case 0x2564ECu: goto label_2564ec;
            case 0x2564FCu: goto label_2564fc;
            case 0x25650Cu: goto label_25650c;
            case 0x25651Cu: goto label_25651c;
            case 0x25652Cu: goto label_25652c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256484u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25648Cu;
label_25648c:
    // 0x25648c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256490: 0x8c430630  lw          $v1, 0x630($v0)
    ctx->pc = 0x256490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1584)));
    // 0x256494: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x256494u;
    {
        const bool branch_taken_0x256494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256494u;
        // 0x256498: 0x8c440634  lw          $a0, 0x634($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256494) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x25649Cu;
label_25649c:
    // 0x25649c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564a0: 0x8c430f7c  lw          $v1, 0xF7C($v0)
    ctx->pc = 0x2564a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3964)));
    // 0x2564a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2564A4u;
    {
        const bool branch_taken_0x2564a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564A4u;
        // 0x2564a8: 0x8c440f80  lw          $a0, 0xF80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564a4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564ACu;
label_2564ac:
    // 0x2564ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564b0: 0x8c430b54  lw          $v1, 0xB54($v0)
    ctx->pc = 0x2564b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2900)));
    // 0x2564b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2564B4u;
    {
        const bool branch_taken_0x2564b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564B4u;
        // 0x2564b8: 0x8c440b58  lw          $a0, 0xB58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564b4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564BCu;
label_2564bc:
    // 0x2564bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564c0: 0x8c430b54  lw          $v1, 0xB54($v0)
    ctx->pc = 0x2564c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2900)));
    // 0x2564c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2564C4u;
    {
        const bool branch_taken_0x2564c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564C4u;
        // 0x2564c8: 0x8c440b58  lw          $a0, 0xB58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564c4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564CCu;
label_2564cc:
    // 0x2564cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564d0: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2564d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2564d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2564D4u;
    {
        const bool branch_taken_0x2564d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564D4u;
        // 0x2564d8: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564d4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564DCu;
label_2564dc:
    // 0x2564dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564e0: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x2564e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x2564e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2564E4u;
    {
        const bool branch_taken_0x2564e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564E4u;
        // 0x2564e8: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564e4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564ECu;
label_2564ec:
    // 0x2564ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2564f0: 0x8c4317c8  lw          $v1, 0x17C8($v0)
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6088)));
    // 0x2564f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2564F4u;
    {
        const bool branch_taken_0x2564f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F4u;
        // 0x2564f8: 0x8c4417cc  lw          $a0, 0x17CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564f4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564FCu;
label_2564fc:
    // 0x2564fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2564fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256500: 0x8c4317c8  lw          $v1, 0x17C8($v0)
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6088)));
    // 0x256504: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x256504u;
    {
        const bool branch_taken_0x256504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256504u;
        // 0x256508: 0x8c4417cc  lw          $a0, 0x17CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256504) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x25650Cu;
label_25650c:
    // 0x25650c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256510: 0x8c430630  lw          $v1, 0x630($v0)
    ctx->pc = 0x256510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1584)));
    // 0x256514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256514u;
    {
        const bool branch_taken_0x256514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256514u;
        // 0x256518: 0x8c440634  lw          $a0, 0x634($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256514) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x25651Cu;
label_25651c:
    // 0x25651c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256520: 0x8c432ea4  lw          $v1, 0x2EA4($v0)
    ctx->pc = 0x256520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11940)));
    // 0x256524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x256524u;
    {
        const bool branch_taken_0x256524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256524u;
        // 0x256528: 0x8c442ea8  lw          $a0, 0x2EA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256524) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x25652Cu;
label_25652c:
    // 0x25652c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256530: 0x8c4313a8  lw          $v1, 0x13A8($v0)
    ctx->pc = 0x256530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5032)));
    // 0x256534: 0x8c4413ac  lw          $a0, 0x13AC($v0)
    ctx->pc = 0x256534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5036)));
label_256538:
    // 0x256538: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25653c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25653cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256540: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x256540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256544: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x256544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x256548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25654c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25654cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x256554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256558: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x256558u;
    SET_GPR_U32(ctx, 31, 0x256560u);
    ctx->pc = 0x25655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256558u;
    // 0x25655c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x256558u, 0x256560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256560u;
label_256560:
    // 0x256560: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x256560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x256564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x256568: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x256568u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_25656c:
    // 0x25656c: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x256570: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256570u;
    {
        const bool branch_taken_0x256570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256570u;
        // 0x256574: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256570) {
            ctx->pc = 0x25659Cu;
            goto label_25659c;
        }
    }
    ctx->pc = 0x256578u;
    // 0x256578: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x256578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25657c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x25657cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x256580: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x256580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x256584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25658c: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x25658cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x256590: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x256594: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x256594u;
    SET_GPR_U32(ctx, 31, 0x25659Cu);
    ctx->pc = 0x256598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256594u;
    // 0x256598: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x256594u, 0x25659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25659Cu;
label_25659c:
    // 0x25659c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x25659cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x2565a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2565a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2565a4: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2565A4u;
    {
        const bool branch_taken_0x2565a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2565a4) {
            ctx->pc = 0x2565A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2565A4u;
            // 0x2565a8: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x2565ACu;
    // 0x2565ac: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x2565acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2565b0: 0xc64105c4  lwc1        $f1, 0x5C4($s2)
    ctx->pc = 0x2565b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2565b4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2565b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2565b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2565bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2565bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2565c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2565c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2565c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2565c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2565c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2565c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2565cc: 0xc64305c4  lwc1        $f3, 0x5C4($s2)
    ctx->pc = 0x2565ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2565d0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2565d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2565d4: 0x0  nop
    ctx->pc = 0x2565d4u;
    // NOP
    // 0x2565d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2565D8u;
    {
        const bool branch_taken_0x2565d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D8u;
        // 0x2565dc: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565d8) {
            ctx->pc = 0x2565F4u;
            goto label_2565f4;
        }
    }
    ctx->pc = 0x2565E0u;
    // 0x2565e0: 0x3c013bff  lui         $at, 0x3BFF
    ctx->pc = 0x2565e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15359 << 16));
    // 0x2565e4: 0x34219725  ori         $at, $at, 0x9725
    ctx->pc = 0x2565e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38693);
    // 0x2565e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2565e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2565ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2565ECu;
    {
        const bool branch_taken_0x2565ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565ECu;
        // 0x2565f0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565ec) {
            ctx->pc = 0x256608u;
            goto label_256608;
        }
    }
    ctx->pc = 0x2565F4u;
label_2565f4:
    // 0x2565f4: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x2565f8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2565f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2565fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2565fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256600: 0x0  nop
    ctx->pc = 0x256600u;
    // NOP
    // 0x256604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x256604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_256608:
    // 0x256608: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x256608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x25660c: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x25660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x256610: 0xc64005c4  lwc1        $f0, 0x5C4($s2)
    ctx->pc = 0x256610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256614: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x256618: 0x0  nop
    ctx->pc = 0x256618u;
    // NOP
    // 0x25661c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x25661cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256620: 0x0  nop
    ctx->pc = 0x256620u;
    // NOP
    // 0x256624: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x256624u;
    {
        const bool branch_taken_0x256624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256624u;
        // 0x256628: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256624) {
            ctx->pc = 0x2567A8u;
            goto label_2567a8;
        }
    }
    ctx->pc = 0x25662Cu;
    // 0x25662c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25662cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256630: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x256634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x256634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256638: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x256638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25663c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x25663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x256640: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x256640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x256644: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256648: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x256648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25664c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25664cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x256650: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x256654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256658: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25665c: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x256660: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x256660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x256664: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256668: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256668u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25666c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256670: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x256670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x256674: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x256674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x256678: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x256678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x25667c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x25667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x256680: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x256680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x256684: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x256684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x256688: 0xc04c784  jal         func_131E10
    ctx->pc = 0x256688u;
    SET_GPR_U32(ctx, 31, 0x256690u);
    ctx->pc = 0x25668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256688u;
    // 0x25668c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x256688u, 0x256690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256690u;
label_256690:
    // 0x256690: 0x5450006a  bnel        $v0, $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x256690u;
    {
        const bool branch_taken_0x256690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x256690) {
            ctx->pc = 0x256694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256690u;
            // 0x256694: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256698u;
    // 0x256698: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x256698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25669c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x25669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2566a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2566a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2566a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2566a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2566a8: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2566a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2566ac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2566acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2566b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2566b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2566b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2566b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2566b8: 0x0  nop
    ctx->pc = 0x2566b8u;
    // NOP
    // 0x2566bc: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x2566BCu;
    {
        const bool branch_taken_0x2566bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566BCu;
        // 0x2566c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566bc) {
            ctx->pc = 0x256838u;
            goto label_256838;
        }
    }
    ctx->pc = 0x2566C4u;
    // 0x2566c4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2566c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2566c8: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x2566c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2566cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2566ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2566d0: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2566d4: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2566d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2566d8: 0x2443fdf6  addiu       $v1, $v0, -0x20A
    ctx->pc = 0x2566d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x2566dc: 0xa24402f6  sb          $a0, 0x2F6($s2)
    ctx->pc = 0x2566dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x2566e0: 0x2c620070  sltiu       $v0, $v1, 0x70
    ctx->pc = 0x2566e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2566e4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2566E4u;
    {
        const bool branch_taken_0x2566e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566E4u;
        // 0x2566e8: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566e4) {
            ctx->pc = 0x256838u;
            goto label_256838;
        }
    }
    ctx->pc = 0x2566ECu;
    // 0x2566ec: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2566f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2566f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2566f4: 0x24421dc0  addiu       $v0, $v0, 0x1DC0
    ctx->pc = 0x2566f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7616));
    // 0x2566f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2566f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2566fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256700: 0x800008  jr          $a0
    ctx->pc = 0x256700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256708u: goto label_256708;
            case 0x256838u: goto label_256838;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256708u;
label_256708:
    // 0x256708: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x256708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25670c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x25670Cu;
    SET_GPR_U32(ctx, 31, 0x256714u);
    ctx->pc = 0x256710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25670Cu;
    // 0x256710: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x25670Cu, 0x256714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256714u;
label_256714:
    // 0x256714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256718: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x256718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25671c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25671Cu;
    {
        const bool branch_taken_0x25671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25671Cu;
        // 0x256720: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25671c) {
            ctx->pc = 0x256734u;
            goto label_256734;
        }
    }
    ctx->pc = 0x256724u;
    // 0x256724: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256724u;
    {
        const bool branch_taken_0x256724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256724) {
            ctx->pc = 0x256748u;
            goto label_256748;
        }
    }
    ctx->pc = 0x25672Cu;
    // 0x25672c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x25672Cu;
    {
        const bool branch_taken_0x25672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25672Cu;
        // 0x256730: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25672c) {
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256734u;
label_256734:
    // 0x256734: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x256734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256738: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256738u;
    {
        const bool branch_taken_0x256738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256738) {
            ctx->pc = 0x25673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256738u;
            // 0x25673c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256770u;
            goto label_256770;
        }
    }
    ctx->pc = 0x256740u;
    // 0x256740: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x256740u;
    {
        const bool branch_taken_0x256740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256740u;
        // 0x256744: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256740) {
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256748u;
label_256748:
    // 0x256748: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256748u;
    SET_GPR_U32(ctx, 31, 0x256750u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256748u, 0x256750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256750u;
label_256750:
    // 0x256750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256754: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256754u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256758: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256758u;
    {
        const bool branch_taken_0x256758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256758) {
            ctx->pc = 0x25675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256758u;
            // 0x25675c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256760u;
            goto label_256760;
        }
    }
    ctx->pc = 0x256760u;
label_256760:
    // 0x256760: 0x2010  mfhi        $a0
    ctx->pc = 0x256760u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256764: 0x54800035  bnel        $a0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x256764u;
    {
        const bool branch_taken_0x256764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x256764) {
            ctx->pc = 0x256768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256764u;
            // 0x256768: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x25676Cu;
    // 0x25676c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x25676cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_256770:
    // 0x256770: 0x58400032  blezl       $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x256770u;
    {
        const bool branch_taken_0x256770 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x256770) {
            ctx->pc = 0x256774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256770u;
            // 0x256774: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256778u;
    // 0x256778: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x256778u;
    SET_GPR_U32(ctx, 31, 0x256780u);
    ctx->pc = 0x25677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256778u;
    // 0x25677c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x256778u, 0x256780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256780u;
label_256780:
    // 0x256780: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x256780u;
    {
        const bool branch_taken_0x256780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256780) {
            ctx->pc = 0x256784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256780u;
            // 0x256784: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256788u;
    // 0x256788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25678c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256790: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x256794: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x256794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x256798: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x256798u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25679c: 0xa24402f6  sb          $a0, 0x2F6($s2)
    ctx->pc = 0x25679cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x2567a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2567A0u;
    {
        const bool branch_taken_0x2567a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567A0u;
        // 0x2567a4: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567a0) {
            ctx->pc = 0x256838u;
            goto label_256838;
        }
    }
    ctx->pc = 0x2567A8u;
label_2567a8:
    // 0x2567a8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2567a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2567ac: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2567acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2567b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2567b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2567b4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2567b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2567b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2567b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2567bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2567bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2567c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2567c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2567c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2567c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2567c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2567c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2567cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2567ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2567d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2567d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2567d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2567d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2567d8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2567d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2567dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2567dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2567e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2567e4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2567e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2567e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2567ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567f0: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2567f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2567f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2567f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567f8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2567F8u;
    SET_GPR_U32(ctx, 31, 0x256800u);
    ctx->pc = 0x2567FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567F8u;
    // 0x2567fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2567F8u, 0x256800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256800u;
label_256800:
    // 0x256800: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x256800u;
    {
        const bool branch_taken_0x256800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x256800) {
            ctx->pc = 0x256804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256800u;
            // 0x256804: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256808u;
    // 0x256808: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x256808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25680c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x25680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x256810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x256810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256814: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x256814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x256818: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x256818u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25681c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256820: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x256820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256824: 0x0  nop
    ctx->pc = 0x256824u;
    // NOP
    // 0x256828: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x256828u;
    {
        const bool branch_taken_0x256828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x256828) {
            ctx->pc = 0x25682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256828u;
            // 0x25682c: 0x96420434  lhu         $v0, 0x434($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x256830u;
    // 0x256830: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x256830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256834: 0xe65405c4  swc1        $f20, 0x5C4($s2)
    ctx->pc = 0x256834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
label_256838:
    // 0x256838: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x256838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
label_25683c:
    // 0x25683c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x256844: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x256844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x256848: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x256848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25684c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25684Cu;
    SET_GPR_U32(ctx, 31, 0x256854u);
    ctx->pc = 0x256850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25684Cu;
    // 0x256850: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25684Cu, 0x256854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256854u;
label_256854:
    // 0x256854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256858: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x256858u;
    SET_GPR_U32(ctx, 31, 0x256860u);
    ctx->pc = 0x25685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256858u;
    // 0x25685c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x256858u, 0x256860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256860u;
label_256860:
    // 0x256860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x256860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256864: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x256864u;
    SET_GPR_U32(ctx, 31, 0x25686Cu);
    ctx->pc = 0x256868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256864u;
    // 0x256868: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x256864u, 0x25686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25686Cu;
label_25686c:
    // 0x25686c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x25686cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_256870:
    // 0x256870: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x256870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_256874:
    // 0x256874: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x256874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x256878: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x256878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25687c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x25687cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256880: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x256880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256884: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x256884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256888: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x256888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25688c: 0x3e00008  jr          $ra
    ctx->pc = 0x25688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25688Cu;
        // 0x256890: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256894u;
    // 0x256894: 0x0  nop
    ctx->pc = 0x256894u;
    // NOP
    ctx->pc = 0x256898u;
}
