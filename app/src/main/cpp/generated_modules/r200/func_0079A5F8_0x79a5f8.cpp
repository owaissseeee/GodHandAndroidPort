#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A5F8
// Address: 0x79a5f8 - 0x79a6b0
void func_0079A5F8_0x79a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A5F8_0x79a5f8");
#endif

    switch (ctx->pc) {
        case 0x79a624u: goto label_79a624;
        case 0x79a638u: goto label_79a638;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a664u: goto label_79a664;
        case 0x79a678u: goto label_79a678;
        case 0x79a6a4u: goto label_79a6a4;
        default: break;
    }

    ctx->pc = 0x79a5f8u;

    // 0x79a5f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a5fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a600: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79a604: 0x8c43aac0  lw          $v1, -0x5540($v0)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79AAC0u));
    // 0x79a608: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x79a60c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A60Cu;
    {
        const bool branch_taken_0x79a60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A60Cu;
        // 0x79a610: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a60c) {
            ctx->pc = 0x79A654u;
            goto label_79a654;
        }
    }
    ctx->pc = 0x79A614u;
    // 0x79a614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a618: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79a618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a61c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A61Cu;
    SET_GPR_U32(ctx, 31, 0x79A624u);
    ctx->pc = 0x79A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A61Cu;
    // 0x79a620: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A61Cu, 0x79A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A624u;
label_79a624:
    // 0x79a624: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a628: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a62c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a630: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A630u;
    SET_GPR_U32(ctx, 31, 0x79A638u);
    ctx->pc = 0x79A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A630u;
    // 0x79a634: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A630u, 0x79A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a63c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a640: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79a640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a644: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A644u;
    SET_GPR_U32(ctx, 31, 0x79A64Cu);
    ctx->pc = 0x79A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A644u;
    // 0x79a648: 0x24050a2e  addiu       $a1, $zero, 0xA2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A644u, 0x79A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A64Cu;
label_79a64c:
    // 0x79a64c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79A64Cu;
    {
        const bool branch_taken_0x79a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A64Cu;
        // 0x79a650: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a64c) {
            ctx->pc = 0x79A6A8u;
            goto label_79a6a8;
        }
    }
    ctx->pc = 0x79A654u;
label_79a654:
    // 0x79a654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a658: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a65c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a668: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a66c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79a66cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a670: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A670u;
    SET_GPR_U32(ctx, 31, 0x79A678u);
    ctx->pc = 0x79A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A670u;
    // 0x79a674: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A670u, 0x79A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A678u;
label_79a678:
    // 0x79a678: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79a67c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x79a680: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a684: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a688: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79a688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79a68c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A68Cu;
    {
        const bool branch_taken_0x79a68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A68Cu;
        // 0x79a690: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a68c) {
            ctx->pc = 0x79A6A4u;
            goto label_79a6a4;
        }
    }
    ctx->pc = 0x79A694u;
    // 0x79a694: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a698: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x79a698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a69c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A69Cu;
    SET_GPR_U32(ctx, 31, 0x79A6A4u);
    ctx->pc = 0x79A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A69Cu;
    // 0x79a6a0: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A69Cu, 0x79A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A4u;
label_79a6a4:
    // 0x79a6a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_79a6a8:
    // 0x79a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A8u;
        // 0x79a6ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6B0u;
}
} // namespace gh_r200
