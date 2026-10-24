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

// Function: func_00332958
// Address: 0x332958 - 0x3329d0
void func_00332958_0x332958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332958_0x332958");
#endif

    switch (ctx->pc) {
        case 0x33297cu: goto label_33297c;
        case 0x332990u: goto label_332990;
        case 0x3329a4u: goto label_3329a4;
        default: break;
    }

    ctx->pc = 0x332958u;

    // 0x332958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33295c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332960: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x332964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33296c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332970: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x332970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x332974: 0xc0cefc6  jal         func_33BF18
    ctx->pc = 0x332974u;
    SET_GPR_U32(ctx, 31, 0x33297Cu);
    ctx->pc = 0x332978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332974u;
    // 0x332978: 0x266490e0  addiu       $a0, $s3, -0x6F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x332974u, 0x33297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33297Cu;
label_33297c:
    // 0x33297c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33297Cu;
    {
        const bool branch_taken_0x33297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33297Cu;
        // 0x332980: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33297c) {
            ctx->pc = 0x3329B4u;
            goto label_3329b4;
        }
    }
    ctx->pc = 0x332984u;
    // 0x332984: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332988: 0x24509150  addiu       $s0, $v0, -0x6EB0
    ctx->pc = 0x332988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
    // 0x33298c: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x33298cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_332990:
    // 0x332990: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x332990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332994: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x332994u;
    {
        const bool branch_taken_0x332994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x332994) {
            ctx->pc = 0x332998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332994u;
            // 0x332998: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3329A8u;
            goto label_3329a8;
        }
    }
    ctx->pc = 0x33299Cu;
    // 0x33299c: 0xc0cca24  jal         func_332890
    ctx->pc = 0x33299Cu;
    SET_GPR_U32(ctx, 31, 0x3329A4u);
    ctx->pc = 0x3329A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33299Cu;
    // 0x3329a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332890u, 0x33299Cu, 0x3329A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329A4u;
label_3329a4:
    // 0x3329a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3329a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3329a8:
    // 0x3329a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3329A8u;
    {
        const bool branch_taken_0x3329a8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3329ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329A8u;
        // 0x3329ac: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329a8) {
            ctx->pc = 0x332990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332990;
        }
    }
    ctx->pc = 0x3329B0u;
    // 0x3329b0: 0xae6090e0  sw          $zero, -0x6F20($s3)
    ctx->pc = 0x3329b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294938848), GPR_U32(ctx, 0));
label_3329b4:
    // 0x3329b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3329b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3329b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3329b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3329bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3329bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3329c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3329c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3329c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3329c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3329c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3329C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3329CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329C8u;
        // 0x3329cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3329C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3329D0u;
}
