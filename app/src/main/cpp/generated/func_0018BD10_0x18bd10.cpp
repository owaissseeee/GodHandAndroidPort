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

// Function: func_0018BD10
// Address: 0x18bd10 - 0x18bf40
void func_0018BD10_0x18bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018BD10_0x18bd10");
#endif

    switch (ctx->pc) {
        case 0x18bd3cu: goto label_18bd3c;
        case 0x18bd48u: goto label_18bd48;
        case 0x18bd64u: goto label_18bd64;
        case 0x18bd84u: goto label_18bd84;
        case 0x18bd9cu: goto label_18bd9c;
        case 0x18bde0u: goto label_18bde0;
        case 0x18be90u: goto label_18be90;
        case 0x18bef8u: goto label_18bef8;
        case 0x18bf08u: goto label_18bf08;
        default: break;
    }

    ctx->pc = 0x18bd10u;

    // 0x18bd10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18bd14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18bd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18bd18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18bd1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18bd24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18bd28: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x18bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18bd2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BD2Cu;
    {
        const bool branch_taken_0x18bd2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd2c) {
            ctx->pc = 0x18BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BD2Cu;
            // 0x18bd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BD40u;
            goto label_18bd40;
        }
    }
    ctx->pc = 0x18BD34u;
    // 0x18bd34: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18BD34u;
    SET_GPR_U32(ctx, 31, 0x18BD3Cu);
    ctx->pc = 0x18BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD34u;
    // 0x18bd38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18BD34u, 0x18BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD3Cu;
label_18bd3c:
    // 0x18bd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bd40:
    // 0x18bd40: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18BD40u;
    SET_GPR_U32(ctx, 31, 0x18BD48u);
    ctx->pc = 0x18BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD40u;
    // 0x18bd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18BD40u, 0x18BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD48u;
label_18bd48:
    // 0x18bd48: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x18bd4c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18bd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18bd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18bd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18bd5c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18BD5Cu;
    SET_GPR_U32(ctx, 31, 0x18BD64u);
    ctx->pc = 0x18BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD5Cu;
    // 0x18bd60: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18BD5Cu, 0x18BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD64u;
label_18bd64:
    // 0x18bd64: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18bd68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18bd6c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18bd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd74: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x18bd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18bd78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18bd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd7c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18BD7Cu;
    SET_GPR_U32(ctx, 31, 0x18BD84u);
    ctx->pc = 0x18BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD7Cu;
    // 0x18bd80: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18BD7Cu, 0x18BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD84u;
label_18bd84:
    // 0x18bd84: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18bd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bd90: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18bd94: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18BD94u;
    SET_GPR_U32(ctx, 31, 0x18BD9Cu);
    ctx->pc = 0x18BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD94u;
    // 0x18bd98: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18BD94u, 0x18BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD9Cu;
label_18bd9c:
    // 0x18bd9c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18bda0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18bda4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18bda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bdac: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18bdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18bdb0: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x18bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x18bdb4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18bdb8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18bdb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18bdbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18bdc0: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18BDC0u;
    {
        const bool branch_taken_0x18bdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDC0u;
        // 0x18bdc4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdc0) {
            ctx->pc = 0x18BE88u;
            goto label_18be88;
        }
    }
    ctx->pc = 0x18BDC8u;
    // 0x18bdc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18bdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdcc: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18bdd0: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18bdd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18bdd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bdd8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18bdd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18bddc: 0x0  nop
    ctx->pc = 0x18bddcu;
    // NOP
label_18bde0:
    // 0x18bde0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18bde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bde4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18bde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18bde8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BDE8u;
    {
        const bool branch_taken_0x18bde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDE8u;
        // 0x18bdec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bde8) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BDF0u;
    // 0x18bdf0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18bdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18bdf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bdf8:
    // 0x18bdf8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18bdfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BDFCu;
    {
        const bool branch_taken_0x18bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDFCu;
        // 0x18be00: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdfc) {
            ctx->pc = 0x18BE14u;
            goto label_18be14;
        }
    }
    ctx->pc = 0x18BE04u;
    // 0x18be04: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18be08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18be0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE0Cu;
    {
        const bool branch_taken_0x18be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE0Cu;
        // 0x18be10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be0c) {
            ctx->pc = 0x18BE18u;
            goto label_18be18;
        }
    }
    ctx->pc = 0x18BE14u;
label_18be14:
    // 0x18be14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18be18:
    // 0x18be18: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18be1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18be1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be20: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18be20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18be24: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18be24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18be28: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18be28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18be2c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18be2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18be30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BE30u;
    {
        const bool branch_taken_0x18be30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE30u;
        // 0x18be34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be30) {
            ctx->pc = 0x18BE40u;
            goto label_18be40;
        }
    }
    ctx->pc = 0x18BE38u;
    // 0x18be38: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18be38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18be3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18be3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18be40:
    // 0x18be40: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18be44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BE44u;
    {
        const bool branch_taken_0x18be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE44u;
        // 0x18be48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be44) {
            ctx->pc = 0x18BE5Cu;
            goto label_18be5c;
        }
    }
    ctx->pc = 0x18BE4Cu;
    // 0x18be4c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18be50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18be54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE54u;
    {
        const bool branch_taken_0x18be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE54u;
        // 0x18be58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be54) {
            ctx->pc = 0x18BE60u;
            goto label_18be60;
        }
    }
    ctx->pc = 0x18BE5Cu;
label_18be5c:
    // 0x18be5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18be60:
    // 0x18be60: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18be64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18be64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18be68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18be6c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18be70: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18be74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BE74u;
    {
        const bool branch_taken_0x18be74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE74u;
        // 0x18be78: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be74) {
            ctx->pc = 0x18BE88u;
            goto label_18be88;
        }
    }
    ctx->pc = 0x18BE7Cu;
    // 0x18be7c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18be7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18be80: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18BE80u;
    {
        const bool branch_taken_0x18be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18be80) {
            ctx->pc = 0x18BE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BE80u;
            // 0x18be84: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bde0;
        }
    }
    ctx->pc = 0x18BE88u;
label_18be88:
    // 0x18be88: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18BE88u;
    SET_GPR_U32(ctx, 31, 0x18BE90u);
    ctx->pc = 0x18BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE88u;
    // 0x18be8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18BE88u, 0x18BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE90u;
label_18be90:
    // 0x18be90: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18be90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18be94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18be98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18be9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18be9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bea0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18bea4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18bea8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18beac: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18beacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18beb0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18beb4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18beb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18beb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18beb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bebc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18bebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bec0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18bec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18bec4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18bec4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18bec8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18bec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18becc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18bed0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bed4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bed8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18bed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18bedc: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x18bedcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x18bee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18bee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bee4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18bee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18bee8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18bee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18beec: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18BEECu;
    {
        const bool branch_taken_0x18beec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEECu;
        // 0x18bef0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18beec) {
            ctx->pc = 0x18BF24u;
            goto label_18bf24;
        }
    }
    ctx->pc = 0x18BEF4u;
    // 0x18bef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bef8:
    // 0x18bef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18befc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18befcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bf00: 0xc062eb0  jal         func_18BAC0
    ctx->pc = 0x18BF00u;
    SET_GPR_U32(ctx, 31, 0x18BF08u);
    ctx->pc = 0x18BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF00u;
    // 0x18bf04: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BAC0u, 0x18BF00u, 0x18BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF08u;
label_18bf08:
    // 0x18bf08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bf0c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x18bf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18bf10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BF10u;
    {
        const bool branch_taken_0x18bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf10) {
            ctx->pc = 0x18BF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BF10u;
            // 0x18bf14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BF28u;
            goto label_18bf28;
        }
    }
    ctx->pc = 0x18BF18u;
    // 0x18bf18: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18bf18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18bf1c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18BF1Cu;
    {
        const bool branch_taken_0x18bf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF1Cu;
        // 0x18bf20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf1c) {
            ctx->pc = 0x18BEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bef8;
        }
    }
    ctx->pc = 0x18BF24u;
label_18bf24:
    // 0x18bf24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18bf24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18bf28:
    // 0x18bf28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18bf28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bf2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18bf2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bf30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18bf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bf34: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF34u;
        // 0x18bf38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BF3Cu;
    // 0x18bf3c: 0x0  nop
    ctx->pc = 0x18bf3cu;
    // NOP
    ctx->pc = 0x18bf40u;
}
