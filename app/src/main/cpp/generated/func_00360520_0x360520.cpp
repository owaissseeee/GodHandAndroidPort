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

// Function: func_00360520
// Address: 0x360520 - 0x3605b0
void func_00360520_0x360520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360520_0x360520");
#endif

    switch (ctx->pc) {
        case 0x36053cu: goto label_36053c;
        case 0x360558u: goto label_360558;
        default: break;
    }

    ctx->pc = 0x360520u;

    // 0x360520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360528: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x360528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36052c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x360530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x360534: 0xc0d81c8  jal         func_360720
    ctx->pc = 0x360534u;
    SET_GPR_U32(ctx, 31, 0x36053Cu);
    ctx->pc = 0x360538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360534u;
    // 0x360538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360720u, 0x360534u, 0x36053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36053Cu;
label_36053c:
    // 0x36053c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360540: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x360540u;
    {
        const bool branch_taken_0x360540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x360540) {
            ctx->pc = 0x360544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360540u;
            // 0x360544: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360590u;
            goto label_360590;
        }
    }
    ctx->pc = 0x360548u;
    // 0x360548: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36054c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36054cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x360550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360554: 0x0  nop
    ctx->pc = 0x360554u;
    // NOP
label_360558:
    // 0x360558: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x360558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36055c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36055cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x360560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x360560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x360564: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x360564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x360568: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x360568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x36056c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x36056cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x360570: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x360570u;
    {
        const bool branch_taken_0x360570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360570u;
        // 0x360574: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360570) {
            ctx->pc = 0x360558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360558;
        }
    }
    ctx->pc = 0x360578u;
    // 0x360578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36057c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36057cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360584: 0x3e00008  jr          $ra
    ctx->pc = 0x360584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360584u;
        // 0x360588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36058Cu;
    // 0x36058c: 0x0  nop
    ctx->pc = 0x36058cu;
    // NOP
label_360590:
    // 0x360590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360598: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x360598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36059c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3605a0: 0x24c6a0a0  addiu       $a2, $a2, -0x5F60
    ctx->pc = 0x3605a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942880));
    // 0x3605a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3605a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605a8: 0x80d7ef6  j           func_35FBD8
    ctx->pc = 0x3605A8u;
    ctx->pc = 0x3605ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605A8u;
    // 0x3605ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x3605A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3605B0u;
}
