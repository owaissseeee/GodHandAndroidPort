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

// Function: func_0011ADD8
// Address: 0x11add8 - 0x11b280
void func_0011ADD8_0x11add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011ADD8_0x11add8");
#endif

    switch (ctx->pc) {
        case 0x11ae74u: goto label_11ae74;
        case 0x11af7cu: goto label_11af7c;
        case 0x11afa0u: goto label_11afa0;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afdcu: goto label_11afdc;
        case 0x11affcu: goto label_11affc;
        case 0x11b008u: goto label_11b008;
        case 0x11b010u: goto label_11b010;
        case 0x11b030u: goto label_11b030;
        case 0x11b078u: goto label_11b078;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b148u: goto label_11b148;
        case 0x11b19cu: goto label_11b19c;
        case 0x11b1b8u: goto label_11b1b8;
        case 0x11b1f4u: goto label_11b1f4;
        case 0x11b208u: goto label_11b208;
        case 0x11b234u: goto label_11b234;
        case 0x11b240u: goto label_11b240;
        case 0x11b24cu: goto label_11b24c;
        case 0x11b25cu: goto label_11b25c;
        default: break;
    }

    ctx->pc = 0x11add8u;

    // 0x11add8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11addc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x11ade0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ade0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ade4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11ade8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11adec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11adf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11adf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adf4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11adf8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11adfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ae00: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11ae00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11ae04: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11ae08: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11ae08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11ae0c: 0x1062008d  beq         $v1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x11AE0Cu;
    {
        const bool branch_taken_0x11ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE0Cu;
        // 0x11ae10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae0c) {
            ctx->pc = 0x11B044u;
            goto label_11b044;
        }
    }
    ctx->pc = 0x11AE14u;
    // 0x11ae14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AE14u;
    {
        const bool branch_taken_0x11ae14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae14) {
            ctx->pc = 0x11AE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE14u;
            // 0x11ae18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE2Cu;
            goto label_11ae2c;
        }
    }
    ctx->pc = 0x11AE1Cu;
    // 0x11ae1c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AE1Cu;
    {
        const bool branch_taken_0x11ae1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE1Cu;
        // 0x11ae20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae1c) {
            ctx->pc = 0x11AE44u;
            goto label_11ae44;
        }
    }
    ctx->pc = 0x11AE24u;
    // 0x11ae24: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x11AE24u;
    {
        const bool branch_taken_0x11ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE24u;
        // 0x11ae28: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae24) {
            ctx->pc = 0x11B264u;
            goto label_11b264;
        }
    }
    ctx->pc = 0x11AE2Cu;
label_11ae2c:
    // 0x11ae2c: 0x106200cd  beq         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x11AE2Cu;
    {
        const bool branch_taken_0x11ae2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE2Cu;
        // 0x11ae30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae2c) {
            ctx->pc = 0x11B164u;
            goto label_11b164;
        }
    }
    ctx->pc = 0x11AE34u;
    // 0x11ae34: 0x106200f2  beq         $v1, $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x11AE34u;
    {
        const bool branch_taken_0x11ae34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE34u;
        // 0x11ae38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae34) {
            ctx->pc = 0x11B200u;
            goto label_11b200;
        }
    }
    ctx->pc = 0x11AE3Cu;
    // 0x11ae3c: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x11AE3Cu;
    {
        const bool branch_taken_0x11ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE3Cu;
        // 0x11ae40: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae3c) {
            ctx->pc = 0x11B264u;
            goto label_11b264;
        }
    }
    ctx->pc = 0x11AE44u;
label_11ae44:
    // 0x11ae44: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x11ae44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x11ae48: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x11ae48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x11ae4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE4Cu;
    {
        const bool branch_taken_0x11ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE4Cu;
        // 0x11ae50: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae4c) {
            ctx->pc = 0x11AE6Cu;
            goto label_11ae6c;
        }
    }
    ctx->pc = 0x11AE54u;
    // 0x11ae54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ae58: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
    // 0x11ae5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ae60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ae64: 0x800008  jr          $a0
    ctx->pc = 0x11AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AE6Cu: goto label_11ae6c;
            case 0x11AEECu: goto label_11aeec;
            case 0x11AEFCu: goto label_11aefc;
            case 0x11AF0Cu: goto label_11af0c;
            case 0x11AF1Cu: goto label_11af1c;
            case 0x11AF2Cu: goto label_11af2c;
            case 0x11AF3Cu: goto label_11af3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11AE6Cu;
label_11ae6c:
    // 0x11ae6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11AE6Cu;
    SET_GPR_U32(ctx, 31, 0x11AE74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11AE6Cu, 0x11AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE74u;
label_11ae74:
    // 0x11ae74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11ae78: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11ae78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11ae7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11AE7Cu;
    {
        const bool branch_taken_0x11ae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae7c) {
            ctx->pc = 0x11AE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE7Cu;
            // 0x11ae80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE84u;
            goto label_11ae84;
        }
    }
    ctx->pc = 0x11AE84u;
label_11ae84:
    // 0x11ae84: 0x2010  mfhi        $a0
    ctx->pc = 0x11ae84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11ae88: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x11ae88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11ae8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE8Cu;
    {
        const bool branch_taken_0x11ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE8Cu;
        // 0x11ae90: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae8c) {
            ctx->pc = 0x11AEACu;
            goto label_11aeac;
        }
    }
    ctx->pc = 0x11AE94u;
    // 0x11ae94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11ae98: 0x2442c5d0  addiu       $v0, $v0, -0x3A30
    ctx->pc = 0x11ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
    // 0x11ae9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11aea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11aea4: 0x800008  jr          $a0
    ctx->pc = 0x11AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AEACu: goto label_11aeac;
            case 0x11AEBCu: goto label_11aebc;
            case 0x11AECCu: goto label_11aecc;
            case 0x11AEDCu: goto label_11aedc;
            case 0x11AF3Cu: goto label_11af3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AEA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11AEACu;
label_11aeac:
    // 0x11aeac: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11aeb0: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x11aeb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11AEB4u;
    {
        const bool branch_taken_0x11aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEB4u;
        // 0x11aeb8: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb4) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AEBCu;
label_11aebc:
    // 0x11aebc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11aec0: 0x8c4304fc  lw          $v1, 0x4FC($v0)
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x11aec4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11AEC4u;
    {
        const bool branch_taken_0x11aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEC4u;
        // 0x11aec8: 0x8c440500  lw          $a0, 0x500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aec4) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AECCu;
label_11aecc:
    // 0x11aecc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11aed0: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x11aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x11aed4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11AED4u;
    {
        const bool branch_taken_0x11aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AED4u;
        // 0x11aed8: 0x8c440168  lw          $a0, 0x168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aed4) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AEDCu;
label_11aedc:
    // 0x11aedc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11aee0: 0x8c430504  lw          $v1, 0x504($v0)
    ctx->pc = 0x11aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
    // 0x11aee4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11AEE4u;
    {
        const bool branch_taken_0x11aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEE4u;
        // 0x11aee8: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aee4) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AEECu;
label_11aeec:
    // 0x11aeec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11aef0: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x11aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x11aef4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11AEF4u;
    {
        const bool branch_taken_0x11aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEF4u;
        // 0x11aef8: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aef4) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AEFCu;
label_11aefc:
    // 0x11aefc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11af00: 0x8c4304fc  lw          $v1, 0x4FC($v0)
    ctx->pc = 0x11af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x11af04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11AF04u;
    {
        const bool branch_taken_0x11af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF04u;
        // 0x11af08: 0x8c440500  lw          $a0, 0x500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af04) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AF0Cu;
label_11af0c:
    // 0x11af0c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11af10: 0x8c430514  lw          $v1, 0x514($v0)
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1300)));
    // 0x11af14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11AF14u;
    {
        const bool branch_taken_0x11af14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF14u;
        // 0x11af18: 0x8c440518  lw          $a0, 0x518($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af14) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AF1Cu;
label_11af1c:
    // 0x11af1c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11af20: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x11af24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11AF24u;
    {
        const bool branch_taken_0x11af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF24u;
        // 0x11af28: 0x8c440168  lw          $a0, 0x168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af24) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AF2Cu;
label_11af2c:
    // 0x11af2c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11af30: 0x8c430504  lw          $v1, 0x504($v0)
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
    // 0x11af34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AF34u;
    {
        const bool branch_taken_0x11af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF34u;
        // 0x11af38: 0x8c440508  lw          $a0, 0x508($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af34) {
            ctx->pc = 0x11AF48u;
            goto label_11af48;
        }
    }
    ctx->pc = 0x11AF3Cu;
label_11af3c:
    // 0x11af3c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11af40: 0x8c43050c  lw          $v1, 0x50C($v0)
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1292)));
    // 0x11af44: 0x8c440510  lw          $a0, 0x510($v0)
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_11af48:
    // 0x11af48: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x11af48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11af4c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x11af4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11af50: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11af54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af58: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11af58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11af5c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11af5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11af60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11af64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11af68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11af6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11af70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af74: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11AF74u;
    SET_GPR_U32(ctx, 31, 0x11AF7Cu);
    ctx->pc = 0x11AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF74u;
    // 0x11af78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11AF74u, 0x11AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF7Cu;
label_11af7c:
    // 0x11af7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11af7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11af80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11af84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11af88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11af8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af98: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11AF98u;
    SET_GPR_U32(ctx, 31, 0x11AFA0u);
    ctx->pc = 0x11AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF98u;
    // 0x11af9c: 0x24060123  addiu       $a2, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11AF98u, 0x11AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFA0u;
label_11afa0:
    // 0x11afa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11afa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11afa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afa8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11AFA8u;
    SET_GPR_U32(ctx, 31, 0x11AFB0u);
    ctx->pc = 0x11AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFA8u;
    // 0x11afac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11AFA8u, 0x11AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFB0u;
label_11afb0:
    // 0x11afb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afb4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11AFB4u;
    SET_GPR_U32(ctx, 31, 0x11AFBCu);
    ctx->pc = 0x11AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFB4u;
    // 0x11afb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11AFB4u, 0x11AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFBCu;
label_11afbc:
    // 0x11afbc: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x11afc0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11AFC0u;
    {
        const bool branch_taken_0x11afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFC0u;
        // 0x11afc4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afc0) {
            ctx->pc = 0x11B000u;
            goto label_11b000;
        }
    }
    ctx->pc = 0x11AFC8u;
    // 0x11afc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11afc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11afcc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11afd0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11afd4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x11AFD4u;
    SET_GPR_U32(ctx, 31, 0x11AFDCu);
    ctx->pc = 0x11AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFD4u;
    // 0x11afd8: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x11AFD4u, 0x11AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFDCu;
label_11afdc:
    // 0x11afdc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11afe0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11afe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11afe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11afe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11afe8: 0x0  nop
    ctx->pc = 0x11afe8u;
    // NOP
    // 0x11afec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11afecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11aff0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11aff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11aff4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11AFF4u;
    SET_GPR_U32(ctx, 31, 0x11AFFCu);
    ctx->pc = 0x11AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFF4u;
    // 0x11aff8: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11AFF4u, 0x11AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFFCu;
label_11affc:
    // 0x11affc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x11affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_11b000:
    // 0x11b000: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11B000u;
    SET_GPR_U32(ctx, 31, 0x11B008u);
    ctx->pc = 0x11B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B000u;
    // 0x11b004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11B000u, 0x11B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B008u;
label_11b008:
    // 0x11b008: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11B008u;
    SET_GPR_U32(ctx, 31, 0x11B010u);
    ctx->pc = 0x11B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B008u;
    // 0x11b00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11B008u, 0x11B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B010u;
label_11b010:
    // 0x11b010: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b018: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b020: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11b020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b028: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B028u;
    SET_GPR_U32(ctx, 31, 0x11B030u);
    ctx->pc = 0x11B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B028u;
    // 0x11b02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B028u, 0x11B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B030u;
label_11b030:
    // 0x11b030: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11b030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11b034: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11b034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11b038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b03c: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x11b040: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b044:
    // 0x11b044: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11b048: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B048u;
    {
        const bool branch_taken_0x11b048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B048u;
        // 0x11b04c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b048) {
            ctx->pc = 0x11B054u;
            goto label_11b054;
        }
    }
    ctx->pc = 0x11B050u;
    // 0x11b050: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11b050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_11b054:
    // 0x11b054: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11b054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11b058: 0x247074a0  addiu       $s0, $v1, 0x74A0
    ctx->pc = 0x11b058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x11b05c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x11b060: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11b064: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B064u;
    {
        const bool branch_taken_0x11b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B064u;
        // 0x11b068: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b064) {
            ctx->pc = 0x11B070u;
            goto label_11b070;
        }
    }
    ctx->pc = 0x11B06Cu;
    // 0x11b06c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_11b070:
    // 0x11b070: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B070u;
    SET_GPR_U32(ctx, 31, 0x11B078u);
    ctx->pc = 0x11B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B070u;
    // 0x11b074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B070u, 0x11B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B078u;
label_11b078:
    // 0x11b078: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B078u;
    {
        const bool branch_taken_0x11b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b078) {
            ctx->pc = 0x11B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B078u;
            // 0x11b07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B0C0u;
            goto label_11b0c0;
        }
    }
    ctx->pc = 0x11B080u;
    // 0x11b080: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11b084: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B084u;
    {
        const bool branch_taken_0x11b084 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B084u;
        // 0x11b088: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b084) {
            ctx->pc = 0x11B0A4u;
            goto label_11b0a4;
        }
    }
    ctx->pc = 0x11B08Cu;
    // 0x11b08c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b090: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x11b090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x11b094: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x11b094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b098: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x11b098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x11b09c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11B09Cu;
    {
        const bool branch_taken_0x11b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B09Cu;
        // 0x11b0a0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b09c) {
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B0A4u;
label_11b0a4:
    // 0x11b0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b0a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b0ac: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11b0acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b0b0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11b0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11b0b4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11b0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b0b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x11B0B8u;
    {
        const bool branch_taken_0x11b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0B8u;
        // 0x11b0bc: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0b8) {
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B0C0u;
label_11b0c0:
    // 0x11b0c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b0c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b0c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B0C8u;
    SET_GPR_U32(ctx, 31, 0x11B0D0u);
    ctx->pc = 0x11B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0C8u;
    // 0x11b0cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B0C8u, 0x11B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0D0u;
label_11b0d0:
    // 0x11b0d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11b0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11b0d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B0D4u;
    SET_GPR_U32(ctx, 31, 0x11B0DCu);
    ctx->pc = 0x11B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0D4u;
    // 0x11b0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B0D4u, 0x11B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0DCu;
label_11b0dc:
    // 0x11b0dc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11b0dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11b0e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11b0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11b0e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B0E4u;
    {
        const bool branch_taken_0x11b0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E4u;
        // 0x11b0e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e4) {
            ctx->pc = 0x11B12Cu;
            goto label_11b12c;
        }
    }
    ctx->pc = 0x11B0ECu;
    // 0x11b0ec: 0x9222061e  lbu         $v0, 0x61E($s1)
    ctx->pc = 0x11b0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1566)));
    // 0x11b0f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B0F0u;
    {
        const bool branch_taken_0x11b0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F0u;
        // 0x11b0f4: 0xae2315b0  sw          $v1, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f0) {
            ctx->pc = 0x11B108u;
            goto label_11b108;
        }
    }
    ctx->pc = 0x11B0F8u;
    // 0x11b0f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b0fc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11b100: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x11B100u;
    {
        const bool branch_taken_0x11b100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B100u;
        // 0x11b104: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b100) {
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B108u;
label_11b108:
    // 0x11b108: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11b10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b110: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11b114: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x11b114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x11b118: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11b11c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x11b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b120: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11b120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b124: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x11B124u;
    {
        const bool branch_taken_0x11b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B124u;
        // 0x11b128: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b124) {
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B12Cu;
label_11b12c:
    // 0x11b12c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11b130: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x11B130u;
    {
        const bool branch_taken_0x11b130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B130u;
        // 0x11b134: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b130) {
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B138u;
    // 0x11b138: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11b138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11b13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b140: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11B140u;
    SET_GPR_U32(ctx, 31, 0x11B148u);
    ctx->pc = 0x11B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B140u;
    // 0x11b144: 0x8e25160c  lw          $a1, 0x160C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11B140u, 0x11B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B148u;
label_11b148:
    // 0x11b148: 0x8623054a  lh          $v1, 0x54A($s1)
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11b14c: 0x5c600043  bgtzl       $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x11B14Cu;
    {
        const bool branch_taken_0x11b14c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x11b14c) {
            ctx->pc = 0x11B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B14Cu;
            // 0x11b150: 0xae20160c  sw          $zero, 0x160C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B154u;
    // 0x11b154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b158: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x11b158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x11b15c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11B15Cu;
    {
        const bool branch_taken_0x11b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B15Cu;
        // 0x11b160: 0xae20160c  sw          $zero, 0x160C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b15c) {
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B164u;
label_11b164:
    // 0x11b164: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11b168: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B168u;
    {
        const bool branch_taken_0x11b168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B168u;
        // 0x11b16c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b168) {
            ctx->pc = 0x11B1C0u;
            goto label_11b1c0;
        }
    }
    ctx->pc = 0x11B170u;
    // 0x11b170: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11b174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b178: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11b17c: 0x8c43051c  lw          $v1, 0x51C($v0)
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x11b180: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b184: 0x8c4a0520  lw          $t2, 0x520($v0)
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x11b188: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b18c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b190: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x11b190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b194: 0xc042902  jal         func_10A408
    ctx->pc = 0x11B194u;
    SET_GPR_U32(ctx, 31, 0x11B19Cu);
    ctx->pc = 0x11B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B194u;
    // 0x11b198: 0x1429021  addu        $s2, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11B194u, 0x11B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B19Cu;
label_11b19c:
    // 0x11b19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b1a4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x11b1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11b1a8: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b1ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1b0: 0xc042908  jal         func_10A420
    ctx->pc = 0x11B1B0u;
    SET_GPR_U32(ctx, 31, 0x11B1B8u);
    ctx->pc = 0x11B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1B0u;
    // 0x11b1b4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11B1B0u, 0x11B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1B8u;
label_11b1b8:
    // 0x11b1b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11B1B8u;
    {
        const bool branch_taken_0x11b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1B8u;
        // 0x11b1bc: 0xa2201684  sb          $zero, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1b8) {
            ctx->pc = 0x11B1D4u;
            goto label_11b1d4;
        }
    }
    ctx->pc = 0x11B1C0u;
label_11b1c0:
    // 0x11b1c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11b1c4: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x11b1c8: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x11b1cc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b1d0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11b1d4:
    // 0x11b1d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b1d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1e4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11b1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b1e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B1ECu;
    SET_GPR_U32(ctx, 31, 0x11B1F4u);
    ctx->pc = 0x11B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1ECu;
    // 0x11b1f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B1ECu, 0x11B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1F4u;
label_11b1f4:
    // 0x11b1f4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11b1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11b1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b1fc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b200:
    // 0x11b200: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B200u;
    SET_GPR_U32(ctx, 31, 0x11B208u);
    ctx->pc = 0x11B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B200u;
    // 0x11b204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B200u, 0x11B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B208u;
label_11b208:
    // 0x11b208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B208u;
    {
        const bool branch_taken_0x11b208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b208) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B210u;
    // 0x11b210: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11b210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b214: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11b214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b218: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11b218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b21c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11b21cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11b220:
    // 0x11b220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b224: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b22c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B22Cu;
    SET_GPR_U32(ctx, 31, 0x11B234u);
    ctx->pc = 0x11B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B22Cu;
    // 0x11b230: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B22Cu, 0x11B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B234u;
label_11b234:
    // 0x11b234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b238: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B238u;
    SET_GPR_U32(ctx, 31, 0x11B240u);
    ctx->pc = 0x11B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B238u;
    // 0x11b23c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B238u, 0x11B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B240u;
label_11b240:
    // 0x11b240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b244: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11B244u;
    SET_GPR_U32(ctx, 31, 0x11B24Cu);
    ctx->pc = 0x11B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B244u;
    // 0x11b248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11B244u, 0x11B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B24Cu;
label_11b24c:
    // 0x11b24c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B24Cu;
    {
        const bool branch_taken_0x11b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B24Cu;
        // 0x11b250: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b24c) {
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B254u;
    // 0x11b254: 0xc04290e  jal         func_10A438
    ctx->pc = 0x11B254u;
    SET_GPR_U32(ctx, 31, 0x11B25Cu);
    ctx->pc = 0x11B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B254u;
    // 0x11b258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x11B254u, 0x11B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B25Cu;
label_11b25c:
    // 0x11b25c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11b25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11b260:
    // 0x11b260: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11b260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11b264:
    // 0x11b264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11b264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b268: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11b268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b270: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b274: 0x3e00008  jr          $ra
    ctx->pc = 0x11B274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B274u;
        // 0x11b278: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B27Cu;
    // 0x11b27c: 0x0  nop
    ctx->pc = 0x11b27cu;
    // NOP
    ctx->pc = 0x11b280u;
}
