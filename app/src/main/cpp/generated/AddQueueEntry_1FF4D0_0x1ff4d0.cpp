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

// Function: AddQueueEntry_1FF4D0
// Address: 0x1ff4d0 - 0x1ff540
void AddQueueEntry_1FF4D0_0x1ff4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddQueueEntry_1FF4D0_0x1ff4d0");
#endif

    switch (ctx->pc) {
        case 0x1ff4f8u: goto label_1ff4f8;
        default: break;
    }

    ctx->pc = 0x1ff4d0u;

    // 0x1ff4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff4d4: 0x24a2fe00  addiu       $v0, $a1, -0x200
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x1ff4d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff4dc: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x1ff4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1ff4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff4e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF4E4u;
    {
        const bool branch_taken_0x1ff4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4E4u;
        // 0x1ff4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4e4) {
            ctx->pc = 0x1FF52Cu;
            goto label_1ff52c;
        }
    }
    ctx->pc = 0x1FF4ECu;
    // 0x1ff4ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ff4f0: 0xc0b2c9e  jal         func_2CB278
    ctx->pc = 0x1FF4F0u;
    SET_GPR_U32(ctx, 31, 0x1FF4F8u);
    ctx->pc = 0x1FF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4F0u;
    // 0x1ff4f4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB278u, 0x1FF4F0u, 0x1FF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4F8u;
label_1ff4f8:
    // 0x1ff4f8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ff4fc: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1ff500: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff508: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff50c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ff50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ff510: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ff514: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ff514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ff518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff51c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ff51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff520: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF520u;
    {
        const bool branch_taken_0x1ff520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF520u;
        // 0x1ff524: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff520) {
            ctx->pc = 0x1FF52Cu;
            goto label_1ff52c;
        }
    }
    ctx->pc = 0x1FF528u;
    // 0x1ff528: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ff528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1ff52c:
    // 0x1ff52c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff534: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF534u;
        // 0x1ff538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF53Cu;
    // 0x1ff53c: 0x0  nop
    ctx->pc = 0x1ff53cu;
    // NOP
    ctx->pc = 0x1ff540u;
}
