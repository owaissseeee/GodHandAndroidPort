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

// Function: SetActorLink_1B7118
// Address: 0x1b7118 - 0x1b7168
void SetActorLink_1B7118_0x1b7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActorLink_1B7118_0x1b7118");
#endif

    switch (ctx->pc) {
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        default: break;
    }

    ctx->pc = 0x1b7118u;

label_1b7118:
    // 0x1b7118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b711c:
    // 0x1b711c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b711cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7120:
    // 0x1b7120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b7124:
    // 0x1b7124: 0xacc505e0  sw          $a1, 0x5E0($a2)
    ctx->pc = 0x1b7124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1504), GPR_U32(ctx, 5));
label_1b7128:
    // 0x1b7128: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1b7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1b712c:
    // 0x1b712c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b7130:
    if (ctx->pc == 0x1B7130u) {
        ctx->pc = 0x1B7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B712Cu;
        // 0x1b7130: 0x2c620200  sltiu       $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7134u;
        goto label_1b7134;
    }
    ctx->pc = 0x1B712Cu;
    {
        const bool branch_taken_0x1b712c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B712Cu;
        // 0x1b7130: 0x2c620200  sltiu       $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b712c) {
            ctx->pc = 0x1B7144u;
            goto label_1b7144;
        }
    }
    ctx->pc = 0x1B7134u;
label_1b7134:
    // 0x1b7134: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1b7138:
    if (ctx->pc == 0x1B7138u) {
        ctx->pc = 0x1B7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7134u;
        // 0x1b7138: 0x24620300  addiu       $v0, $v1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B713Cu;
        goto label_1b713c;
    }
    ctx->pc = 0x1B7134u;
    {
        const bool branch_taken_0x1b7134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7134u;
        // 0x1b7138: 0x24620300  addiu       $v0, $v1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7134) {
            ctx->pc = 0x1B7140u;
            goto label_1b7140;
        }
    }
    ctx->pc = 0x1B713Cu;
label_1b713c:
    // 0x1b713c: 0x24620700  addiu       $v0, $v1, 0x700
    ctx->pc = 0x1b713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
label_1b7140:
    // 0x1b7140: 0xacc20560  sw          $v0, 0x560($a2)
    ctx->pc = 0x1b7140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1376), GPR_U32(ctx, 2));
label_1b7144:
    // 0x1b7144: 0x8cc30214  lw          $v1, 0x214($a2)
    ctx->pc = 0x1b7144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1b7148:
    // 0x1b7148: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b7148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b714c:
    // 0x1b714c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b7150:
    // 0x1b7150: 0x40f809  jalr        $v0
label_1b7154:
    if (ctx->pc == 0x1B7154u) {
        ctx->pc = 0x1B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7150u;
        // 0x1b7154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7158u;
        goto label_1b7158;
    }
    ctx->pc = 0x1B7150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7158u);
        ctx->pc = 0x1B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7150u;
        // 0x1b7154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7150u, 0x1B7158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7158u;
label_1b7158:
    // 0x1b7158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b715c:
    // 0x1b715c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7160:
    // 0x1b7160: 0x3e00008  jr          $ra
label_1b7164:
    if (ctx->pc == 0x1B7164u) {
        ctx->pc = 0x1B7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7160u;
        // 0x1b7164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7168u;
        goto label_fallthrough_0x1b7160;
    }
    ctx->pc = 0x1B7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7160u;
        // 0x1b7164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b7160:
    ctx->pc = 0x1B7168u;
}
