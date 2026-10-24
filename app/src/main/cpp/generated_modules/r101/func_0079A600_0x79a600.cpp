#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_0079A600
// Address: 0x79a600 - 0x79a718
void func_0079A600_0x79a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A600_0x79a600");
#endif

    switch (ctx->pc) {
        case 0x79a634u: goto label_79a634;
        case 0x79a640u: goto label_79a640;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a658u: goto label_79a658;
        case 0x79a664u: goto label_79a664;
        case 0x79a670u: goto label_79a670;
        case 0x79a680u: goto label_79a680;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f8u: goto label_79a6f8;
        case 0x79a704u: goto label_79a704;
        default: break;
    }

    ctx->pc = 0x79a600u;

    // 0x79a600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a604: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79a608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a60c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x79a610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a614: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a618: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a61c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79a620: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79A620u;
    {
        const bool branch_taken_0x79a620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A620u;
        // 0x79a624: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a620) {
            ctx->pc = 0x79A678u;
            goto label_79a678;
        }
    }
    ctx->pc = 0x79A628u;
    // 0x79a628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a62c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A62Cu;
    SET_GPR_U32(ctx, 31, 0x79A634u);
    ctx->pc = 0x79A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A62Cu;
    // 0x79a630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A62Cu, 0x79A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A634u;
label_79a634:
    // 0x79a634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a638: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A638u;
    SET_GPR_U32(ctx, 31, 0x79A640u);
    ctx->pc = 0x79A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A638u;
    // 0x79a63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A638u, 0x79A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a644: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A644u;
    SET_GPR_U32(ctx, 31, 0x79A64Cu);
    ctx->pc = 0x79A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A644u;
    // 0x79a648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A644u, 0x79A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A64Cu;
label_79a64c:
    // 0x79a64c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a650: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A650u;
    SET_GPR_U32(ctx, 31, 0x79A658u);
    ctx->pc = 0x79A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A650u;
    // 0x79a654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A650u, 0x79A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A658u;
label_79a658:
    // 0x79a658: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a65c: 0xc0b6d1e  jal         func_2DB478
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB478u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a668: 0xc0b6d1e  jal         func_2DB478
    ctx->pc = 0x79A668u;
    SET_GPR_U32(ctx, 31, 0x79A670u);
    ctx->pc = 0x79A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A668u;
    // 0x79a66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB478u, 0x79A668u, 0x79A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A670u;
label_79a670:
    // 0x79a670: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A6FCu;
            goto label_79a6fc;
        }
    }
    ctx->pc = 0x79A678u;
label_79a678:
    // 0x79a678: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x79A678u;
    SET_GPR_U32(ctx, 31, 0x79A680u);
    ctx->pc = 0x79A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A678u;
    // 0x79a67c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x79A678u, 0x79A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A680u;
label_79a680:
    // 0x79a680: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x79a684: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79a688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a68c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79a690: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A690u;
    {
        const bool branch_taken_0x79a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A690u;
        // 0x79a694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a690) {
            ctx->pc = 0x79A6B4u;
            goto label_79a6b4;
        }
    }
    ctx->pc = 0x79A698u;
    // 0x79a698: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a69c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a6a0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a6a4: 0x24a59de8  addiu       $a1, $a1, -0x6218
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942184));
    // 0x79a6a8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A6A8u;
    SET_GPR_U32(ctx, 31, 0x79A6B0u);
    ctx->pc = 0x79A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A8u;
    // 0x79a6ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A6A8u, 0x79A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B0u;
label_79a6b0:
    // 0x79a6b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a6b4:
    // 0x79a6b4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A6B4u;
    SET_GPR_U32(ctx, 31, 0x79A6BCu);
    ctx->pc = 0x79A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B4u;
    // 0x79a6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A6B4u, 0x79A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6c0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A6C0u;
    SET_GPR_U32(ctx, 31, 0x79A6C8u);
    ctx->pc = 0x79A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C0u;
    // 0x79a6c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A6C0u, 0x79A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a6cc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A6CCu;
    SET_GPR_U32(ctx, 31, 0x79A6D4u);
    ctx->pc = 0x79A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6CCu;
    // 0x79a6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A6CCu, 0x79A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D4u;
label_79a6d4:
    // 0x79a6d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a6d8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A6D8u;
    SET_GPR_U32(ctx, 31, 0x79A6E0u);
    ctx->pc = 0x79A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D8u;
    // 0x79a6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A6D8u, 0x79A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E0u;
label_79a6e0:
    // 0x79a6e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a6e4: 0xc0b6d1e  jal         func_2DB478
    ctx->pc = 0x79A6E4u;
    SET_GPR_U32(ctx, 31, 0x79A6ECu);
    ctx->pc = 0x79A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E4u;
    // 0x79a6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB478u, 0x79A6E4u, 0x79A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6ECu;
label_79a6ec:
    // 0x79a6ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6f0: 0xc0b6d1e  jal         func_2DB478
    ctx->pc = 0x79A6F0u;
    SET_GPR_U32(ctx, 31, 0x79A6F8u);
    ctx->pc = 0x79A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6F0u;
    // 0x79a6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB478u, 0x79A6F0u, 0x79A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6F8u;
label_79a6f8:
    // 0x79a6f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a6fc:
    // 0x79a6fc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A6FCu;
    SET_GPR_U32(ctx, 31, 0x79A704u);
    ctx->pc = 0x79A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6FCu;
    // 0x79a700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A6FCu, 0x79A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A704u;
label_79a704:
    // 0x79a704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a70c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A70Cu;
        // 0x79a710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A714u;
    // 0x79a714: 0x0  nop
    ctx->pc = 0x79a714u;
    // NOP
    ctx->pc = 0x79a718u;
}
} // namespace gh_r101
