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

// Function: BlendWork_copyShortTable
// Address: 0x1450a0 - 0x145100
void BlendWork_copyShortTable_0x1450a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlendWork_copyShortTable_0x1450a0");
#endif

    switch (ctx->pc) {
        case 0x1450e0u: goto label_1450e0;
        default: break;
    }

    ctx->pc = 0x1450a0u;

    // 0x1450a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1450a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1450a4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1450a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1450a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1450a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1450ac: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1450acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1450b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1450b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1450b4: 0x28c20024  slti        $v0, $a2, 0x24
    ctx->pc = 0x1450b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x1450b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1450B8u;
    {
        const bool branch_taken_0x1450b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1450BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450B8u;
        // 0x1450bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450b8) {
            ctx->pc = 0x1450CCu;
            goto label_1450cc;
        }
    }
    ctx->pc = 0x1450C0u;
    // 0x1450c0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1450c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1450C4u;
    {
        const bool branch_taken_0x1450c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450C4u;
        // 0x1450c8: 0xa60203b2  sh          $v0, 0x3B2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 946), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450c4) {
            ctx->pc = 0x1450D0u;
            goto label_1450d0;
        }
    }
    ctx->pc = 0x1450CCu;
label_1450cc:
    // 0x1450cc: 0xa60603b2  sh          $a2, 0x3B2($s0)
    ctx->pc = 0x1450ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 946), (uint16_t)GPR_U32(ctx, 6));
label_1450d0:
    // 0x1450d0: 0x860603b2  lh          $a2, 0x3B2($s0)
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 946)));
    // 0x1450d4: 0x2604036c  addiu       $a0, $s0, 0x36C
    ctx->pc = 0x1450d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 876));
    // 0x1450d8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x1450D8u;
    SET_GPR_U32(ctx, 31, 0x1450E0u);
    ctx->pc = 0x1450DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450D8u;
    // 0x1450dc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x1450D8u, 0x1450E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450E0u;
label_1450e0:
    // 0x1450e0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1450e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1450e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1450e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1450e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1450e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1450ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1450ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1450f0: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1450f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1450f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1450f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1450F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1450FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F8u;
        // 0x1450fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1450F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145100u;
}
