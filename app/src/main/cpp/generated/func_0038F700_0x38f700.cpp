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

// Function: func_0038F700
// Address: 0x38f700 - 0x38f838
void func_0038F700_0x38f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F700_0x38f700");
#endif

    switch (ctx->pc) {
        case 0x38f760u: goto label_38f760;
        case 0x38f790u: goto label_38f790;
        case 0x38f7b0u: goto label_38f7b0;
        case 0x38f7c4u: goto label_38f7c4;
        case 0x38f7f0u: goto label_38f7f0;
        case 0x38f808u: goto label_38f808;
        default: break;
    }

    ctx->pc = 0x38f700u;

    // 0x38f700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38f704: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x38f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x38f708: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38f708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38f70c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38f70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f710: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38f710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38f714: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x38f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x38f718: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f71c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x38f71cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38f720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f724: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38f728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38f728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f72c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38f730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f734: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f738: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38f738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f73c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38F73Cu;
    {
        const bool branch_taken_0x38f73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f73c) {
            ctx->pc = 0x38F740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F73Cu;
            // 0x38f740: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F744u;
            goto label_38f744;
        }
    }
    ctx->pc = 0x38F744u;
label_38f744:
    // 0x38f744: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x38f744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f748: 0x1812  mflo        $v1
    ctx->pc = 0x38f748u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x38f74c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x38f74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38f750: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38F750u;
    {
        const bool branch_taken_0x38f750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F750u;
        // 0x38f754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f750) {
            ctx->pc = 0x38F784u;
            goto label_38f784;
        }
    }
    ctx->pc = 0x38F758u;
    // 0x38f758: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x38f758u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x38f75c: 0x0  nop
    ctx->pc = 0x38f75cu;
    // NOP
label_38f760:
    // 0x38f760: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x38f760u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x38f764: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38f768: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x38f768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38f76c: 0x0  nop
    ctx->pc = 0x38f76cu;
    // NOP
    // 0x38f770: 0x0  nop
    ctx->pc = 0x38f770u;
    // NOP
    // 0x38f774: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38F774u;
    {
        const bool branch_taken_0x38f774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f774) {
            ctx->pc = 0x38F760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f760;
        }
    }
    ctx->pc = 0x38F77Cu;
    // 0x38f77c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38F77Cu;
    {
        const bool branch_taken_0x38f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f77c) {
            ctx->pc = 0x38F788u;
            goto label_38f788;
        }
    }
    ctx->pc = 0x38F784u;
label_38f784:
    // 0x38f784: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x38f784u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_38f788:
    // 0x38f788: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38F788u;
    SET_GPR_U32(ctx, 31, 0x38F790u);
    ctx->pc = 0x38F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F788u;
    // 0x38f78c: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38F788u, 0x38F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F790u;
label_38f790:
    // 0x38f790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38f790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f798: 0xac950014  sw          $s5, 0x14($a0)
    ctx->pc = 0x38f798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 21));
    // 0x38f79c: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x38F79Cu;
    {
        const bool branch_taken_0x38f79c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F79Cu;
        // 0x38f7a0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f79c) {
            ctx->pc = 0x38F7DCu;
            goto label_38f7dc;
        }
    }
    ctx->pc = 0x38F7A4u;
    // 0x38f7a4: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x38f7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x38f7a8: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x38f7a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38f7ac: 0x0  nop
    ctx->pc = 0x38f7acu;
    // NOP
label_38f7b0:
    // 0x38f7b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38f7b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38f7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38f7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38f7bc: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x38F7BCu;
    SET_GPR_U32(ctx, 31, 0x38F7C4u);
    ctx->pc = 0x38F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7BCu;
    // 0x38f7c0: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x38F7BCu, 0x38F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7C4u;
label_38f7c4:
    // 0x38f7c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38f7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f7c8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x38f7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x38f7cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x38F7CCu;
    {
        const bool branch_taken_0x38f7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f7cc) {
            ctx->pc = 0x38F7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F7CCu;
            // 0x38f7d0: 0x82060000  lb          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f7b0;
        }
    }
    ctx->pc = 0x38F7D4u;
    // 0x38f7d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38F7D4u;
    {
        const bool branch_taken_0x38f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7D4u;
        // 0x38f7d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f7d4) {
            ctx->pc = 0x38F7E0u;
            goto label_38f7e0;
        }
    }
    ctx->pc = 0x38F7DCu;
label_38f7dc:
    // 0x38f7dc: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x38f7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_38f7e0:
    // 0x38f7e0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x38f7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x38f7e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38F7E4u;
    {
        const bool branch_taken_0x38f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F7E4u;
        // 0x38f7e8: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f7e4) {
            ctx->pc = 0x38F810u;
            goto label_38f810;
        }
    }
    ctx->pc = 0x38F7ECu;
    // 0x38f7ec: 0x0  nop
    ctx->pc = 0x38f7ecu;
    // NOP
label_38f7f0:
    // 0x38f7f0: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x38f7f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38f7f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38f7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38f7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38f7fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x38f7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x38f800: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x38F800u;
    SET_GPR_U32(ctx, 31, 0x38F808u);
    ctx->pc = 0x38F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F800u;
    // 0x38f804: 0x24c6ffd0  addiu       $a2, $a2, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x38F800u, 0x38F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F808u;
label_38f808:
    // 0x38f808: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38F808u;
    {
        const bool branch_taken_0x38f808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F808u;
        // 0x38f80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f808) {
            ctx->pc = 0x38F7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f7f0;
        }
    }
    ctx->pc = 0x38F810u;
label_38f810:
    // 0x38f810: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38f810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38f814: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38f814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f818: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38f818u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38f81c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38f81cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38f820: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38f820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f824: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38f824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f828: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f830: 0x3e00008  jr          $ra
    ctx->pc = 0x38F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F830u;
        // 0x38f834: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F838u;
}
