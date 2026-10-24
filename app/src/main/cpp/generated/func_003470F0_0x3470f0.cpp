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

// Function: func_003470F0
// Address: 0x3470f0 - 0x347160
void func_003470F0_0x3470f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003470F0_0x3470f0");
#endif

    switch (ctx->pc) {
        case 0x347148u: goto label_347148;
        default: break;
    }

    ctx->pc = 0x3470f0u;

    // 0x3470f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3470f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3470f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3470f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3470fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3470fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x347100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347104: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x347108: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x347108u;
    {
        const bool branch_taken_0x347108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347108u;
        // 0x34710c: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347108) {
            ctx->pc = 0x347138u;
            goto label_347138;
        }
    }
    ctx->pc = 0x347110u;
    // 0x347110: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x347110u;
    {
        const bool branch_taken_0x347110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347110) {
            ctx->pc = 0x347114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347110u;
            // 0x347114: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347128u;
            goto label_347128;
        }
    }
    ctx->pc = 0x347118u;
    // 0x347118: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x347118u;
    {
        const bool branch_taken_0x347118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x34711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347118u;
        // 0x34711c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347118) {
            ctx->pc = 0x34714Cu;
            goto label_34714c;
        }
    }
    ctx->pc = 0x347120u;
    // 0x347120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347120u;
    {
        const bool branch_taken_0x347120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347120u;
        // 0x347124: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347120) {
            ctx->pc = 0x347140u;
            goto label_347140;
        }
    }
    ctx->pc = 0x347128u;
label_347128:
    // 0x347128: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x347128u;
    {
        const bool branch_taken_0x347128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x347128) {
            ctx->pc = 0x34712Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347128u;
            // 0x34712c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347148u;
            goto label_347148;
        }
    }
    ctx->pc = 0x347130u;
    // 0x347130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347130u;
    {
        const bool branch_taken_0x347130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347130u;
        // 0x347134: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347130) {
            ctx->pc = 0x347140u;
            goto label_347140;
        }
    }
    ctx->pc = 0x347138u;
label_347138:
    // 0x347138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347138u;
    {
        const bool branch_taken_0x347138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347138u;
        // 0x34713c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347138) {
            ctx->pc = 0x347148u;
            goto label_347148;
        }
    }
    ctx->pc = 0x347140u;
label_347140:
    // 0x347140: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x347140u;
    SET_GPR_U32(ctx, 31, 0x347148u);
    ctx->pc = 0x347144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347140u;
    // 0x347144: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347140u, 0x347148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347148u;
label_347148:
    // 0x347148: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34714c:
    // 0x34714c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34714cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347150: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347154: 0x3e00008  jr          $ra
    ctx->pc = 0x347154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347154u;
        // 0x347158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34715Cu;
    // 0x34715c: 0x0  nop
    ctx->pc = 0x34715cu;
    // NOP
    ctx->pc = 0x347160u;
}
