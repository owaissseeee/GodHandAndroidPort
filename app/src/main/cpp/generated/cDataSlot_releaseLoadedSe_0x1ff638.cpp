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

// Function: cDataSlot_releaseLoadedSe
// Address: 0x1ff638 - 0x1ff6e0
void cDataSlot_releaseLoadedSe_0x1ff638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataSlot_releaseLoadedSe_0x1ff638");
#endif

    switch (ctx->pc) {
        case 0x1ff678u: goto label_1ff678;
        case 0x1ff68cu: goto label_1ff68c;
        default: break;
    }

    ctx->pc = 0x1ff638u;

    // 0x1ff638: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ff63c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ff63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ff640: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ff640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ff644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff648: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ff648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ff64c: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x1ff64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1ff650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ff650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ff654: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff658: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ff658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1ff65c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ff65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff660: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ff660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1ff664: 0x2414fffb  addiu       $s4, $zero, -0x5
    ctx->pc = 0x1ff664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1ff668: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1ff668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1ff66c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1ff66cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff674: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1ff674u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1ff678:
    // 0x1ff678: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff67c: 0x4a2000b  bltzl       $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF67Cu;
    {
        const bool branch_taken_0x1ff67c = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1ff67c) {
            ctx->pc = 0x1FF680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF67Cu;
            // 0x1ff680: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF6ACu;
            goto label_1ff6ac;
        }
    }
    ctx->pc = 0x1FF684u;
    // 0x1ff684: 0xc0b2e0c  jal         func_2CB830
    ctx->pc = 0x1FF684u;
    SET_GPR_U32(ctx, 31, 0x1FF68Cu);
    ctx->pc = 0x1FF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF684u;
    // 0x1ff688: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB830u, 0x1FF684u, 0x1FF68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF68Cu;
label_1ff68c:
    // 0x1ff68c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF68Cu;
    {
        const bool branch_taken_0x1ff68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF68Cu;
        // 0x1ff690: 0x13980b  movn        $s3, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff68c) {
            ctx->pc = 0x1FF6A8u;
            goto label_1ff6a8;
        }
    }
    ctx->pc = 0x1FF694u;
    // 0x1ff694: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1ff694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1ff698: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ff698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff69c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ff69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ff6a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1ff6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1ff6a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ff6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1ff6a8:
    // 0x1ff6a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1ff6ac:
    // 0x1ff6ac: 0x641fff2  bgez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FF6ACu;
    {
        const bool branch_taken_0x1ff6ac = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1FF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ACu;
        // 0x1ff6b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6ac) {
            ctx->pc = 0x1FF678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff678;
        }
    }
    ctx->pc = 0x1FF6B4u;
    // 0x1ff6b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ff6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ff6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ff6bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ff6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff6c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ff6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff6c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ff6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff6c8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ff6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff6cc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ff6ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff6d0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ff6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6D8u;
        // 0x1ff6dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF6E0u;
}
