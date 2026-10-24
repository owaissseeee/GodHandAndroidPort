#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: __do_global_dtors
// Address: 0x79bc30 - 0x79bc88
void ps2___do_global_dtors_0x79bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79bc30");
#endif

    switch (ctx->pc) {
        case 0x79bc30u: goto label_79bc30;
        case 0x79bc34u: goto label_79bc34;
        case 0x79bc38u: goto label_79bc38;
        case 0x79bc3cu: goto label_79bc3c;
        case 0x79bc40u: goto label_79bc40;
        case 0x79bc44u: goto label_79bc44;
        case 0x79bc48u: goto label_79bc48;
        case 0x79bc4cu: goto label_79bc4c;
        case 0x79bc50u: goto label_79bc50;
        case 0x79bc54u: goto label_79bc54;
        case 0x79bc58u: goto label_79bc58;
        case 0x79bc5cu: goto label_79bc5c;
        case 0x79bc60u: goto label_79bc60;
        case 0x79bc64u: goto label_79bc64;
        case 0x79bc68u: goto label_79bc68;
        case 0x79bc6cu: goto label_79bc6c;
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc74u: goto label_79bc74;
        case 0x79bc78u: goto label_79bc78;
        case 0x79bc7cu: goto label_79bc7c;
        case 0x79bc80u: goto label_79bc80;
        case 0x79bc84u: goto label_79bc84;
        default: break;
    }

    ctx->pc = 0x79bc30u;

label_79bc30:
    // 0x79bc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79bc34:
    // 0x79bc34: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79bc38:
    // 0x79bc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79bc3c:
    // 0x79bc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79bc40:
    // 0x79bc40: 0x8c82be80  lw          $v0, -0x4180($a0)
    ctx->pc = 0x79bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950528)));
label_79bc44:
    // 0x79bc44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bc48:
    // 0x79bc48: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79bc4c:
    if (ctx->pc == 0x79BC4Cu) {
        ctx->pc = 0x79BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC48u;
        // 0x79bc4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC50u;
        goto label_79bc50;
    }
    ctx->pc = 0x79BC48u;
    {
        const bool branch_taken_0x79bc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC48u;
        // 0x79bc4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc48) {
            ctx->pc = 0x79BC74u;
            goto label_79bc74;
        }
    }
    ctx->pc = 0x79BC50u;
label_79bc50:
    // 0x79bc50: 0x8e02be80  lw          $v0, -0x4180($s0)
    ctx->pc = 0x79bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950528)));
label_79bc54:
    // 0x79bc54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79bc58:
    // 0x79bc58: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79bc5c:
    // 0x79bc5c: 0x60f809  jalr        $v1
label_79bc60:
    if (ctx->pc == 0x79BC60u) {
        ctx->pc = 0x79BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC5Cu;
        // 0x79bc60: 0xae02be80  sw          $v0, -0x4180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC64u;
        goto label_79bc64;
    }
    ctx->pc = 0x79BC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BC64u);
        ctx->pc = 0x79BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC5Cu;
        // 0x79bc60: 0xae02be80  sw          $v0, -0x4180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC5Cu, 0x79BC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BC64u;
label_79bc64:
    // 0x79bc64: 0x8e02be80  lw          $v0, -0x4180($s0)
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950528)));
label_79bc68:
    // 0x79bc68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bc6c:
    // 0x79bc6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79bc70:
    if (ctx->pc == 0x79BC70u) {
        ctx->pc = 0x79BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC6Cu;
        // 0x79bc70: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC74u;
        goto label_79bc74;
    }
    ctx->pc = 0x79BC6Cu;
    {
        const bool branch_taken_0x79bc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC6Cu;
        // 0x79bc70: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc6c) {
            ctx->pc = 0x79BC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc58;
        }
    }
    ctx->pc = 0x79BC74u;
label_79bc74:
    // 0x79bc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bc78:
    // 0x79bc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bc7c:
    // 0x79bc7c: 0x3e00008  jr          $ra
label_79bc80:
    if (ctx->pc == 0x79BC80u) {
        ctx->pc = 0x79BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC7Cu;
        // 0x79bc80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC84u;
        goto label_79bc84;
    }
    ctx->pc = 0x79BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC7Cu;
        // 0x79bc80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BC84u;
label_79bc84:
    // 0x79bc84: 0x0  nop
    ctx->pc = 0x79bc84u;
    // NOP
    ctx->pc = 0x79bc88u;
}
} // namespace gh_r102
