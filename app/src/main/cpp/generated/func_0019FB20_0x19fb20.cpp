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

// Function: func_0019FB20
// Address: 0x19fb20 - 0x19fd50
void func_0019FB20_0x19fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019FB20_0x19fb20");
#endif

    switch (ctx->pc) {
        case 0x19fb4cu: goto label_19fb4c;
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fbacu: goto label_19fbac;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd18u: goto label_19fd18;
        default: break;
    }

    ctx->pc = 0x19fb20u;

    // 0x19fb20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19fb24: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19fb28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19fb2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19fb34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19fb38: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x19fb3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB3Cu;
    {
        const bool branch_taken_0x19fb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb3c) {
            ctx->pc = 0x19FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB3Cu;
            // 0x19fb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB50u;
            goto label_19fb50;
        }
    }
    ctx->pc = 0x19FB44u;
    // 0x19fb44: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19FB44u;
    SET_GPR_U32(ctx, 31, 0x19FB4Cu);
    ctx->pc = 0x19FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB44u;
    // 0x19fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19FB44u, 0x19FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB4Cu;
label_19fb4c:
    // 0x19fb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19fb50:
    // 0x19fb50: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19FB50u;
    SET_GPR_U32(ctx, 31, 0x19FB58u);
    ctx->pc = 0x19FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB50u;
    // 0x19fb54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19FB50u, 0x19FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB58u;
label_19fb58:
    // 0x19fb58: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x19fb5c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x19fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19fb60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb68: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19fb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19fb6c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19FB6Cu;
    SET_GPR_U32(ctx, 31, 0x19FB74u);
    ctx->pc = 0x19FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB6Cu;
    // 0x19fb70: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19FB6Cu, 0x19FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB74u;
label_19fb74:
    // 0x19fb74: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19fb78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19fb7c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x19fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x19fb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb84: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19fb88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb8c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19FB8Cu;
    SET_GPR_U32(ctx, 31, 0x19FB94u);
    ctx->pc = 0x19FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB8Cu;
    // 0x19fb90: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19FB8Cu, 0x19FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB94u;
label_19fb94:
    // 0x19fb94: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x19fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19fb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fba0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x19fba4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19FBA4u;
    SET_GPR_U32(ctx, 31, 0x19FBACu);
    ctx->pc = 0x19FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBA4u;
    // 0x19fba8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19FBA4u, 0x19FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBACu;
label_19fbac:
    // 0x19fbac: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19fbb0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x19fbb4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x19fbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19fbb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fbbc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x19fbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x19fbc0: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x19fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x19fbc4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x19fbc8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x19fbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fbcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19fbd0: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x19FBD0u;
    {
        const bool branch_taken_0x19fbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBD0u;
        // 0x19fbd4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbd0) {
            ctx->pc = 0x19FC98u;
            goto label_19fc98;
        }
    }
    ctx->pc = 0x19FBD8u;
    // 0x19fbd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19fbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbdc: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x19fbdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x19fbe0: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x19fbe4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19fbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fbe8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x19fbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fbec: 0x0  nop
    ctx->pc = 0x19fbecu;
    // NOP
label_19fbf0:
    // 0x19fbf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbf4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x19fbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19fbf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FBF8u;
    {
        const bool branch_taken_0x19fbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBF8u;
        // 0x19fbfc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbf8) {
            ctx->pc = 0x19FC08u;
            goto label_19fc08;
        }
    }
    ctx->pc = 0x19FC00u;
    // 0x19fc00: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x19fc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19fc04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fc08:
    // 0x19fc08: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19fc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19fc0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FC0Cu;
    {
        const bool branch_taken_0x19fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC0Cu;
        // 0x19fc10: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc0c) {
            ctx->pc = 0x19FC24u;
            goto label_19fc24;
        }
    }
    ctx->pc = 0x19FC14u;
    // 0x19fc14: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19fc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fc1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FC1Cu;
    {
        const bool branch_taken_0x19fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC1Cu;
        // 0x19fc20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc1c) {
            ctx->pc = 0x19FC28u;
            goto label_19fc28;
        }
    }
    ctx->pc = 0x19FC24u;
label_19fc24:
    // 0x19fc24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fc28:
    // 0x19fc28: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19fc2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc30: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x19fc30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19fc34: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x19fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x19fc38: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19fc3c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19fc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fc40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC40u;
    {
        const bool branch_taken_0x19fc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC40u;
        // 0x19fc44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc40) {
            ctx->pc = 0x19FC50u;
            goto label_19fc50;
        }
    }
    ctx->pc = 0x19FC48u;
    // 0x19fc48: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19fc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19fc4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fc50:
    // 0x19fc50: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19fc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19fc54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FC54u;
    {
        const bool branch_taken_0x19fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC54u;
        // 0x19fc58: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc54) {
            ctx->pc = 0x19FC6Cu;
            goto label_19fc6c;
        }
    }
    ctx->pc = 0x19FC5Cu;
    // 0x19fc5c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19fc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fc64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FC64u;
    {
        const bool branch_taken_0x19fc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC64u;
        // 0x19fc68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc64) {
            ctx->pc = 0x19FC70u;
            goto label_19fc70;
        }
    }
    ctx->pc = 0x19FC6Cu;
label_19fc6c:
    // 0x19fc6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fc70:
    // 0x19fc70: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19fc74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19fc78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19fc7c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x19fc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x19fc80: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x19fc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19fc84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC84u;
        // 0x19fc88: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FC98u;
            goto label_19fc98;
        }
    }
    ctx->pc = 0x19FC8Cu;
    // 0x19fc8c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19fc8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fc90: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x19FC90u;
    {
        const bool branch_taken_0x19fc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19fc90) {
            ctx->pc = 0x19FC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC90u;
            // 0x19fc94: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbf0;
        }
    }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x19FC98u;
    SET_GPR_U32(ctx, 31, 0x19FCA0u);
    ctx->pc = 0x19FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC98u;
    // 0x19fc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x19FC98u, 0x19FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCA0u;
label_19fca0:
    // 0x19fca0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19fca0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19fca4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19fca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19fca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19fcac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19fcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19fcb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19fcb4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19fcb8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19fcbc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x19fcbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19fcc0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x19fcc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19fcc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fccc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19fcccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fcd0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x19fcd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19fcd4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19fcd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19fcd8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19fcd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19fcdc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19fce0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fce4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fce8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19fcec: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x19fcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x19fcf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fcf4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19fcf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fcf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19fcf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19fcfc: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x19FCFCu;
    {
        const bool branch_taken_0x19fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x19FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCFCu;
        // 0x19fd00: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcfc) {
            ctx->pc = 0x19FD34u;
            goto label_19fd34;
        }
    }
    ctx->pc = 0x19FD04u;
    // 0x19fd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd08:
    // 0x19fd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd0c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19fd10: 0xc067e34  jal         func_19F8D0
    ctx->pc = 0x19FD10u;
    SET_GPR_U32(ctx, 31, 0x19FD18u);
    ctx->pc = 0x19FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD10u;
    // 0x19fd14: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F8D0u, 0x19FD10u, 0x19FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD18u;
label_19fd18:
    // 0x19fd18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19fd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19fd1c: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x19fd20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FD20u;
    {
        const bool branch_taken_0x19fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd20) {
            ctx->pc = 0x19FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD20u;
            // 0x19fd24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD38u;
            goto label_19fd38;
        }
    }
    ctx->pc = 0x19FD28u;
    // 0x19fd28: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19fd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19fd2c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19FD2Cu;
    {
        const bool branch_taken_0x19fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD2Cu;
        // 0x19fd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd2c) {
            ctx->pc = 0x19FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fd08;
        }
    }
    ctx->pc = 0x19FD34u;
label_19fd34:
    // 0x19fd34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19fd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19fd38:
    // 0x19fd38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19fd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fd3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19fd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fd40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD44u;
        // 0x19fd48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD4Cu;
    // 0x19fd4c: 0x0  nop
    ctx->pc = 0x19fd4cu;
    // NOP
    ctx->pc = 0x19fd50u;
}
