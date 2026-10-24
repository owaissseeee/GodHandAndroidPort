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

// Function: cModel_removeMesh
// Address: 0x14b798 - 0x14b810
void cModel_removeMesh_0x14b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_removeMesh_0x14b798");
#endif

    switch (ctx->pc) {
        case 0x14b7b8u: goto label_14b7b8;
        case 0x14b7d0u: goto label_14b7d0;
        case 0x14b7fcu: goto label_14b7fc;
        default: break;
    }

    ctx->pc = 0x14b798u;

    // 0x14b798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b7a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14b7a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b7ac: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x14b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x14b7b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B7B0u;
    {
        const bool branch_taken_0x14b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7b0) {
            ctx->pc = 0x14B7DCu;
            goto label_14b7dc;
        }
    }
    ctx->pc = 0x14B7B8u;
label_14b7b8:
    // 0x14b7b8: 0x922202b1  lbu         $v0, 0x2B1($s1)
    ctx->pc = 0x14b7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 689)));
    // 0x14b7bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7c0: 0x8c700404  lw          $s0, 0x404($v1)
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x14b7c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b7c8: 0xc0524d4  jal         func_149350
    ctx->pc = 0x14B7C8u;
    SET_GPR_U32(ctx, 31, 0x14B7D0u);
    ctx->pc = 0x14B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7C8u;
    // 0x14b7cc: 0xa22202b1  sb          $v0, 0x2B1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 689), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149350u, 0x14B7C8u, 0x14B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7D0u;
label_14b7d0:
    // 0x14b7d0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x14b7d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7d4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B7D4u;
    {
        const bool branch_taken_0x14b7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7D4u;
        // 0x14b7d8: 0xae30025c  sw          $s0, 0x25C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7d4) {
            ctx->pc = 0x14B7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b7b8;
        }
    }
    ctx->pc = 0x14B7DCu;
label_14b7dc:
    // 0x14b7dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b7e0: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x14b7e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14b7e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14b7e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x14b7e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14b7ec: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x14b7ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x14b7f0: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x14b7f0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x14b7f4: 0xc07e2a2  jal         func_1F8A88
    ctx->pc = 0x14B7F4u;
    SET_GPR_U32(ctx, 31, 0x14B7FCu);
    ctx->pc = 0x14B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7F4u;
    // 0x14b7f8: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A88u, 0x14B7F4u, 0x14B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7FCu;
label_14b7fc:
    // 0x14b7fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14b7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b808: 0x3e00008  jr          $ra
    ctx->pc = 0x14B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B808u;
        // 0x14b80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B810u;
}
