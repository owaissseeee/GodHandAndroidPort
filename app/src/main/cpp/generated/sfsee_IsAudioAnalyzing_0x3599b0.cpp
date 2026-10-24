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

// Function: sfsee_IsAudioAnalyzing
// Address: 0x3599b0 - 0x359a30
void sfsee_IsAudioAnalyzing_0x3599b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfsee_IsAudioAnalyzing_0x3599b0");
#endif

    switch (ctx->pc) {
        case 0x3599d8u: goto label_3599d8;
        case 0x3599ecu: goto label_3599ec;
        default: break;
    }

    ctx->pc = 0x3599b0u;

    // 0x3599b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3599b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3599b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3599b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3599b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3599b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3599bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3599c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3599c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3599c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3599c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3599c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3599c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3599ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3599d0: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x3599D0u;
    SET_GPR_U32(ctx, 31, 0x3599D8u);
    ctx->pc = 0x3599D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599D0u;
    // 0x3599d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x3599D0u, 0x3599D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599D8u;
label_3599d8:
    // 0x3599d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3599d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3599DCu;
    {
        const bool branch_taken_0x3599dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3599E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599DCu;
        // 0x3599e0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599dc) {
            ctx->pc = 0x359A10u;
            goto label_359a10;
        }
    }
    ctx->pc = 0x3599E4u;
    // 0x3599e4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3599E4u;
    SET_GPR_U32(ctx, 31, 0x3599ECu);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3599E4u, 0x3599ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599ECu;
label_3599ec:
    // 0x3599ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3599ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3599f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599f4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3599F4u;
    {
        const bool branch_taken_0x3599f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3599f4) {
            ctx->pc = 0x3599F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3599F4u;
            // 0x3599f8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A14u;
            goto label_359a14;
        }
    }
    ctx->pc = 0x3599FCu;
    // 0x3599fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3599fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x359a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x359a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x359A04u;
    {
        const bool branch_taken_0x359a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A04u;
        // 0x359a08: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a04) {
            ctx->pc = 0x359A18u;
            goto label_359a18;
        }
    }
    ctx->pc = 0x359A0Cu;
    // 0x359a0c: 0x0  nop
    ctx->pc = 0x359a0cu;
    // NOP
label_359a10:
    // 0x359a10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x359a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_359a14:
    // 0x359a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359a18:
    // 0x359a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359a24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a28: 0x3e00008  jr          $ra
    ctx->pc = 0x359A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A28u;
        // 0x359a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359A30u;
}
