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

// Function: func_001AE928
// Address: 0x1ae928 - 0x1aedb0
void func_001AE928_0x1ae928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE928_0x1ae928");
#endif

    switch (ctx->pc) {
        case 0x1ae944u: goto label_1ae944;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aec84u: goto label_1aec84;
        default: break;
    }

    ctx->pc = 0x1ae928u;

    // 0x1ae928: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae92c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ae92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ae930: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1ae930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ae934: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ae934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ae938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ae93c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1AE93Cu;
    SET_GPR_U32(ctx, 31, 0x1AE944u);
    ctx->pc = 0x1AE940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE93Cu;
    // 0x1ae940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1AE93Cu, 0x1AE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE944u;
label_1ae944:
    // 0x1ae944: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ae944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ae948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ae94c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ae950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae954: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1ae958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ae958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ae95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae960: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1ae964: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ae964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ae968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae96c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1ae96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ae970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae974: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ae978: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1AE978u;
    SET_GPR_U32(ctx, 31, 0x1AE980u);
    ctx->pc = 0x1AE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE978u;
    // 0x1ae97c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1AE978u, 0x1AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE980u;
label_1ae980:
    // 0x1ae980: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AE980u;
    {
        const bool branch_taken_0x1ae980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE980u;
        // 0x1ae984: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae980) {
            ctx->pc = 0x1AE9F0u;
            goto label_1ae9f0;
        }
    }
    ctx->pc = 0x1AE988u;
    // 0x1ae988: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1ae988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ae98c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE98Cu;
    {
        const bool branch_taken_0x1ae98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE98Cu;
        // 0x1ae990: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae98c) {
            ctx->pc = 0x1AE9A0u;
            goto label_1ae9a0;
        }
    }
    ctx->pc = 0x1AE994u;
    // 0x1ae994: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ae994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ae998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE998u;
    {
        const bool branch_taken_0x1ae998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE998u;
        // 0x1ae99c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae998) {
            ctx->pc = 0x1AE9A4u;
            goto label_1ae9a4;
        }
    }
    ctx->pc = 0x1AE9A0u;
label_1ae9a0:
    // 0x1ae9a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9a4:
    // 0x1ae9a4: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1ae9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1ae9a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ae9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ae9ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ae9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ae9b0: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x1ae9b4: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1ae9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1ae9b8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1ae9bc: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x1ae9bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x1ae9c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ae9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae9c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ae9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ae9c8: 0x24e77b00  addiu       $a3, $a3, 0x7B00
    ctx->pc = 0x1ae9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31488));
    // 0x1ae9cc: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1AE9CCu;
    SET_GPR_U32(ctx, 31, 0x1AE9D4u);
    ctx->pc = 0x1AE9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9CCu;
    // 0x1ae9d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1AE9CCu, 0x1AE9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9D4u;
label_1ae9d4:
    // 0x1ae9d4: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1ae9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1ae9d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae9e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ae9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ae9e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ae9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ae9e8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AE9E8u;
    SET_GPR_U32(ctx, 31, 0x1AE9F0u);
    ctx->pc = 0x1AE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9E8u;
    // 0x1ae9ec: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AE9E8u, 0x1AE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9F0u;
label_1ae9f0:
    // 0x1ae9f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1ae9f4: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1ae9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1ae9f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ae9fc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1ae9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1aea00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEA00u;
    {
        const bool branch_taken_0x1aea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA00u;
        // 0x1aea04: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea00) {
            ctx->pc = 0x1AEA20u;
            goto label_1aea20;
        }
    }
    ctx->pc = 0x1AEA08u;
    // 0x1aea08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aea08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aea0c: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x1aea10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aea14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aea18: 0x800008  jr          $a0
    ctx->pc = 0x1AEA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEA20u: goto label_1aea20;
            case 0x1AEA30u: goto label_1aea30;
            case 0x1AEA44u: goto label_1aea44;
            case 0x1AEA58u: goto label_1aea58;
            case 0x1AEA68u: goto label_1aea68;
            case 0x1AEA7Cu: goto label_1aea7c;
            case 0x1AEA90u: goto label_1aea90;
            case 0x1AEAA0u: goto label_1aeaa0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA20u;
label_1aea20:
    // 0x1aea20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aea24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea28: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1AEA28u;
    {
        const bool branch_taken_0x1aea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea28) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA30u;
label_1aea30:
    // 0x1aea30: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1aea30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1aea34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aea34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aea38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea3c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1AEA3Cu;
    {
        const bool branch_taken_0x1aea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea3c) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA44u;
label_1aea44:
    // 0x1aea44: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1aea48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aea4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AEA50u;
    {
        const bool branch_taken_0x1aea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea50) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA58u;
label_1aea58:
    // 0x1aea58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1aea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1aea5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AEA60u;
    {
        const bool branch_taken_0x1aea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea60) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA68u;
label_1aea68:
    // 0x1aea68: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x1aea6c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1aea6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1aea70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AEA74u;
    {
        const bool branch_taken_0x1aea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea74) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA7Cu;
label_1aea7c:
    // 0x1aea7c: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x1aea80: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aea80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aea84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEA88u;
    {
        const bool branch_taken_0x1aea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea88) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA90u;
label_1aea90:
    // 0x1aea90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1aea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1aea94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aea98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEA98u;
    {
        const bool branch_taken_0x1aea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea98) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEAA0u;
label_1aeaa0:
    // 0x1aeaa0: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
    // 0x1aeaa4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1aeaa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1aeaa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aeaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aeaac:
    // 0x1aeaac: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x1aeab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aeab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aeab4: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x1AEAB4u;
    SET_GPR_U32(ctx, 31, 0x1AEABCu);
    ctx->pc = 0x1AEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAB4u;
    // 0x1aeab8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x1AEAB4u, 0x1AEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEABCu;
label_1aeabc:
    // 0x1aeabc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aeabcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeac0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1aeac4: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1aeac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aeac8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1aeacc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1aeaccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aead0: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1aead0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aead4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1aead8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1aeadc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1aeae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aeae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aeae4: 0x24512fc0  addiu       $s1, $v0, 0x2FC0
    ctx->pc = 0x1aeae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x1aeae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aeae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aeaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaf0: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x1AEAF0u;
    SET_GPR_U32(ctx, 31, 0x1AEAF8u);
    ctx->pc = 0x1AEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAF0u;
    // 0x1aeaf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x1AEAF0u, 0x1AEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAF8u;
label_1aeaf8:
    // 0x1aeaf8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aeafc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEAFCu;
    {
        const bool branch_taken_0x1aeafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAFCu;
        // 0x1aeb00: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeafc) {
            ctx->pc = 0x1AEB10u;
            goto label_1aeb10;
        }
    }
    ctx->pc = 0x1AEB04u;
    // 0x1aeb04: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aeb08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEB08u;
    {
        const bool branch_taken_0x1aeb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB08u;
        // 0x1aeb0c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb08) {
            ctx->pc = 0x1AEB14u;
            goto label_1aeb14;
        }
    }
    ctx->pc = 0x1AEB10u;
label_1aeb10:
    // 0x1aeb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb14:
    // 0x1aeb14: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1aeb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aeb18: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aeb1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aeb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aeb20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aeb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aeb24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1aeb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb28: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1aeb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1aeb2c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1aeb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1aeb30: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1aeb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1aeb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aeb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1aeb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1aeb3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aeb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aeb40: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1aeb44: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1aeb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1aeb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aeb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb4c: 0xc04d220  jal         func_134880
    ctx->pc = 0x1AEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB54u);
    ctx->pc = 0x1AEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB4Cu;
    // 0x1aeb50: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1AEB4Cu, 0x1AEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB54u;
label_1aeb54:
    // 0x1aeb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb5c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB64u);
    ctx->pc = 0x1AEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB5Cu;
    // 0x1aeb60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AEB5Cu, 0x1AEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB64u;
label_1aeb64:
    // 0x1aeb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeb6c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB74u);
    ctx->pc = 0x1AEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB6Cu;
    // 0x1aeb70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AEB6Cu, 0x1AEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB74u;
label_1aeb74:
    // 0x1aeb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aeb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aeb7c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AEB7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB84u);
    ctx->pc = 0x1AEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB7Cu;
    // 0x1aeb80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AEB7Cu, 0x1AEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB84u;
label_1aeb84:
    // 0x1aeb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aeb8c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB94u);
    ctx->pc = 0x1AEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB8Cu;
    // 0x1aeb90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AEB8Cu, 0x1AEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB94u;
label_1aeb94:
    // 0x1aeb94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1aeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1aeb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb9c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEBA4u);
    ctx->pc = 0x1AEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB9Cu;
    // 0x1aeba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AEB9Cu, 0x1AEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBA4u;
label_1aeba4:
    // 0x1aeba4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aeba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aeba8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aebac: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AEBACu;
    {
        const bool branch_taken_0x1aebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1aebac) {
            ctx->pc = 0x1AEBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEBACu;
            // 0x1aebb0: 0x8e0205b8  lw          $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEC6Cu;
            goto label_1aec6c;
        }
    }
    ctx->pc = 0x1AEBB4u;
    // 0x1aebb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aebb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1aebb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aebbc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aebbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1aebc0:
    // 0x1aebc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebc4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1aebc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1aebc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEBC8u;
    {
        const bool branch_taken_0x1aebc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC8u;
        // 0x1aebcc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebc8) {
            ctx->pc = 0x1AEBD8u;
            goto label_1aebd8;
        }
    }
    ctx->pc = 0x1AEBD0u;
    // 0x1aebd0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1aebd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aebd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aebd8:
    // 0x1aebd8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1aebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1aebdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEBDCu;
    {
        const bool branch_taken_0x1aebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBDCu;
        // 0x1aebe0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebdc) {
            ctx->pc = 0x1AEBF4u;
            goto label_1aebf4;
        }
    }
    ctx->pc = 0x1AEBE4u;
    // 0x1aebe4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aebe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aebec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEBECu;
    {
        const bool branch_taken_0x1aebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBECu;
        // 0x1aebf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebec) {
            ctx->pc = 0x1AEBF8u;
            goto label_1aebf8;
        }
    }
    ctx->pc = 0x1AEBF4u;
label_1aebf4:
    // 0x1aebf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aebf8:
    // 0x1aebf8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1aebfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aebfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec00: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1aec00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1aec04: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1aec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1aec08: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1aec08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1aec0c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aec0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aec10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC10u;
    {
        const bool branch_taken_0x1aec10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC10u;
        // 0x1aec14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec10) {
            ctx->pc = 0x1AEC20u;
            goto label_1aec20;
        }
    }
    ctx->pc = 0x1AEC18u;
    // 0x1aec18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1aec18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aec1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aec20:
    // 0x1aec20: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1aec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1aec24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEC24u;
    {
        const bool branch_taken_0x1aec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC24u;
        // 0x1aec28: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec24) {
            ctx->pc = 0x1AEC3Cu;
            goto label_1aec3c;
        }
    }
    ctx->pc = 0x1AEC2Cu;
    // 0x1aec2c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aec30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aec34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEC34u;
    {
        const bool branch_taken_0x1aec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC34u;
        // 0x1aec38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec34) {
            ctx->pc = 0x1AEC40u;
            goto label_1aec40;
        }
    }
    ctx->pc = 0x1AEC3Cu;
label_1aec3c:
    // 0x1aec3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aec40:
    // 0x1aec40: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1aec44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aec48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1aec4c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x1aec4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1aec50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1aec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1aec54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEC54u;
    {
        const bool branch_taken_0x1aec54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC54u;
        // 0x1aec58: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec54) {
            ctx->pc = 0x1AEC68u;
            goto label_1aec68;
        }
    }
    ctx->pc = 0x1AEC5Cu;
    // 0x1aec5c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aec60: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AEC60u;
    {
        const bool branch_taken_0x1aec60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1aec60) {
            ctx->pc = 0x1AEC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEC60u;
            // 0x1aec64: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aebc0;
        }
    }
    ctx->pc = 0x1AEC68u;
label_1aec68:
    // 0x1aec68: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1aec6c:
    // 0x1aec6c: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1aec70: 0x34423188  ori         $v0, $v0, 0x3188
    ctx->pc = 0x1aec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12680);
    // 0x1aec74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC74u;
    {
        const bool branch_taken_0x1aec74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC74u;
        // 0x1aec78: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec74) {
            ctx->pc = 0x1AEC84u;
            goto label_1aec84;
        }
    }
    ctx->pc = 0x1AEC7Cu;
    // 0x1aec7c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC84u);
    ctx->pc = 0x1AEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC7Cu;
    // 0x1aec80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AEC7Cu, 0x1AEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC84u;
label_1aec84:
    // 0x1aec84: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aec84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aec88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec8c: 0xae000980  sw          $zero, 0x980($s0)
    ctx->pc = 0x1aec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 0));
    // 0x1aec90: 0xa2000af0  sb          $zero, 0xAF0($s0)
    ctx->pc = 0x1aec90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2800), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aec94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aec98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEC98u;
    {
        const bool branch_taken_0x1aec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC98u;
        // 0x1aec9c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec98) {
            ctx->pc = 0x1AECACu;
            goto label_1aecac;
        }
    }
    ctx->pc = 0x1AECA0u;
    // 0x1aeca0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aeca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AECA4u;
    {
        const bool branch_taken_0x1aeca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECA4u;
        // 0x1aeca8: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeca4) {
            ctx->pc = 0x1AECB0u;
            goto label_1aecb0;
        }
    }
    ctx->pc = 0x1AECACu;
label_1aecac:
    // 0x1aecac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aecacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aecb0:
    // 0x1aecb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AECB0u;
    {
        const bool branch_taken_0x1aecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECB0u;
        // 0x1aecb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecb0) {
            ctx->pc = 0x1AED24u;
            goto label_1aed24;
        }
    }
    ctx->pc = 0x1AECB8u;
    // 0x1aecb8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aecb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aecbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aecbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aecc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AECC0u;
    {
        const bool branch_taken_0x1aecc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECC0u;
        // 0x1aecc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecc0) {
            ctx->pc = 0x1AECD4u;
            goto label_1aecd4;
        }
    }
    ctx->pc = 0x1AECC8u;
    // 0x1aecc8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aeccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AECCCu;
    {
        const bool branch_taken_0x1aeccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECCCu;
        // 0x1aecd0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeccc) {
            ctx->pc = 0x1AECD8u;
            goto label_1aecd8;
        }
    }
    ctx->pc = 0x1AECD4u;
label_1aecd4:
    // 0x1aecd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aecd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aecd8:
    // 0x1aecd8: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x1aecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1aecdc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aecdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aece0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aece4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1aece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aece8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1aece8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1aecec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aececu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aecf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AECF0u;
    {
        const bool branch_taken_0x1aecf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECF0u;
        // 0x1aecf4: 0xe600060c  swc1        $f0, 0x60C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecf0) {
            ctx->pc = 0x1AED04u;
            goto label_1aed04;
        }
    }
    ctx->pc = 0x1AECF8u;
    // 0x1aecf8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aecfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AECFCu;
    {
        const bool branch_taken_0x1aecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECFCu;
        // 0x1aed00: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecfc) {
            ctx->pc = 0x1AED08u;
            goto label_1aed08;
        }
    }
    ctx->pc = 0x1AED04u;
label_1aed04:
    // 0x1aed04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aed04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aed08:
    // 0x1aed08: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1aed0c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1aed10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aed10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aed14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aed14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aed18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aed1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aed1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1aed20: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1aed20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1aed24:
    // 0x1aed24: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aed24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aed28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED28u;
    {
        const bool branch_taken_0x1aed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED28u;
        // 0x1aed2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed28) {
            ctx->pc = 0x1AED3Cu;
            goto label_1aed3c;
        }
    }
    ctx->pc = 0x1AED30u;
    // 0x1aed30: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aed34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AED34u;
    {
        const bool branch_taken_0x1aed34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED34u;
        // 0x1aed38: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed34) {
            ctx->pc = 0x1AED40u;
            goto label_1aed40;
        }
    }
    ctx->pc = 0x1AED3Cu;
label_1aed3c:
    // 0x1aed3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aed3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aed40:
    // 0x1aed40: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AED40u;
    {
        const bool branch_taken_0x1aed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed40) {
            ctx->pc = 0x1AED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AED40u;
            // 0x1aed44: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AED84u;
            goto label_1aed84;
        }
    }
    ctx->pc = 0x1AED48u;
    // 0x1aed48: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1aed48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1aed4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED4Cu;
    {
        const bool branch_taken_0x1aed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED4Cu;
        // 0x1aed50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed4c) {
            ctx->pc = 0x1AED60u;
            goto label_1aed60;
        }
    }
    ctx->pc = 0x1AED54u;
    // 0x1aed54: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1aed58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AED58u;
    {
        const bool branch_taken_0x1aed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED58u;
        // 0x1aed5c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed58) {
            ctx->pc = 0x1AED64u;
            goto label_1aed64;
        }
    }
    ctx->pc = 0x1AED60u;
label_1aed60:
    // 0x1aed60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aed60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aed64:
    // 0x1aed64: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1aed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1aed68: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1aed6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1aed6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1aed70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aed70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aed74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aed78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aed78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1aed7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1aed7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aed80: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1aed84:
    // 0x1aed84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aed88: 0xae000af4  sw          $zero, 0xAF4($s0)
    ctx->pc = 0x1aed88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 0));
    // 0x1aed8c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1aed8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1aed90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1aed90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aed94: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1aed94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1aed98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1aed98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aed9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aeda0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1aeda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aeda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA4u;
        // 0x1aeda8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEDACu;
    // 0x1aedac: 0x0  nop
    ctx->pc = 0x1aedacu;
    // NOP
    ctx->pc = 0x1aedb0u;
}
