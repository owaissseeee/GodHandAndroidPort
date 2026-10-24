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

// Function: func_001B0340
// Address: 0x1b0340 - 0x1b0468
void func_001B0340_0x1b0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0340_0x1b0340");
#endif

    switch (ctx->pc) {
        case 0x1b0358u: goto label_1b0358;
        case 0x1b0384u: goto label_1b0384;
        case 0x1b03c0u: goto label_1b03c0;
        case 0x1b0400u: goto label_1b0400;
        case 0x1b0438u: goto label_1b0438;
        default: break;
    }

    ctx->pc = 0x1b0340u;

    // 0x1b0340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0344: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b0344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b0348: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b034c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0350: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B0350u;
    SET_GPR_U32(ctx, 31, 0x1B0358u);
    ctx->pc = 0x1B0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0350u;
    // 0x1b0354: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B0350u, 0x1B0358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0358u;
label_1b0358:
    // 0x1b0358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b035c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b035cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0360: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b0364: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1b0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1b0368: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b036c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b0370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0374: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b0374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b0378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b037c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1B037Cu;
    SET_GPR_U32(ctx, 31, 0x1B0384u);
    ctx->pc = 0x1B0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B037Cu;
    // 0x1b0380: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B037Cu, 0x1B0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0384u;
label_1b0384:
    // 0x1b0384: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0384u;
    {
        const bool branch_taken_0x1b0384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0384u;
        // 0x1b0388: 0xae220600  sw          $v0, 0x600($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0384) {
            ctx->pc = 0x1B03D0u;
            goto label_1b03d0;
        }
    }
    ctx->pc = 0x1B038Cu;
    // 0x1b038c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b038cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b0390: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0390u;
    {
        const bool branch_taken_0x1b0390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0390u;
        // 0x1b0394: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0390) {
            ctx->pc = 0x1B03A4u;
            goto label_1b03a4;
        }
    }
    ctx->pc = 0x1B0398u;
    // 0x1b0398: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b039c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B039Cu;
    {
        const bool branch_taken_0x1b039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B039Cu;
        // 0x1b03a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b039c) {
            ctx->pc = 0x1B03A8u;
            goto label_1b03a8;
        }
    }
    ctx->pc = 0x1B03A4u;
label_1b03a4:
    // 0x1b03a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b03a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b03a8:
    // 0x1b03a8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b03ac: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1b03acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b03b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b03b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b03b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b03b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b03b8: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B03B8u;
    SET_GPR_U32(ctx, 31, 0x1B03C0u);
    ctx->pc = 0x1B03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03B8u;
    // 0x1b03bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B03B8u, 0x1B03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03C0u;
label_1b03c0:
    // 0x1b03c0: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1b03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b03c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b03c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b03c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b03cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b03d0:
    // 0x1b03d0: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1b03d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1b03d4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b03d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b03d8: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x1b03d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x1b03dc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1b03e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b03e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b03e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b03e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b03e8: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x1b03e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b03ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b03ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b03f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03f4: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x1b03f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b03f8: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x1B03F8u;
    SET_GPR_U32(ctx, 31, 0x1B0400u);
    ctx->pc = 0x1B03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03F8u;
    // 0x1b03fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x1B03F8u, 0x1B0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0400u;
label_1b0400:
    // 0x1b0400: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b0400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b0404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0408: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b040c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b040cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1b0410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0414: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x1b0414u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0418: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b0418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b041c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0428: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1b0428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1b042c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1b042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1b0430: 0xc04d220  jal         func_134880
    ctx->pc = 0x1B0430u;
    SET_GPR_U32(ctx, 31, 0x1B0438u);
    ctx->pc = 0x1B0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0430u;
    // 0x1b0434: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1B0430u, 0x1B0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0438u;
label_1b0438:
    // 0x1b0438: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b0438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b043c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0440: 0xa6200622  sh          $zero, 0x622($s1)
    ctx->pc = 0x1b0440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1570), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0444: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1b0444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1b0448: 0xa2200624  sb          $zero, 0x624($s1)
    ctx->pc = 0x1b0448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1572), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b044c: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1b0450: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b0450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0454: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b0454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b045c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B045Cu;
        // 0x1b0460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B045Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0464u;
    // 0x1b0464: 0x0  nop
    ctx->pc = 0x1b0464u;
    // NOP
    ctx->pc = 0x1b0468u;
}
