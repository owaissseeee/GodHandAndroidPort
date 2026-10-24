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

// Function: func_0011FD10
// Address: 0x11fd10 - 0x1205d8
void func_0011FD10_0x11fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011FD10_0x11fd10");
#endif

    switch (ctx->pc) {
        case 0x11fd60u: goto label_11fd60;
        case 0x11fd6cu: goto label_11fd6c;
        case 0x11fda4u: goto label_11fda4;
        case 0x11fdacu: goto label_11fdac;
        case 0x11fdb4u: goto label_11fdb4;
        case 0x11fdf0u: goto label_11fdf0;
        case 0x11fdf8u: goto label_11fdf8;
        case 0x11fe6cu: goto label_11fe6c;
        case 0x11fed4u: goto label_11fed4;
        case 0x11fedcu: goto label_11fedc;
        case 0x11fee8u: goto label_11fee8;
        case 0x11fef4u: goto label_11fef4;
        case 0x11ff14u: goto label_11ff14;
        case 0x11ff90u: goto label_11ff90;
        case 0x11ff98u: goto label_11ff98;
        case 0x11ffa4u: goto label_11ffa4;
        case 0x11ffb0u: goto label_11ffb0;
        case 0x11ffbcu: goto label_11ffbc;
        case 0x120004u: goto label_120004;
        case 0x12002cu: goto label_12002c;
        case 0x120054u: goto label_120054;
        case 0x1200a4u: goto label_1200a4;
        case 0x1200ecu: goto label_1200ec;
        case 0x120108u: goto label_120108;
        case 0x120120u: goto label_120120;
        case 0x12014cu: goto label_12014c;
        case 0x120168u: goto label_120168;
        case 0x120184u: goto label_120184;
        case 0x1201a8u: goto label_1201a8;
        case 0x120384u: goto label_120384;
        case 0x12038cu: goto label_12038c;
        case 0x120394u: goto label_120394;
        case 0x1203a0u: goto label_1203a0;
        case 0x1203acu: goto label_1203ac;
        case 0x1203e0u: goto label_1203e0;
        case 0x1203f8u: goto label_1203f8;
        case 0x120404u: goto label_120404;
        case 0x120424u: goto label_120424;
        case 0x12044cu: goto label_12044c;
        case 0x120468u: goto label_120468;
        case 0x1204b4u: goto label_1204b4;
        case 0x1204f4u: goto label_1204f4;
        case 0x120568u: goto label_120568;
        case 0x120570u: goto label_120570;
        case 0x120584u: goto label_120584;
        case 0x1205a8u: goto label_1205a8;
        case 0x1205b4u: goto label_1205b4;
        case 0x1205bcu: goto label_1205bc;
        default: break;
    }

    ctx->pc = 0x11fd10u;

    // 0x11fd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fd14: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x11fd18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11fd1c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x11fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11fd20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11fd24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fd2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11fd30: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11fd30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11fd34: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11fd38: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11fd38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11fd3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd40: 0xa2030648  sb          $v1, 0x648($s0)
    ctx->pc = 0x11fd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fd44: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x11fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11fd48: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x11fd48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x11fd4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11fd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11fd50: 0xae110640  sw          $s1, 0x640($s0)
    ctx->pc = 0x11fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 17));
    // 0x11fd54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd58: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11FD58u;
    SET_GPR_U32(ctx, 31, 0x11FD60u);
    ctx->pc = 0x11FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD58u;
    // 0x11fd5c: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11FD58u, 0x11FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD60u;
label_11fd60:
    // 0x11fd60: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11fd64: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11FD64u;
    SET_GPR_U32(ctx, 31, 0x11FD6Cu);
    ctx->pc = 0x11FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD64u;
    // 0x11fd68: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11FD64u, 0x11FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD6Cu;
label_11fd6c:
    // 0x11fd6c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11fd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11fd70: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x11fd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11fd74: 0x1040020f  beqz        $v0, . + 4 + (0x20F << 2)
    ctx->pc = 0x11FD74u;
    {
        const bool branch_taken_0x11fd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD74u;
        // 0x11fd78: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd74) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x11FD7Cu;
    // 0x11fd7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11fd80: 0x2442c6b0  addiu       $v0, $v0, -0x3950
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952624));
    // 0x11fd84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fd88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11fd8c: 0x800008  jr          $a0
    ctx->pc = 0x11FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FD94u: goto label_11fd94;
            case 0x11FE8Cu: goto label_11fe8c;
            case 0x1200ACu: goto label_1200ac;
            case 0x120174u: goto label_120174;
            case 0x120470u: goto label_120470;
            case 0x120514u: goto label_120514;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11FD94u;
label_11fd94:
    // 0x11fd94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd9c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11FD9Cu;
    SET_GPR_U32(ctx, 31, 0x11FDA4u);
    ctx->pc = 0x11FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD9Cu;
    // 0x11fda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11FD9Cu, 0x11FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDA4u;
label_11fda4:
    // 0x11fda4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11FDA4u;
    SET_GPR_U32(ctx, 31, 0x11FDACu);
    ctx->pc = 0x11FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDA4u;
    // 0x11fda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11FDA4u, 0x11FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDACu;
label_11fdac:
    // 0x11fdac: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11FDACu;
    SET_GPR_U32(ctx, 31, 0x11FDB4u);
    ctx->pc = 0x11FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDACu;
    // 0x11fdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11FDACu, 0x11FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDB4u;
label_11fdb4:
    // 0x11fdb4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11fdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fdc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fdc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdc8: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x11fdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x11fdcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11fdd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fdd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fdd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11fdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdd8: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x11fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11fddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11fddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fde0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x11fde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11fde4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11fde8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11FDE8u;
    SET_GPR_U32(ctx, 31, 0x11FDF0u);
    ctx->pc = 0x11FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDE8u;
    // 0x11fdec: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11FDE8u, 0x11FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDF0u;
label_11fdf0:
    // 0x11fdf0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11FDF0u;
    SET_GPR_U32(ctx, 31, 0x11FDF8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11FDF0u, 0x11FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDF8u;
label_11fdf8:
    // 0x11fdf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fdfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fe00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11fe00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11fe04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11FE04u;
    {
        const bool branch_taken_0x11fe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe04) {
            ctx->pc = 0x11FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FE04u;
            // 0x11fe08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE0Cu;
            goto label_11fe0c;
        }
    }
    ctx->pc = 0x11FE0Cu;
label_11fe0c:
    // 0x11fe0c: 0x2810  mfhi        $a1
    ctx->pc = 0x11fe0cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x11fe10: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FE10u;
    {
        const bool branch_taken_0x11fe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11fe10) {
            ctx->pc = 0x11FE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FE10u;
            // 0x11fe14: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE38u;
            goto label_11fe38;
        }
    }
    ctx->pc = 0x11FE18u;
    // 0x11fe18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FE18u;
    {
        const bool branch_taken_0x11fe18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE18u;
        // 0x11fe1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe18) {
            ctx->pc = 0x11FE28u;
            goto label_11fe28;
        }
    }
    ctx->pc = 0x11FE20u;
    // 0x11fe20: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FE20u;
    {
        const bool branch_taken_0x11fe20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fe20) {
            ctx->pc = 0x11FE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FE20u;
            // 0x11fe24: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE44u;
            goto label_11fe44;
        }
    }
    ctx->pc = 0x11FE28u;
label_11fe28:
    // 0x11fe28: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11fe2c: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x11fe30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11FE30u;
    {
        const bool branch_taken_0x11fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE30u;
        // 0x11fe34: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe30) {
            ctx->pc = 0x11FE4Cu;
            goto label_11fe4c;
        }
    }
    ctx->pc = 0x11FE38u;
label_11fe38:
    // 0x11fe38: 0x8c4304dc  lw          $v1, 0x4DC($v0)
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
    // 0x11fe3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FE3Cu;
    {
        const bool branch_taken_0x11fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE3Cu;
        // 0x11fe40: 0x8c4404e0  lw          $a0, 0x4E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe3c) {
            ctx->pc = 0x11FE4Cu;
            goto label_11fe4c;
        }
    }
    ctx->pc = 0x11FE44u;
label_11fe44:
    // 0x11fe44: 0x8c4304e4  lw          $v1, 0x4E4($v0)
    ctx->pc = 0x11fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x11fe48: 0x8c4404e8  lw          $a0, 0x4E8($v0)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_11fe4c:
    // 0x11fe4c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fe50: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fe54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11fe54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fe58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11fe5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11fe60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe64: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11FE64u;
    SET_GPR_U32(ctx, 31, 0x11FE6Cu);
    ctx->pc = 0x11FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE64u;
    // 0x11fe68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11FE64u, 0x11FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE6Cu;
label_11fe6c:
    // 0x11fe6c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11fe6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11fe70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11fe74: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11fe78: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x11fe78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x11fe7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fe80: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x11fe80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11fe84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11fe84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11fe88: 0xa600056c  sh          $zero, 0x56C($s0)
    ctx->pc = 0x11fe88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1388), (uint16_t)GPR_U32(ctx, 0));
label_11fe8c:
    // 0x11fe8c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x11fe8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x11fe90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11FE90u;
    {
        const bool branch_taken_0x11fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE90u;
        // 0x11fe94: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe90) {
            ctx->pc = 0x11FEBCu;
            goto label_11febc;
        }
    }
    ctx->pc = 0x11FE98u;
    // 0x11fe98: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FE98u;
    {
        const bool branch_taken_0x11fe98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE98u;
        // 0x11fe9c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe98) {
            ctx->pc = 0x11FEBCu;
            goto label_11febc;
        }
    }
    ctx->pc = 0x11FEA0u;
    // 0x11fea0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x11fea4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11fea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fea8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x11fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11feac: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11feacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11feb0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11feb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11feb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11feb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11feb8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11febc:
    // 0x11febc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11febcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11fec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fec8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fecc: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x11FECCu;
    SET_GPR_U32(ctx, 31, 0x11FED4u);
    ctx->pc = 0x11FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FECCu;
    // 0x11fed0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x11FECCu, 0x11FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FED4u;
label_11fed4:
    // 0x11fed4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11FED4u;
    SET_GPR_U32(ctx, 31, 0x11FEDCu);
    ctx->pc = 0x11FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FED4u;
    // 0x11fed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11FED4u, 0x11FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEDCu;
label_11fedc:
    // 0x11fedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fee0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11FEE0u;
    SET_GPR_U32(ctx, 31, 0x11FEE8u);
    ctx->pc = 0x11FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEE0u;
    // 0x11fee4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11FEE0u, 0x11FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEE8u;
label_11fee8:
    // 0x11fee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11fee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11feec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11FEECu;
    SET_GPR_U32(ctx, 31, 0x11FEF4u);
    ctx->pc = 0x11FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FEECu;
    // 0x11fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11FEECu, 0x11FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEF4u;
label_11fef4:
    // 0x11fef4: 0x5220004e  beql        $s1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x11FEF4u;
    {
        const bool branch_taken_0x11fef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fef4) {
            ctx->pc = 0x11FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEF4u;
            // 0x11fef8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120030u;
            goto label_120030;
        }
    }
    ctx->pc = 0x11FEFCu;
    // 0x11fefc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11fefcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11ff00: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11ff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11ff04: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11FF04u;
    {
        const bool branch_taken_0x11ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF04u;
        // 0x11ff08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff04) {
            ctx->pc = 0x11FFB4u;
            goto label_11ffb4;
        }
    }
    ctx->pc = 0x11FF0Cu;
    // 0x11ff0c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11FF0Cu;
    SET_GPR_U32(ctx, 31, 0x11FF14u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11FF0Cu, 0x11FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF14u;
label_11ff14:
    // 0x11ff14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ff18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11ff1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11ff20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11FF20u;
    {
        const bool branch_taken_0x11ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ff20) {
            ctx->pc = 0x11FF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FF20u;
            // 0x11ff24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FF28u;
            goto label_11ff28;
        }
    }
    ctx->pc = 0x11FF28u;
label_11ff28:
    // 0x11ff28: 0x2810  mfhi        $a1
    ctx->pc = 0x11ff28u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x11ff2c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FF2Cu;
    {
        const bool branch_taken_0x11ff2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11ff2c) {
            ctx->pc = 0x11FF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FF2Cu;
            // 0x11ff30: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FF54u;
            goto label_11ff54;
        }
    }
    ctx->pc = 0x11FF34u;
    // 0x11ff34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FF34u;
    {
        const bool branch_taken_0x11ff34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF34u;
        // 0x11ff38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff34) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FF3Cu;
    // 0x11ff3c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FF3Cu;
    {
        const bool branch_taken_0x11ff3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ff3c) {
            ctx->pc = 0x11FF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FF3Cu;
            // 0x11ff40: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FF60u;
            goto label_11ff60;
        }
    }
    ctx->pc = 0x11FF44u;
label_11ff44:
    // 0x11ff44: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11ff48: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x11ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x11ff4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11FF4Cu;
    {
        const bool branch_taken_0x11ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF4Cu;
        // 0x11ff50: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff4c) {
            ctx->pc = 0x11FF68u;
            goto label_11ff68;
        }
    }
    ctx->pc = 0x11FF54u;
label_11ff54:
    // 0x11ff54: 0x8c4304dc  lw          $v1, 0x4DC($v0)
    ctx->pc = 0x11ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
    // 0x11ff58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FF58u;
    {
        const bool branch_taken_0x11ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF58u;
        // 0x11ff5c: 0x8c4404e0  lw          $a0, 0x4E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff58) {
            ctx->pc = 0x11FF68u;
            goto label_11ff68;
        }
    }
    ctx->pc = 0x11FF60u;
label_11ff60:
    // 0x11ff60: 0x8c4304e4  lw          $v1, 0x4E4($v0)
    ctx->pc = 0x11ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x11ff64: 0x8c4404e8  lw          $a0, 0x4E8($v0)
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_11ff68:
    // 0x11ff68: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ff6c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ff70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11ff70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ff74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ff74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ff7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ff84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ff84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ff88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11FF88u;
    SET_GPR_U32(ctx, 31, 0x11FF90u);
    ctx->pc = 0x11FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF88u;
    // 0x11ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11FF88u, 0x11FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF90u;
label_11ff90:
    // 0x11ff90: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11FF90u;
    SET_GPR_U32(ctx, 31, 0x11FF98u);
    ctx->pc = 0x11FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF90u;
    // 0x11ff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11FF90u, 0x11FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF98u;
label_11ff98:
    // 0x11ff98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff9c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11FF9Cu;
    SET_GPR_U32(ctx, 31, 0x11FFA4u);
    ctx->pc = 0x11FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF9Cu;
    // 0x11ffa0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11FF9Cu, 0x11FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFA4u;
label_11ffa4:
    // 0x11ffa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ffa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ffa8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11FFA8u;
    SET_GPR_U32(ctx, 31, 0x11FFB0u);
    ctx->pc = 0x11FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFA8u;
    // 0x11ffac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11FFA8u, 0x11FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFB0u;
label_11ffb0:
    // 0x11ffb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ffb4:
    // 0x11ffb4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11FFB4u;
    SET_GPR_U32(ctx, 31, 0x11FFBCu);
    ctx->pc = 0x11FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFB4u;
    // 0x11ffb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11FFB4u, 0x11FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFBCu;
label_11ffbc:
    // 0x11ffbc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x11ffbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x11ffc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ffc4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11ffc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ffc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FFC8u;
    {
        const bool branch_taken_0x11ffc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFC8u;
        // 0x11ffcc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffc8) {
            ctx->pc = 0x11FFDCu;
            goto label_11ffdc;
        }
    }
    ctx->pc = 0x11FFD0u;
    // 0x11ffd0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x11ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x11ffd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FFD4u;
    {
        const bool branch_taken_0x11ffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD4u;
        // 0x11ffd8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffd4) {
            ctx->pc = 0x11FFE0u;
            goto label_11ffe0;
        }
    }
    ctx->pc = 0x11FFDCu;
label_11ffdc:
    // 0x11ffdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ffdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ffe0:
    // 0x11ffe0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FFE0u;
    {
        const bool branch_taken_0x11ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFE0u;
        // 0x11ffe4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffe0) {
            ctx->pc = 0x120004u;
            goto label_120004;
        }
    }
    ctx->pc = 0x11FFE8u;
    // 0x11ffe8: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x11ffe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x11ffec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ffecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fff0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11fff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fff4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x11fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fffc: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x11FFFCu;
    SET_GPR_U32(ctx, 31, 0x120004u);
    ctx->pc = 0x120000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFFCu;
    // 0x120000: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x11FFFCu, 0x120004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120004u;
label_120004:
    // 0x120004: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x120004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x120008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12000c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x12000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x120010: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x120014: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x120018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12001c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12001cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120024: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x120024u;
    SET_GPR_U32(ctx, 31, 0x12002Cu);
    ctx->pc = 0x120028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120024u;
    // 0x120028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x120024u, 0x12002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12002Cu;
label_12002c:
    // 0x12002c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x12002cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_120030:
    // 0x120030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x120034: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120034u;
    {
        const bool branch_taken_0x120034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120034u;
        // 0x120038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120034) {
            ctx->pc = 0x120060u;
            goto label_120060;
        }
    }
    ctx->pc = 0x12003Cu;
    // 0x12003c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x12003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x120040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120040u;
    {
        const bool branch_taken_0x120040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120040u;
        // 0x120044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120040) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x120048u;
    // 0x120048: 0xae0015b4  sw          $zero, 0x15B4($s0)
    ctx->pc = 0x120048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
    // 0x12004c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12004Cu;
    SET_GPR_U32(ctx, 31, 0x120054u);
    ctx->pc = 0x120050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12004Cu;
    // 0x120050: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12004Cu, 0x120054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120054u;
label_120054:
    // 0x120054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x120054u;
    {
        const bool branch_taken_0x120054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120054u;
        // 0x120058: 0x9602056a  lhu         $v0, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120054) {
            ctx->pc = 0x120068u;
            goto label_120068;
        }
    }
    ctx->pc = 0x12005Cu;
label_12005c:
    // 0x12005c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120060:
    // 0x120060: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x120060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x120064: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x120064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_120068:
    // 0x120068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12006c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x120070: 0x1c600150  bgtz        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x120070u;
    {
        const bool branch_taken_0x120070 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x120074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120070u;
        // 0x120074: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120070) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x120078u;
    // 0x120078: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12007c: 0x1220014d  beqz        $s1, . + 4 + (0x14D << 2)
    ctx->pc = 0x12007Cu;
    {
        const bool branch_taken_0x12007c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12007Cu;
        // 0x120080: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12007c) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x120084u;
    // 0x120084: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x120084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x120088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12008c: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x12008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120094: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120098: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x120098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12009c: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x12009Cu;
    SET_GPR_U32(ctx, 31, 0x1200A4u);
    ctx->pc = 0x1200A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12009Cu;
    // 0x1200a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x12009Cu, 0x1200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200A4u;
label_1200a4:
    // 0x1200a4: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1200A4u;
    {
        const bool branch_taken_0x1200a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1200a4) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x1200ACu;
label_1200ac:
    // 0x1200ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1200acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1200b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1200b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1200b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1200b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1200bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1200bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1200c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1200c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1200c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c8: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1200cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1200ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1200d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1200d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1200d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1200d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200d8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1200d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1200dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1200dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1200e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1200e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1200e4: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1200E4u;
    SET_GPR_U32(ctx, 31, 0x1200ECu);
    ctx->pc = 0x1200E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200E4u;
    // 0x1200e8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1200E4u, 0x1200ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200ECu;
label_1200ec:
    // 0x1200ec: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1200ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1200f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1200F0u;
    {
        const bool branch_taken_0x1200f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200F0u;
        // 0x1200f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200f0) {
            ctx->pc = 0x120110u;
            goto label_120110;
        }
    }
    ctx->pc = 0x1200F8u;
    // 0x1200f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1200f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200fc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1200fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x120100: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120100u;
    SET_GPR_U32(ctx, 31, 0x120108u);
    ctx->pc = 0x120104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120100u;
    // 0x120104: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120100u, 0x120108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120108u;
label_120108:
    // 0x120108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120108u;
    {
        const bool branch_taken_0x120108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120108u;
        // 0x12010c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120108) {
            ctx->pc = 0x120124u;
            goto label_120124;
        }
    }
    ctx->pc = 0x120110u;
label_120110:
    // 0x120110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120114: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x120114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x120118: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120118u;
    SET_GPR_U32(ctx, 31, 0x120120u);
    ctx->pc = 0x12011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120118u;
    // 0x12011c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120118u, 0x120120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120120u;
label_120120:
    // 0x120120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_120124:
    // 0x120124: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x120124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x120128: 0xae0015b8  sw          $zero, 0x15B8($s0)
    ctx->pc = 0x120128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5560), GPR_U32(ctx, 0));
    // 0x12012c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120130: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x120130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x120134: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x120134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x120138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12013c: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x12013cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x120140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x120140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120144: 0xc042902  jal         func_10A408
    ctx->pc = 0x120144u;
    SET_GPR_U32(ctx, 31, 0x12014Cu);
    ctx->pc = 0x120148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120144u;
    // 0x120148: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x120144u, 0x12014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12014Cu;
label_12014c:
    // 0x12014c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120150: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x120150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x120154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120158: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x120158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12015c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12015cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120160: 0xc042908  jal         func_10A420
    ctx->pc = 0x120160u;
    SET_GPR_U32(ctx, 31, 0x120168u);
    ctx->pc = 0x120164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120160u;
    // 0x120164: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x120160u, 0x120168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120168u;
label_120168:
    // 0x120168: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x120168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12016c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120170: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_120174:
    // 0x120174: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x120178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12017c: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x12017Cu;
    SET_GPR_U32(ctx, 31, 0x120184u);
    ctx->pc = 0x120180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12017Cu;
    // 0x120180: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x12017Cu, 0x120184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120184u;
label_120184:
    // 0x120184: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x120188: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x120188u;
    {
        const bool branch_taken_0x120188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120188u;
        // 0x12018c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120188) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x120190u;
    // 0x120190: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x120190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_120194:
    // 0x120194: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x120198: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x120198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12019c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12019cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1201a0: 0xc04939a  jal         func_124E68
    ctx->pc = 0x1201A0u;
    SET_GPR_U32(ctx, 31, 0x1201A8u);
    ctx->pc = 0x1201A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201A0u;
    // 0x1201a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x1201A0u, 0x1201A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201A8u;
label_1201a8:
    // 0x1201a8: 0x8e0215b8  lw          $v0, 0x15B8($s0)
    ctx->pc = 0x1201a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5560)));
    // 0x1201ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1201ACu;
    {
        const bool branch_taken_0x1201ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201ACu;
        // 0x1201b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201ac) {
            ctx->pc = 0x1201B8u;
            goto label_1201b8;
        }
    }
    ctx->pc = 0x1201B4u;
    // 0x1201b4: 0xae0215b8  sw          $v0, 0x15B8($s0)
    ctx->pc = 0x1201b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5560), GPR_U32(ctx, 2));
label_1201b8:
    // 0x1201b8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x1201b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1201bc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1201bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1201c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1201c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1201c4: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x1201c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x1201c8: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x1201c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x1201cc: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1201ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1201d0: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1201D0u;
    {
        const bool branch_taken_0x1201d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1201d0) {
            ctx->pc = 0x1201D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1201D0u;
            // 0x1201d4: 0x8e0215b8  lw          $v0, 0x15B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1202A4u;
            goto label_1202a4;
        }
    }
    ctx->pc = 0x1201D8u;
    // 0x1201d8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1201d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1201dc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1201dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1201e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1201E0u;
    {
        const bool branch_taken_0x1201e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201E0u;
        // 0x1201e4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201e0) {
            ctx->pc = 0x120200u;
            goto label_120200;
        }
    }
    ctx->pc = 0x1201E8u;
    // 0x1201e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1201e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1201ec: 0x2442c6d0  addiu       $v0, $v0, -0x3930
    ctx->pc = 0x1201ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952656));
    // 0x1201f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1201f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1201f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1201f8: 0x800008  jr          $a0
    ctx->pc = 0x1201F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120200u: goto label_120200;
            case 0x120208u: goto label_120208;
            case 0x120210u: goto label_120210;
            case 0x120218u: goto label_120218;
            case 0x120220u: goto label_120220;
            case 0x120228u: goto label_120228;
            case 0x120230u: goto label_120230;
            case 0x120238u: goto label_120238;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1201F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x120200u;
label_120200:
    // 0x120200: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x120200u;
    {
        const bool branch_taken_0x120200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120200u;
        // 0x120204: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120200) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120208u;
label_120208:
    // 0x120208: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x120208u;
    {
        const bool branch_taken_0x120208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120208u;
        // 0x12020c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120208) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120210u;
label_120210:
    // 0x120210: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x120210u;
    {
        const bool branch_taken_0x120210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120210u;
        // 0x120214: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120210) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120218u;
label_120218:
    // 0x120218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x120218u;
    {
        const bool branch_taken_0x120218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120218u;
        // 0x12021c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120218) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120220u;
label_120220:
    // 0x120220: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120220u;
    {
        const bool branch_taken_0x120220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120220u;
        // 0x120224: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120220) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120228u;
label_120228:
    // 0x120228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x120228u;
    {
        const bool branch_taken_0x120228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120228) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120230u;
label_120230:
    // 0x120230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120230u;
    {
        const bool branch_taken_0x120230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120230u;
        // 0x120234: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120230) {
            ctx->pc = 0x12023Cu;
            goto label_12023c;
        }
    }
    ctx->pc = 0x120238u;
label_120238:
    // 0x120238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x120238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12023c:
    // 0x12023c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x12023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x120240: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x120240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x120244: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x120244u;
    {
        const bool branch_taken_0x120244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120244) {
            ctx->pc = 0x120248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120244u;
            // 0x120248: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12025Cu;
            goto label_12025c;
        }
    }
    ctx->pc = 0x12024Cu;
    // 0x12024c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x12024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x120250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120254: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x120254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x120258: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_12025c:
    // 0x12025c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x12025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x120260: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120260u;
    {
        const bool branch_taken_0x120260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120260u;
        // 0x120264: 0x8e0215b4  lw          $v0, 0x15B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120260) {
            ctx->pc = 0x120274u;
            goto label_120274;
        }
    }
    ctx->pc = 0x120268u;
    // 0x120268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12026c: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x12026cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x120270: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x120270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_120274:
    // 0x120274: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x120274u;
    {
        const bool branch_taken_0x120274 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x120274) {
            ctx->pc = 0x120278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120274u;
            // 0x120278: 0xae0015b4  sw          $zero, 0x15B4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12027Cu;
            goto label_12027c;
        }
    }
    ctx->pc = 0x12027Cu;
label_12027c:
    // 0x12027c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x12027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x120280: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x120280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x120284: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120284u;
    {
        const bool branch_taken_0x120284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120284u;
        // 0x120288: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120284) {
            ctx->pc = 0x120298u;
            goto label_120298;
        }
    }
    ctx->pc = 0x12028Cu;
    // 0x12028c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120290: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x120290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x120294: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x120294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_120298:
    // 0x120298: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x120298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x12029c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12029Cu;
    {
        const bool branch_taken_0x12029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1202A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12029Cu;
        // 0x1202a0: 0xae0215b8  sw          $v0, 0x15B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12029c) {
            ctx->pc = 0x1202C8u;
            goto label_1202c8;
        }
    }
    ctx->pc = 0x1202A4u;
label_1202a4:
    // 0x1202a4: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1202A4u;
    {
        const bool branch_taken_0x1202a4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1202a4) {
            ctx->pc = 0x1202A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1202A4u;
            // 0x1202a8: 0x8e0315b4  lw          $v1, 0x15B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1202CCu;
            goto label_1202cc;
        }
    }
    ctx->pc = 0x1202ACu;
    // 0x1202ac: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x1202acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1202b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1202b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1202b4: 0xae0315b8  sw          $v1, 0x15B8($s0)
    ctx->pc = 0x1202b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5560), GPR_U32(ctx, 3));
    // 0x1202b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1202bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1202BCu;
    {
        const bool branch_taken_0x1202bc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1202C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202BCu;
        // 0x1202c0: 0xae0215b4  sw          $v0, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202bc) {
            ctx->pc = 0x1202C8u;
            goto label_1202c8;
        }
    }
    ctx->pc = 0x1202C4u;
    // 0x1202c4: 0xae0015b4  sw          $zero, 0x15B4($s0)
    ctx->pc = 0x1202c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
label_1202c8:
    // 0x1202c8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1202c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1202cc:
    // 0x1202cc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1202ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1202d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1202D0u;
    {
        const bool branch_taken_0x1202d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202D0u;
        // 0x1202d4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202d0) {
            ctx->pc = 0x1202F0u;
            goto label_1202f0;
        }
    }
    ctx->pc = 0x1202D8u;
    // 0x1202d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1202dc: 0x2442c6f0  addiu       $v0, $v0, -0x3910
    ctx->pc = 0x1202dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952688));
    // 0x1202e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1202e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1202e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1202e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1202e8: 0x800008  jr          $a0
    ctx->pc = 0x1202E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1202F0u: goto label_1202f0;
            case 0x120300u: goto label_120300;
            case 0x120310u: goto label_120310;
            case 0x120320u: goto label_120320;
            case 0x120330u: goto label_120330;
            case 0x120340u: goto label_120340;
            case 0x120350u: goto label_120350;
            case 0x120360u: goto label_120360;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1202F0u;
label_1202f0:
    // 0x1202f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1202f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1202f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1202f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1202f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1202F8u;
    {
        const bool branch_taken_0x1202f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1202FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202F8u;
        // 0x1202fc: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202f8) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120300u;
label_120300:
    // 0x120300: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x120300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x120304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120308: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x120308u;
    {
        const bool branch_taken_0x120308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120308u;
        // 0x12030c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120308) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120310u;
label_120310:
    // 0x120310: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x120314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120318: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x120318u;
    {
        const bool branch_taken_0x120318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120318u;
        // 0x12031c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120318) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120320u;
label_120320:
    // 0x120320: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x120324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120328: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x120328u;
    {
        const bool branch_taken_0x120328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120328u;
        // 0x12032c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120328) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120330u;
label_120330:
    // 0x120330: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x120334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x120338u;
    {
        const bool branch_taken_0x120338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120338u;
        // 0x12033c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120338) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120340u;
label_120340:
    // 0x120340: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x120340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x120344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120348: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x120348u;
    {
        const bool branch_taken_0x120348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120348u;
        // 0x12034c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120348) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120350u;
label_120350:
    // 0x120350: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x120350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x120354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x120358u;
    {
        const bool branch_taken_0x120358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120358u;
        // 0x12035c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120358) {
            ctx->pc = 0x120370u;
            goto label_120370;
        }
    }
    ctx->pc = 0x120360u;
label_120360:
    // 0x120360: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x120364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120368: 0x0  nop
    ctx->pc = 0x120368u;
    // NOP
    // 0x12036c: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x12036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
label_120370:
    // 0x120370: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x120370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x120374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120378: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x120378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12037c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x12037Cu;
    SET_GPR_U32(ctx, 31, 0x120384u);
    ctx->pc = 0x120380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12037Cu;
    // 0x120380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x12037Cu, 0x120384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120384u;
label_120384:
    // 0x120384: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x120384u;
    SET_GPR_U32(ctx, 31, 0x12038Cu);
    ctx->pc = 0x120388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120384u;
    // 0x120388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x120384u, 0x12038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12038Cu;
label_12038c:
    // 0x12038c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12038Cu;
    SET_GPR_U32(ctx, 31, 0x120394u);
    ctx->pc = 0x120390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12038Cu;
    // 0x120390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12038Cu, 0x120394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120394u;
label_120394:
    // 0x120394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120398: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x120398u;
    SET_GPR_U32(ctx, 31, 0x1203A0u);
    ctx->pc = 0x12039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120398u;
    // 0x12039c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x120398u, 0x1203A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203A0u;
label_1203a0:
    // 0x1203a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1203a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1203A4u;
    SET_GPR_U32(ctx, 31, 0x1203ACu);
    ctx->pc = 0x1203A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203A4u;
    // 0x1203a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1203A4u, 0x1203ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203ACu;
label_1203ac:
    // 0x1203ac: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x1203acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1203b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1203b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1203b4: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1203B4u;
    {
        const bool branch_taken_0x1203b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203B4u;
        // 0x1203b8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203b4) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x1203BCu;
    // 0x1203bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1203bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1203c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1203c4: 0x24060123  addiu       $a2, $zero, 0x123
    ctx->pc = 0x1203c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1203c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1203c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1203ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1203d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1203d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203d8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1203D8u;
    SET_GPR_U32(ctx, 31, 0x1203E0u);
    ctx->pc = 0x1203DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203D8u;
    // 0x1203dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1203D8u, 0x1203E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203E0u;
label_1203e0:
    // 0x1203e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1203e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1203e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1203e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1203e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1203e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1203ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1203ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1203f0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1203F0u;
    SET_GPR_U32(ctx, 31, 0x1203F8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1203F0u, 0x1203F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203F8u;
label_1203f8:
    // 0x1203f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1203f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1203fc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1203FCu;
    SET_GPR_U32(ctx, 31, 0x120404u);
    ctx->pc = 0x120400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203FCu;
    // 0x120400: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1203FCu, 0x120404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120404u;
label_120404:
    // 0x120404: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120408: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x120408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x12040c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12040cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x120410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120414: 0x0  nop
    ctx->pc = 0x120414u;
    // NOP
    // 0x120418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x120418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12041c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x12041Cu;
    SET_GPR_U32(ctx, 31, 0x120424u);
    ctx->pc = 0x120420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12041Cu;
    // 0x120420: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x12041Cu, 0x120424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120424u;
label_120424:
    // 0x120424: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120428: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x120428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x12042c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12042cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x120430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120438: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x120438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x12043c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x120440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x120444: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x120444u;
    SET_GPR_U32(ctx, 31, 0x12044Cu);
    ctx->pc = 0x120448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120444u;
    // 0x120448: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x120444u, 0x12044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12044Cu;
label_12044c:
    // 0x12044c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12044cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x120450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x120450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120454: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x120454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x120458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12045c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x12045cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120460: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x120460u;
    SET_GPR_U32(ctx, 31, 0x120468u);
    ctx->pc = 0x120464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120460u;
    // 0x120464: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x120460u, 0x120468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120468u;
label_120468:
    // 0x120468: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x120468u;
    {
        const bool branch_taken_0x120468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120468) {
            ctx->pc = 0x1205B4u;
            goto label_1205b4;
        }
    }
    ctx->pc = 0x120470u;
label_120470:
    // 0x120470: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x120474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120478: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x120478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x12047c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12047cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x120480: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120488: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x12048c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12048cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120490: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12049c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12049cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204a0: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x1204a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1204a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1204a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1204a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1204a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1204ac: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1204ACu;
    SET_GPR_U32(ctx, 31, 0x1204B4u);
    ctx->pc = 0x1204B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204ACu;
    // 0x1204b0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1204ACu, 0x1204B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204B4u;
label_1204b4:
    // 0x1204b4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1204b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1204b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1204B8u;
    {
        const bool branch_taken_0x1204b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1204BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204B8u;
        // 0x1204bc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204b8) {
            ctx->pc = 0x1204CCu;
            goto label_1204cc;
        }
    }
    ctx->pc = 0x1204C0u;
    // 0x1204c0: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x1204c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1204C4u;
    {
        const bool branch_taken_0x1204c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1204C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204C4u;
        // 0x1204c8: 0x8c4406b0  lw          $a0, 0x6B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204c4) {
            ctx->pc = 0x1204D4u;
            goto label_1204d4;
        }
    }
    ctx->pc = 0x1204CCu;
label_1204cc:
    // 0x1204cc: 0x8c430810  lw          $v1, 0x810($v0)
    ctx->pc = 0x1204ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x1204d0: 0x8c440814  lw          $a0, 0x814($v0)
    ctx->pc = 0x1204d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2068)));
label_1204d4:
    // 0x1204d4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1204d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1204d8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1204d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1204dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1204dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1204e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1204e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1204e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1204e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1204e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1204ECu;
    SET_GPR_U32(ctx, 31, 0x1204F4u);
    ctx->pc = 0x1204F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204ECu;
    // 0x1204f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1204ECu, 0x1204F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204F4u;
label_1204f4:
    // 0x1204f4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1204f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1204f8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1204f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1204fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1204fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x120500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120508: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x120508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x12050c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x12050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x120510: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_120514:
    // 0x120514: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x120514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x120518: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120518u;
    {
        const bool branch_taken_0x120518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120518u;
        // 0x12051c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120518) {
            ctx->pc = 0x120544u;
            goto label_120544;
        }
    }
    ctx->pc = 0x120520u;
    // 0x120520: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x120520u;
    {
        const bool branch_taken_0x120520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120520u;
        // 0x120524: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120520) {
            ctx->pc = 0x120544u;
            goto label_120544;
        }
    }
    ctx->pc = 0x120528u;
    // 0x120528: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x120528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x12052c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x12052cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x120530: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x120530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x120534: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120538: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x120538u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12053c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12053cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x120540: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_120544:
    // 0x120544: 0x8602056c  lh          $v0, 0x56C($s0)
    ctx->pc = 0x120544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x120548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120548u;
    {
        const bool branch_taken_0x120548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120548) {
            ctx->pc = 0x120560u;
            goto label_120560;
        }
    }
    ctx->pc = 0x120550u;
    // 0x120550: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x120554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120558: 0x0  nop
    ctx->pc = 0x120558u;
    // NOP
    // 0x12055c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x12055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_120560:
    // 0x120560: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x120560u;
    SET_GPR_U32(ctx, 31, 0x120568u);
    ctx->pc = 0x120564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120560u;
    // 0x120564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x120560u, 0x120568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120568u;
label_120568:
    // 0x120568: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120568u;
    SET_GPR_U32(ctx, 31, 0x120570u);
    ctx->pc = 0x12056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120568u;
    // 0x12056c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120568u, 0x120570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120570u;
label_120570:
    // 0x120570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120570u;
    {
        const bool branch_taken_0x120570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120570u;
        // 0x120574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120570) {
            ctx->pc = 0x120594u;
            goto label_120594;
        }
    }
    ctx->pc = 0x120578u;
    // 0x120578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12057c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12057Cu;
    SET_GPR_U32(ctx, 31, 0x120584u);
    ctx->pc = 0x120580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12057Cu;
    // 0x120580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12057Cu, 0x120584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120584u;
label_120584:
    // 0x120584: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x120584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x120588: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x120588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x12058c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x12058cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x120590: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x120590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_120594:
    // 0x120594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120598: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12059c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1205A0u;
    SET_GPR_U32(ctx, 31, 0x1205A8u);
    ctx->pc = 0x1205A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205A0u;
    // 0x1205a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1205A0u, 0x1205A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205A8u;
label_1205a8:
    // 0x1205a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1205a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1205ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1205ACu;
    SET_GPR_U32(ctx, 31, 0x1205B4u);
    ctx->pc = 0x1205B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205ACu;
    // 0x1205b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1205ACu, 0x1205B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205B4u;
label_1205b4:
    // 0x1205b4: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1205B4u;
    SET_GPR_U32(ctx, 31, 0x1205BCu);
    ctx->pc = 0x1205B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205B4u;
    // 0x1205b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1205B4u, 0x1205BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205BCu;
label_1205bc:
    // 0x1205bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1205bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1205c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1205c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1205c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1205c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1205c8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1205c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1205cc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1205ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1205d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1205D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1205D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205D0u;
        // 0x1205d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1205D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1205D8u;
}
