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
// Function: func_0079A660
// Address: 0x79a660 - 0x79a6e8
void func_0079A660_0x79a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A660_0x79a660");
#endif

    switch (ctx->pc) {
        case 0x79a694u: goto label_79a694;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c4u: goto label_79a6c4;
        default: break;
    }

    ctx->pc = 0x79a660u;

    // 0x79a660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a664: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a668: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a66c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a670: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a674: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a678: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79a67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a680: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a684: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a688: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a68c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A68Cu;
    SET_GPR_U32(ctx, 31, 0x79A694u);
    ctx->pc = 0x79A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A68Cu;
    // 0x79a690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A68Cu, 0x79A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A694u;
label_79a694:
    // 0x79a694: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a698: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A698u;
    SET_GPR_U32(ctx, 31, 0x79A6A0u);
    ctx->pc = 0x79A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A698u;
    // 0x79a69c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A698u, 0x79A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6a8: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a6b0: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a6b4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A6B4u;
    SET_GPR_U32(ctx, 31, 0x79A6BCu);
    ctx->pc = 0x79A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B4u;
    // 0x79a6b8: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A6B4u, 0x79A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A6BCu;
    SET_GPR_U32(ctx, 31, 0x79A6C4u);
    ctx->pc = 0x79A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6BCu;
    // 0x79a6c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A6BCu, 0x79A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C4u;
label_79a6c4:
    // 0x79a6c4: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a6c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a6cc: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a6d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a6d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a6dc: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E0u;
        // 0x79a6e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6E8u;
}
} // namespace gh_r300
