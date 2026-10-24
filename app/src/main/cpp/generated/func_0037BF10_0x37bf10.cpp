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

// Function: func_0037BF10
// Address: 0x37bf10 - 0x37c160
void func_0037BF10_0x37bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037BF10_0x37bf10");
#endif

    switch (ctx->pc) {
        case 0x37bf50u: goto label_37bf50;
        case 0x37bf60u: goto label_37bf60;
        case 0x37bf74u: goto label_37bf74;
        case 0x37bf8cu: goto label_37bf8c;
        case 0x37bf98u: goto label_37bf98;
        case 0x37bfacu: goto label_37bfac;
        case 0x37bfb8u: goto label_37bfb8;
        case 0x37bfc4u: goto label_37bfc4;
        case 0x37bfe8u: goto label_37bfe8;
        case 0x37c054u: goto label_37c054;
        case 0x37c068u: goto label_37c068;
        case 0x37c084u: goto label_37c084;
        case 0x37c094u: goto label_37c094;
        case 0x37c09cu: goto label_37c09c;
        case 0x37c0ccu: goto label_37c0cc;
        case 0x37c0f8u: goto label_37c0f8;
        case 0x37c118u: goto label_37c118;
        case 0x37c120u: goto label_37c120;
        case 0x37c130u: goto label_37c130;
        default: break;
    }

    ctx->pc = 0x37bf10u;

    // 0x37bf10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37bf14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37bf18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37bf1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37bf20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37bf20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf24: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37bf28: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37bf2c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37bf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37bf30: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x37bf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37bf38: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x37bf38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x37bf3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37bf40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BF40u;
    {
        const bool branch_taken_0x37bf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF40u;
        // 0x37bf44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf40) {
            ctx->pc = 0x37BF58u;
            goto label_37bf58;
        }
    }
    ctx->pc = 0x37BF48u;
    // 0x37bf48: 0xc0df3c0  jal         func_37CF00
    ctx->pc = 0x37BF48u;
    SET_GPR_U32(ctx, 31, 0x37BF50u);
    ctx->pc = 0x37BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF48u;
    // 0x37bf4c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CF00u, 0x37BF48u, 0x37BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF50u;
label_37bf50:
    // 0x37bf50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37BF50u;
    {
        const bool branch_taken_0x37bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF50u;
        // 0x37bf54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf50) {
            ctx->pc = 0x37BF64u;
            goto label_37bf64;
        }
    }
    ctx->pc = 0x37BF58u;
label_37bf58:
    // 0x37bf58: 0xc0df3b8  jal         func_37CEE0
    ctx->pc = 0x37BF58u;
    SET_GPR_U32(ctx, 31, 0x37BF60u);
    ctx->pc = 0x37BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF58u;
    // 0x37bf5c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CEE0u, 0x37BF58u, 0x37BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF60u;
label_37bf60:
    // 0x37bf60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37bf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37bf64:
    // 0x37bf64: 0x12200073  beqz        $s1, . + 4 + (0x73 << 2)
    ctx->pc = 0x37BF64u;
    {
        const bool branch_taken_0x37bf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF64u;
        // 0x37bf68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf64) {
            ctx->pc = 0x37C134u;
            goto label_37c134;
        }
    }
    ctx->pc = 0x37BF6Cu;
    // 0x37bf6c: 0xc0df4a6  jal         func_37D298
    ctx->pc = 0x37BF6Cu;
    SET_GPR_U32(ctx, 31, 0x37BF74u);
    ctx->pc = 0x37BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF6Cu;
    // 0x37bf70: 0x82640026  lb          $a0, 0x26($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D298u, 0x37BF6Cu, 0x37BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF74u;
label_37bf74:
    // 0x37bf74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37bf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf78: 0x1240006e  beqz        $s2, . + 4 + (0x6E << 2)
    ctx->pc = 0x37BF78u;
    {
        const bool branch_taken_0x37bf78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF78u;
        // 0x37bf7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf78) {
            ctx->pc = 0x37C134u;
            goto label_37c134;
        }
    }
    ctx->pc = 0x37BF80u;
    // 0x37bf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf84: 0xc0df058  jal         func_37C160
    ctx->pc = 0x37BF84u;
    SET_GPR_U32(ctx, 31, 0x37BF8Cu);
    ctx->pc = 0x37BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF84u;
    // 0x37bf88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C160u, 0x37BF84u, 0x37BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF8Cu;
label_37bf8c:
    // 0x37bf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bf90: 0xc0df06e  jal         func_37C1B8
    ctx->pc = 0x37BF90u;
    SET_GPR_U32(ctx, 31, 0x37BF98u);
    ctx->pc = 0x37BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BF90u;
    // 0x37bf94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C1B8u, 0x37BF90u, 0x37BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF98u;
label_37bf98:
    // 0x37bf98: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x37bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x37bf9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfa0: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x37bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x37bfa4: 0xc0df08a  jal         func_37C228
    ctx->pc = 0x37BFA4u;
    SET_GPR_U32(ctx, 31, 0x37BFACu);
    ctx->pc = 0x37BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFA4u;
    // 0x37bfa8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C228u, 0x37BFA4u, 0x37BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFACu;
label_37bfac:
    // 0x37bfac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfb0: 0xc0df0aa  jal         func_37C2A8
    ctx->pc = 0x37BFB0u;
    SET_GPR_U32(ctx, 31, 0x37BFB8u);
    ctx->pc = 0x37BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFB0u;
    // 0x37bfb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C2A8u, 0x37BFB0u, 0x37BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFB8u;
label_37bfb8:
    // 0x37bfb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfbc: 0xc0df0b8  jal         func_37C2E0
    ctx->pc = 0x37BFBCu;
    SET_GPR_U32(ctx, 31, 0x37BFC4u);
    ctx->pc = 0x37BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFBCu;
    // 0x37bfc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C2E0u, 0x37BFBCu, 0x37BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFC4u;
label_37bfc4:
    // 0x37bfc4: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x37bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x37bfc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37bfcc: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x37BFCCu;
    {
        const bool branch_taken_0x37bfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFCCu;
        // 0x37bfd0: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bfcc) {
            ctx->pc = 0x37C128u;
            goto label_37c128;
        }
    }
    ctx->pc = 0x37BFD4u;
    // 0x37bfd4: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x37bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x37bfd8: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37BFD8u;
    {
        const bool branch_taken_0x37bfd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFD8u;
        // 0x37bfdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bfd8) {
            ctx->pc = 0x37C000u;
            goto label_37c000;
        }
    }
    ctx->pc = 0x37BFE0u;
    // 0x37bfe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37bfe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37bfe8:
    // 0x37bfe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bfec: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x37bfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37bff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BFF0u;
    {
        const bool branch_taken_0x37bff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFF0u;
        // 0x37bff4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bff0) {
            ctx->pc = 0x37C000u;
            goto label_37c000;
        }
    }
    ctx->pc = 0x37BFF8u;
    // 0x37bff8: 0x1471fffb  bne         $v1, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37BFF8u;
    {
        const bool branch_taken_0x37bff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x37BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BFF8u;
        // 0x37bffc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bff8) {
            ctx->pc = 0x37BFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bfe8;
        }
    }
    ctx->pc = 0x37C000u;
label_37c000:
    // 0x37c000: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37c000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37c004: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37C004u;
    {
        const bool branch_taken_0x37c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C004u;
        // 0x37c008: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c004) {
            ctx->pc = 0x37C08Cu;
            goto label_37c08c;
        }
    }
    ctx->pc = 0x37C00Cu;
    // 0x37c00c: 0xa6300002  sh          $s0, 0x2($s1)
    ctx->pc = 0x37c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x37c010: 0xa6500002  sh          $s0, 0x2($s2)
    ctx->pc = 0x37c010u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x37c014: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x37c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x37c018: 0x86710020  lh          $s1, 0x20($s3)
    ctx->pc = 0x37c018u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x37c01c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x37c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x37c020: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x37c020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c024: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x37c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x37c028: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x37C028u;
    {
        const bool branch_taken_0x37c028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C028u;
        // 0x37c02c: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c028) {
            ctx->pc = 0x37C130u;
            goto label_37c130;
        }
    }
    ctx->pc = 0x37C030u;
    // 0x37c030: 0x24160084  addiu       $s6, $zero, 0x84
    ctx->pc = 0x37c030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x37c034: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37c034u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37c038: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c03c: 0x2168018  mult        $s0, $s0, $s6
    ctx->pc = 0x37c03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x37c040: 0x2455a600  addiu       $s5, $v0, -0x5A00
    ctx->pc = 0x37c040u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x37c044: 0x26310082  addiu       $s1, $s1, 0x82
    ctx->pc = 0x37c044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 130));
    // 0x37c048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c04c: 0xc0df18c  jal         func_37C630
    ctx->pc = 0x37C04Cu;
    SET_GPR_U32(ctx, 31, 0x37C054u);
    ctx->pc = 0x37C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C04Cu;
    // 0x37c050: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C630u, 0x37C04Cu, 0x37C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C054u;
label_37c054:
    // 0x37c054: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x37c054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x37c058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c05c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c060: 0xc0dcc46  jal         func_373118
    ctx->pc = 0x37C060u;
    SET_GPR_U32(ctx, 31, 0x37C068u);
    ctx->pc = 0x37C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C060u;
    // 0x37c064: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373118u, 0x37C060u, 0x37C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37C068u;
    {
        const bool branch_taken_0x37c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c068) {
            ctx->pc = 0x37C08Cu;
            goto label_37c08c;
        }
    }
    ctx->pc = 0x37C070u;
    // 0x37c070: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37c070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37c074: 0x96650048  lhu         $a1, 0x48($s3)
    ctx->pc = 0x37c074u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x37c078: 0x961018  mult        $v0, $a0, $s6
    ctx->pc = 0x37c078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c07c: 0xc0dcca6  jal         func_373298
    ctx->pc = 0x37C07Cu;
    SET_GPR_U32(ctx, 31, 0x37C084u);
    ctx->pc = 0x37C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C07Cu;
    // 0x37c080: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373298u, 0x37C07Cu, 0x37C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C084u;
label_37c084:
    // 0x37c084: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C084u;
    {
        const bool branch_taken_0x37c084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c084) {
            ctx->pc = 0x37C088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C084u;
            // 0x37c088: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C0A4u;
            goto label_37c0a4;
        }
    }
    ctx->pc = 0x37C08Cu;
label_37c08c:
    // 0x37c08c: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37C08Cu;
    SET_GPR_U32(ctx, 31, 0x37C094u);
    ctx->pc = 0x37C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C08Cu;
    // 0x37c090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37C08Cu, 0x37C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C094u;
label_37c094:
    // 0x37c094: 0xc0df4ec  jal         func_37D3B0
    ctx->pc = 0x37C094u;
    SET_GPR_U32(ctx, 31, 0x37C09Cu);
    ctx->pc = 0x37C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C094u;
    // 0x37c098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3B0u, 0x37C094u, 0x37C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C09Cu;
label_37c09c:
    // 0x37c09c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37C09Cu;
    {
        const bool branch_taken_0x37c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C09Cu;
        // 0x37c0a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c09c) {
            ctx->pc = 0x37C134u;
            goto label_37c134;
        }
    }
    ctx->pc = 0x37C0A4u;
label_37c0a4:
    // 0x37c0a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37c0a8: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x37c0a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x37c0ac: 0x961818  mult        $v1, $a0, $s6
    ctx->pc = 0x37c0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37c0b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37c0b4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37c0b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37c0b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c0bc: 0x0  nop
    ctx->pc = 0x37c0bcu;
    // NOP
    // 0x37c0c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37c0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37c0c4: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x37C0C4u;
    SET_GPR_U32(ctx, 31, 0x37C0CCu);
    ctx->pc = 0x37C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0C4u;
    // 0x37c0c8: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x37C0C4u, 0x37C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0CCu;
label_37c0cc:
    // 0x37c0cc: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37c0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37c0d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37c0d4: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x37c0d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x37c0d8: 0x961818  mult        $v1, $a0, $s6
    ctx->pc = 0x37c0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37c0dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37c0e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37c0e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37c0e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c0e8: 0x0  nop
    ctx->pc = 0x37c0e8u;
    // NOP
    // 0x37c0ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37c0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37c0f0: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x37C0F0u;
    SET_GPR_U32(ctx, 31, 0x37C0F8u);
    ctx->pc = 0x37C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0F0u;
    // 0x37c0f4: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x37C0F0u, 0x37C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0F8u;
label_37c0f8:
    // 0x37c0f8: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37c0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37c0fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37c100: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x37c100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37c104: 0x961018  mult        $v0, $a0, $s6
    ctx->pc = 0x37c104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37c108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37c10c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x37c10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c110: 0xc0dcd78  jal         func_3735E0
    ctx->pc = 0x37C110u;
    SET_GPR_U32(ctx, 31, 0x37C118u);
    ctx->pc = 0x37C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C110u;
    // 0x37c114: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735E0u, 0x37C110u, 0x37C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C118u;
label_37c118:
    // 0x37c118: 0xc0df1c8  jal         func_37C720
    ctx->pc = 0x37C118u;
    SET_GPR_U32(ctx, 31, 0x37C120u);
    ctx->pc = 0x37C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C118u;
    // 0x37c11c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C720u, 0x37C118u, 0x37C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C120u;
label_37c120:
    // 0x37c120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37C120u;
    {
        const bool branch_taken_0x37c120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C120u;
        // 0x37c124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c120) {
            ctx->pc = 0x37C134u;
            goto label_37c134;
        }
    }
    ctx->pc = 0x37C128u;
label_37c128:
    // 0x37c128: 0xc0df556  jal         func_37D558
    ctx->pc = 0x37C128u;
    SET_GPR_U32(ctx, 31, 0x37C130u);
    ctx->pc = 0x37C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C128u;
    // 0x37c12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D558u, 0x37C128u, 0x37C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C130u;
label_37c130:
    // 0x37c130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c134:
    // 0x37c134: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37c134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c138: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37c138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c13c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37c13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c140: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37c140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c144: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37c144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c148: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37c148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c14c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x37c14cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c154: 0x3e00008  jr          $ra
    ctx->pc = 0x37C154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C154u;
        // 0x37c158: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C15Cu;
    // 0x37c15c: 0x0  nop
    ctx->pc = 0x37c15cu;
    // NOP
    ctx->pc = 0x37c160u;
}
