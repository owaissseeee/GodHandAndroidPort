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

// Function: cWorldLight_Get_LightData2
// Address: 0x2d9038 - 0x2d90b0
void cWorldLight_Get_LightData2_0x2d9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Get_LightData2_0x2d9038");
#endif

    switch (ctx->pc) {
        case 0x2d9068u: goto label_2d9068;
        default: break;
    }

    ctx->pc = 0x2d9038u;

    // 0x2d9038: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2d903c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2d903cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2d9040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d9040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9044: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9044u;
    {
        const bool branch_taken_0x2d9044 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9044u;
        // 0x2d9048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9044) {
            ctx->pc = 0x2D909Cu;
            goto label_2d909c;
        }
    }
    ctx->pc = 0x2D904Cu;
    // 0x2d904c: 0x24870080  addiu       $a3, $a0, 0x80
    ctx->pc = 0x2d904cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2d9050: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2d9050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9054: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2d9058: 0x5046000e  beql        $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9058u;
    {
        const bool branch_taken_0x2d9058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2d9058) {
            ctx->pc = 0x2D905Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9058u;
            // 0x2d905c: 0x94e20002  lhu         $v0, 0x2($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9094u;
            goto label_2d9094;
        }
    }
    ctx->pc = 0x2D9060u;
    // 0x2d9060: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d9060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d9064: 0x0  nop
    ctx->pc = 0x2d9064u;
    // NOP
label_2d9068:
    // 0x2d9068: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x2d9068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d906c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D906Cu;
    {
        const bool branch_taken_0x2d906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d906c) {
            ctx->pc = 0x2D9070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D906Cu;
            // 0x2d9070: 0x8c830078  lw          $v1, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D90A0u;
            goto label_2d90a0;
        }
    }
    ctx->pc = 0x2D9074u;
    // 0x2d9074: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2d9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d9078: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2d9078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d907c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d9080: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2d9080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d9084: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x2d9084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2d9088: 0x5466fff7  bnel        $v1, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D9088u;
    {
        const bool branch_taken_0x2d9088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2d9088) {
            ctx->pc = 0x2D908Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9088u;
            // 0x2d908c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9068;
        }
    }
    ctx->pc = 0x2D9090u;
    // 0x2d9090: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x2d9090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2d9094:
    // 0x2d9094: 0x5445fff4  bnel        $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D9094u;
    {
        const bool branch_taken_0x2d9094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d9094) {
            ctx->pc = 0x2D9098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9094u;
            // 0x2d9098: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9068;
        }
    }
    ctx->pc = 0x2D909Cu;
label_2d909c:
    // 0x2d909c: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2d909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_2d90a0:
    // 0x2d90a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d90a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90a4: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x2d90a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x2d90a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D90A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90A8u;
        // 0x2d90ac: 0xe3100b  movn        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D90A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D90B0u;
}
