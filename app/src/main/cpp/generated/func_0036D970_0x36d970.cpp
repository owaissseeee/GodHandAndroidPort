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

// Function: func_0036D970
// Address: 0x36d970 - 0x36da28
void func_0036D970_0x36d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D970_0x36d970");
#endif

    switch (ctx->pc) {
        case 0x36d994u: goto label_36d994;
        case 0x36d9d0u: goto label_36d9d0;
        case 0x36d9d8u: goto label_36d9d8;
        case 0x36d9fcu: goto label_36d9fc;
        default: break;
    }

    ctx->pc = 0x36d970u;

    // 0x36d970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36d978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d97c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36d980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36d988: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36d98c: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36D98Cu;
    SET_GPR_U32(ctx, 31, 0x36D994u);
    ctx->pc = 0x36D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D98Cu;
    // 0x36d990: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36D98Cu, 0x36D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D994u;
label_36d994:
    // 0x36d994: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36D994u;
    {
        const bool branch_taken_0x36d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D994u;
        // 0x36d998: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d994) {
            ctx->pc = 0x36D9C0u;
            goto label_36d9c0;
        }
    }
    ctx->pc = 0x36D99Cu;
    // 0x36d99c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36d9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d9ac: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x36d9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x36d9b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36d9b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d9b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36d9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d9b8: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36D9B8u;
    ctx->pc = 0x36D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9B8u;
    // 0x36d9bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36D9B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D9C0u;
label_36d9c0:
    // 0x36d9c0: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x36d9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x36d9c4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x36d9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d9c8: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x36d9c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x36d9cc: 0x0  nop
    ctx->pc = 0x36d9ccu;
    // NOP
label_36d9d0:
    // 0x36d9d0: 0xc0daede  jal         func_36BB78
    ctx->pc = 0x36D9D0u;
    SET_GPR_U32(ctx, 31, 0x36D9D8u);
    ctx->pc = 0x36D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9D0u;
    // 0x36d9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36D9D0u, 0x36D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9D8u;
label_36d9d8:
    // 0x36d9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d9e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d9e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D9E4u;
    {
        const bool branch_taken_0x36d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9E4u;
        // 0x36d9e8: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d9e4) {
            ctx->pc = 0x36DA04u;
            goto label_36da04;
        }
    }
    ctx->pc = 0x36D9ECu;
    // 0x36d9ec: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D9ECu;
    {
        const bool branch_taken_0x36d9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d9ec) {
            ctx->pc = 0x36D9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D9ECu;
            // 0x36d9f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DA04u;
            goto label_36da04;
        }
    }
    ctx->pc = 0x36D9F4u;
    // 0x36d9f4: 0xc0daf68  jal         func_36BDA0
    ctx->pc = 0x36D9F4u;
    SET_GPR_U32(ctx, 31, 0x36D9FCu);
    ctx->pc = 0x36BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BDA0u, 0x36D9F4u, 0x36D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9FCu;
label_36d9fc:
    // 0x36d9fc: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x36D9FCu;
    {
        const bool branch_taken_0x36d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x36d9fc) {
            ctx->pc = 0x36D9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d9d0;
        }
    }
    ctx->pc = 0x36DA04u;
label_36da04:
    // 0x36da04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36da04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36da08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36da0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36da10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36da14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36da14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36da18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36da18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36da1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36da20: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36DA20u;
    ctx->pc = 0x36DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA20u;
    // 0x36da24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36DA20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36DA28u;
}
