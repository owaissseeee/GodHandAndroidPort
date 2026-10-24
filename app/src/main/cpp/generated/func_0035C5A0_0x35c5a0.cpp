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

// Function: func_0035C5A0
// Address: 0x35c5a0 - 0x35ca08
void func_0035C5A0_0x35c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C5A0_0x35c5a0");
#endif

    switch (ctx->pc) {
        case 0x35c684u: goto label_35c684;
        case 0x35c69cu: goto label_35c69c;
        case 0x35c6a8u: goto label_35c6a8;
        case 0x35c6c8u: goto label_35c6c8;
        case 0x35c720u: goto label_35c720;
        case 0x35c72cu: goto label_35c72c;
        case 0x35c7a8u: goto label_35c7a8;
        case 0x35c7b4u: goto label_35c7b4;
        case 0x35c800u: goto label_35c800;
        case 0x35c828u: goto label_35c828;
        case 0x35c838u: goto label_35c838;
        case 0x35c844u: goto label_35c844;
        case 0x35c874u: goto label_35c874;
        case 0x35c898u: goto label_35c898;
        case 0x35c8b8u: goto label_35c8b8;
        case 0x35c8e4u: goto label_35c8e4;
        case 0x35c908u: goto label_35c908;
        case 0x35c914u: goto label_35c914;
        default: break;
    }

    ctx->pc = 0x35c5a0u;

    // 0x35c5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c5a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35c5b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35c5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35c5bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x35c5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c5c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x35c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35c5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c5c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35c5cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35c5d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x35c5d4: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x35c5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35c5d8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C5D8u;
    {
        const bool branch_taken_0x35c5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C5D8u;
        // 0x35c5dc: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c5d8) {
            ctx->pc = 0x35C5ECu;
            goto label_35c5ec;
        }
    }
    ctx->pc = 0x35C5E0u;
    // 0x35c5e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35c5e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x35C5E4u;
    {
        const bool branch_taken_0x35c5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c5e4) {
            ctx->pc = 0x35C5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C5E4u;
            // 0x35c5e8: 0xde650000  ld          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C628u;
            goto label_35c628;
        }
    }
    ctx->pc = 0x35C5ECu;
label_35c5ec:
    // 0x35c5ec: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x35c5ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35c5f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c5f4: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x35c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x35c5f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c5fc: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x35c5fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c604: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x35c604u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x35c608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35c608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c60c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35c60cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c610: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35c610u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c614: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35c614u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c618: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C61Cu;
        // 0x35c620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C624u;
    // 0x35c624: 0x0  nop
    ctx->pc = 0x35c624u;
    // NOP
label_35c628:
    // 0x35c628: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c62c: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x35c62cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x35c630: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x35c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35c634: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x35c634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c638: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x35c638u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x35c63c: 0x14870004  bne         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C63Cu;
    {
        const bool branch_taken_0x35c63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x35C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C63Cu;
        // 0x35c640: 0xfe650000  sd          $a1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c63c) {
            ctx->pc = 0x35C650u;
            goto label_35c650;
        }
    }
    ctx->pc = 0x35C644u;
    // 0x35c644: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35c644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35c648: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x35C648u;
    {
        const bool branch_taken_0x35c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C648u;
        // 0x35c64c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c648) {
            ctx->pc = 0x35C6F0u;
            goto label_35c6f0;
        }
    }
    ctx->pc = 0x35C650u;
label_35c650:
    // 0x35c650: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x35c650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35c654: 0x16400027  bnez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x35C654u;
    {
        const bool branch_taken_0x35c654 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C654u;
        // 0x35c658: 0xde060188  ld          $a2, 0x188($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c654) {
            ctx->pc = 0x35C6F4u;
            goto label_35c6f4;
        }
    }
    ctx->pc = 0x35C65Cu;
    // 0x35c65c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x35c65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35c660: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x35C660u;
    {
        const bool branch_taken_0x35c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c660) {
            ctx->pc = 0x35C664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C660u;
            // 0x35c664: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C6D8u;
            goto label_35c6d8;
        }
    }
    ctx->pc = 0x35C668u;
    // 0x35c668: 0xde030178  ld          $v1, 0x178($s0)
    ctx->pc = 0x35c668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x35c66c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c670: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C670u;
    {
        const bool branch_taken_0x35c670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C670u;
        // 0x35c674: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c670) {
            ctx->pc = 0x35C690u;
            goto label_35c690;
        }
    }
    ctx->pc = 0x35C678u;
    // 0x35c678: 0xde050158  ld          $a1, 0x158($s0)
    ctx->pc = 0x35c678u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x35c67c: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C67Cu;
    SET_GPR_U32(ctx, 31, 0x35C684u);
    ctx->pc = 0x35C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C67Cu;
    // 0x35c680: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C67Cu, 0x35C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C684u;
label_35c684:
    // 0x35c684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35C684u;
    {
        const bool branch_taken_0x35c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C684u;
        // 0x35c688: 0xde050160  ld          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c684) {
            ctx->pc = 0x35C6A0u;
            goto label_35c6a0;
        }
    }
    ctx->pc = 0x35C68Cu;
    // 0x35c68c: 0x0  nop
    ctx->pc = 0x35c68cu;
    // NOP
label_35c690:
    // 0x35c690: 0xde050168  ld          $a1, 0x168($s0)
    ctx->pc = 0x35c690u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x35c694: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C694u;
    SET_GPR_U32(ctx, 31, 0x35C69Cu);
    ctx->pc = 0x35C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C694u;
    // 0x35c698: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C694u, 0x35C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C69Cu;
label_35c69c:
    // 0x35c69c: 0xde050170  ld          $a1, 0x170($s0)
    ctx->pc = 0x35c69cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 368)));
label_35c6a0:
    // 0x35c6a0: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C6A0u;
    SET_GPR_U32(ctx, 31, 0x35C6A8u);
    ctx->pc = 0x35C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6A0u;
    // 0x35c6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C6A0u, 0x35C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6A8u;
label_35c6a8:
    // 0x35c6a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35c6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6ac: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x35c6acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6b4: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x35c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x35c6b8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x35c6b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35c6bc: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x35c6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x35c6c0: 0xc0d7120  jal         func_35C480
    ctx->pc = 0x35C6C0u;
    SET_GPR_U32(ctx, 31, 0x35C6C8u);
    ctx->pc = 0x35C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6C0u;
    // 0x35c6c4: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C480u, 0x35C6C0u, 0x35C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6C8u;
label_35c6c8:
    // 0x35c6c8: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x35c6c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x35c6cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35C6CCu;
    {
        const bool branch_taken_0x35c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6CCu;
        // 0x35c6d0: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6cc) {
            ctx->pc = 0x35C6F4u;
            goto label_35c6f4;
        }
    }
    ctx->pc = 0x35C6D4u;
    // 0x35c6d4: 0x0  nop
    ctx->pc = 0x35c6d4u;
    // NOP
label_35c6d8:
    // 0x35c6d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C6D8u;
    {
        const bool branch_taken_0x35c6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c6d8) {
            ctx->pc = 0x35C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C6D8u;
            // 0x35c6dc: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C6F8u;
            goto label_35c6f8;
        }
    }
    ctx->pc = 0x35C6E0u;
    // 0x35c6e0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x35c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x35c6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C6E4u;
    {
        const bool branch_taken_0x35c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6E4u;
        // 0x35c6e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6e4) {
            ctx->pc = 0x35C6F4u;
            goto label_35c6f4;
        }
    }
    ctx->pc = 0x35C6ECu;
    // 0x35c6ec: 0x0  nop
    ctx->pc = 0x35c6ecu;
    // NOP
label_35c6f0:
    // 0x35c6f0: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x35c6f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
label_35c6f4:
    // 0x35c6f4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x35c6f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_35c6f8:
    // 0x35c6f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c6fc: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x35c6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x35c700: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x35c700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35c704: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x35c704u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x35c708: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x35C708u;
    {
        const bool branch_taken_0x35c708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x35C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C708u;
        // 0x35c70c: 0xfe020188  sd          $v0, 0x188($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c708) {
            ctx->pc = 0x35C738u;
            goto label_35c738;
        }
    }
    ctx->pc = 0x35C710u;
    // 0x35c710: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x35c710u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c714: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x35c714u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c718: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C718u;
    SET_GPR_U32(ctx, 31, 0x35C720u);
    ctx->pc = 0x35C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C718u;
    // 0x35c71c: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C718u, 0x35C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C720u;
label_35c720:
    // 0x35c720: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x35c720u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35c724: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C724u;
    SET_GPR_U32(ctx, 31, 0x35C72Cu);
    ctx->pc = 0x35C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C724u;
    // 0x35c728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C724u, 0x35C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C72Cu;
label_35c72c:
    // 0x35c72c: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x35c72cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x35c730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35C730u;
    {
        const bool branch_taken_0x35c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C730u;
        // 0x35c734: 0x62a02d  daddu       $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c730) {
            ctx->pc = 0x35C73Cu;
            goto label_35c73c;
        }
    }
    ctx->pc = 0x35C738u;
label_35c738:
    // 0x35c738: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35c738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c73c:
    // 0x35c73c: 0x56400014  bnel        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x35C73Cu;
    {
        const bool branch_taken_0x35c73c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c73c) {
            ctx->pc = 0x35C740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C73Cu;
            // 0x35c740: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C790u;
            goto label_35c790;
        }
    }
    ctx->pc = 0x35C744u;
    // 0x35c744: 0xde030188  ld          $v1, 0x188($s0)
    ctx->pc = 0x35c744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x35c748: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x35c748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x35c74c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x35C74Cu;
    {
        const bool branch_taken_0x35c74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C74Cu;
        // 0x35c750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c74c) {
            ctx->pc = 0x35C8F0u;
            goto label_35c8f0;
        }
    }
    ctx->pc = 0x35C754u;
    // 0x35c754: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35c758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C758u;
    {
        const bool branch_taken_0x35c758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C758u;
        // 0x35c75c: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c758) {
            ctx->pc = 0x35C770u;
            goto label_35c770;
        }
    }
    ctx->pc = 0x35C760u;
    // 0x35c760: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x35c760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    // 0x35c764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35C764u;
    {
        const bool branch_taken_0x35c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C764u;
        // 0x35c768: 0xfe020178  sd          $v0, 0x178($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c764) {
            ctx->pc = 0x35C77Cu;
            goto label_35c77c;
        }
    }
    ctx->pc = 0x35C76Cu;
    // 0x35c76c: 0x0  nop
    ctx->pc = 0x35c76cu;
    // NOP
label_35c770:
    // 0x35c770: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x35c770u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x35c774: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x35c774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x35c778: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x35c778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
label_35c77c:
    // 0x35c77c: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x35c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x35c780: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x35c780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x35c784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c788: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x35C788u;
    {
        const bool branch_taken_0x35c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C788u;
        // 0x35c78c: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c788) {
            ctx->pc = 0x35C8ECu;
            goto label_35c8ec;
        }
    }
    ctx->pc = 0x35C790u;
label_35c790:
    // 0x35c790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c794: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x35C794u;
    {
        const bool branch_taken_0x35c794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C794u;
        // 0x35c798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c794) {
            ctx->pc = 0x35C8F0u;
            goto label_35c8f0;
        }
    }
    ctx->pc = 0x35C79Cu;
    // 0x35c79c: 0xde050148  ld          $a1, 0x148($s0)
    ctx->pc = 0x35c79cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x35c7a0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C7A0u;
    SET_GPR_U32(ctx, 31, 0x35C7A8u);
    ctx->pc = 0x35C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7A0u;
    // 0x35c7a4: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C7A0u, 0x35C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7A8u;
label_35c7a8:
    // 0x35c7a8: 0xde050150  ld          $a1, 0x150($s0)
    ctx->pc = 0x35c7a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x35c7ac: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C7ACu;
    SET_GPR_U32(ctx, 31, 0x35C7B4u);
    ctx->pc = 0x35C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7ACu;
    // 0x35c7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C7ACu, 0x35C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7B4u;
label_35c7b4:
    // 0x35c7b4: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x35c7b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35c7b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35c7b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7bc: 0xb4102f  dsubu       $v0, $a1, $s4
    ctx->pc = 0x35c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
    // 0x35c7c0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C7C0u;
    {
        const bool branch_taken_0x35c7c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x35C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7C0u;
        // 0x35c7c4: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7c0) {
            ctx->pc = 0x35C7D8u;
            goto label_35c7d8;
        }
    }
    ctx->pc = 0x35C7C8u;
    // 0x35c7c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C7C8u;
    {
        const bool branch_taken_0x35c7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c7c8) {
            ctx->pc = 0x35C7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C7C8u;
            // 0x35c7cc: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C7ECu;
            goto label_35c7ec;
        }
    }
    ctx->pc = 0x35C7D0u;
    // 0x35c7d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35C7D0u;
    {
        const bool branch_taken_0x35c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7D0u;
        // 0x35c7d4: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7d0) {
            ctx->pc = 0x35C818u;
            goto label_35c818;
        }
    }
    ctx->pc = 0x35C7D8u;
label_35c7d8:
    // 0x35c7d8: 0x285102f  dsubu       $v0, $s4, $a1
    ctx->pc = 0x35c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 5));
    // 0x35c7dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x35c7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c7e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35C7E0u;
    {
        const bool branch_taken_0x35c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7E0u;
        // 0x35c7e4: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7e0) {
            ctx->pc = 0x35C818u;
            goto label_35c818;
        }
    }
    ctx->pc = 0x35C7E8u;
    // 0x35c7e8: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x35c7e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_35c7ec:
    // 0x35c7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7f0: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x35c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x35c7f4: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x35c7f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35c7f8: 0xc0d7120  jal         func_35C480
    ctx->pc = 0x35C7F8u;
    SET_GPR_U32(ctx, 31, 0x35C800u);
    ctx->pc = 0x35C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7F8u;
    // 0x35c7fc: 0xfe030180  sd          $v1, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C480u, 0x35C7F8u, 0x35C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C800u;
label_35c800:
    // 0x35c800: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x35c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x35c804: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x35c804u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35c808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c80c: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x35c80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x35c810: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x35C810u;
    {
        const bool branch_taken_0x35c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C810u;
        // 0x35c814: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c810) {
            ctx->pc = 0x35C8ECu;
            goto label_35c8ec;
        }
    }
    ctx->pc = 0x35C818u;
label_35c818:
    // 0x35c818: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x35c818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x35c81c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x35c81cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x35c820: 0xc0d7282  jal         func_35CA08
    ctx->pc = 0x35C820u;
    SET_GPR_U32(ctx, 31, 0x35C828u);
    ctx->pc = 0x35C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C820u;
    // 0x35c824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CA08u, 0x35C820u, 0x35C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C828u;
label_35c828:
    // 0x35c828: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x35c828u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c82c: 0xde050138  ld          $a1, 0x138($s0)
    ctx->pc = 0x35c82cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x35c830: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C830u;
    SET_GPR_U32(ctx, 31, 0x35C838u);
    ctx->pc = 0x35C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C830u;
    // 0x35c834: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C830u, 0x35C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C838u;
label_35c838:
    // 0x35c838: 0xde050140  ld          $a1, 0x140($s0)
    ctx->pc = 0x35c838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x35c83c: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C83Cu;
    SET_GPR_U32(ctx, 31, 0x35C844u);
    ctx->pc = 0x35C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C83Cu;
    // 0x35c840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C83Cu, 0x35C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C844u;
label_35c844:
    // 0x35c844: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c848: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35C848u;
    {
        const bool branch_taken_0x35c848 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x35C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C848u;
        // 0x35c84c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c848) {
            ctx->pc = 0x35C854u;
            goto label_35c854;
        }
    }
    ctx->pc = 0x35C850u;
    // 0x35c850: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x35c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_35c854:
    // 0x35c854: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x35c854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c858: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x35C858u;
    {
        const bool branch_taken_0x35c858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c858) {
            ctx->pc = 0x35C85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C858u;
            // 0x35c85c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C8E8u;
            goto label_35c8e8;
        }
    }
    ctx->pc = 0x35C860u;
    // 0x35c860: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x35c860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35c864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35C864u;
    {
        const bool branch_taken_0x35c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C864u;
        // 0x35c868: 0x112078  dsll        $a0, $s1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c864) {
            ctx->pc = 0x35C890u;
            goto label_35c890;
        }
    }
    ctx->pc = 0x35C86Cu;
    // 0x35c86c: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C86Cu;
    SET_GPR_U32(ctx, 31, 0x35C874u);
    ctx->pc = 0x35C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C86Cu;
    // 0x35c870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C86Cu, 0x35C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C874u;
label_35c874:
    // 0x35c874: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x35c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x35c878: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x35c878u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x35c87c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x35c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x35c880: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35c880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35c884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c888: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35C888u;
    {
        const bool branch_taken_0x35c888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C888u;
        // 0x35c88c: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c888) {
            ctx->pc = 0x35C8B0u;
            goto label_35c8b0;
        }
    }
    ctx->pc = 0x35C890u;
label_35c890:
    // 0x35c890: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C890u;
    SET_GPR_U32(ctx, 31, 0x35C898u);
    ctx->pc = 0x35C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C890u;
    // 0x35c894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C890u, 0x35C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C898u;
label_35c898:
    // 0x35c898: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x35c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x35c89c: 0x64440001  daddiu      $a0, $v0, 0x1
    ctx->pc = 0x35c89cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x35c8a0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x35c8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x35c8a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35c8a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35c8a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x35c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c8ac: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x35c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_35c8b0:
    // 0x35c8b0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C8B0u;
    SET_GPR_U32(ctx, 31, 0x35C8B8u);
    ctx->pc = 0x35C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8B0u;
    // 0x35c8b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C8B0u, 0x35C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8B8u;
label_35c8b8:
    // 0x35c8b8: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x35c8b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c8bc: 0x22ffe  dsrl32      $a1, $v0, 31
    ctx->pc = 0x35c8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x35c8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8c4: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x35c8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x35c8c8: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x35c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x35c8cc: 0x5287b  dsra        $a1, $a1, 1
    ctx->pc = 0x35c8ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 1);
    // 0x35c8d0: 0x285102d  daddu       $v0, $s4, $a1
    ctx->pc = 0x35c8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 5));
    // 0x35c8d4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x35c8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x35c8d8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x35c8d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x35c8dc: 0xc0d729a  jal         func_35CA68
    ctx->pc = 0x35C8DCu;
    SET_GPR_U32(ctx, 31, 0x35C8E4u);
    ctx->pc = 0x35C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8DCu;
    // 0x35c8e0: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CA68u, 0x35C8DCu, 0x35C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8E4u;
label_35c8e4:
    // 0x35c8e4: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x35c8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35c8e8:
    // 0x35c8e8: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x35c8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_35c8ec:
    // 0x35c8ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35c8f0:
    // 0x35c8f0: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35C8F0u;
    {
        const bool branch_taken_0x35c8f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x35c8f0) {
            ctx->pc = 0x35C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C8F0u;
            // 0x35c8f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C91Cu;
            goto label_35c91c;
        }
    }
    ctx->pc = 0x35C8F8u;
    // 0x35c8f8: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x35c8f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c8fc: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x35c8fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c900: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C900u;
    SET_GPR_U32(ctx, 31, 0x35C908u);
    ctx->pc = 0x35C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C900u;
    // 0x35c904: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C900u, 0x35C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C908u;
label_35c908:
    // 0x35c908: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x35c908u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35c90c: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C90Cu;
    SET_GPR_U32(ctx, 31, 0x35C914u);
    ctx->pc = 0x35C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C90Cu;
    // 0x35c910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C90Cu, 0x35C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C914u;
label_35c914:
    // 0x35c914: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x35c914u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x35c918: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x35c918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_35c91c:
    // 0x35c91c: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x35c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x35c920: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x35c920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c924: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x35c924u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x35c928: 0xde040128  ld          $a0, 0x128($s0)
    ctx->pc = 0x35c928u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x35c92c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x35c92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x35c930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C930u;
    {
        const bool branch_taken_0x35c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c930) {
            ctx->pc = 0x35C934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C930u;
            // 0x35c934: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C948u;
            goto label_35c948;
        }
    }
    ctx->pc = 0x35C938u;
    // 0x35c938: 0xfec40000  sd          $a0, 0x0($s6)
    ctx->pc = 0x35c938u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 4));
    // 0x35c93c: 0xde020130  ld          $v0, 0x130($s0)
    ctx->pc = 0x35c93cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x35c940: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x35c940u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x35c944: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x35c944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_35c948:
    // 0x35c948: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x35c948u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x35c94c: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x35c94cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35c950: 0xfe030110  sd          $v1, 0x110($s0)
    ctx->pc = 0x35c950u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 3));
    // 0x35c954: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x35c954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c958: 0xfe020118  sd          $v0, 0x118($s0)
    ctx->pc = 0x35c958u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 2));
    // 0x35c95c: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x35c95cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x35c960: 0xfe030120  sd          $v1, 0x120($s0)
    ctx->pc = 0x35c960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 3));
    // 0x35c964: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x35c964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x35c968: 0xfe020128  sd          $v0, 0x128($s0)
    ctx->pc = 0x35c968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 2));
    // 0x35c96c: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x35c96cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x35c970: 0xfe030130  sd          $v1, 0x130($s0)
    ctx->pc = 0x35c970u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 3));
    // 0x35c974: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x35c974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35c978: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x35c978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x35c97c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x35c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x35c980: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x35c980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35c984: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x35c984u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x35c988: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x35C988u;
    {
        const bool branch_taken_0x35c988 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c988) {
            ctx->pc = 0x35C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C988u;
            // 0x35c98c: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C9B8u;
            goto label_35c9b8;
        }
    }
    ctx->pc = 0x35C990u;
    // 0x35c990: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x35c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x35c994: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x35c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x35c998: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x35c998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c99c: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x35c99cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35c9a0: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x35c9a0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x35c9a4: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x35c9a4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x35c9a8: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x35c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x35c9ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35C9ACu;
    {
        const bool branch_taken_0x35c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C9ACu;
        // 0x35c9b0: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c9ac) {
            ctx->pc = 0x35C9D4u;
            goto label_35c9d4;
        }
    }
    ctx->pc = 0x35C9B4u;
    // 0x35c9b4: 0x0  nop
    ctx->pc = 0x35c9b4u;
    // NOP
label_35c9b8:
    // 0x35c9b8: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x35c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x35c9bc: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x35c9bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c9c0: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x35c9c0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35c9c4: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x35c9c4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x35c9c8: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x35c9c8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x35c9cc: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x35c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x35c9d0: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x35c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
label_35c9d4:
    // 0x35c9d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35c9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9dc: 0xac50e324  sw          $s0, -0x1CDC($v0)
    ctx->pc = 0x35c9dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EE324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE324u, _value); } while (0);
    // 0x35c9e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35c9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c9f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35c9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c9f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35c9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c9f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35c9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c9fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ca00: 0x80d7320  j           func_35CC80
    ctx->pc = 0x35CA00u;
    ctx->pc = 0x35CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA00u;
    // 0x35ca04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CA00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35CA08u;
}
