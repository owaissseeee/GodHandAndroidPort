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

// Function: SetSuspendScrollLayerAll
// Address: 0x2db518 - 0x2db5a0
void SetSuspendScrollLayerAll_0x2db518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSuspendScrollLayerAll_0x2db518");
#endif

    switch (ctx->pc) {
        case 0x2db548u: goto label_2db548;
        default: break;
    }

    ctx->pc = 0x2db518u;

    // 0x2db518: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x2db518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x2db51c: 0x8ca24c38  lw          $v0, 0x4C38($a1)
    ctx->pc = 0x2db51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db520: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db524: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2db524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db528: 0x10c3001a  beq         $a2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB528u;
    {
        const bool branch_taken_0x2db528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB528u;
        // 0x2db52c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db528) {
            ctx->pc = 0x2DB594u;
            goto label_2db594;
        }
    }
    ctx->pc = 0x2DB530u;
    // 0x2db530: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2db530u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2db534: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2db534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db538: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2db538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2db53c: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x2db53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x2db540: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2db540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2db544: 0x0  nop
    ctx->pc = 0x2db544u;
    // NOP
label_2db548:
    // 0x2db548: 0x90a402fd  lbu         $a0, 0x2FD($a1)
    ctx->pc = 0x2db548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 765)));
    // 0x2db54c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2db550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2db554: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2db558: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2db558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2db55c: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x2db55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2db560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db564: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2db564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2db568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB568u;
    {
        const bool branch_taken_0x2db568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB568u;
        // 0x2db56c: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db568) {
            ctx->pc = 0x2DB578u;
            goto label_2db578;
        }
    }
    ctx->pc = 0x2DB570u;
    // 0x2db570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB570u;
    {
        const bool branch_taken_0x2db570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB570u;
        // 0x2db574: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db570) {
            ctx->pc = 0x2DB57Cu;
            goto label_2db57c;
        }
    }
    ctx->pc = 0x2DB578u;
label_2db578:
    // 0x2db578: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2db578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2db57c:
    // 0x2db57c: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x2db57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x2db580: 0x8d434c38  lw          $v1, 0x4C38($t2)
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19512)));
    // 0x2db584: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2db584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2db588: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db58c: 0x54c2ffee  bnel        $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DB58Cu;
    {
        const bool branch_taken_0x2db58c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db58c) {
            ctx->pc = 0x2DB590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB58Cu;
            // 0x2db590: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db548;
        }
    }
    ctx->pc = 0x2DB594u;
label_2db594:
    // 0x2db594: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB59Cu;
    // 0x2db59c: 0x0  nop
    ctx->pc = 0x2db59cu;
    // NOP
    ctx->pc = 0x2db5a0u;
}
