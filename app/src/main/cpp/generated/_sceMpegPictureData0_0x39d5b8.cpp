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

// Function: _sceMpegPictureData0
// Address: 0x39d5b8 - 0x39d7f8
void _sceMpegPictureData0_0x39d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegPictureData0_0x39d5b8");
#endif

    switch (ctx->pc) {
        case 0x39d610u: goto label_39d610;
        case 0x39d614u: goto label_39d614;
        case 0x39d61cu: goto label_39d61c;
        case 0x39d638u: goto label_39d638;
        case 0x39d640u: goto label_39d640;
        case 0x39d688u: goto label_39d688;
        case 0x39d6acu: goto label_39d6ac;
        case 0x39d720u: goto label_39d720;
        case 0x39d750u: goto label_39d750;
        case 0x39d780u: goto label_39d780;
        case 0x39d7b4u: goto label_39d7b4;
        case 0x39d7ccu: goto label_39d7cc;
        default: break;
    }

    ctx->pc = 0x39d5b8u;

    // 0x39d5b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39d5bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39d5c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39d5c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39d5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d5c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39d5cc: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x39d5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39d5d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39d5d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39d5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d5d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x39d5dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x39d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x39d5e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x39d5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39d5e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39d5e8: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x39d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x39d5ec: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x39d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x39d5f0: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x39d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x39d5f4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x39d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x39d5f8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x39d5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x39d5fc: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x39d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x39d600: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x39d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x39d604: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x39d604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x39d608: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x39d608u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x39d60c: 0x0  nop
    ctx->pc = 0x39d60cu;
    // NOP
label_39d610:
    // 0x39d610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d614:
    // 0x39d614: 0xc0e75fe  jal         func_39D7F8
    ctx->pc = 0x39D614u;
    SET_GPR_U32(ctx, 31, 0x39D61Cu);
    ctx->pc = 0x39D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D614u;
    // 0x39d618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D7F8u, 0x39D614u, 0x39D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D61Cu;
label_39d61c:
    // 0x39d61c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x39d61cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d620: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x39D620u;
    {
        const bool branch_taken_0x39d620 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x39D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D620u;
        // 0x39d624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d620) {
            ctx->pc = 0x39D614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d614;
        }
    }
    ctx->pc = 0x39D628u;
    // 0x39d628: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39D628u;
    {
        const bool branch_taken_0x39d628 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x39d628) {
            ctx->pc = 0x39D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d610;
        }
    }
    ctx->pc = 0x39D630u;
    // 0x39d630: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39D630u;
    SET_GPR_U32(ctx, 31, 0x39D638u);
    ctx->pc = 0x39D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D630u;
    // 0x39d634: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39D630u, 0x39D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D638u;
label_39d638:
    // 0x39d638: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39D638u;
    SET_GPR_U32(ctx, 31, 0x39D640u);
    ctx->pc = 0x39D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D638u;
    // 0x39d63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39D638u, 0x39D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D640u;
label_39d640:
    // 0x39d640: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39d644: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39d648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d648u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x39d64c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x39D64Cu;
    {
        const bool branch_taken_0x39d64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D64Cu;
        // 0x39d650: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d64c) {
            ctx->pc = 0x39D6D4u;
            goto label_39d6d4;
        }
    }
    ctx->pc = 0x39D654u;
    // 0x39d654: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39d658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d65c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x39d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x39d660: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x39D660u;
    {
        const bool branch_taken_0x39d660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D660u;
        // 0x39d664: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d660) {
            ctx->pc = 0x39D6D8u;
            goto label_39d6d8;
        }
    }
    ctx->pc = 0x39D668u;
    // 0x39d668: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x39d668u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x39d66c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x39d66cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x39d670: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x39d670u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x39d674: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x39d674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x39d678: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x39d678u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x39d67c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x39d67cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x39d680: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x39d680u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x39d684: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x39d684u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_39d688:
    // 0x39d688: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39d68c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x39D68Cu;
    {
        const bool branch_taken_0x39d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d68c) {
            ctx->pc = 0x39D690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D68Cu;
            // 0x39d690: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D6B0u;
            goto label_39d6b0;
        }
    }
    ctx->pc = 0x39D694u;
    // 0x39d694: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39d698: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x39d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39d69c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D69Cu;
    {
        const bool branch_taken_0x39d69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d69c) {
            ctx->pc = 0x39D6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D69Cu;
            // 0x39d6a0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D6B0u;
            goto label_39d6b0;
        }
    }
    ctx->pc = 0x39D6A4u;
    // 0x39d6a4: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39D6A4u;
    SET_GPR_U32(ctx, 31, 0x39D6ACu);
    ctx->pc = 0x39D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6A4u;
    // 0x39d6a8: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39D6A4u, 0x39D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6ACu;
label_39d6ac:
    // 0x39d6ac: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x39d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_39d6b0:
    // 0x39d6b0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x39D6B0u;
    {
        const bool branch_taken_0x39d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d6b0) {
            ctx->pc = 0x39D718u;
            goto label_39d718;
        }
    }
    ctx->pc = 0x39D6B8u;
    // 0x39d6b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39d6bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D6BCu;
    {
        const bool branch_taken_0x39d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6BCu;
        // 0x39d6c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6bc) {
            ctx->pc = 0x39D6D8u;
            goto label_39d6d8;
        }
    }
    ctx->pc = 0x39D6C4u;
    // 0x39d6c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39d6c8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x39d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x39d6cc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x39D6CCu;
    {
        const bool branch_taken_0x39d6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d6cc) {
            ctx->pc = 0x39D688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d688;
        }
    }
    ctx->pc = 0x39D6D4u;
label_39d6d4:
    // 0x39d6d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39d6d8:
    // 0x39d6d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39d6dc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39d6e0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39d6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39d6e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d6e8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39d6e8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39d6ec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39d6f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39d6f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39d6f4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x39D6F4u;
    {
        const bool branch_taken_0x39d6f4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6F4u;
        // 0x39d6f8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6f4) {
            ctx->pc = 0x39D728u;
            goto label_39d728;
        }
    }
    ctx->pc = 0x39D6FCu;
    // 0x39d6fc: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x39d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39d700: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D700u;
    {
        const bool branch_taken_0x39d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D700u;
        // 0x39d704: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d700) {
            ctx->pc = 0x39D710u;
            goto label_39d710;
        }
    }
    ctx->pc = 0x39D708u;
    // 0x39d708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D708u;
    {
        const bool branch_taken_0x39d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D708u;
        // 0x39d70c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d708) {
            ctx->pc = 0x39D72Cu;
            goto label_39d72c;
        }
    }
    ctx->pc = 0x39D710u;
label_39d710:
    // 0x39d710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39D710u;
    {
        const bool branch_taken_0x39d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D710u;
        // 0x39d714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d710) {
            ctx->pc = 0x39D72Cu;
            goto label_39d72c;
        }
    }
    ctx->pc = 0x39D718u;
label_39d718:
    // 0x39d718: 0xc0e708a  jal         func_39C228
    ctx->pc = 0x39D718u;
    SET_GPR_U32(ctx, 31, 0x39D720u);
    ctx->pc = 0x39C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C228u, 0x39D718u, 0x39D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D720u;
label_39d720:
    // 0x39d720: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39D720u;
    {
        const bool branch_taken_0x39d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D720u;
        // 0x39d724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d720) {
            ctx->pc = 0x39D754u;
            goto label_39d754;
        }
    }
    ctx->pc = 0x39D728u;
label_39d728:
    // 0x39d728: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39d72c:
    // 0x39d72c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x39d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x39d730: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39d734: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39d738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d738u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39d73c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x39d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x39d740: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D740u;
    {
        const bool branch_taken_0x39d740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D740u;
        // 0x39d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d740) {
            ctx->pc = 0x39D750u;
            goto label_39d750;
        }
    }
    ctx->pc = 0x39D748u;
    // 0x39d748: 0xc0e70b2  jal         func_39C2C8
    ctx->pc = 0x39D748u;
    SET_GPR_U32(ctx, 31, 0x39D750u);
    ctx->pc = 0x39D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D748u;
    // 0x39d74c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2C8u, 0x39D748u, 0x39D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D750u;
label_39d750:
    // 0x39d750: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x39d750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39d754:
    // 0x39d754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D754u;
    {
        const bool branch_taken_0x39d754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D754u;
        // 0x39d758: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d754) {
            ctx->pc = 0x39D770u;
            goto label_39d770;
        }
    }
    ctx->pc = 0x39D75Cu;
    // 0x39d75c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x39d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x39d760: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x39D760u;
    {
        const bool branch_taken_0x39d760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D760u;
        // 0x39d764: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d760) {
            ctx->pc = 0x39D7D0u;
            goto label_39d7d0;
        }
    }
    ctx->pc = 0x39D768u;
    // 0x39d768: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x39d768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39d76c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_39d770:
    // 0x39d770: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x39d770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x39d774: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x39d774u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39d778: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x39d778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x39d77c: 0x0  nop
    ctx->pc = 0x39d77cu;
    // NOP
label_39d780:
    // 0x39d780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39d784: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x39d784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x39d788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39d78c: 0x0  nop
    ctx->pc = 0x39d78cu;
    // NOP
    // 0x39d790: 0x0  nop
    ctx->pc = 0x39d790u;
    // NOP
    // 0x39d794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39D794u;
    {
        const bool branch_taken_0x39d794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d794) {
            ctx->pc = 0x39D780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d780;
        }
    }
    ctx->pc = 0x39D79Cu;
    // 0x39d79c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D79Cu;
    {
        const bool branch_taken_0x39d79c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D79Cu;
        // 0x39d7a0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d79c) {
            ctx->pc = 0x39D7B8u;
            goto label_39d7b8;
        }
    }
    ctx->pc = 0x39D7A4u;
    // 0x39d7a4: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x39d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x39d7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d7ac: 0xc0e74e6  jal         func_39D398
    ctx->pc = 0x39D7ACu;
    SET_GPR_U32(ctx, 31, 0x39D7B4u);
    ctx->pc = 0x39D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7ACu;
    // 0x39d7b0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D398u, 0x39D7ACu, 0x39D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D7B4u;
label_39d7b4:
    // 0x39d7b4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x39d7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39d7b8:
    // 0x39d7b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D7B8u;
    {
        const bool branch_taken_0x39d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7B8u;
        // 0x39d7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7b8) {
            ctx->pc = 0x39D7CCu;
            goto label_39d7cc;
        }
    }
    ctx->pc = 0x39D7C0u;
    // 0x39d7c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39d7c4: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39D7C4u;
    SET_GPR_U32(ctx, 31, 0x39D7CCu);
    ctx->pc = 0x39D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7C4u;
    // 0x39d7c8: 0x24a5e6e0  addiu       $a1, $a1, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39D7C4u, 0x39D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D7CCu;
label_39d7cc:
    // 0x39d7cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39d7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d7d0:
    // 0x39d7d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39d7d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x39d7d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39d7d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39d7d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39d7dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39d7dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39d7e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39d7e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39d7e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39d7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39d7e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39d7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39d7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x39D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7F0u;
        // 0x39d7f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D7F8u;
}
