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

// Function: sfset_IsCondValid
// Address: 0x35a0a0 - 0x35a128
void sfset_IsCondValid_0x35a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfset_IsCondValid_0x35a0a0");
#endif

    switch (ctx->pc) {
        case 0x35a0dcu: goto label_35a0dc;
        case 0x35a104u: goto label_35a104;
        default: break;
    }

    ctx->pc = 0x35a0a0u;

    // 0x35a0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a0a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x35a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a0ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a0b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a0bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35a0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c0: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35A0C0u;
    {
        const bool branch_taken_0x35a0c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x35A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A0C0u;
        // 0x35a0c4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a0c0) {
            ctx->pc = 0x35A0E4u;
            goto label_35a0e4;
        }
    }
    ctx->pc = 0x35A0C8u;
    // 0x35a0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a0cc: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A0CCu;
    {
        const bool branch_taken_0x35a0cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a0cc) {
            ctx->pc = 0x35A0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A0CCu;
            // 0x35a0d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A0E8u;
            goto label_35a0e8;
        }
    }
    ctx->pc = 0x35A0D4u;
    // 0x35a0d4: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x35A0D4u;
    SET_GPR_U32(ctx, 31, 0x35A0DCu);
    ctx->pc = 0x35A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0D4u;
    // 0x35a0d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x35A0D4u, 0x35A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0DCu;
label_35a0dc:
    // 0x35a0dc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x35A0DCu;
    {
        const bool branch_taken_0x35a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a0dc) {
            ctx->pc = 0x35A0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A0DCu;
            // 0x35a0e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A114u;
            goto label_35a114;
        }
    }
    ctx->pc = 0x35A0E4u;
label_35a0e4:
    // 0x35a0e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35a0e8:
    // 0x35a0e8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35A0E8u;
    {
        const bool branch_taken_0x35a0e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x35A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A0E8u;
        // 0x35a0ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a0e8) {
            ctx->pc = 0x35A110u;
            goto label_35a110;
        }
    }
    ctx->pc = 0x35A0F0u;
    // 0x35a0f0: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35A0F0u;
    {
        const bool branch_taken_0x35a0f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a0f0) {
            ctx->pc = 0x35A0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A0F0u;
            // 0x35a0f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A114u;
            goto label_35a114;
        }
    }
    ctx->pc = 0x35A0F8u;
    // 0x35a0f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0fc: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x35A0FCu;
    SET_GPR_U32(ctx, 31, 0x35A104u);
    ctx->pc = 0x35A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0FCu;
    // 0x35a100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x35A0FCu, 0x35A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A104u;
label_35a104:
    // 0x35a104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A104u;
    {
        const bool branch_taken_0x35a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A104u;
        // 0x35a108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a104) {
            ctx->pc = 0x35A114u;
            goto label_35a114;
        }
    }
    ctx->pc = 0x35A10Cu;
    // 0x35a10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a110:
    // 0x35a110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35a114:
    // 0x35a114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a11c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a120: 0x3e00008  jr          $ra
    ctx->pc = 0x35A120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A120u;
        // 0x35a124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A128u;
}
