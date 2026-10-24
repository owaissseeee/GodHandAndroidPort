#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x79afe0 - 0x79b090
void waitEmDead__FP7cEmWrapi_0x79afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x79afe0");
#endif

    switch (ctx->pc) {
        case 0x79b010u: goto label_79b010;
        case 0x79b020u: goto label_79b020;
        case 0x79b02cu: goto label_79b02c;
        case 0x79b050u: goto label_79b050;
        case 0x79b064u: goto label_79b064;
        default: break;
    }

    ctx->pc = 0x79afe0u;

    // 0x79afe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79afe4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79afe8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79afec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79afecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79aff4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79aff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79affc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79b000: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79b004: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79b008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b00c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79b00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79b010:
    // 0x79b010: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x79B010u;
    {
        const bool branch_taken_0x79b010 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b010) {
            ctx->pc = 0x79B048u;
            goto label_79b048;
        }
    }
    ctx->pc = 0x79B018u;
    // 0x79b018: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x79b018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b01c: 0x0  nop
    ctx->pc = 0x79b01cu;
    // NOP
label_79b020:
    // 0x79b020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b024: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B024u;
    SET_GPR_U32(ctx, 31, 0x79B02Cu);
    ctx->pc = 0x79B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B024u;
    // 0x79b028: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B024u, 0x79B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B02Cu;
label_79b02c:
    // 0x79b02c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79b02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79b030: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b034: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B034u;
    {
        const bool branch_taken_0x79b034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B034u;
        // 0x79b038: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b034) {
            ctx->pc = 0x79B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b020;
        }
    }
    ctx->pc = 0x79B03Cu;
    // 0x79b03c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79b03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79b040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B040u;
    {
        const bool branch_taken_0x79b040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B040u;
        // 0x79b044: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b040) {
            ctx->pc = 0x79B058u;
            goto label_79b058;
        }
    }
    ctx->pc = 0x79B048u;
label_79b048:
    // 0x79b048: 0xc1e6ca4  jal         func_79B290
    ctx->pc = 0x79B048u;
    SET_GPR_U32(ctx, 31, 0x79B050u);
    ctx->pc = 0x79B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B290u, 0x79B048u, 0x79B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B050u;
label_79b050:
    // 0x79b050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B050u;
    {
        const bool branch_taken_0x79b050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B050u;
        // 0x79b054: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b050) {
            ctx->pc = 0x79B06Cu;
            goto label_79b06c;
        }
    }
    ctx->pc = 0x79B058u;
label_79b058:
    // 0x79b058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b05c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B05Cu;
    SET_GPR_U32(ctx, 31, 0x79B064u);
    ctx->pc = 0x79B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B05Cu;
    // 0x79b060: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B05Cu, 0x79B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B064u;
label_79b064:
    // 0x79b064: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x79B064u;
    {
        const bool branch_taken_0x79b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B064u;
        // 0x79b068: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b064) {
            ctx->pc = 0x79B010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b010;
        }
    }
    ctx->pc = 0x79B06Cu;
label_79b06c:
    // 0x79b06c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79b06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b070: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79b070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b074: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79b074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79b078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b07c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79b07cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b080: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79b080u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b088: 0x3e00008  jr          $ra
    ctx->pc = 0x79B088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B088u;
        // 0x79b08c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B090u;
}
} // namespace gh_r601
