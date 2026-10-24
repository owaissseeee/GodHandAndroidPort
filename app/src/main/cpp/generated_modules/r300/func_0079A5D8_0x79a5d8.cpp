#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A5D8
// Address: 0x79a5d8 - 0x79a660
void func_0079A5D8_0x79a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A5D8_0x79a5d8");
#endif

    switch (ctx->pc) {
        case 0x79a60cu: goto label_79a60c;
        case 0x79a618u: goto label_79a618;
        case 0x79a634u: goto label_79a634;
        case 0x79a63cu: goto label_79a63c;
        default: break;
    }

    ctx->pc = 0x79a5d8u;

    // 0x79a5d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a5dc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a5e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a5e4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a5e8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a5ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a5f0: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79a5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a5f8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a5fc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a600: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a600u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a604: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A604u;
    SET_GPR_U32(ctx, 31, 0x79A60Cu);
    ctx->pc = 0x79A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A604u;
    // 0x79a608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A604u, 0x79A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A60Cu;
label_79a60c:
    // 0x79a60c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a610: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A610u;
    SET_GPR_U32(ctx, 31, 0x79A618u);
    ctx->pc = 0x79A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A610u;
    // 0x79a614: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A610u, 0x79A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A618u;
label_79a618:
    // 0x79a618: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a620: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a628: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a62c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A62Cu;
    SET_GPR_U32(ctx, 31, 0x79A634u);
    ctx->pc = 0x79A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A62Cu;
    // 0x79a630: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A62Cu, 0x79A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A634u;
label_79a634:
    // 0x79a634: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A634u;
    SET_GPR_U32(ctx, 31, 0x79A63Cu);
    ctx->pc = 0x79A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A634u;
    // 0x79a638: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A634u, 0x79A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A63Cu;
label_79a63c:
    // 0x79a63c: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a640: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a644: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a648: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a654: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a658: 0x3e00008  jr          $ra
    ctx->pc = 0x79A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A658u;
        // 0x79a65c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A660u;
}
} // namespace gh_r300
