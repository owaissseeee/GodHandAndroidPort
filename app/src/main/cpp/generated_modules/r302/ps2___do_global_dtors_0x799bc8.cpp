#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: __do_global_dtors
// Address: 0x799bc8 - 0x799c20
void ps2___do_global_dtors_0x799bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799bc8");
#endif

    switch (ctx->pc) {
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        default: break;
    }

    ctx->pc = 0x799bc8u;

label_799bc8:
    // 0x799bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799bcc:
    // 0x799bcc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799bd0:
    // 0x799bd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799bd4:
    // 0x799bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799bd8:
    // 0x799bd8: 0x8c829e00  lw          $v0, -0x6200($a0)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942208)));
label_799bdc:
    // 0x799bdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799be0:
    // 0x799be0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799be4:
    if (ctx->pc == 0x799BE4u) {
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE8u;
        goto label_799be8;
    }
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799C0Cu;
            goto label_799c0c;
        }
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0x8e029e00  lw          $v0, -0x6200($s0)
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942208)));
label_799bec:
    // 0x799bec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799bf0:
    // 0x799bf0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799bf4:
    // 0x799bf4: 0x60f809  jalr        $v1
label_799bf8:
    if (ctx->pc == 0x799BF8u) {
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0xae029e00  sw          $v0, -0x6200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BFCu;
        goto label_799bfc;
    }
    ctx->pc = 0x799BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799BFCu);
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0xae029e00  sw          $v0, -0x6200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BF4u, 0x799BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799BFCu;
label_799bfc:
    // 0x799bfc: 0x8e029e00  lw          $v0, -0x6200($s0)
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942208)));
label_799c00:
    // 0x799c00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799c04:
    // 0x799c04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799c08:
    if (ctx->pc == 0x799C08u) {
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C0Cu;
        goto label_799c0c;
    }
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bf0;
        }
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799c10:
    // 0x799c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799c14:
    // 0x799c14: 0x3e00008  jr          $ra
label_799c18:
    if (ctx->pc == 0x799C18u) {
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C1Cu;
        goto label_799c1c;
    }
    ctx->pc = 0x799C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0x0  nop
    ctx->pc = 0x799c1cu;
    // NOP
    ctx->pc = 0x799c20u;
}
} // namespace gh_r302
