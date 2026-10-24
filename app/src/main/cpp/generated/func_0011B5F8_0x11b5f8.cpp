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

// Function: func_0011B5F8
// Address: 0x11b5f8 - 0x11b900
void func_0011B5F8_0x11b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011B5F8_0x11b5f8");
#endif

    switch (ctx->pc) {
        case 0x11b660u: goto label_11b660;
        case 0x11b6a4u: goto label_11b6a4;
        case 0x11b6e4u: goto label_11b6e4;
        case 0x11b6f4u: goto label_11b6f4;
        case 0x11b714u: goto label_11b714;
        case 0x11b738u: goto label_11b738;
        case 0x11b744u: goto label_11b744;
        case 0x11b74cu: goto label_11b74c;
        case 0x11b754u: goto label_11b754;
        case 0x11b778u: goto label_11b778;
        case 0x11b7c4u: goto label_11b7c4;
        case 0x11b804u: goto label_11b804;
        case 0x11b810u: goto label_11b810;
        case 0x11b844u: goto label_11b844;
        case 0x11b858u: goto label_11b858;
        case 0x11b860u: goto label_11b860;
        case 0x11b8d4u: goto label_11b8d4;
        case 0x11b8e0u: goto label_11b8e0;
        default: break;
    }

    ctx->pc = 0x11b5f8u;

    // 0x11b5f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11b5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11b5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b600: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11b604: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11b608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b60c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b610: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11b614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b618: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11b618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11b61c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11b61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11b620: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x11B620u;
    {
        const bool branch_taken_0x11b620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B620u;
        // 0x11b624: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b620) {
            ctx->pc = 0x11B770u;
            goto label_11b770;
        }
    }
    ctx->pc = 0x11B628u;
    // 0x11b628: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B628u;
            // 0x11b62c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B640u;
            goto label_11b640;
        }
    }
    ctx->pc = 0x11B630u;
    // 0x11b630: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B630u;
    {
        const bool branch_taken_0x11b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B630u;
        // 0x11b634: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b630) {
            ctx->pc = 0x11B658u;
            goto label_11b658;
        }
    }
    ctx->pc = 0x11B638u;
    // 0x11b638: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x11B638u;
    {
        const bool branch_taken_0x11b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B638u;
        // 0x11b63c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b638) {
            ctx->pc = 0x11B8E8u;
            goto label_11b8e8;
        }
    }
    ctx->pc = 0x11B640u;
label_11b640:
    // 0x11b640: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x11B640u;
    {
        const bool branch_taken_0x11b640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B640u;
        // 0x11b644: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b640) {
            ctx->pc = 0x11B818u;
            goto label_11b818;
        }
    }
    ctx->pc = 0x11B648u;
    // 0x11b648: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x11B648u;
    {
        const bool branch_taken_0x11b648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B648u;
        // 0x11b64c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b648) {
            ctx->pc = 0x11B850u;
            goto label_11b850;
        }
    }
    ctx->pc = 0x11B650u;
    // 0x11b650: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x11B650u;
    {
        const bool branch_taken_0x11b650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B650u;
        // 0x11b654: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b650) {
            ctx->pc = 0x11B8E8u;
            goto label_11b8e8;
        }
    }
    ctx->pc = 0x11B658u;
label_11b658:
    // 0x11b658: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11B658u;
    SET_GPR_U32(ctx, 31, 0x11B660u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11B658u, 0x11B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B660u;
label_11b660:
    // 0x11b660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11b664: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B664u;
    {
        const bool branch_taken_0x11b664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B664u;
        // 0x11b668: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b664) {
            ctx->pc = 0x11B6ACu;
            goto label_11b6ac;
        }
    }
    ctx->pc = 0x11B66Cu;
    // 0x11b66c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11b670: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x11b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11b674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b678: 0x8c49014c  lw          $t1, 0x14C($v0)
    ctx->pc = 0x11b678u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x11b67c: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x11b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x11b680: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x11b684: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11b684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b688: 0x1229021  addu        $s2, $t1, $v0
    ctx->pc = 0x11b688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11b68c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b68cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b690: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x11b690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b69c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B69Cu;
    SET_GPR_U32(ctx, 31, 0x11B6A4u);
    ctx->pc = 0x11B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B69Cu;
    // 0x11b6a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B69Cu, 0x11B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6A4u;
label_11b6a4:
    // 0x11b6a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11B6A4u;
    {
        const bool branch_taken_0x11b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A4u;
        // 0x11b6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a4) {
            ctx->pc = 0x11B6E8u;
            goto label_11b6e8;
        }
    }
    ctx->pc = 0x11B6ACu;
label_11b6ac:
    // 0x11b6ac: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11b6b0: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x11b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11b6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6b8: 0x8c490154  lw          $t1, 0x154($v0)
    ctx->pc = 0x11b6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x11b6bc: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x11b6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x11b6c0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x11b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x11b6c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11b6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6c8: 0x1229021  addu        $s2, $t1, $v0
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11b6cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6d0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x11b6d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b6d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b6d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6dc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B6DCu;
    SET_GPR_U32(ctx, 31, 0x11B6E4u);
    ctx->pc = 0x11B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6DCu;
    // 0x11b6e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B6DCu, 0x11B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6E4u;
label_11b6e4:
    // 0x11b6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b6e8:
    // 0x11b6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6ec: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11B6ECu;
    SET_GPR_U32(ctx, 31, 0x11B6F4u);
    ctx->pc = 0x11B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6ECu;
    // 0x11b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11B6ECu, 0x11B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6F4u;
label_11b6f4:
    // 0x11b6f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b6f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b70c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B70Cu;
    SET_GPR_U32(ctx, 31, 0x11B714u);
    ctx->pc = 0x11B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B70Cu;
    // 0x11b710: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B70Cu, 0x11B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B714u;
label_11b714:
    // 0x11b714: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x11b714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x11b718: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11b718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11b728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b72c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11b730: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B730u;
    SET_GPR_U32(ctx, 31, 0x11B738u);
    ctx->pc = 0x11B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B730u;
    // 0x11b734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B730u, 0x11B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B738u;
label_11b738:
    // 0x11b738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b73c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11B73Cu;
    SET_GPR_U32(ctx, 31, 0x11B744u);
    ctx->pc = 0x11B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B73Cu;
    // 0x11b740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11B73Cu, 0x11B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B744u;
label_11b744:
    // 0x11b744: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11B744u;
    SET_GPR_U32(ctx, 31, 0x11B74Cu);
    ctx->pc = 0x11B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B744u;
    // 0x11b748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11B744u, 0x11B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B74Cu;
label_11b74c:
    // 0x11b74c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11B74Cu;
    SET_GPR_U32(ctx, 31, 0x11B754u);
    ctx->pc = 0x11B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B74Cu;
    // 0x11b750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11B74Cu, 0x11B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B754u;
label_11b754:
    // 0x11b754: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11b754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11b758: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11b75c: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x11b760: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x11b760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x11b764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b768: 0xae2415b0  sw          $a0, 0x15B0($s1)
    ctx->pc = 0x11b768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 4));
    // 0x11b76c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b770:
    // 0x11b770: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x11B770u;
    SET_GPR_U32(ctx, 31, 0x11B778u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x11B770u, 0x11B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B778u;
label_11b778:
    // 0x11b778: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11b778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11b77c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x11b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x11b780: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x11b780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x11b784: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11b788: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B788u;
    {
        const bool branch_taken_0x11b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b788) {
            ctx->pc = 0x11B78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B788u;
            // 0x11b78c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B7A0u;
            goto label_11b7a0;
        }
    }
    ctx->pc = 0x11B790u;
    // 0x11b790: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11b794: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x11b798: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11b79c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x11b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_11b7a0:
    // 0x11b7a0: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x11b7a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11b7a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7A8u;
    {
        const bool branch_taken_0x11b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7a8) {
            ctx->pc = 0x11B7BCu;
            goto label_11b7bc;
        }
    }
    ctx->pc = 0x11B7B0u;
    // 0x11b7b0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11b7b4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x11b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x11b7b8: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_11b7bc:
    // 0x11b7bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B7BCu;
    SET_GPR_U32(ctx, 31, 0x11B7C4u);
    ctx->pc = 0x11B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7BCu;
    // 0x11b7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B7BCu, 0x11B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7C4u;
label_11b7c4:
    // 0x11b7c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B7C4u;
    {
        const bool branch_taken_0x11b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C4u;
        // 0x11b7c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c4) {
            ctx->pc = 0x11B7D0u;
            goto label_11b7d0;
        }
    }
    ctx->pc = 0x11B7CCu;
    // 0x11b7cc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b7d0:
    // 0x11b7d0: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x11b7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x11b7d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7D4u;
    {
        const bool branch_taken_0x11b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D4u;
        // 0x11b7d8: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d4) {
            ctx->pc = 0x11B7E8u;
            goto label_11b7e8;
        }
    }
    ctx->pc = 0x11B7DCu;
    // 0x11b7dc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11b7e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B7E0u;
    {
        const bool branch_taken_0x11b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7E0u;
        // 0x11b7e4: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7e0) {
            ctx->pc = 0x11B7F0u;
            goto label_11b7f0;
        }
    }
    ctx->pc = 0x11B7E8u;
label_11b7e8:
    // 0x11b7e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b7ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b7f0:
    // 0x11b7f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b7f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B7FCu;
    SET_GPR_U32(ctx, 31, 0x11B804u);
    ctx->pc = 0x11B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7FCu;
    // 0x11b800: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B7FCu, 0x11B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B804u;
label_11b804:
    // 0x11b804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b808: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B808u;
    SET_GPR_U32(ctx, 31, 0x11B810u);
    ctx->pc = 0x11B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B808u;
    // 0x11b80c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B808u, 0x11B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B810u;
label_11b810:
    // 0x11b810: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11B810u;
    {
        const bool branch_taken_0x11b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B810u;
        // 0x11b814: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b810) {
            ctx->pc = 0x11B8E4u;
            goto label_11b8e4;
        }
    }
    ctx->pc = 0x11B818u;
label_11b818:
    // 0x11b818: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11b81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b824: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11b824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b828: 0x8c45049c  lw          $a1, 0x49C($v0)
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x11b82c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b830: 0x8c4604a0  lw          $a2, 0x4A0($v0)
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1184)));
    // 0x11b834: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b838: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11b83c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B83Cu;
    SET_GPR_U32(ctx, 31, 0x11B844u);
    ctx->pc = 0x11B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B83Cu;
    // 0x11b840: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B83Cu, 0x11B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B844u;
label_11b844:
    // 0x11b844: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11b844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11b848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b84c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11b84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11b850:
    // 0x11b850: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x11B850u;
    SET_GPR_U32(ctx, 31, 0x11B858u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x11B850u, 0x11B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B858u;
label_11b858:
    // 0x11b858: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11B858u;
    SET_GPR_U32(ctx, 31, 0x11B860u);
    ctx->pc = 0x11B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B858u;
    // 0x11b85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11B858u, 0x11B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B860u;
label_11b860:
    // 0x11b860: 0x8e2415b0  lw          $a0, 0x15B0($s1)
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11b864: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11b868: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x11b868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x11b86c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x11b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11b870: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11b870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11b874: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x11b874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x11b878: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11b87c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B87Cu;
    {
        const bool branch_taken_0x11b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B87Cu;
        // 0x11b880: 0x2482fffa  addiu       $v0, $a0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b87c) {
            ctx->pc = 0x11B888u;
            goto label_11b888;
        }
    }
    ctx->pc = 0x11B884u;
    // 0x11b884: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_11b888:
    // 0x11b888: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11b88c: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x11b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x11b890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11b894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B894u;
    {
        const bool branch_taken_0x11b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B894u;
        // 0x11b898: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b894) {
            ctx->pc = 0x11B8A8u;
            goto label_11b8a8;
        }
    }
    ctx->pc = 0x11B89Cu;
    // 0x11b89c: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x11b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x11b8a0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11b8a4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_11b8a8:
    // 0x11b8a8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B8A8u;
    {
        const bool branch_taken_0x11b8a8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11b8a8) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B8B0u;
    // 0x11b8b0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11b8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b8b4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b8b8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11b8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b8bc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11b8c0:
    // 0x11b8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b8c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8cc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11B8CCu;
    SET_GPR_U32(ctx, 31, 0x11B8D4u);
    ctx->pc = 0x11B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8CCu;
    // 0x11b8d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11B8CCu, 0x11B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8D4u;
label_11b8d4:
    // 0x11b8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8d8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11B8D8u;
    SET_GPR_U32(ctx, 31, 0x11B8E0u);
    ctx->pc = 0x11B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8D8u;
    // 0x11b8dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11B8D8u, 0x11B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8E0u;
label_11b8e0:
    // 0x11b8e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11b8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11b8e4:
    // 0x11b8e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11b8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b8e8:
    // 0x11b8e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b8ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11b8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b8f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F8u;
        // 0x11b8fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B900u;
}
