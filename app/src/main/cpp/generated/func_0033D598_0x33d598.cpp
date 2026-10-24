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

// Function: func_0033D598
// Address: 0x33d598 - 0x33d720
void func_0033D598_0x33d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D598_0x33d598");
#endif

    switch (ctx->pc) {
        case 0x33d610u: goto label_33d610;
        default: break;
    }

    ctx->pc = 0x33d598u;

    // 0x33d598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33d59c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33d5a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33d5a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x33d5a8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x33d5ac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x33d5b0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33d5b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d5b4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x33d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x33d5b8: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x33d5b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x33d5bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33d5c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33d5c4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x33d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x33d5c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x33d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x33d5cc: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x33d5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x33d5d0: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x33d5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x33d5d4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D5D4u;
    {
        const bool branch_taken_0x33d5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d5d4) {
            ctx->pc = 0x33D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D5D4u;
            // 0x33d5d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D5DCu;
            goto label_33d5dc;
        }
    }
    ctx->pc = 0x33D5DCu;
label_33d5dc:
    // 0x33d5dc: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x33d5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33d5e0: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x33d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x33d5e4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33d5e8: 0x8ed70040  lw          $s7, 0x40($s6)
    ctx->pc = 0x33d5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x33d5ec: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x33d5ecu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d5f0: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x33d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x33d5f4: 0x8e9e0014  lw          $fp, 0x14($s4)
    ctx->pc = 0x33d5f4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x33d5f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33d5fc: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x33d5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x33d600: 0x8010  mfhi        $s0
    ctx->pc = 0x33d600u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x33d604: 0x9012  mflo        $s2
    ctx->pc = 0x33d604u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x33d608: 0xc0cfed8  jal         func_33FB60
    ctx->pc = 0x33D608u;
    SET_GPR_U32(ctx, 31, 0x33D610u);
    ctx->pc = 0x33D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D608u;
    // 0x33d60c: 0x8e950020  lw          $s5, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB60u, 0x33D608u, 0x33D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D610u;
label_33d610:
    // 0x33d610: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x33d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x33d614: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x33d614u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33d618: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x33d618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x33d61c: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x33d61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x33d620: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33d624: 0x70539818  mult1       $s3, $v0, $s3
    ctx->pc = 0x33d624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x33d628: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D628u;
    {
        const bool branch_taken_0x33d628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d628) {
            ctx->pc = 0x33D62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D628u;
            // 0x33d62c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D630u;
            goto label_33d630;
        }
    }
    ctx->pc = 0x33D630u;
label_33d630:
    // 0x33d630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33d630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d634: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x33d634u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d638: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x33d638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33d63c: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x33d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
    // 0x33d640: 0x8812  mflo        $s1
    ctx->pc = 0x33d640u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x33d644: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x33d644u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33d648: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x33d648u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x33d64c: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x33d64cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x33d650: 0xaed00090  sw          $s0, 0x90($s6)
    ctx->pc = 0x33d650u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 16));
    // 0x33d654: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x33d654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x33d658: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33D658u;
    {
        const bool branch_taken_0x33d658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D658u;
        // 0x33d65c: 0x2b7a823  subu        $s5, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d658) {
            ctx->pc = 0x33D6F0u;
            goto label_33d6f0;
        }
    }
    ctx->pc = 0x33D660u;
    // 0x33d660: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33d660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d664: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D664u;
    {
        const bool branch_taken_0x33d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x33D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D664u;
        // 0x33d668: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d664) {
            ctx->pc = 0x33D678u;
            goto label_33d678;
        }
    }
    ctx->pc = 0x33D66Cu;
    // 0x33d66c: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x33d670: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33D670u;
    {
        const bool branch_taken_0x33d670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D670u;
        // 0x33d674: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d670) {
            ctx->pc = 0x33D6B8u;
            goto label_33d6b8;
        }
    }
    ctx->pc = 0x33D678u;
label_33d678:
    // 0x33d678: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x33d678u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33d67c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33d67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d680: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33d680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33d684: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33d684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d688: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33d688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33d68c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d690: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33d690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d694: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33d694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33d698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d69c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33d69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33d6a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33d6a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d6a4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33d6a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d6a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33d6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33d6ac: 0x80cf542  j           func_33D508
    ctx->pc = 0x33D6ACu;
    ctx->pc = 0x33D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6ACu;
    // 0x33d6b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D508u, 0x33D6ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D6B4u;
    // 0x33d6b4: 0x0  nop
    ctx->pc = 0x33d6b4u;
    // NOP
label_33d6b8:
    // 0x33d6b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d6bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33d6bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33d6c0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33d6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d6c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33d6c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33d6c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33d6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d6cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33d6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d6d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33d6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d6d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33d6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d6d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33d6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33d6dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33d6dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d6e0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33d6e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d6e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33d6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33d6e8: 0x80cf55e  j           func_33D578
    ctx->pc = 0x33D6E8u;
    ctx->pc = 0x33D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6E8u;
    // 0x33d6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D578u, 0x33D6E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D6F0u;
label_33d6f0:
    // 0x33d6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33d6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d6f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33d6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d6f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33d6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d6fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33d6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33d700: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33d700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d704: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33d704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33d708: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33d708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d70c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33d70cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33d710: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x33d710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33d714: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33d714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33d718: 0x3e00008  jr          $ra
    ctx->pc = 0x33D718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D718u;
        // 0x33d71c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D720u;
}
