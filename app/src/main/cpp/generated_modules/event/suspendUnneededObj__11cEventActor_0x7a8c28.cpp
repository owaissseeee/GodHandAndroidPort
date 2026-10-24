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
// Function: suspendUnneededObj__11cEventActor
// Address: 0x7a8c28 - 0x7a8ce0
void suspendUnneededObj__11cEventActor_0x7a8c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("suspendUnneededObj__11cEventActor_0x7a8c28");
#endif

    switch (ctx->pc) {
        case 0x7a8c40u: goto label_7a8c40;
        case 0x7a8c78u: goto label_7a8c78;
        default: break;
    }

    ctx->pc = 0x7a8c28u;

    // 0x7a8c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a8c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a8c2c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7a8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7a8c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a8c34: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7a8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7a8c38: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7A8C38u;
    SET_GPR_U32(ctx, 31, 0x7A8C40u);
    ctx->pc = 0x7A8C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8C38u;
    // 0x7a8c3c: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7A8C38u, 0x7A8C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8C40u;
label_7a8c40:
    // 0x7a8c40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7a8c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a8c44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7A8C44u;
    {
        const bool branch_taken_0x7a8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C44u;
        // 0x7a8c48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c44) {
            ctx->pc = 0x7A8CD8u;
            goto label_7a8cd8;
        }
    }
    ctx->pc = 0x7A8C4Cu;
    // 0x7a8c4c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7a8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7a8c50: 0x8c824c30  lw          $v0, 0x4C30($a0)
    ctx->pc = 0x7a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C30u));
    // 0x7a8c54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x7a8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7a8c58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x7a8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7a8c5c: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x7A8C5Cu;
    {
        const bool branch_taken_0x7a8c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x7a8c5c) {
            ctx->pc = 0x7A8CD8u;
            goto label_7a8cd8;
        }
    }
    ctx->pc = 0x7A8C64u;
    // 0x7a8c64: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x7a8c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8c68: 0x24080376  addiu       $t0, $zero, 0x376
    ctx->pc = 0x7a8c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
    // 0x7a8c6c: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x7a8c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x7a8c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7a8c74: 0x0  nop
    ctx->pc = 0x7a8c74u;
    // NOP
label_7a8c78:
    // 0x7a8c78: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x7a8c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x7a8c7c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A8C7Cu;
    {
        const bool branch_taken_0x7a8c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C7Cu;
        // 0x7a8c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c7c) {
            ctx->pc = 0x7A8CC0u;
            goto label_7a8cc0;
        }
    }
    ctx->pc = 0x7A8C84u;
    // 0x7a8c84: 0x1068000b  beq         $v1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x7A8C84u;
    {
        const bool branch_taken_0x7a8c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x7A8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C84u;
        // 0x7a8c88: 0x67102a  slt         $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c84) {
            ctx->pc = 0x7A8CB4u;
            goto label_7a8cb4;
        }
    }
    ctx->pc = 0x7A8C8Cu;
    // 0x7a8c8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a8c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7a8c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A8C90u;
    {
        const bool branch_taken_0x7a8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C90u;
        // 0x7a8c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c90) {
            ctx->pc = 0x7A8CA4u;
            goto label_7a8ca4;
        }
    }
    ctx->pc = 0x7A8C98u;
    // 0x7a8c98: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x7a8c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x7a8c9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8C9Cu;
    {
        const bool branch_taken_0x7a8c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C9Cu;
        // 0x7a8ca0: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c9c) {
            ctx->pc = 0x7A8CACu;
            goto label_7a8cac;
        }
    }
    ctx->pc = 0x7A8CA4u;
label_7a8ca4:
    // 0x7a8ca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7a8ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a8ca8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x7a8ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_7a8cac:
    // 0x7a8cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A8CACu;
    {
        const bool branch_taken_0x7a8cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8CACu;
        // 0x7a8cb0: 0x8d234c30  lw          $v1, 0x4C30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8cac) {
            ctx->pc = 0x7A8CC4u;
            goto label_7a8cc4;
        }
    }
    ctx->pc = 0x7A8CB4u;
label_7a8cb4:
    // 0x7a8cb4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7a8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7a8cb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x7a8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x7a8cbc: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7a8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_7a8cc0:
    // 0x7a8cc0: 0x8d234c30  lw          $v1, 0x4C30($t1)
    ctx->pc = 0x7a8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19504)));
label_7a8cc4:
    // 0x7a8cc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x7a8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x7a8cc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7a8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7a8ccc: 0x54a2ffea  bnel        $a1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x7A8CCCu;
    {
        const bool branch_taken_0x7a8ccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7a8ccc) {
            ctx->pc = 0x7A8CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8CCCu;
            // 0x7a8cd0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8c78;
        }
    }
    ctx->pc = 0x7A8CD4u;
    // 0x7a8cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a8cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a8cd8:
    // 0x7a8cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8CD8u;
        // 0x7a8cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8CE0u;
}
} // namespace gh_event
