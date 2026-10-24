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

// Function: Get_460D70_3BAFF8
// Address: 0x3baff8 - 0x3bb058
void Get_460D70_3BAFF8_0x3baff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_460D70_3BAFF8_0x3baff8");
#endif

    switch (ctx->pc) {
        case 0x3bb024u: goto label_3bb024;
        default: break;
    }

    ctx->pc = 0x3baff8u;

    // 0x3baff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3baff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3baffc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3baffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3bb000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb004: 0x8c620d70  lw          $v0, 0xD70($v1)
    ctx->pc = 0x3bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D70u));
    // 0x3bb008: 0x24700d70  addiu       $s0, $v1, 0xD70
    ctx->pc = 0x3bb008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3440));
    // 0x3bb00c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB00Cu;
    {
        const bool branch_taken_0x3bb00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB00Cu;
        // 0x3bb010: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb00c) {
            ctx->pc = 0x3BB024u;
            goto label_3bb024;
        }
    }
    ctx->pc = 0x3BB014u;
    // 0x3bb014: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3bb014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3bb018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bb018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb01c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x3BB01Cu;
    SET_GPR_U32(ctx, 31, 0x3BB024u);
    ctx->pc = 0x3BB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB01Cu;
    // 0x3bb020: 0x24a5a5f8  addiu       $a1, $a1, -0x5A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x3BB01Cu, 0x3BB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB024u;
label_3bb024:
    // 0x3bb024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bb024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb02c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bb02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb030: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB030u;
        // 0x3bb034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB038u;
    // 0x3bb038: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3bb038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bb03c: 0x0  nop
    ctx->pc = 0x3bb03cu;
    // NOP
    // 0x3bb040: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x3bb040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x3bb044: 0x0  nop
    ctx->pc = 0x3bb044u;
    // NOP
    // 0x3bb048: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3bb048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bb04c: 0x0  nop
    ctx->pc = 0x3bb04cu;
    // NOP
    // 0x3bb050: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3bb050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bb054: 0x0  nop
    ctx->pc = 0x3bb054u;
    // NOP
    ctx->pc = 0x3bb058u;
}
