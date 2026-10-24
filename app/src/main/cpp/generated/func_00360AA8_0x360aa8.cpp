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

// Function: func_00360AA8
// Address: 0x360aa8 - 0x360b18
void func_00360AA8_0x360aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360AA8_0x360aa8");
#endif

    ctx->pc = 0x360aa8u;

    // 0x360aa8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x360aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x360aac: 0x2464ea78  addiu       $a0, $v1, -0x1588
    ctx->pc = 0x360aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961784));
    // 0x360ab0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x360ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEA78u));
    // 0x360ab4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x360ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x360ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x360abc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x360abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEA78u, _value); } while (0);
    // 0x360ac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x360ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEA78u));
    // 0x360ac4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x360AC4u;
    {
        const bool branch_taken_0x360ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AC4u;
        // 0x360ac8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ac4) {
            ctx->pc = 0x360B04u;
            goto label_360b04;
        }
    }
    ctx->pc = 0x360ACCu;
    // 0x360acc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x360accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360ad0: 0x8c45ea7c  lw          $a1, -0x1584($v0)
    ctx->pc = 0x360ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961788)));
    // 0x360ad4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x360AD4u;
    {
        const bool branch_taken_0x360ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x360AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AD4u;
        // 0x360ad8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ad4) {
            ctx->pc = 0x360B04u;
            goto label_360b04;
        }
    }
    ctx->pc = 0x360ADCu;
    // 0x360adc: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x360adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x360ae0: 0x8c43ea80  lw          $v1, -0x1580($v0)
    ctx->pc = 0x360ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961792)));
    // 0x360ae4: 0x38660c00  xori        $a2, $v1, 0xC00
    ctx->pc = 0x360ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3072);
    // 0x360ae8: 0x306300c7  andi        $v1, $v1, 0xC7
    ctx->pc = 0x360ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)199);
    // 0x360aec: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360AECu;
    {
        const bool branch_taken_0x360aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x360AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AECu;
        // 0x360af0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360aec) {
            ctx->pc = 0x360B04u;
            goto label_360b04;
        }
    }
    ctx->pc = 0x360AF4u;
    // 0x360af4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x360af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x360af8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x360af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360afc: 0x8c63a260  lw          $v1, -0x5DA0($v1)
    ctx->pc = 0x360afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943328)));
    // 0x360b00: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x360b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_360b04:
    // 0x360b04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x360b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360b08: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x360B08u;
    {
        const bool branch_taken_0x360b08 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x360b08) {
            ctx->pc = 0x360B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360B08u;
            // 0x360b0c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360B10u;
            goto label_360b10;
        }
    }
    ctx->pc = 0x360B10u;
label_360b10:
    // 0x360b10: 0x3e00008  jr          $ra
    ctx->pc = 0x360B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360B18u;
}
