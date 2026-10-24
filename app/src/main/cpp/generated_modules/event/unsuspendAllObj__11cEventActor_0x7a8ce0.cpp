#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: unsuspendAllObj__11cEventActor
// Address: 0x7a8ce0 - 0x7a8da0
void unsuspendAllObj__11cEventActor_0x7a8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unsuspendAllObj__11cEventActor_0x7a8ce0");
#endif

    switch (ctx->pc) {
        case 0x7a8cf8u: goto label_7a8cf8;
        case 0x7a8d38u: goto label_7a8d38;
        default: break;
    }

    ctx->pc = 0x7a8ce0u;

    // 0x7a8ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a8ce4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7a8ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7a8ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a8cec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7a8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7a8cf0: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7A8CF0u;
    SET_GPR_U32(ctx, 31, 0x7A8CF8u);
    ctx->pc = 0x7A8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8CF0u;
    // 0x7a8cf4: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7A8CF0u, 0x7A8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8CF8u;
label_7a8cf8:
    // 0x7a8cf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7a8cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a8cfc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7A8CFCu;
    {
        const bool branch_taken_0x7a8cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8CFCu;
        // 0x7a8d00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8cfc) {
            ctx->pc = 0x7A8D98u;
            goto label_7a8d98;
        }
    }
    ctx->pc = 0x7A8D04u;
    // 0x7a8d04: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7a8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7a8d08: 0x8c824c30  lw          $v0, 0x4C30($a0)
    ctx->pc = 0x7a8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C30u));
    // 0x7a8d0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x7a8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7a8d10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x7a8d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7a8d14: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x7A8D14u;
    {
        const bool branch_taken_0x7a8d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x7a8d14) {
            ctx->pc = 0x7A8D98u;
            goto label_7a8d98;
        }
    }
    ctx->pc = 0x7A8D1Cu;
    // 0x7a8d1c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x7a8d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x7a8d20: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x7a8d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8d24: 0x24090376  addiu       $t1, $zero, 0x376
    ctx->pc = 0x7a8d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
    // 0x7a8d28: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x7a8d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x7a8d2c: 0x24080300  addiu       $t0, $zero, 0x300
    ctx->pc = 0x7a8d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x7a8d30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7a8d34: 0x0  nop
    ctx->pc = 0x7a8d34u;
    // NOP
label_7a8d38:
    // 0x7a8d38: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x7a8d38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x7a8d3c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A8D3Cu;
    {
        const bool branch_taken_0x7a8d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D3Cu;
        // 0x7a8d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8d3c) {
            ctx->pc = 0x7A8D80u;
            goto label_7a8d80;
        }
    }
    ctx->pc = 0x7A8D44u;
    // 0x7a8d44: 0x1069000b  beq         $v1, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x7A8D44u;
    {
        const bool branch_taken_0x7a8d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x7A8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D44u;
        // 0x7a8d48: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8d44) {
            ctx->pc = 0x7A8D74u;
            goto label_7a8d74;
        }
    }
    ctx->pc = 0x7A8D4Cu;
    // 0x7a8d4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7a8d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A8D50u;
    {
        const bool branch_taken_0x7a8d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D50u;
        // 0x7a8d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8d50) {
            ctx->pc = 0x7A8D64u;
            goto label_7a8d64;
        }
    }
    ctx->pc = 0x7A8D58u;
    // 0x7a8d58: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x7a8d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x7a8d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8D5Cu;
    {
        const bool branch_taken_0x7a8d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D5Cu;
        // 0x7a8d60: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8d5c) {
            ctx->pc = 0x7A8D6Cu;
            goto label_7a8d6c;
        }
    }
    ctx->pc = 0x7A8D64u;
label_7a8d64:
    // 0x7a8d64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7a8d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a8d68: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x7a8d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_7a8d6c:
    // 0x7a8d6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A8D6Cu;
    {
        const bool branch_taken_0x7a8d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D6Cu;
        // 0x7a8d70: 0x8d434c30  lw          $v1, 0x4C30($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8d6c) {
            ctx->pc = 0x7A8D84u;
            goto label_7a8d84;
        }
    }
    ctx->pc = 0x7A8D74u;
label_7a8d74:
    // 0x7a8d74: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7a8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7a8d78: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x7a8d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x7a8d7c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7a8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_7a8d80:
    // 0x7a8d80: 0x8d434c30  lw          $v1, 0x4C30($t2)
    ctx->pc = 0x7a8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19504)));
label_7a8d84:
    // 0x7a8d84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x7a8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x7a8d88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7a8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7a8d8c: 0x54a2ffea  bnel        $a1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x7A8D8Cu;
    {
        const bool branch_taken_0x7a8d8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7a8d8c) {
            ctx->pc = 0x7A8D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8D8Cu;
            // 0x7a8d90: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8d38;
        }
    }
    ctx->pc = 0x7A8D94u;
    // 0x7a8d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a8d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a8d98:
    // 0x7a8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8D98u;
        // 0x7a8d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8DA0u;
}
} // namespace gh_event
