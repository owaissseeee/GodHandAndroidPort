#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: __do_global_dtors
// Address: 0x799b80 - 0x799bd8
void ps2___do_global_dtors_0x799b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799b80");
#endif

    switch (ctx->pc) {
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        default: break;
    }

    ctx->pc = 0x799b80u;

label_799b80:
    // 0x799b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799b84:
    // 0x799b84: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799b88:
    // 0x799b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799b8c:
    // 0x799b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799b90:
    // 0x799b90: 0x8c829d80  lw          $v0, -0x6280($a0)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942080)));
label_799b94:
    // 0x799b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799b98:
    // 0x799b98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799b9c:
    if (ctx->pc == 0x799B9Cu) {
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA0u;
        goto label_799ba0;
    }
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x8e029d80  lw          $v0, -0x6280($s0)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942080)));
label_799ba4:
    // 0x799ba4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799ba8:
    // 0x799ba8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799bac:
    // 0x799bac: 0x60f809  jalr        $v1
label_799bb0:
    if (ctx->pc == 0x799BB0u) {
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0xae029d80  sw          $v0, -0x6280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB4u;
        goto label_799bb4;
    }
    ctx->pc = 0x799BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799BB4u);
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0xae029d80  sw          $v0, -0x6280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BACu, 0x799BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799BB4u;
label_799bb4:
    // 0x799bb4: 0x8e029d80  lw          $v0, -0x6280($s0)
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942080)));
label_799bb8:
    // 0x799bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799bbc:
    // 0x799bbc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799bc0:
    if (ctx->pc == 0x799BC0u) {
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC4u;
        goto label_799bc4;
    }
    ctx->pc = 0x799BBCu;
    {
        const bool branch_taken_0x799bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bbc) {
            ctx->pc = 0x799BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ba8;
        }
    }
    ctx->pc = 0x799BC4u;
label_799bc4:
    // 0x799bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799bc8:
    // 0x799bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799bcc:
    // 0x799bcc: 0x3e00008  jr          $ra
label_799bd0:
    if (ctx->pc == 0x799BD0u) {
        ctx->pc = 0x799BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BCCu;
        // 0x799bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD4u;
        goto label_799bd4;
    }
    ctx->pc = 0x799BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BCCu;
        // 0x799bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BD4u;
label_799bd4:
    // 0x799bd4: 0x0  nop
    ctx->pc = 0x799bd4u;
    // NOP
    ctx->pc = 0x799bd8u;
}
} // namespace gh_r602
