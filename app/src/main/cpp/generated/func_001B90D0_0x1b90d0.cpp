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

// Function: func_001B90D0
// Address: 0x1b90d0 - 0x1b92f0
void func_001B90D0_0x1b90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B90D0_0x1b90d0");
#endif

    switch (ctx->pc) {
        case 0x1b90f0u: goto label_1b90f0;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b9100u: goto label_1b9100;
        case 0x1b9118u: goto label_1b9118;
        case 0x1b9138u: goto label_1b9138;
        case 0x1b915cu: goto label_1b915c;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91dcu: goto label_1b91dc;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b927cu: goto label_1b927c;
        case 0x1b928cu: goto label_1b928c;
        case 0x1b92b4u: goto label_1b92b4;
        default: break;
    }

    ctx->pc = 0x1b90d0u;

    // 0x1b90d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b90d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b90d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b90d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b90d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b90dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b90e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b90e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b90e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b90e8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B90E8u;
    SET_GPR_U32(ctx, 31, 0x1B90F0u);
    ctx->pc = 0x1B90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90E8u;
    // 0x1b90ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B90E8u, 0x1B90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90F0u;
label_1b90f0:
    // 0x1b90f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B90F0u;
    {
        const bool branch_taken_0x1b90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B90F0u;
        // 0x1b90f4: 0x3c120057  lui         $s2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90f0) {
            ctx->pc = 0x1B9110u;
            goto label_1b9110;
        }
    }
    ctx->pc = 0x1B90F8u;
label_1b90f8:
    // 0x1b90f8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1B90F8u;
    SET_GPR_U32(ctx, 31, 0x1B9100u);
    ctx->pc = 0x1B90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90F8u;
    // 0x1b90fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1B90F8u, 0x1B9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9100u;
label_1b9100:
    // 0x1b9100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9104: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1b9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1b9108: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1b9108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1b910c: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x1b910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_1b9110:
    // 0x1b9110: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x1B9110u;
    SET_GPR_U32(ctx, 31, 0x1B9118u);
    ctx->pc = 0x1B9114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9110u;
    // 0x1b9114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x1B9110u, 0x1B9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9118u;
label_1b9118:
    // 0x1b9118: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1b9118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b911c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B911Cu;
    {
        const bool branch_taken_0x1b911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B911Cu;
        // 0x1b9120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b911c) {
            ctx->pc = 0x1B90F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b90f8;
        }
    }
    ctx->pc = 0x1B9124u;
    // 0x1b9124: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x1b9124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x1b9128: 0x26514380  addiu       $s1, $s2, 0x4380
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
    // 0x1b912c: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x1b912cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x1b9130: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B9130u;
    SET_GPR_U32(ctx, 31, 0x1B9138u);
    ctx->pc = 0x1B9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9130u;
    // 0x1b9134: 0xae000588  sw          $zero, 0x588($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B9130u, 0x1B9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9138u;
label_1b9138:
    // 0x1b9138: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b9138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b913c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b913cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b9140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b914c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b914cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9150: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9154: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B9154u;
    SET_GPR_U32(ctx, 31, 0x1B915Cu);
    ctx->pc = 0x1B9158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9154u;
    // 0x1b9158: 0xe6000620  swc1        $f0, 0x620($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B9154u, 0x1B915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B915Cu;
label_1b915c:
    // 0x1b915c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9160: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B9160u;
    {
        const bool branch_taken_0x1b9160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9160u;
        // 0x1b9164: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9160) {
            ctx->pc = 0x1B9214u;
            goto label_1b9214;
        }
    }
    ctx->pc = 0x1B9168u;
    // 0x1b9168: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b9168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b916c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9170: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b9174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b917c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9180: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b9180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b9184: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b9184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9188: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b9188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b918c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b918cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9190: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b9190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b9194: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b9194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9198: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b9198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b919c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1b91a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b91a4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b91a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b91a8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b91ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b91acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b91b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b91b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b91b4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1b91b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b91b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b91b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b91bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b91bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b91c0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1b91c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b91c4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1B91C4u;
    SET_GPR_U32(ctx, 31, 0x1B91CCu);
    ctx->pc = 0x1B91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91C4u;
    // 0x1b91c8: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1B91C4u, 0x1B91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91CCu;
label_1b91cc:
    // 0x1b91cc: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1b91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b91d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b91d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b91d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B91D4u;
    SET_GPR_U32(ctx, 31, 0x1B91DCu);
    ctx->pc = 0x1B91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91D4u;
    // 0x1b91d8: 0xae020604  sw          $v0, 0x604($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B91D4u, 0x1B91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91DCu;
label_1b91dc:
    // 0x1b91dc: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b91e0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1b91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b91e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b91e8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1b91e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1b91ec: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1b91ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b91f0: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x1b91f4: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b91f8: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1b91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1b91fc: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1B91FCu;
    SET_GPR_U32(ctx, 31, 0x1B9204u);
    ctx->pc = 0x1B9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91FCu;
    // 0x1b9200: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1B91FCu, 0x1B9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9204u;
label_1b9204:
    // 0x1b9204: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b9204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b9208: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b920c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1b920cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1b9210: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1b9210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
label_1b9214:
    // 0x1b9214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b921c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B921Cu;
    SET_GPR_U32(ctx, 31, 0x1B9224u);
    ctx->pc = 0x1B9220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B921Cu;
    // 0x1b9220: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B921Cu, 0x1B9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9224u;
label_1b9224:
    // 0x1b9224: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B9224u;
    {
        const bool branch_taken_0x1b9224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9224u;
        // 0x1b9228: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9224) {
            ctx->pc = 0x1B92C4u;
            goto label_1b92c4;
        }
    }
    ctx->pc = 0x1B922Cu;
    // 0x1b922c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b922cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b9230: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9230u;
    {
        const bool branch_taken_0x1b9230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9230u;
        // 0x1b9234: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9230) {
            ctx->pc = 0x1B9244u;
            goto label_1b9244;
        }
    }
    ctx->pc = 0x1B9238u;
    // 0x1b9238: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1b923c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B923Cu;
    {
        const bool branch_taken_0x1b923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B923Cu;
        // 0x1b9240: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b923c) {
            ctx->pc = 0x1B9248u;
            goto label_1b9248;
        }
    }
    ctx->pc = 0x1B9244u;
label_1b9244:
    // 0x1b9244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9248:
    // 0x1b9248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b924c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b924cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9250: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b9250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9254: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1b9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b9258: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1b9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b925c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b9260: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b9260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b9264: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9268: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b9268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b926c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b9270: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b9270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b9274: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B9274u;
    SET_GPR_U32(ctx, 31, 0x1B927Cu);
    ctx->pc = 0x1B9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9274u;
    // 0x1b9278: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B9274u, 0x1B927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B927Cu;
label_1b927c:
    // 0x1b927c: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1b927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b9280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9284: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B9284u;
    SET_GPR_U32(ctx, 31, 0x1B928Cu);
    ctx->pc = 0x1B9288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9284u;
    // 0x1b9288: 0xae02060c  sw          $v0, 0x60C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B9284u, 0x1B928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B928Cu;
label_1b928c:
    // 0x1b928c: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1b928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b9290: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1b9294: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b9298: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1b9298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1b929c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1b929cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b92a0: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x1b92a4: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x1b92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b92a8: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1b92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1b92ac: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1B92ACu;
    SET_GPR_U32(ctx, 31, 0x1B92B4u);
    ctx->pc = 0x1B92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92ACu;
    // 0x1b92b0: 0x8e040608  lw          $a0, 0x608($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1B92ACu, 0x1B92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B92B4u;
label_1b92b4:
    // 0x1b92b4: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b92b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b92bc: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1b92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1b92c0: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1b92c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
label_1b92c4:
    // 0x1b92c4: 0x3c014352  lui         $at, 0x4352
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17234 << 16));
    // 0x1b92c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b92c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b92cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b92d0: 0xae00062c  sw          $zero, 0x62C($s0)
    ctx->pc = 0x1b92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1580), GPR_U32(ctx, 0));
    // 0x1b92d4: 0xe6000624  swc1        $f0, 0x624($s0)
    ctx->pc = 0x1b92d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    // 0x1b92d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b92d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b92dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b92dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b92e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b92e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b92e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b92e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b92e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B92E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92E8u;
        // 0x1b92ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B92E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B92F0u;
}
