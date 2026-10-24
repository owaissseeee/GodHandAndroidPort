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

// Function: func_0030D5C8
// Address: 0x30d5c8 - 0x30d8e0
void func_0030D5C8_0x30d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D5C8_0x30d5c8");
#endif

    switch (ctx->pc) {
        case 0x30d624u: goto label_30d624;
        case 0x30d680u: goto label_30d680;
        case 0x30d690u: goto label_30d690;
        case 0x30d69cu: goto label_30d69c;
        case 0x30d6c0u: goto label_30d6c0;
        case 0x30d710u: goto label_30d710;
        case 0x30d718u: goto label_30d718;
        case 0x30d728u: goto label_30d728;
        case 0x30d754u: goto label_30d754;
        case 0x30d780u: goto label_30d780;
        case 0x30d7b0u: goto label_30d7b0;
        case 0x30d7d0u: goto label_30d7d0;
        case 0x30d7e0u: goto label_30d7e0;
        case 0x30d810u: goto label_30d810;
        case 0x30d820u: goto label_30d820;
        case 0x30d830u: goto label_30d830;
        case 0x30d840u: goto label_30d840;
        case 0x30d850u: goto label_30d850;
        case 0x30d860u: goto label_30d860;
        case 0x30d870u: goto label_30d870;
        case 0x30d880u: goto label_30d880;
        case 0x30d8acu: goto label_30d8ac;
        default: break;
    }

    ctx->pc = 0x30d5c8u;

    // 0x30d5c8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30d5cc: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30d5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30d5d0: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x30d5d4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x30d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x30d5d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x30d5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x30d5dc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x30d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x30d5e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30d5e4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x30d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x30d5e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30d5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5ec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x30d5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x30d5f0: 0x24557a24  addiu       $s5, $v0, 0x7A24
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x30d5f4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x30d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x30d5f8: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x30d5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30d5fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x30d600: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x30d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x30d604: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x30d604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x30d608: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x30d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x30d60c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d610: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D610u;
    {
        const bool branch_taken_0x30d610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D610u;
        // 0x30d614: 0xac437a24  sw          $v1, 0x7A24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d610) {
            ctx->pc = 0x30D624u;
            goto label_30d624;
        }
    }
    ctx->pc = 0x30D618u;
    // 0x30d618: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30d618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30d61c: 0xc0b29e6  jal         func_2CA798
    ctx->pc = 0x30D61Cu;
    SET_GPR_U32(ctx, 31, 0x30D624u);
    ctx->pc = 0x30D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D61Cu;
    // 0x30d620: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA798u, 0x30D61Cu, 0x30D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D624u;
label_30d624:
    // 0x30d624: 0x8e837a24  lw          $v1, 0x7A24($s4)
    ctx->pc = 0x30d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
    // 0x30d628: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x30d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x30d62c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30d630: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30d630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d634: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30d638: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x30d638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x30d63c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30D63Cu;
    {
        const bool branch_taken_0x30d63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D63Cu;
        // 0x30d640: 0xae827a24  sw          $v0, 0x7A24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d63c) {
            ctx->pc = 0x30D6C4u;
            goto label_30d6c4;
        }
    }
    ctx->pc = 0x30D644u;
    // 0x30d644: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x30d644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x30d648: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x30d648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x30d64c: 0x26103bc8  addiu       $s0, $s0, 0x3BC8
    ctx->pc = 0x30d64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15304));
    // 0x30d650: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x30d650u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x30d654: 0x26313f20  addiu       $s1, $s1, 0x3F20
    ctx->pc = 0x30d654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16160));
    // 0x30d658: 0x26524200  addiu       $s2, $s2, 0x4200
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16896));
    // 0x30d65c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C3BCCu));
    // 0x30d660: 0x26a6ffcc  addiu       $a2, $s5, -0x34
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967244));
    // 0x30d664: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x30d664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d66c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d66cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d670: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d674: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30d674u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d678: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x30D678u;
    SET_GPR_U32(ctx, 31, 0x30D680u);
    ctx->pc = 0x30D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D678u;
    // 0x30d67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x30D678u, 0x30D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D680u;
label_30d680:
    // 0x30d680: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30d680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d688: 0xc080442  jal         func_201108
    ctx->pc = 0x30D688u;
    SET_GPR_U32(ctx, 31, 0x30D690u);
    ctx->pc = 0x30D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D688u;
    // 0x30d68c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D688u, 0x30D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D690u;
label_30d690:
    // 0x30d690: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d694: 0xc080442  jal         func_201108
    ctx->pc = 0x30D694u;
    SET_GPR_U32(ctx, 31, 0x30D69Cu);
    ctx->pc = 0x30D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D694u;
    // 0x30d698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D694u, 0x30D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D69Cu;
label_30d69c:
    // 0x30d69c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x30d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30d6a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x30d6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6a8: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x30d6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x30d6ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x30d6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d6b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6b8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x30D6B8u;
    SET_GPR_U32(ctx, 31, 0x30D6C0u);
    ctx->pc = 0x30D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6B8u;
    // 0x30d6bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x30D6B8u, 0x30D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D6C0u;
label_30d6c0:
    // 0x30d6c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30d6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d6c4:
    // 0x30d6c4: 0x8e827a24  lw          $v0, 0x7A24($s4)
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
    // 0x30d6c8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x30d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x30d6cc: 0x30430400  andi        $v1, $v0, 0x400
    ctx->pc = 0x30d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x30d6d0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x30D6D0u;
    {
        const bool branch_taken_0x30d6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6D0u;
        // 0x30d6d4: 0xae827a24  sw          $v0, 0x7A24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6d0) {
            ctx->pc = 0x30D780u;
            goto label_30d780;
        }
    }
    ctx->pc = 0x30D6D8u;
    // 0x30d6d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30d6dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30d6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6e0: 0x8c503cc4  lw          $s0, 0x3CC4($v0)
    ctx->pc = 0x30d6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3C3CC4u));
    // 0x30d6e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30d6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30d6e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d6ec: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30D6ECu;
    {
        const bool branch_taken_0x30d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6ECu;
        // 0x30d6f0: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6ec) {
            ctx->pc = 0x30D774u;
            goto label_30d774;
        }
    }
    ctx->pc = 0x30D6F4u;
    // 0x30d6f4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30d6f8: 0x27d23f20  addiu       $s2, $fp, 0x3F20
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 16160));
    // 0x30d6fc: 0x24572c38  addiu       $s7, $v0, 0x2C38
    ctx->pc = 0x30d6fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 11320));
    // 0x30d700: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x30d700u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x30d704: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x30d704u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30d708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d70c: 0x0  nop
    ctx->pc = 0x30d70cu;
    // NOP
label_30d710:
    // 0x30d710: 0xc080442  jal         func_201108
    ctx->pc = 0x30D710u;
    SET_GPR_U32(ctx, 31, 0x30D718u);
    ctx->pc = 0x30D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D710u;
    // 0x30d714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D710u, 0x30D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D718u;
label_30d718:
    // 0x30d718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30d71c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d720: 0xc0c1e46  jal         func_307918
    ctx->pc = 0x30D720u;
    SET_GPR_U32(ctx, 31, 0x30D728u);
    ctx->pc = 0x30D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D720u;
    // 0x30d724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307918u, 0x30D720u, 0x30D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D728u;
label_30d728:
    // 0x30d728: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30d728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d72c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x30d72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d738: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d73c: 0x26c74200  addiu       $a3, $s6, 0x4200
    ctx->pc = 0x30d73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16896));
    // 0x30d740: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x30d740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x30d744: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d748: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d74c: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x30D74Cu;
    SET_GPR_U32(ctx, 31, 0x30D754u);
    ctx->pc = 0x30D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D74Cu;
    // 0x30d750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x30D74Cu, 0x30D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D754u;
label_30d754:
    // 0x30d754: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30d754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30d758: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30d758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d75c: 0x8c643cc4  lw          $a0, 0x3CC4($v1)
    ctx->pc = 0x30d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C3CC4u));
    // 0x30d760: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x30d760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x30d764: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x30d764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30d768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d76c: 0x1455ffe8  bne         $v0, $s5, . + 4 + (-0x18 << 2)
    ctx->pc = 0x30D76Cu;
    {
        const bool branch_taken_0x30d76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x30D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D76Cu;
        // 0x30d770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d76c) {
            ctx->pc = 0x30D710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d710;
        }
    }
    ctx->pc = 0x30D774u;
label_30d774:
    // 0x30d774: 0x27c43f20  addiu       $a0, $fp, 0x3F20
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16160));
    // 0x30d778: 0xc080442  jal         func_201108
    ctx->pc = 0x30D778u;
    SET_GPR_U32(ctx, 31, 0x30D780u);
    ctx->pc = 0x30D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D778u;
    // 0x30d77c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D778u, 0x30D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D780u;
label_30d780:
    // 0x30d780: 0x8e827a24  lw          $v0, 0x7A24($s4)
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
    // 0x30d784: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30d784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30d788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30d78c: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x30D78Cu;
    {
        const bool branch_taken_0x30d78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d78c) {
            ctx->pc = 0x30D790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D78Cu;
            // 0x30d790: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D794u;
    // 0x30d794: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30d794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30d798: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x30d79c: 0x26314200  addiu       $s1, $s1, 0x4200
    ctx->pc = 0x30d79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16896));
    // 0x30d7a0: 0x34846800  ori         $a0, $a0, 0x6800
    ctx->pc = 0x30d7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26624);
    // 0x30d7a4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d7a8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x30D7A8u;
    SET_GPR_U32(ctx, 31, 0x30D7B0u);
    ctx->pc = 0x30D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7A8u;
    // 0x30d7ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x30D7A8u, 0x30D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7B0u;
label_30d7b0:
    // 0x30d7b0: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30d7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30d7b4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x30d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x30d7b8: 0xae022c38  sw          $v0, 0x2C38($s0)
    ctx->pc = 0x30d7b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x752C38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x752C38u, _value); } while (0);
    // 0x30d7bc: 0x34849800  ori         $a0, $a0, 0x9800
    ctx->pc = 0x30d7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38912);
    // 0x30d7c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30d7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7c4: 0x26102c38  addiu       $s0, $s0, 0x2C38
    ctx->pc = 0x30d7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11320));
    // 0x30d7c8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x30D7C8u;
    SET_GPR_U32(ctx, 31, 0x30D7D0u);
    ctx->pc = 0x30D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7C8u;
    // 0x30d7cc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x30D7C8u, 0x30D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7D0u;
label_30d7d0:
    // 0x30d7d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x30d7d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d7d8: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x30D7D8u;
    SET_GPR_U32(ctx, 31, 0x30D7E0u);
    ctx->pc = 0x30D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7D8u;
    // 0x30d7dc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x30D7D8u, 0x30D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7E0u;
label_30d7e0:
    // 0x30d7e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30d7e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7e4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x30d7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30d7e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D7E8u;
    {
        const bool branch_taken_0x30d7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7E8u;
        // 0x30d7ec: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7e8) {
            ctx->pc = 0x30D808u;
            goto label_30d808;
        }
    }
    ctx->pc = 0x30D7F0u;
    // 0x30d7f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d7f4: 0x24420570  addiu       $v0, $v0, 0x570
    ctx->pc = 0x30d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x30d7f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d7fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d800: 0x800008  jr          $a0
    ctx->pc = 0x30D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30D808u: goto label_30d808;
            case 0x30D818u: goto label_30d818;
            case 0x30D828u: goto label_30d828;
            case 0x30D838u: goto label_30d838;
            case 0x30D848u: goto label_30d848;
            case 0x30D858u: goto label_30d858;
            case 0x30D868u: goto label_30d868;
            case 0x30D878u: goto label_30d878;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D800u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30D808u;
label_30d808:
    // 0x30d808: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D808u;
    SET_GPR_U32(ctx, 31, 0x30D810u);
    ctx->pc = 0x30D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D808u;
    // 0x30d80c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D808u, 0x30D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D810u;
label_30d810:
    // 0x30d810: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x30D810u;
    {
        const bool branch_taken_0x30d810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D810u;
        // 0x30d814: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d810) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D818u;
label_30d818:
    // 0x30d818: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D818u;
    SET_GPR_U32(ctx, 31, 0x30D820u);
    ctx->pc = 0x30D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D818u;
    // 0x30d81c: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D818u, 0x30D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D820u;
label_30d820:
    // 0x30d820: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30D820u;
    {
        const bool branch_taken_0x30d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D820u;
        // 0x30d824: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d820) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D828u;
label_30d828:
    // 0x30d828: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D828u;
    SET_GPR_U32(ctx, 31, 0x30D830u);
    ctx->pc = 0x30D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D828u;
    // 0x30d82c: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D828u, 0x30D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D830u;
label_30d830:
    // 0x30d830: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30D830u;
    {
        const bool branch_taken_0x30d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D830u;
        // 0x30d834: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d830) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D838u;
label_30d838:
    // 0x30d838: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D838u;
    SET_GPR_U32(ctx, 31, 0x30D840u);
    ctx->pc = 0x30D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D838u;
    // 0x30d83c: 0x2404010f  addiu       $a0, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D838u, 0x30D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D840u;
label_30d840:
    // 0x30d840: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30D840u;
    {
        const bool branch_taken_0x30d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D840u;
        // 0x30d844: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d840) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D848u;
label_30d848:
    // 0x30d848: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D848u;
    SET_GPR_U32(ctx, 31, 0x30D850u);
    ctx->pc = 0x30D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D848u;
    // 0x30d84c: 0x24040107  addiu       $a0, $zero, 0x107 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D848u, 0x30D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D850u;
label_30d850:
    // 0x30d850: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D850u;
    {
        const bool branch_taken_0x30d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D850u;
        // 0x30d854: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d850) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D858u;
label_30d858:
    // 0x30d858: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D858u;
    SET_GPR_U32(ctx, 31, 0x30D860u);
    ctx->pc = 0x30D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D858u;
    // 0x30d85c: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D858u, 0x30D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D860u;
label_30d860:
    // 0x30d860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30D860u;
    {
        const bool branch_taken_0x30d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D860u;
        // 0x30d864: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d860) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D868u;
label_30d868:
    // 0x30d868: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D868u;
    SET_GPR_U32(ctx, 31, 0x30D870u);
    ctx->pc = 0x30D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D868u;
    // 0x30d86c: 0x2404010e  addiu       $a0, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D868u, 0x30D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D870u;
label_30d870:
    // 0x30d870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D870u;
    {
        const bool branch_taken_0x30d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D870u;
        // 0x30d874: 0x8e857a24  lw          $a1, 0x7A24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d870) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D878u;
label_30d878:
    // 0x30d878: 0xc0c3638  jal         func_30D8E0
    ctx->pc = 0x30D878u;
    SET_GPR_U32(ctx, 31, 0x30D880u);
    ctx->pc = 0x30D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D878u;
    // 0x30d87c: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8E0u, 0x30D878u, 0x30D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D880u;
label_30d880:
    // 0x30d880: 0x8e857a24  lw          $a1, 0x7A24($s4)
    ctx->pc = 0x30d880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
label_30d884:
    // 0x30d884: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30d888: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x30d888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x30d88c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x30d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x30d890: 0x24662c00  addiu       $a2, $v1, 0x2C00
    ctx->pc = 0x30d890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
    // 0x30d894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30d894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30d898: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x30d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x30d89c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x30d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x752C04u));
    // 0x30d8a0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x30d8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30d8a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x30D8A4u;
    SET_GPR_U32(ctx, 31, 0x30D8ACu);
    ctx->pc = 0x30D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8A4u;
    // 0x30d8a8: 0xae857a24  sw          $a1, 0x7A24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 31268), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x30D8A4u, 0x30D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8ACu;
label_30d8ac:
    // 0x30d8ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30d8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30d8b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30d8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30d8b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30d8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30d8b8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30d8b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30d8bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x30d8bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d8c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30d8c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d8c4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x30d8c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d8c8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x30d8c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d8cc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x30d8ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30D8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8D4u;
        // 0x30d8d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D8DCu;
    // 0x30d8dc: 0x0  nop
    ctx->pc = 0x30d8dcu;
    // NOP
    ctx->pc = 0x30d8e0u;
}
